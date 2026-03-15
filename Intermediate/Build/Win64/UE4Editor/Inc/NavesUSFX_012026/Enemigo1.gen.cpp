// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavesUSFX_012026/Enemigo1.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigo1() {}
// Cross Module References
	NAVESUSFX_012026_API UClass* Z_Construct_UClass_AEnemigo1_NoRegister();
	NAVESUSFX_012026_API UClass* Z_Construct_UClass_AEnemigo1();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_NavesUSFX_012026();
// End Cross Module References
	void AEnemigo1::StaticRegisterNativesAEnemigo1()
	{
	}
	UClass* Z_Construct_UClass_AEnemigo1_NoRegister()
	{
		return AEnemigo1::StaticClass();
	}
	struct Z_Construct_UClass_AEnemigo1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemigo1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_NavesUSFX_012026,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigo1_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Enemigo1.h" },
		{ "ModuleRelativePath", "Enemigo1.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemigo1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigo1>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemigo1_Statics::ClassParams = {
		&AEnemigo1::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemigo1_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigo1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemigo1()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemigo1_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemigo1, 3601622062);
	template<> NAVESUSFX_012026_API UClass* StaticClass<AEnemigo1>()
	{
		return AEnemigo1::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemigo1(Z_Construct_UClass_AEnemigo1, &AEnemigo1::StaticClass, TEXT("/Script/NavesUSFX_012026"), TEXT("AEnemigo1"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigo1);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
