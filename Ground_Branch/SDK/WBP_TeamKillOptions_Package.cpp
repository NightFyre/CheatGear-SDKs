/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * 		Name   -> Function WBP_TeamKillOptions.WBP_TeamKillOptions_C.BndEvt__Button_Forgive_K2Node_ComponentBoundEvent_85_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_TeamKillOptions_C::BndEvt__Button_Forgive_K2Node_ComponentBoundEvent_85_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_TeamKillOptions.WBP_TeamKillOptions_C.BndEvt__Button_Forgive_K2Node_ComponentBoundEvent_85_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_TeamKillOptions_C_BndEvt__Button_Forgive_K2Node_ComponentBoundEvent_85_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_TeamKillOptions.WBP_TeamKillOptions_C.ShowMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_TeamKillOptions_C::ShowMessage(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_TeamKillOptions.WBP_TeamKillOptions_C.ShowMessage");
		
		UWBP_TeamKillOptions_C_ShowMessage_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_TeamKillOptions.WBP_TeamKillOptions_C.BndEvt__Button_Report_K2Node_ComponentBoundEvent_81_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_TeamKillOptions_C::BndEvt__Button_Report_K2Node_ComponentBoundEvent_81_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_TeamKillOptions.WBP_TeamKillOptions_C.BndEvt__Button_Report_K2Node_ComponentBoundEvent_81_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_TeamKillOptions_C_BndEvt__Button_Report_K2Node_ComponentBoundEvent_81_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_TeamKillOptions.WBP_TeamKillOptions_C.Init
	 * 		Flags  -> ()
	 */
	void UWBP_TeamKillOptions_C::Init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_TeamKillOptions.WBP_TeamKillOptions_C.Init");
		
		UWBP_TeamKillOptions_C_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_TeamKillOptions.WBP_TeamKillOptions_C.ExecuteUbergraph_WBP_TeamKillOptions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_TeamKillOptions_C::ExecuteUbergraph_WBP_TeamKillOptions(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_TeamKillOptions.WBP_TeamKillOptions_C.ExecuteUbergraph_WBP_TeamKillOptions");
		
		UWBP_TeamKillOptions_C_ExecuteUbergraph_WBP_TeamKillOptions_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_TeamKillOptions_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_TeamKillOptions_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_TeamKillOptions.WBP_TeamKillOptions_C");
		return ptr;
	}

}


