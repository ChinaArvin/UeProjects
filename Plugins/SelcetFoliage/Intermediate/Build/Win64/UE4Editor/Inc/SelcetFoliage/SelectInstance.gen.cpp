// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SelcetFoliage/Public/SelectInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSelectInstance() {}
// Cross Module References
	SELCETFOLIAGE_API UClass* Z_Construct_UClass_USelectInstance_NoRegister();
	SELCETFOLIAGE_API UClass* Z_Construct_UClass_USelectInstance();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_SelcetFoliage();
	FOLIAGE_API UClass* Z_Construct_UClass_UFoliageType_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USelectInstance::execGetSelectedInstances)
	{
		P_GET_OBJECT(UActorComponent,Z_Param_BaseComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UFoliageType*>*)Z_Param__Result=USelectInstance::GetSelectedInstances(Z_Param_BaseComponent);
		P_NATIVE_END;
	}
	void USelectInstance::StaticRegisterNativesUSelectInstance()
	{
		UClass* Class = USelectInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSelectedInstances", &USelectInstance::execGetSelectedInstances },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USelectInstance_GetSelectedInstances_Statics
	{
		struct SelectInstance_eventGetSelectedInstances_Parms
		{
			UActorComponent* BaseComponent;
			TArray<UFoliageType*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BaseComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USelectInstance_GetSelectedInstances_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectInstance_eventGetSelectedInstances_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USelectInstance_GetSelectedInstances_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFoliageType_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USelectInstance_GetSelectedInstances_Statics::NewProp_BaseComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USelectInstance_GetSelectedInstances_Statics::NewProp_BaseComponent = { "BaseComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectInstance_eventGetSelectedInstances_Parms, BaseComponent), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USelectInstance_GetSelectedInstances_Statics::NewProp_BaseComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USelectInstance_GetSelectedInstances_Statics::NewProp_BaseComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USelectInstance_GetSelectedInstances_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectInstance_GetSelectedInstances_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectInstance_GetSelectedInstances_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectInstance_GetSelectedInstances_Statics::NewProp_BaseComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USelectInstance_GetSelectedInstances_Statics::Function_MetaDataParams[] = {
		{ "Category", "MyTestTesting" },
		{ "DisplayName", "Execute Sample function" },
		{ "Keywords", "MyTest sample test testing" },
		{ "ModuleRelativePath", "Public/SelectInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USelectInstance_GetSelectedInstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USelectInstance, nullptr, "GetSelectedInstances", nullptr, nullptr, sizeof(SelectInstance_eventGetSelectedInstances_Parms), Z_Construct_UFunction_USelectInstance_GetSelectedInstances_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USelectInstance_GetSelectedInstances_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USelectInstance_GetSelectedInstances_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USelectInstance_GetSelectedInstances_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USelectInstance_GetSelectedInstances()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USelectInstance_GetSelectedInstances_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USelectInstance_NoRegister()
	{
		return USelectInstance::StaticClass();
	}
	struct Z_Construct_UClass_USelectInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USelectInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SelcetFoliage,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USelectInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USelectInstance_GetSelectedInstances, "GetSelectedInstances" }, // 2739649350
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USelectInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SelectInstance.h" },
		{ "ModuleRelativePath", "Public/SelectInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USelectInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USelectInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USelectInstance_Statics::ClassParams = {
		&USelectInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USelectInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USelectInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USelectInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USelectInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USelectInstance, 805690029);
	template<> SELCETFOLIAGE_API UClass* StaticClass<USelectInstance>()
	{
		return USelectInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USelectInstance(Z_Construct_UClass_USelectInstance, &USelectInstance::StaticClass, TEXT("/Script/SelcetFoliage"), TEXT("USelectInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USelectInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
