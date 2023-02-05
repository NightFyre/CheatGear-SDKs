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
	 * 		Name   -> Function WB_OptionCheckButton01.WB_OptionCheckButton01_C.UpdateButtonSize
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             ScaleX                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             ScaleY                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_OptionCheckButton01_C::UpdateButtonSize(double ScaleX, double ScaleY)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_OptionCheckButton01.WB_OptionCheckButton01_C.UpdateButtonSize");
		
		UWB_OptionCheckButton01_C_UpdateButtonSize_Params params {};
		params.ScaleX = ScaleX;
		params.ScaleY = ScaleY;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_OptionCheckButton01.WB_OptionCheckButton01_C.BndEvt__WB_OptionCheckButton01_Btn_Check_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWB_OptionCheckButton01_C::BndEvt__WB_OptionCheckButton01_Btn_Check_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_OptionCheckButton01.WB_OptionCheckButton01_C.BndEvt__WB_OptionCheckButton01_Btn_Check_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UWB_OptionCheckButton01_C_BndEvt__WB_OptionCheckButton01_Btn_Check_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_OptionCheckButton01.WB_OptionCheckButton01_C.BndEvt__WB_OptionCheckButton01_Btn_Check_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWB_OptionCheckButton01_C::BndEvt__WB_OptionCheckButton01_Btn_Check_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_OptionCheckButton01.WB_OptionCheckButton01_C.BndEvt__WB_OptionCheckButton01_Btn_Check_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");
		
		UWB_OptionCheckButton01_C_BndEvt__WB_OptionCheckButton01_Btn_Check_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_OptionCheckButton01.WB_OptionCheckButton01_C.ExecuteUbergraph_WB_OptionCheckButton01
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_OptionCheckButton01_C::ExecuteUbergraph_WB_OptionCheckButton01(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_OptionCheckButton01.WB_OptionCheckButton01_C.ExecuteUbergraph_WB_OptionCheckButton01");
		
		UWB_OptionCheckButton01_C_ExecuteUbergraph_WB_OptionCheckButton01_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWB_OptionCheckButton01_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_OptionCheckButton01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_OptionCheckButton01.WB_OptionCheckButton01_C");
		return ptr;
	}

}


