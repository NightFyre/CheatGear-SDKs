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
	 * 		Name   -> Function WB_MenuOptionPopup.WB_MenuOptionPopup_C.RefreshDetailText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_MenuOptionPopup_C::RefreshDetailText(int32_t InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_MenuOptionPopup.WB_MenuOptionPopup_C.RefreshDetailText");
		
		UWB_MenuOptionPopup_C_RefreshDetailText_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_MenuOptionPopup.WB_MenuOptionPopup_C.UpdateDetailText
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        InDetailText                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_MenuOptionPopup_C::UpdateDetailText(const class FText& InDetailText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_MenuOptionPopup.WB_MenuOptionPopup_C.UpdateDetailText");
		
		UWB_MenuOptionPopup_C_UpdateDetailText_Params params {};
		params.InDetailText = InDetailText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_MenuOptionPopup.WB_MenuOptionPopup_C.UpdateButtonText
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        InLeftText                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FText                                        InRightText                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_MenuOptionPopup_C::UpdateButtonText(const class FText& InLeftText, const class FText& InRightText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_MenuOptionPopup.WB_MenuOptionPopup_C.UpdateButtonText");
		
		UWB_MenuOptionPopup_C_UpdateButtonText_Params params {};
		params.InLeftText = InLeftText;
		params.InRightText = InRightText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_MenuOptionPopup.WB_MenuOptionPopup_C.ExecuteUbergraph_WB_MenuOptionPopup
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_MenuOptionPopup_C::ExecuteUbergraph_WB_MenuOptionPopup(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_MenuOptionPopup.WB_MenuOptionPopup_C.ExecuteUbergraph_WB_MenuOptionPopup");
		
		UWB_MenuOptionPopup_C_ExecuteUbergraph_WB_MenuOptionPopup_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWB_MenuOptionPopup_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_MenuOptionPopup_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_MenuOptionPopup.WB_MenuOptionPopup_C");
		return ptr;
	}

}


