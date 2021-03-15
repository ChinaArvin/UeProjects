// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "My_Test_Project_v008/My_Test_Project_v008GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMy_Test_Project_v008GameModeBase() {}
// Cross Module References
	MY_TEST_PROJECT_V008_API UClass* Z_Construct_UClass_AMy_Test_Project_v008GameModeBase_NoRegister();
	MY_TEST_PROJECT_V008_API UClass* Z_Construct_UClass_AMy_Test_Project_v008GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_My_Test_Project_v008();
// End Cross Module References
	void AMy_Test_Project_v008GameModeBase::StaticRegisterNativesAMy_Test_Project_v008GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AMy_Test_Project_v008GameModeBase_NoRegister()
	{
		return AMy_Test_Project_v008GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AMy_Test_Project_v008GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMy_Test_Project_v008GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_My_Test_Project_v008,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMy_Test_Project_v008GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "My_Test_Project_v008GameModeBase.h" },
		{ "ModuleRelativePath", "My_Test_Project_v008GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMy_Test_Project_v008GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMy_Test_Project_v008GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMy_Test_Project_v008GameModeBase_Statics::ClassParams = {
		&AMy_Test_Project_v008GameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMy_Test_Project_v008GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMy_Test_Project_v008GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMy_Test_Project_v008GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMy_Test_Project_v008GameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMy_Test_Project_v008GameModeBase, 2102378762);
	template<> MY_TEST_PROJECT_V008_API UClass* StaticClass<AMy_Test_Project_v008GameModeBase>()
	{
		return AMy_Test_Project_v008GameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMy_Test_Project_v008GameModeBase(Z_Construct_UClass_AMy_Test_Project_v008GameModeBase, &AMy_Test_Project_v008GameModeBase::StaticClass, TEXT("/Script/My_Test_Project_v008"), TEXT("AMy_Test_Project_v008GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMy_Test_Project_v008GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
