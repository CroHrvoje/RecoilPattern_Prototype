// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RecoilPattern_Proto/Public/AdvancedRecoilSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvancedRecoilSystem() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	RECOILPATTERN_PROTO_API UClass* Z_Construct_UClass_UAdvancedRecoilSystem();
	RECOILPATTERN_PROTO_API UClass* Z_Construct_UClass_UAdvancedRecoilSystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RecoilPattern_Proto();
// End Cross Module References
	DEFINE_FUNCTION(UAdvancedRecoilSystem::execApplyRecoil)
	{
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Offset);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Duration);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_ResetDuration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyRecoil(Z_Param_Out_Offset,Z_Param_Out_Duration,Z_Param_Out_ResetDuration);
		P_NATIVE_END;
	}
	void UAdvancedRecoilSystem::StaticRegisterNativesUAdvancedRecoilSystem()
	{
		UClass* Class = UAdvancedRecoilSystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyRecoil", &UAdvancedRecoilSystem::execApplyRecoil },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAdvancedRecoilSystem_ApplyRecoil_Statics
	{
		struct AdvancedRecoilSystem_eventApplyRecoil_Parms
		{
			FVector2D Offset;
			float Duration;
			float ResetDuration;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedRecoilSystem_ApplyRecoil_Statics::NewProp_Offset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedRecoilSystem_ApplyRecoil_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedRecoilSystem_eventApplyRecoil_Parms, Offset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedRecoilSystem_ApplyRecoil_Statics::NewProp_Offset_MetaData), Z_Construct_UFunction_UAdvancedRecoilSystem_ApplyRecoil_Statics::NewProp_Offset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedRecoilSystem_ApplyRecoil_Statics::NewProp_Duration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAdvancedRecoilSystem_ApplyRecoil_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedRecoilSystem_eventApplyRecoil_Parms, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedRecoilSystem_ApplyRecoil_Statics::NewProp_Duration_MetaData), Z_Construct_UFunction_UAdvancedRecoilSystem_ApplyRecoil_Statics::NewProp_Duration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedRecoilSystem_ApplyRecoil_Statics::NewProp_ResetDuration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAdvancedRecoilSystem_ApplyRecoil_Statics::NewProp_ResetDuration = { "ResetDuration", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedRecoilSystem_eventApplyRecoil_Parms, ResetDuration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedRecoilSystem_ApplyRecoil_Statics::NewProp_ResetDuration_MetaData), Z_Construct_UFunction_UAdvancedRecoilSystem_ApplyRecoil_Statics::NewProp_ResetDuration_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedRecoilSystem_ApplyRecoil_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedRecoilSystem_ApplyRecoil_Statics::NewProp_Offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedRecoilSystem_ApplyRecoil_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedRecoilSystem_ApplyRecoil_Statics::NewProp_ResetDuration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedRecoilSystem_ApplyRecoil_Statics::Function_MetaDataParams[] = {
		{ "Category", "Recoil" },
		{ "ModuleRelativePath", "Public/AdvancedRecoilSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedRecoilSystem_ApplyRecoil_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedRecoilSystem, nullptr, "ApplyRecoil", nullptr, nullptr, Z_Construct_UFunction_UAdvancedRecoilSystem_ApplyRecoil_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedRecoilSystem_ApplyRecoil_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAdvancedRecoilSystem_ApplyRecoil_Statics::AdvancedRecoilSystem_eventApplyRecoil_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedRecoilSystem_ApplyRecoil_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAdvancedRecoilSystem_ApplyRecoil_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedRecoilSystem_ApplyRecoil_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAdvancedRecoilSystem_ApplyRecoil_Statics::AdvancedRecoilSystem_eventApplyRecoil_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAdvancedRecoilSystem_ApplyRecoil()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvancedRecoilSystem_ApplyRecoil_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAdvancedRecoilSystem);
	UClass* Z_Construct_UClass_UAdvancedRecoilSystem_NoRegister()
	{
		return UAdvancedRecoilSystem::StaticClass();
	}
	struct Z_Construct_UClass_UAdvancedRecoilSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pattern_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Pattern;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAdvancedRecoilSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_RecoilPattern_Proto,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAdvancedRecoilSystem_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAdvancedRecoilSystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAdvancedRecoilSystem_ApplyRecoil, "ApplyRecoil" }, // 900317598
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAdvancedRecoilSystem_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedRecoilSystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Recoil" },
		{ "IncludePath", "AdvancedRecoilSystem.h" },
		{ "ModuleRelativePath", "Public/AdvancedRecoilSystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedRecoilSystem_Statics::NewProp_Pattern_MetaData[] = {
		{ "Category", "AdvancedRecoilSystem" },
		{ "ModuleRelativePath", "Public/AdvancedRecoilSystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAdvancedRecoilSystem_Statics::NewProp_Pattern = { "Pattern", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAdvancedRecoilSystem, Pattern), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAdvancedRecoilSystem_Statics::NewProp_Pattern_MetaData), Z_Construct_UClass_UAdvancedRecoilSystem_Statics::NewProp_Pattern_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAdvancedRecoilSystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedRecoilSystem_Statics::NewProp_Pattern,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAdvancedRecoilSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAdvancedRecoilSystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAdvancedRecoilSystem_Statics::ClassParams = {
		&UAdvancedRecoilSystem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAdvancedRecoilSystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAdvancedRecoilSystem_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAdvancedRecoilSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UAdvancedRecoilSystem_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAdvancedRecoilSystem_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAdvancedRecoilSystem()
	{
		if (!Z_Registration_Info_UClass_UAdvancedRecoilSystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAdvancedRecoilSystem.OuterSingleton, Z_Construct_UClass_UAdvancedRecoilSystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAdvancedRecoilSystem.OuterSingleton;
	}
	template<> RECOILPATTERN_PROTO_API UClass* StaticClass<UAdvancedRecoilSystem>()
	{
		return UAdvancedRecoilSystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAdvancedRecoilSystem);
	UAdvancedRecoilSystem::~UAdvancedRecoilSystem() {}
	struct Z_CompiledInDeferFile_FID_Users_Hrvoje_Documents_Unreal_Projects_RecoilPattern_Proto_Source_RecoilPattern_Proto_Public_AdvancedRecoilSystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Hrvoje_Documents_Unreal_Projects_RecoilPattern_Proto_Source_RecoilPattern_Proto_Public_AdvancedRecoilSystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAdvancedRecoilSystem, UAdvancedRecoilSystem::StaticClass, TEXT("UAdvancedRecoilSystem"), &Z_Registration_Info_UClass_UAdvancedRecoilSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAdvancedRecoilSystem), 778852151U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Hrvoje_Documents_Unreal_Projects_RecoilPattern_Proto_Source_RecoilPattern_Proto_Public_AdvancedRecoilSystem_h_2264838371(TEXT("/Script/RecoilPattern_Proto"),
		Z_CompiledInDeferFile_FID_Users_Hrvoje_Documents_Unreal_Projects_RecoilPattern_Proto_Source_RecoilPattern_Proto_Public_AdvancedRecoilSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Hrvoje_Documents_Unreal_Projects_RecoilPattern_Proto_Source_RecoilPattern_Proto_Public_AdvancedRecoilSystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
