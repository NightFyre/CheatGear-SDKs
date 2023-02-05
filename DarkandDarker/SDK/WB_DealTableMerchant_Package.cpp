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
	 * 		Name   -> Function WB_DealTableMerchant.WB_DealTableMerchant_C.SetScript
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        InScriptText                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWB_DealTableMerchant_C::SetScript(const class FText& InScriptText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_DealTableMerchant.WB_DealTableMerchant_C.SetScript");
		
		UWB_DealTableMerchant_C_SetScript_Params params {};
		params.InScriptText = InScriptText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_DealTableMerchant.WB_DealTableMerchant_C.SetRemainTime
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FTimespan                                   InRemainTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_DealTableMerchant_C::SetRemainTime(const struct FTimespan& InRemainTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_DealTableMerchant.WB_DealTableMerchant_C.SetRemainTime");
		
		UWB_DealTableMerchant_C_SetRemainTime_Params params {};
		params.InRemainTime = InRemainTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_DealTableMerchant.WB_DealTableMerchant_C.SetFaction
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            InFaction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_DealTableMerchant_C::SetFaction(int32_t InFaction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_DealTableMerchant.WB_DealTableMerchant_C.SetFaction");
		
		UWB_DealTableMerchant_C_SetFaction_Params params {};
		params.InFaction = InFaction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_DealTableMerchant.WB_DealTableMerchant_C.SetName
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        InName                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWB_DealTableMerchant_C::SetName(const class FText& InName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_DealTableMerchant.WB_DealTableMerchant_C.SetName");
		
		UWB_DealTableMerchant_C_SetName_Params params {};
		params.InName = InName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_DealTableMerchant.WB_DealTableMerchant_C.SetPortrait
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture2D*                                  InPortraitTexture2d                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_DealTableMerchant_C::SetPortrait(class UTexture2D* InPortraitTexture2d)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_DealTableMerchant.WB_DealTableMerchant_C.SetPortrait");
		
		UWB_DealTableMerchant_C_SetPortrait_Params params {};
		params.InPortraitTexture2d = InPortraitTexture2d;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWB_DealTableMerchant_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_DealTableMerchant_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_DealTableMerchant.WB_DealTableMerchant_C");
		return ptr;
	}

}


