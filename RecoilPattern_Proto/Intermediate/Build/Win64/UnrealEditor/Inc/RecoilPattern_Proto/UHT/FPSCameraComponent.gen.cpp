// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RecoilPattern_Proto/Public/FPSCameraComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSCameraComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent();
	RECOILPATTERN_PROTO_API UClass* Z_Construct_UClass_UFPSCameraComponent();
	RECOILPATTERN_PROTO_API UClass* Z_Construct_UClass_UFPSCameraComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RecoilPattern_Proto();
// End Cross Module References
	DEFINE_FUNCTION(UFPSCameraComponent::execAddRecoil)
	{
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_RecoilOffset);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_RecoilDuration);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_ResetDuration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddRecoil(Z_Param_Out_RecoilOffset,Z_Param_Out_RecoilDuration,Z_Param_Out_ResetDuration);
		P_NATIVE_END;
	}
	void UFPSCameraComponent::StaticRegisterNativesUFPSCameraComponent()
	{
		UClass* Class = UFPSCameraComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddRecoil", &UFPSCameraComponent::execAddRecoil },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFPSCameraComponent_AddRecoil_Statics
	{
		struct FPSCameraComponent_eventAddRecoil_Parms
		{
			FRotator RecoilOffset;
			float RecoilDuration;
			float ResetDuration;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecoilOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RecoilOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecoilDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RecoilDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResetDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ResetDuration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSCameraComponent_AddRecoil_Statics::NewProp_RecoilOffset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFPSCameraComponent_AddRecoil_Statics::NewProp_RecoilOffset = { "RecoilOffset", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSCameraComponent_eventAddRecoil_Parms, RecoilOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSCameraComponent_AddRecoil_Statics::NewProp_RecoilOffset_MetaData), Z_Construct_UFunction_UFPSCameraComponent_AddRecoil_Statics::NewProp_RecoilOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSCameraComponent_AddRecoil_Statics::NewProp_RecoilDuration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFPSCameraComponent_AddRecoil_Statics::NewProp_RecoilDuration = { "RecoilDuration", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSCameraComponent_eventAddRecoil_Parms, RecoilDuration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSCameraComponent_AddRecoil_Statics::NewProp_RecoilDuration_MetaData), Z_Construct_UFunction_UFPSCameraComponent_AddRecoil_Statics::NewProp_RecoilDuration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSCameraComponent_AddRecoil_Statics::NewProp_ResetDuration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFPSCameraComponent_AddRecoil_Statics::NewProp_ResetDuration = { "ResetDuration", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSCameraComponent_eventAddRecoil_Parms, ResetDuration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSCameraComponent_AddRecoil_Statics::NewProp_ResetDuration_MetaData), Z_Construct_UFunction_UFPSCameraComponent_AddRecoil_Statics::NewProp_ResetDuration_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFPSCameraComponent_AddRecoil_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSCameraComponent_AddRecoil_Statics::NewProp_RecoilOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSCameraComponent_AddRecoil_Statics::NewProp_RecoilDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSCameraComponent_AddRecoil_Statics::NewProp_ResetDuration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSCameraComponent_AddRecoil_Statics::Function_MetaDataParams[] = {
		{ "Category", "Recoil" },
		{ "ModuleRelativePath", "Public/FPSCameraComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSCameraComponent_AddRecoil_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSCameraComponent, nullptr, "AddRecoil", nullptr, nullptr, Z_Construct_UFunction_UFPSCameraComponent_AddRecoil_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSCameraComponent_AddRecoil_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFPSCameraComponent_AddRecoil_Statics::FPSCameraComponent_eventAddRecoil_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSCameraComponent_AddRecoil_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFPSCameraComponent_AddRecoil_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSCameraComponent_AddRecoil_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFPSCameraComponent_AddRecoil_Statics::FPSCameraComponent_eventAddRecoil_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFPSCameraComponent_AddRecoil()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFPSCameraComponent_AddRecoil_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFPSCameraComponent);
	UClass* Z_Construct_UClass_UFPSCameraComponent_NoRegister()
	{
		return UFPSCameraComponent::StaticClass();
	}
	struct Z_Construct_UClass_UFPSCameraComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFPSCameraComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCameraComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_RecoilPattern_Proto,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFPSCameraComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UFPSCameraComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFPSCameraComponent_AddRecoil, "AddRecoil" }, // 2490016561
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFPSCameraComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSCameraComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Mobility Rendering LOD Mobility Rendering LOD Trigger PhysicsVolume" },
		{ "IncludePath", "FPSCameraComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FPSCameraComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFPSCameraComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFPSCameraComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFPSCameraComponent_Statics::ClassParams = {
		&UFPSCameraComponent::StaticClass,
		"MinimalAPI",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFPSCameraComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UFPSCameraComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UFPSCameraComponent()
	{
		if (!Z_Registration_Info_UClass_UFPSCameraComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFPSCameraComponent.OuterSingleton, Z_Construct_UClass_UFPSCameraComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFPSCameraComponent.OuterSingleton;
	}
	template<> RECOILPATTERN_PROTO_API UClass* StaticClass<UFPSCameraComponent>()
	{
		return UFPSCameraComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFPSCameraComponent);
	UFPSCameraComponent::~UFPSCameraComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_Hrvoje_Documents_Unreal_Projects_RecoilPattern_Proto_Source_RecoilPattern_Proto_Public_FPSCameraComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Hrvoje_Documents_Unreal_Projects_RecoilPattern_Proto_Source_RecoilPattern_Proto_Public_FPSCameraComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFPSCameraComponent, UFPSCameraComponent::StaticClass, TEXT("UFPSCameraComponent"), &Z_Registration_Info_UClass_UFPSCameraComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFPSCameraComponent), 1397339439U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Hrvoje_Documents_Unreal_Projects_RecoilPattern_Proto_Source_RecoilPattern_Proto_Public_FPSCameraComponent_h_1326514933(TEXT("/Script/RecoilPattern_Proto"),
		Z_CompiledInDeferFile_FID_Users_Hrvoje_Documents_Unreal_Projects_RecoilPattern_Proto_Source_RecoilPattern_Proto_Public_FPSCameraComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Hrvoje_Documents_Unreal_Projects_RecoilPattern_Proto_Source_RecoilPattern_Proto_Public_FPSCameraComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
