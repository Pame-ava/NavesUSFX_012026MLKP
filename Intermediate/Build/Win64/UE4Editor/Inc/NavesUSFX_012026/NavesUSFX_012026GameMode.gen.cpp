// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavesUSFX_012026/NavesUSFX_012026GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavesUSFX_012026GameMode() {}
// Cross Module References
	NAVESUSFX_012026_API UClass* Z_Construct_UClass_ANavesUSFX_012026GameMode_NoRegister();
	NAVESUSFX_012026_API UClass* Z_Construct_UClass_ANavesUSFX_012026GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_NavesUSFX_012026();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NAVESUSFX_012026_API UClass* Z_Construct_UClass_AEnemigo_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	void ANavesUSFX_012026GameMode::StaticRegisterNativesANavesUSFX_012026GameMode()
	{
	}
	UClass* Z_Construct_UClass_ANavesUSFX_012026GameMode_NoRegister()
	{
		return ANavesUSFX_012026GameMode::StaticClass();
	}
	struct Z_Construct_UClass_ANavesUSFX_012026GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClaseEnemigoDona_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ClaseEnemigoDona;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PosicionSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PosicionSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotacionSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotacionSpawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANavesUSFX_012026GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_NavesUSFX_012026,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavesUSFX_012026GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "NavesUSFX_012026GameMode.h" },
		{ "ModuleRelativePath", "NavesUSFX_012026GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavesUSFX_012026GameMode_Statics::NewProp_ClaseEnemigoDona_MetaData[] = {
		{ "Category", "Spawn" },
		{ "ModuleRelativePath", "NavesUSFX_012026GameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ANavesUSFX_012026GameMode_Statics::NewProp_ClaseEnemigoDona = { "ClaseEnemigoDona", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANavesUSFX_012026GameMode, ClaseEnemigoDona), Z_Construct_UClass_AEnemigo_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ANavesUSFX_012026GameMode_Statics::NewProp_ClaseEnemigoDona_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavesUSFX_012026GameMode_Statics::NewProp_ClaseEnemigoDona_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavesUSFX_012026GameMode_Statics::NewProp_PosicionSpawn_MetaData[] = {
		{ "Category", "Spawn" },
		{ "ModuleRelativePath", "NavesUSFX_012026GameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANavesUSFX_012026GameMode_Statics::NewProp_PosicionSpawn = { "PosicionSpawn", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANavesUSFX_012026GameMode, PosicionSpawn), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ANavesUSFX_012026GameMode_Statics::NewProp_PosicionSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavesUSFX_012026GameMode_Statics::NewProp_PosicionSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavesUSFX_012026GameMode_Statics::NewProp_RotacionSpawn_MetaData[] = {
		{ "Category", "Spawn" },
		{ "ModuleRelativePath", "NavesUSFX_012026GameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANavesUSFX_012026GameMode_Statics::NewProp_RotacionSpawn = { "RotacionSpawn", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANavesUSFX_012026GameMode, RotacionSpawn), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ANavesUSFX_012026GameMode_Statics::NewProp_RotacionSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavesUSFX_012026GameMode_Statics::NewProp_RotacionSpawn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANavesUSFX_012026GameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavesUSFX_012026GameMode_Statics::NewProp_ClaseEnemigoDona,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavesUSFX_012026GameMode_Statics::NewProp_PosicionSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavesUSFX_012026GameMode_Statics::NewProp_RotacionSpawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANavesUSFX_012026GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANavesUSFX_012026GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANavesUSFX_012026GameMode_Statics::ClassParams = {
		&ANavesUSFX_012026GameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANavesUSFX_012026GameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANavesUSFX_012026GameMode_Statics::PropPointers),
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ANavesUSFX_012026GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANavesUSFX_012026GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANavesUSFX_012026GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANavesUSFX_012026GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANavesUSFX_012026GameMode, 184802670);
	template<> NAVESUSFX_012026_API UClass* StaticClass<ANavesUSFX_012026GameMode>()
	{
		return ANavesUSFX_012026GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANavesUSFX_012026GameMode(Z_Construct_UClass_ANavesUSFX_012026GameMode, &ANavesUSFX_012026GameMode::StaticClass, TEXT("/Script/NavesUSFX_012026"), TEXT("ANavesUSFX_012026GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANavesUSFX_012026GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
