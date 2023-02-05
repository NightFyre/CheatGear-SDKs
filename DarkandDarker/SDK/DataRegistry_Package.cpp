/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDataRegistry.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDataRegistry::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DataRegistry.DataRegistry");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDataRegistrySettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDataRegistrySettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DataRegistry.DataRegistrySettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDataRegistrySource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDataRegistrySource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DataRegistry.DataRegistrySource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMetaDataRegistrySource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMetaDataRegistrySource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DataRegistry.MetaDataRegistrySource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDataRegistrySource_CurveTable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDataRegistrySource_CurveTable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DataRegistry.DataRegistrySource_CurveTable");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMetaDataRegistrySource_CurveTable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMetaDataRegistrySource_CurveTable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DataRegistry.MetaDataRegistrySource_CurveTable");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDataRegistrySource_DataTable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDataRegistrySource_DataTable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DataRegistry.DataRegistrySource_DataTable");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMetaDataRegistrySource_DataTable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMetaDataRegistrySource_DataTable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DataRegistry.MetaDataRegistrySource_DataTable");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D2AEA0
	 * 		Name   -> Function DataRegistry.DataRegistrySubsystem.NotEqual_DataRegistryType
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FDataRegistryType                           A                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDataRegistryType                           B                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDataRegistrySubsystem::STATIC_NotEqual_DataRegistryType(const struct FDataRegistryType& A, const struct FDataRegistryType& B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DataRegistry.DataRegistrySubsystem.NotEqual_DataRegistryType");
		
		UDataRegistrySubsystem_NotEqual_DataRegistryType_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D2ADB0
	 * 		Name   -> Function DataRegistry.DataRegistrySubsystem.NotEqual_DataRegistryId
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FDataRegistryId                             A                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDataRegistryId                             B                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDataRegistrySubsystem::STATIC_NotEqual_DataRegistryId(const struct FDataRegistryId& A, const struct FDataRegistryId& B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DataRegistry.DataRegistrySubsystem.NotEqual_DataRegistryId");
		
		UDataRegistrySubsystem_NotEqual_DataRegistryId_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D2AD20
	 * 		Name   -> Function DataRegistry.DataRegistrySubsystem.IsValidDataRegistryType
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FDataRegistryType                           DataRegistryType                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDataRegistrySubsystem::STATIC_IsValidDataRegistryType(const struct FDataRegistryType& DataRegistryType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DataRegistry.DataRegistrySubsystem.IsValidDataRegistryType");
		
		UDataRegistrySubsystem_IsValidDataRegistryType_Params params {};
		params.DataRegistryType = DataRegistryType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D2AC80
	 * 		Name   -> Function DataRegistry.DataRegistrySubsystem.IsValidDataRegistryId
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FDataRegistryId                             DataRegistryId                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDataRegistrySubsystem::STATIC_IsValidDataRegistryId(const struct FDataRegistryId& DataRegistryId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DataRegistry.DataRegistrySubsystem.IsValidDataRegistryId");
		
		UDataRegistrySubsystem_IsValidDataRegistryId_Params params {};
		params.DataRegistryId = DataRegistryId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D28310
	 * 		Name   -> Function DataRegistry.DataRegistrySubsystem.GetCachedItemFromLookupBP
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FDataRegistryId                             ItemId                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDataRegistryLookup                         ResolvedLookup                                             (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTableRowBase                               OutItem                                                    (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	bool UDataRegistrySubsystem::STATIC_GetCachedItemFromLookupBP(const struct FDataRegistryId& ItemId, const struct FDataRegistryLookup& ResolvedLookup, struct FTableRowBase* OutItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DataRegistry.DataRegistrySubsystem.GetCachedItemFromLookupBP");
		
		UDataRegistrySubsystem_GetCachedItemFromLookupBP_Params params {};
		params.ItemId = ItemId;
		params.ResolvedLookup = ResolvedLookup;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutItem != nullptr)
			*OutItem = params.OutItem;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D28120
	 * 		Name   -> Function DataRegistry.DataRegistrySubsystem.GetCachedItemBP
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FDataRegistryId                             ItemId                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTableRowBase                               OutItem                                                    (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UDataRegistrySubsystem::STATIC_GetCachedItemBP(const struct FDataRegistryId& ItemId, struct FTableRowBase* OutItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DataRegistry.DataRegistrySubsystem.GetCachedItemBP");
		
		UDataRegistrySubsystem_GetCachedItemBP_Params params {};
		params.ItemId = ItemId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutItem != nullptr)
			*OutItem = params.OutItem;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D27F10
	 * 		Name   -> Function DataRegistry.DataRegistrySubsystem.FindCachedItemBP
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FDataRegistryId                             ItemId                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDataRegistrySubsystemGetItemResult                OutResult                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTableRowBase                               OutItem                                                    (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UDataRegistrySubsystem::STATIC_FindCachedItemBP(const struct FDataRegistryId& ItemId, EDataRegistrySubsystemGetItemResult* OutResult, struct FTableRowBase* OutItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DataRegistry.DataRegistrySubsystem.FindCachedItemBP");
		
		UDataRegistrySubsystem_FindCachedItemBP_Params params {};
		params.ItemId = ItemId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutResult != nullptr)
			*OutResult = params.OutResult;
		if (OutItem != nullptr)
			*OutItem = params.OutItem;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D2AAD0
	 * 		Name   -> Function DataRegistry.DataRegistrySubsystem.EvaluateDataRegistryCurve
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FDataRegistryId                             ItemId                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InputValue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DefaultValue                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDataRegistrySubsystemGetItemResult                OutResult                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OutValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDataRegistrySubsystem::STATIC_EvaluateDataRegistryCurve(const struct FDataRegistryId& ItemId, float InputValue, float DefaultValue, EDataRegistrySubsystemGetItemResult* OutResult, float* OutValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DataRegistry.DataRegistrySubsystem.EvaluateDataRegistryCurve");
		
		UDataRegistrySubsystem_EvaluateDataRegistryCurve_Params params {};
		params.ItemId = ItemId;
		params.InputValue = InputValue;
		params.DefaultValue = DefaultValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutResult != nullptr)
			*OutResult = params.OutResult;
		if (OutValue != nullptr)
			*OutValue = params.OutValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D2AA00
	 * 		Name   -> Function DataRegistry.DataRegistrySubsystem.EqualEqual_DataRegistryType
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FDataRegistryType                           A                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDataRegistryType                           B                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDataRegistrySubsystem::STATIC_EqualEqual_DataRegistryType(const struct FDataRegistryType& A, const struct FDataRegistryType& B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DataRegistry.DataRegistrySubsystem.EqualEqual_DataRegistryType");
		
		UDataRegistrySubsystem_EqualEqual_DataRegistryType_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D2A910
	 * 		Name   -> Function DataRegistry.DataRegistrySubsystem.EqualEqual_DataRegistryId
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FDataRegistryId                             A                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDataRegistryId                             B                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDataRegistrySubsystem::STATIC_EqualEqual_DataRegistryId(const struct FDataRegistryId& A, const struct FDataRegistryId& B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DataRegistry.DataRegistrySubsystem.EqualEqual_DataRegistryId");
		
		UDataRegistrySubsystem_EqualEqual_DataRegistryId_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D2A840
	 * 		Name   -> Function DataRegistry.DataRegistrySubsystem.Conv_DataRegistryTypeToString
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FDataRegistryType                           DataRegistryType                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UDataRegistrySubsystem::STATIC_Conv_DataRegistryTypeToString(const struct FDataRegistryType& DataRegistryType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DataRegistry.DataRegistrySubsystem.Conv_DataRegistryTypeToString");
		
		UDataRegistrySubsystem_Conv_DataRegistryTypeToString_Params params {};
		params.DataRegistryType = DataRegistryType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D2A760
	 * 		Name   -> Function DataRegistry.DataRegistrySubsystem.Conv_DataRegistryIdToString
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FDataRegistryId                             DataRegistryId                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UDataRegistrySubsystem::STATIC_Conv_DataRegistryIdToString(const struct FDataRegistryId& DataRegistryId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DataRegistry.DataRegistrySubsystem.Conv_DataRegistryIdToString");
		
		UDataRegistrySubsystem_Conv_DataRegistryIdToString_Params params {};
		params.DataRegistryId = DataRegistryId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D2A670
	 * 		Name   -> Function DataRegistry.DataRegistrySubsystem.AcquireItemBP
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FDataRegistryId                             ItemId                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              AcquireCallback                                            (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UDataRegistrySubsystem::STATIC_AcquireItemBP(const struct FDataRegistryId& ItemId, const class FScriptDelegate& AcquireCallback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DataRegistry.DataRegistrySubsystem.AcquireItemBP");
		
		UDataRegistrySubsystem_AcquireItemBP_Params params {};
		params.ItemId = ItemId;
		params.AcquireCallback = AcquireCallback;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDataRegistrySubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDataRegistrySubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DataRegistry.DataRegistrySubsystem");
		return ptr;
	}

}


