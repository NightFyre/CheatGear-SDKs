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
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_ClassSpellCapacity.WB_ClassSpellCapacity_C.GetSpellCapacityImageSize
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector2D                                   InVec                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SpellTier                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             SpellCapacityToUse                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FVector2D UWB_ClassSpellCapacity_C::GetSpellCapacityImageSize(const struct FVector2D& InVec, int32_t SpellTier, double SpellCapacityToUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ClassSpellCapacity.WB_ClassSpellCapacity_C.GetSpellCapacityImageSize");
		
		UWB_ClassSpellCapacity_C_GetSpellCapacityImageSize_Params params {};
		params.InVec = InVec;
		params.SpellTier = SpellTier;
		params.SpellCapacityToUse = SpellCapacityToUse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_ClassSpellCapacity.WB_ClassSpellCapacity_C.OnMessageReceived_19F7A0BB4FA330B0CBE1ADB130D8E6F2
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMsgBaseNode*                                ProxyObject                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_ClassSpellCapacity_C::OnMessageReceived_19F7A0BB4FA330B0CBE1ADB130D8E6F2(class UMsgBaseNode* ProxyObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ClassSpellCapacity.WB_ClassSpellCapacity_C.OnMessageReceived_19F7A0BB4FA330B0CBE1ADB130D8E6F2");
		
		UWB_ClassSpellCapacity_C_OnMessageReceived_19F7A0BB4FA330B0CBE1ADB130D8E6F2_Params params {};
		params.ProxyObject = ProxyObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_ClassSpellCapacity.WB_ClassSpellCapacity_C.OnSpellCapacityChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		float                                              InSpellCurrentCapacity                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InSpellMaxCapacity                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_ClassSpellCapacity_C::OnSpellCapacityChanged(float InSpellCurrentCapacity, float InSpellMaxCapacity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ClassSpellCapacity.WB_ClassSpellCapacity_C.OnSpellCapacityChanged");
		
		UWB_ClassSpellCapacity_C_OnSpellCapacityChanged_Params params {};
		params.InSpellCurrentCapacity = InSpellCurrentCapacity;
		params.InSpellMaxCapacity = InSpellMaxCapacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_ClassSpellCapacity.WB_ClassSpellCapacity_C.OnSpellListChanged
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FSpellData>                          InSpellDataArray                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_ClassSpellCapacity_C::OnSpellListChanged(TArray<struct FSpellData> InSpellDataArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ClassSpellCapacity.WB_ClassSpellCapacity_C.OnSpellListChanged");
		
		UWB_ClassSpellCapacity_C_OnSpellListChanged_Params params {};
		params.InSpellDataArray = InSpellDataArray;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_ClassSpellCapacity.WB_ClassSpellCapacity_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWB_ClassSpellCapacity_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ClassSpellCapacity.WB_ClassSpellCapacity_C.Construct");
		
		UWB_ClassSpellCapacity_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_ClassSpellCapacity.WB_ClassSpellCapacity_C.OnClickedCommonInfoBtn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWB_ClassSpellCapacity_C::OnClickedCommonInfoBtn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ClassSpellCapacity.WB_ClassSpellCapacity_C.OnClickedCommonInfoBtn");
		
		UWB_ClassSpellCapacity_C_OnClickedCommonInfoBtn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_ClassSpellCapacity.WB_ClassSpellCapacity_C.ExecuteUbergraph_WB_ClassSpellCapacity
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_ClassSpellCapacity_C::ExecuteUbergraph_WB_ClassSpellCapacity(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ClassSpellCapacity.WB_ClassSpellCapacity_C.ExecuteUbergraph_WB_ClassSpellCapacity");
		
		UWB_ClassSpellCapacity_C_ExecuteUbergraph_WB_ClassSpellCapacity_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWB_ClassSpellCapacity_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_ClassSpellCapacity_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_ClassSpellCapacity.WB_ClassSpellCapacity_C");
		return ptr;
	}

}


