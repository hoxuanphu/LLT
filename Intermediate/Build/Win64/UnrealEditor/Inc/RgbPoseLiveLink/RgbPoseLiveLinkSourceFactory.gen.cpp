// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RgbPoseLiveLink/Private/RgbPoseLiveLinkSourceFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRgbPoseLiveLinkSourceFactory() {}
// Cross Module References
	RGBPOSELIVELINK_API UClass* Z_Construct_UClass_URgbPoseLiveLinkSourceFactory_NoRegister();
	RGBPOSELIVELINK_API UClass* Z_Construct_UClass_URgbPoseLiveLinkSourceFactory();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSourceFactory();
	UPackage* Z_Construct_UPackage__Script_RgbPoseLiveLink();
// End Cross Module References
	void URgbPoseLiveLinkSourceFactory::StaticRegisterNativesURgbPoseLiveLinkSourceFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URgbPoseLiveLinkSourceFactory);
	UClass* Z_Construct_UClass_URgbPoseLiveLinkSourceFactory_NoRegister()
	{
		return URgbPoseLiveLinkSourceFactory::StaticClass();
	}
	struct Z_Construct_UClass_URgbPoseLiveLinkSourceFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URgbPoseLiveLinkSourceFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkSourceFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_RgbPoseLiveLink,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URgbPoseLiveLinkSourceFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RgbPoseLiveLinkSourceFactory.h" },
		{ "ModuleRelativePath", "Private/RgbPoseLiveLinkSourceFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URgbPoseLiveLinkSourceFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URgbPoseLiveLinkSourceFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URgbPoseLiveLinkSourceFactory_Statics::ClassParams = {
		&URgbPoseLiveLinkSourceFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URgbPoseLiveLinkSourceFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URgbPoseLiveLinkSourceFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URgbPoseLiveLinkSourceFactory()
	{
		if (!Z_Registration_Info_UClass_URgbPoseLiveLinkSourceFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URgbPoseLiveLinkSourceFactory.OuterSingleton, Z_Construct_UClass_URgbPoseLiveLinkSourceFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URgbPoseLiveLinkSourceFactory.OuterSingleton;
	}
	template<> RGBPOSELIVELINK_API UClass* StaticClass<URgbPoseLiveLinkSourceFactory>()
	{
		return URgbPoseLiveLinkSourceFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URgbPoseLiveLinkSourceFactory);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_RgbPoseLiveLink_Source_RgbPoseLiveLink_Private_RgbPoseLiveLinkSourceFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RgbPoseLiveLink_Source_RgbPoseLiveLink_Private_RgbPoseLiveLinkSourceFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URgbPoseLiveLinkSourceFactory, URgbPoseLiveLinkSourceFactory::StaticClass, TEXT("URgbPoseLiveLinkSourceFactory"), &Z_Registration_Info_UClass_URgbPoseLiveLinkSourceFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URgbPoseLiveLinkSourceFactory), 1381118087U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RgbPoseLiveLink_Source_RgbPoseLiveLink_Private_RgbPoseLiveLinkSourceFactory_h_1182907559(TEXT("/Script/RgbPoseLiveLink"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_RgbPoseLiveLink_Source_RgbPoseLiveLink_Private_RgbPoseLiveLinkSourceFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_RgbPoseLiveLink_Source_RgbPoseLiveLink_Private_RgbPoseLiveLinkSourceFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
