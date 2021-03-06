// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Boilerplate C++ definitions for a single module.
	This is automatically generated by UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "Private/GameAnalyticsPrivatePCH.h"
#include "GameAnalytics.generated.dep.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1GameAnalytics() {}
static class UEnum* EGAGender_StaticEnum()
{
	extern GAMEANALYTICS_API class UPackage* Z_Construct_UPackage__Script_GameAnalytics();
	static class UEnum* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEANALYTICS_API class UEnum* Z_Construct_UEnum_GameAnalytics_EGAGender();
		Singleton = GetStaticEnum(Z_Construct_UEnum_GameAnalytics_EGAGender, Z_Construct_UPackage__Script_GameAnalytics(), TEXT("EGAGender"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGAGender(EGAGender_StaticEnum, TEXT("/Script/GameAnalytics"), TEXT("EGAGender"), false, nullptr, nullptr);
static class UEnum* EGAErrorSeverity_StaticEnum()
{
	extern GAMEANALYTICS_API class UPackage* Z_Construct_UPackage__Script_GameAnalytics();
	static class UEnum* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEANALYTICS_API class UEnum* Z_Construct_UEnum_GameAnalytics_EGAErrorSeverity();
		Singleton = GetStaticEnum(Z_Construct_UEnum_GameAnalytics_EGAErrorSeverity, Z_Construct_UPackage__Script_GameAnalytics(), TEXT("EGAErrorSeverity"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGAErrorSeverity(EGAErrorSeverity_StaticEnum, TEXT("/Script/GameAnalytics"), TEXT("EGAErrorSeverity"), false, nullptr, nullptr);
static class UEnum* EGAProgressionStatus_StaticEnum()
{
	extern GAMEANALYTICS_API class UPackage* Z_Construct_UPackage__Script_GameAnalytics();
	static class UEnum* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEANALYTICS_API class UEnum* Z_Construct_UEnum_GameAnalytics_EGAProgressionStatus();
		Singleton = GetStaticEnum(Z_Construct_UEnum_GameAnalytics_EGAProgressionStatus, Z_Construct_UPackage__Script_GameAnalytics(), TEXT("EGAProgressionStatus"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGAProgressionStatus(EGAProgressionStatus_StaticEnum, TEXT("/Script/GameAnalytics"), TEXT("EGAProgressionStatus"), false, nullptr, nullptr);
static class UEnum* EGAResourceFlowType_StaticEnum()
{
	extern GAMEANALYTICS_API class UPackage* Z_Construct_UPackage__Script_GameAnalytics();
	static class UEnum* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEANALYTICS_API class UEnum* Z_Construct_UEnum_GameAnalytics_EGAResourceFlowType();
		Singleton = GetStaticEnum(Z_Construct_UEnum_GameAnalytics_EGAResourceFlowType, Z_Construct_UPackage__Script_GameAnalytics(), TEXT("EGAResourceFlowType"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGAResourceFlowType(EGAResourceFlowType_StaticEnum, TEXT("/Script/GameAnalytics"), TEXT("EGAResourceFlowType"), false, nullptr, nullptr);
#if USE_COMPILED_IN_NATIVES
	GAMEANALYTICS_API class UEnum* Z_Construct_UEnum_GameAnalytics_EGAGender();
	GAMEANALYTICS_API class UEnum* Z_Construct_UEnum_GameAnalytics_EGAErrorSeverity();
	GAMEANALYTICS_API class UEnum* Z_Construct_UEnum_GameAnalytics_EGAProgressionStatus();
	GAMEANALYTICS_API class UEnum* Z_Construct_UEnum_GameAnalytics_EGAResourceFlowType();
	GAMEANALYTICS_API class UPackage* Z_Construct_UPackage__Script_GameAnalytics();
	UEnum* Z_Construct_UEnum_GameAnalytics_EGAGender()
	{
		UPackage* Outer=Z_Construct_UPackage__Script_GameAnalytics();
		extern uint32 Get_Z_Construct_UEnum_GameAnalytics_EGAGender_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGAGender"), 0, Get_Z_Construct_UEnum_GameAnalytics_EGAGender_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EGAGender"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, uint8>> EnumNames;
			EnumNames.Add(TPairInitializer<FName, uint8>(FName(TEXT("EGAGender::undefined")), 0));
			EnumNames.Add(TPairInitializer<FName, uint8>(FName(TEXT("EGAGender::male")), 1));
			EnumNames.Add(TPairInitializer<FName, uint8>(FName(TEXT("EGAGender::female")), 2));
			EnumNames.Add(TPairInitializer<FName, uint8>(FName(TEXT("EGAGender::EGAGender_MAX")), 3));
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EGAGender");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Private/GameAnalyticsProvider.h"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_GameAnalytics_EGAGender_CRC() { return 40409643U; }
	UEnum* Z_Construct_UEnum_GameAnalytics_EGAErrorSeverity()
	{
		UPackage* Outer=Z_Construct_UPackage__Script_GameAnalytics();
		extern uint32 Get_Z_Construct_UEnum_GameAnalytics_EGAErrorSeverity_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGAErrorSeverity"), 0, Get_Z_Construct_UEnum_GameAnalytics_EGAErrorSeverity_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EGAErrorSeverity"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, uint8>> EnumNames;
			EnumNames.Add(TPairInitializer<FName, uint8>(FName(TEXT("EGAErrorSeverity::undefined")), 0));
			EnumNames.Add(TPairInitializer<FName, uint8>(FName(TEXT("EGAErrorSeverity::debug")), 1));
			EnumNames.Add(TPairInitializer<FName, uint8>(FName(TEXT("EGAErrorSeverity::info")), 2));
			EnumNames.Add(TPairInitializer<FName, uint8>(FName(TEXT("EGAErrorSeverity::warning")), 3));
			EnumNames.Add(TPairInitializer<FName, uint8>(FName(TEXT("EGAErrorSeverity::error")), 4));
			EnumNames.Add(TPairInitializer<FName, uint8>(FName(TEXT("EGAErrorSeverity::critical")), 5));
			EnumNames.Add(TPairInitializer<FName, uint8>(FName(TEXT("EGAErrorSeverity::EGAErrorSeverity_MAX")), 6));
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EGAErrorSeverity");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Private/GameAnalyticsProvider.h"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_GameAnalytics_EGAErrorSeverity_CRC() { return 2610868344U; }
	UEnum* Z_Construct_UEnum_GameAnalytics_EGAProgressionStatus()
	{
		UPackage* Outer=Z_Construct_UPackage__Script_GameAnalytics();
		extern uint32 Get_Z_Construct_UEnum_GameAnalytics_EGAProgressionStatus_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGAProgressionStatus"), 0, Get_Z_Construct_UEnum_GameAnalytics_EGAProgressionStatus_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EGAProgressionStatus"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, uint8>> EnumNames;
			EnumNames.Add(TPairInitializer<FName, uint8>(FName(TEXT("EGAProgressionStatus::undefined")), 0));
			EnumNames.Add(TPairInitializer<FName, uint8>(FName(TEXT("EGAProgressionStatus::start")), 1));
			EnumNames.Add(TPairInitializer<FName, uint8>(FName(TEXT("EGAProgressionStatus::complete")), 2));
			EnumNames.Add(TPairInitializer<FName, uint8>(FName(TEXT("EGAProgressionStatus::fail")), 3));
			EnumNames.Add(TPairInitializer<FName, uint8>(FName(TEXT("EGAProgressionStatus::EGAProgressionStatus_MAX")), 4));
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EGAProgressionStatus");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Private/GameAnalyticsProvider.h"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_GameAnalytics_EGAProgressionStatus_CRC() { return 4069320278U; }
	UEnum* Z_Construct_UEnum_GameAnalytics_EGAResourceFlowType()
	{
		UPackage* Outer=Z_Construct_UPackage__Script_GameAnalytics();
		extern uint32 Get_Z_Construct_UEnum_GameAnalytics_EGAResourceFlowType_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGAResourceFlowType"), 0, Get_Z_Construct_UEnum_GameAnalytics_EGAResourceFlowType_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EGAResourceFlowType"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, uint8>> EnumNames;
			EnumNames.Add(TPairInitializer<FName, uint8>(FName(TEXT("EGAResourceFlowType::undefined")), 0));
			EnumNames.Add(TPairInitializer<FName, uint8>(FName(TEXT("EGAResourceFlowType::source")), 1));
			EnumNames.Add(TPairInitializer<FName, uint8>(FName(TEXT("EGAResourceFlowType::sink")), 2));
			EnumNames.Add(TPairInitializer<FName, uint8>(FName(TEXT("EGAResourceFlowType::EGAResourceFlowType_MAX")), 3));
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EGAResourceFlowType");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Private/GameAnalyticsProvider.h"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_GameAnalytics_EGAResourceFlowType_CRC() { return 3721924481U; }
	UPackage* Z_Construct_UPackage__Script_GameAnalytics()
	{
		static UPackage* ReturnPackage = NULL;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), NULL, FName(TEXT("/Script/GameAnalytics")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0xB3541326;
			Guid.B = 0x7DC6F747;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif

PRAGMA_ENABLE_DEPRECATION_WARNINGS
