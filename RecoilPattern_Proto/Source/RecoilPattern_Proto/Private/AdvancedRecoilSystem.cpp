// Copyright Hrvoje Jurkovic


#include "AdvancedRecoilSystem.h"
#include "Kismet/GameplayStatics.h"

// Sets default values for this component's properties
UAdvancedRecoilSystem::UAdvancedRecoilSystem()
{
	PrimaryComponentTick.bCanEverTick = true;
	PrimaryComponentTick.bStartWithTickEnabled = false;
	PC = UGameplayStatics::GetPlayerController(this, 0);
}

// Called every frame
void UAdvancedRecoilSystem::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	//Get control rotation without recoil offset
	FRotator BaseControlRotation = PC->GetControlRotation() - RecoilOffset;

	//Calculate recoil offset
	if (bIsRecoilActive) //Recoil kick
	{
		InterpAlpha = FMath::Clamp(InterpAlpha + DeltaTime * PlayRate, 0.f, 1.f);
		RecoilOffset = FMath::InterpEaseOut(StartRecoilOffset, EndRecoilOffset, InterpAlpha, 2.f);

		//Set control rotation
		AddRecoil(BaseControlRotation, RecoilOffset);
		
		if (GetAdjustedControlPitch(PC->GetControlRotation()) < LowestPoint)
		{
			LowestPoint = GetAdjustedControlPitch(PC->GetControlRotation());
		}

		if (InterpAlpha == 1.f) //Initiate pullback
		{
			bIsRecoilActive = false;
			InterpAlpha = 0.f;
			PlayRate = 1 / PullbackDuration;
			StartRecoilOffset = RecoilOffset;

			if (GetAdjustedControlPitch(BaseControlRotation) <= LowestPoint)
			{
				EndRecoilOffset = FRotator(RecoilOffset.Pitch - (GetAdjustedControlPitch(PC->GetControlRotation()) - LowestPoint), 0.f, 0.f);
			}
			else 
			{
				EndRecoilOffset = FRotator::ZeroRotator;
			}
			
		}

	}
	else //Pullback
	{
		InterpAlpha = FMath::Clamp(InterpAlpha + DeltaTime * PlayRate, 0.f, 1.f);
		RecoilOffset = FMath::InterpEaseInOut(StartRecoilOffset, EndRecoilOffset, InterpAlpha, 2.f);

		//Set control rotation
		AddRecoil(BaseControlRotation, RecoilOffset);

		if (InterpAlpha == 1.f) //Stop
		{
			if (!(PC->PlayerCameraManager->ViewPitchMax == DefaultViewPitchMax))
			{
				PC->PlayerCameraManager->ViewPitchMax = DefaultViewPitchMax;
			}

			SetComponentTickEnabled(false);
		}
	}
}

void UAdvancedRecoilSystem::ApplyRecoil(FVector2D const& Offset, float const& Duration, float const& ResetDuration)
{
	//Recoil init
	if (!IsComponentTickEnabled())
	{
		DefaultViewPitchMax = PC->PlayerCameraManager->ViewPitchMax;
		RecoilOffset = FRotator::ZeroRotator;
		LowestPoint = GetAdjustedControlPitch(PC->GetControlRotation());
		SetComponentTickEnabled(true);
	}

	bIsRecoilActive = true;
	StartRecoilOffset = RecoilOffset;
	EndRecoilOffset = StartRecoilOffset + FRotator(Offset.X, Offset.Y, 0.f);
	InterpAlpha = 0.f;
	PullbackDuration = ResetDuration;
	PlayRate = 1 / Duration;
}

//Check view pitch max limit
void UAdvancedRecoilSystem::AdjustViewPitchMax(float NewPitch)
{
	if (NewPitch > DefaultViewPitchMax) //Adjust limit if recoil offset is larger
	{
		PC->PlayerCameraManager->ViewPitchMax = NewPitch;
	}
	else if (!(PC->PlayerCameraManager->ViewPitchMax == DefaultViewPitchMax)) //Return to default
	{
		PC->PlayerCameraManager->ViewPitchMax = DefaultViewPitchMax;
	}
}

void UAdvancedRecoilSystem::AddRecoil(FRotator BaseRotation, FRotator Offset)
{
	AdjustViewPitchMax(FRotator::NormalizeAxis(BaseRotation.Pitch) + RecoilOffset.Pitch);

	//Set rotation
	PC->SetControlRotation(BaseRotation + RecoilOffset);
}

float UAdvancedRecoilSystem::GetAdjustedControlPitch(FRotator ControlRotation)
{
	return FRotator::NormalizeAxis(ControlRotation.Pitch) + 90;
}

