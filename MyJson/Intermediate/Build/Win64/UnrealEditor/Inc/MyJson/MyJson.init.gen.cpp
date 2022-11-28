// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyJson_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MyJson;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MyJson()
	{
		if (!Z_Registration_Info_UPackage__Script_MyJson.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MyJson",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x204AE37B,
				0x02F0379B,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MyJson.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MyJson.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MyJson(Z_Construct_UPackage__Script_MyJson, TEXT("/Script/MyJson"), Z_Registration_Info_UPackage__Script_MyJson, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x204AE37B, 0x02F0379B));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
