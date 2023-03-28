// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RgbPoseLiveLink/Private/FRGBRokokoAnimGraphNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFRGBRokokoAnimGraphNode() {}
// Cross Module References
	RGBPOSELIVELINK_API UClass* Z_Construct_UClass_UFRGBRokokoAnimGraphNode_NoRegister();
	RGBPOSELIVELINK_API UClass* Z_Construct_UClass_UFRGBRokokoAnimGraphNode();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase();
	UPackage* Z_Construct_UPackage__Script_RgbPoseLiveLink();
	RGBPOSELIVELINK_API UScriptStruct* Z_Construct_UScriptStruct_FRGBRokokoAnimNode();
// End Cross Module References
	void UFRGBRokokoAnimGraphNode::StaticRegisterNativesUFRGBRokokoAnimGraphNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFRGBRokokoAnimGraphNode);
	UClass* Z_Construct_UClass_UFRGBRokokoAnimGraphNode_NoRegister()
	{
		return UFRGBRokokoAnimGraphNode::StaticClass();
	}
	struct Z_Construct_UClass_UFRGBRokokoAnimGraphNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFRGBRokokoAnimGraphNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RgbPoseLiveLink,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFRGBRokokoAnimGraphNode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "FRGBRokokoAnimGraphNode.h" },
		{ "ModuleRelativePath", "Private/FRGBRokokoAnimGraphNode.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFRGBRokokoAnimGraphNode_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Private/FRGBRokokoAnimGraphNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFRGBRokokoAnimGraphNode_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFRGBRokokoAnimGraphNode, Node), Z_Construct_UScriptStruct_FRGBRokokoAnimNode, METADATA_PARAMS(Z_Construct_UClass_UFRGBRokokoAnimGraphNode_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFRGBRokokoAnimGraphNode_Statics::NewProp_Node_MetaData)) }; // 3027310272
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFRGBRokokoAnimGraphNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFRGBRokokoAnimGraphNode_Statics::NewProp_Node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFRGBRokokoAnimGraphNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFRGBRokokoAnimGraphNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFRGBRokokoAnimGraphNode_Statics::ClassParams = {
		&UFRGBRokokoAnimGraphNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFRGBRokokoAnimGraphNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFRGBRokokoAnimGraphNode_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFRGBRokokoAnimGraphNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFRGBRokokoAnimGraphNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFRGBRokokoAnimGraphNode()
	{
		if (!Z_Registration_Info_UClass_UFRGBRokokoAnimGraphNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFRGBRokokoAnimGraphNode.OuterSingleton, Z_Construct_UClass_UFRGBRokokoAnimGraphNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFRGBRokokoAnimGraphNode.OuterSingleton;
	}
	template<> RGBPOSELIVELINK_API UClass* StaticClass<UFRGBRokokoAnimGraphNode>()
	{
		return UFRGBRokokoAnimGraphNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFRGBRokokoAnimGraphNode);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_RgbPoseLiveLink_Source_RgbPoseLiveLink_Private_FRGBRokokoAnimGraphNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RgbPoseLiveLink_Source_RgbPoseLiveLink_Private_FRGBRokokoAnimGraphNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFRGBRokokoAnimGraphNode, UFRGBRokokoAnimGraphNode::StaticClass, TEXT("UFRGBRokokoAnimGraphNode"), &Z_Registration_Info_UClass_UFRGBRokokoAnimGraphNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFRGBRokokoAnimGraphNode), 71416266U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RgbPoseLiveLink_Source_RgbPoseLiveLink_Private_FRGBRokokoAnimGraphNode_h_3815914088(TEXT("/Script/RgbPoseLiveLink"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_RgbPoseLiveLink_Source_RgbPoseLiveLink_Private_FRGBRokokoAnimGraphNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_RgbPoseLiveLink_Source_RgbPoseLiveLink_Private_FRGBRokokoAnimGraphNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
