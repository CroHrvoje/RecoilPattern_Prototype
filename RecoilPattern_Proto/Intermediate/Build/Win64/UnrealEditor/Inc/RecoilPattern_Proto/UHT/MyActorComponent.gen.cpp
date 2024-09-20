// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RecoilPattern_Proto/Public/MyActorComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyActorComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	RECOILPATTERN_PROTO_API UClass* Z_Construct_UClass_UMyActorComponent();
	RECOILPATTERN_PROTO_API UClass* Z_Construct_UClass_UMyActorComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RecoilPattern_Proto();
// End Cross Module References
	void UMyActorComponent::StaticRegisterNativesUMyActorComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyActorComponent);
	UClass* Z_Construct_UClass_UMyActorComponent_NoRegister()
	{
		return UMyActorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMyActorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyActorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_RecoilPattern_Proto,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyActorComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyActorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "MyActorComponent.h" },
		{ "ModuleRelativePath", "Public/MyActorComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyActorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyActorComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyActorComponent_Statics::ClassParams = {
		&UMyActorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyActorComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyActorComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMyActorComponent()
	{
		if (!Z_Registration_Info_UClass_UMyActorComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyActorComponent.OuterSingleton, Z_Construct_UClass_UMyActorComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMyActorComponent.OuterSingleton;
	}
	template<> RECOILPATTERN_PROTO_API UClass* StaticClass<UMyActorComponent>()
	{
		return UMyActorComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyActorComponent);
	UMyActorComponent::~UMyActorComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_Hrvoje_Documents_Unreal_Projects_RecoilPattern_Proto_Source_RecoilPattern_Proto_Public_MyActorComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Hrvoje_Documents_Unreal_Projects_RecoilPattern_Proto_Source_RecoilPattern_Proto_Public_MyActorComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMyActorComponent, UMyActorComponent::StaticClass, TEXT("UMyActorComponent"), &Z_Registration_Info_UClass_UMyActorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyActorComponent), 1455122409U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Hrvoje_Documents_Unreal_Projects_RecoilPattern_Proto_Source_RecoilPattern_Proto_Public_MyActorComponent_h_543822539(TEXT("/Script/RecoilPattern_Proto"),
		Z_CompiledInDeferFile_FID_Users_Hrvoje_Documents_Unreal_Projects_RecoilPattern_Proto_Source_RecoilPattern_Proto_Public_MyActorComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Hrvoje_Documents_Unreal_Projects_RecoilPattern_Proto_Source_RecoilPattern_Proto_Public_MyActorComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
