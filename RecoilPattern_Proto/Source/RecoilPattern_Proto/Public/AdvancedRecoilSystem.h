// Copyright Hrvoje Jurkovic

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AdvancedRecoilSystem.generated.h"


UCLASS( ClassGroup=(Recoil), meta=(BlueprintSpawnableComponent) )
class RECOILPATTERN_PROTO_API UAdvancedRecoilSystem : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAdvancedRecoilSystem();

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable, Category = Recoil)
	void ApplyRecoil(FVector2D const& Offset, float const& Duration, float const& ResetDuration);

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* Pattern;
	
private:
	APlayerController* PC;
	bool bIsRecoilActive;
	FRotator RecoilOffset;
	FRotator StartRecoilOffset;
	FRotator EndRecoilOffset;
	float PlayRate, InterpAlpha, PullbackDuration, DefaultViewPitchMax, LowestPoint, PullbackOffset;		

	float GetAdjustedControlPitch(FRotator ControlRotation);
	void AdjustViewPitchMax(float NewPitch);
	void AddRecoil(FRotator BaseRotation, FRotator Offset);
};
