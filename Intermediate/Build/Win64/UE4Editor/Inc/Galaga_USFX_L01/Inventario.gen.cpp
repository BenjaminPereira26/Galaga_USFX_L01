// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/Inventario.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventario() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UInventario_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UInventario();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void UInventario::StaticRegisterNativesUInventario()
	{
	}
	UClass* Z_Construct_UClass_UInventario_NoRegister()
	{
		return UInventario::StaticClass();
	}
	struct Z_Construct_UClass_UInventario_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInventario_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventario_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Inventario.h" },
		{ "ModuleRelativePath", "Inventario.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInventario_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventario>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInventario_Statics::ClassParams = {
		&UInventario::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInventario_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInventario_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInventario()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInventario_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInventario, 2696140808);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<UInventario>()
	{
		return UInventario::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInventario(Z_Construct_UClass_UInventario, &UInventario::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("UInventario"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInventario);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
