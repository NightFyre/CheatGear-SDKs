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
	 * 		Name   -> Function WBP_NetworkFailureOverlay.WBP_NetworkFailureOverlay_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_NetworkFailureOverlay_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NetworkFailureOverlay.WBP_NetworkFailureOverlay_C.Construct");
		
		UWBP_NetworkFailureOverlay_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_NetworkFailureOverlay.WBP_NetworkFailureOverlay_C.BndEvt__Button_Password_Ok_K2Node_ComponentBoundEvent_735_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_NetworkFailureOverlay_C::BndEvt__Button_Password_Ok_K2Node_ComponentBoundEvent_735_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NetworkFailureOverlay.WBP_NetworkFailureOverlay_C.BndEvt__Button_Password_Ok_K2Node_ComponentBoundEvent_735_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_NetworkFailureOverlay_C_BndEvt__Button_Password_Ok_K2Node_ComponentBoundEvent_735_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_NetworkFailureOverlay.WBP_NetworkFailureOverlay_C.RemoveLoadingScreen
	 * 		Flags  -> ()
	 */
	void UWBP_NetworkFailureOverlay_C::RemoveLoadingScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NetworkFailureOverlay.WBP_NetworkFailureOverlay_C.RemoveLoadingScreen");
		
		UWBP_NetworkFailureOverlay_C_RemoveLoadingScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_NetworkFailureOverlay.WBP_NetworkFailureOverlay_C.SetupFromErrorString
	 * 		Flags  -> ()
	 */
	void UWBP_NetworkFailureOverlay_C::SetupFromErrorString()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NetworkFailureOverlay.WBP_NetworkFailureOverlay_C.SetupFromErrorString");
		
		UWBP_NetworkFailureOverlay_C_SetupFromErrorString_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_NetworkFailureOverlay.WBP_NetworkFailureOverlay_C.SetupFromNetworkFailureType
	 * 		Flags  -> ()
	 */
	void UWBP_NetworkFailureOverlay_C::SetupFromNetworkFailureType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NetworkFailureOverlay.WBP_NetworkFailureOverlay_C.SetupFromNetworkFailureType");
		
		UWBP_NetworkFailureOverlay_C_SetupFromNetworkFailureType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_NetworkFailureOverlay.WBP_NetworkFailureOverlay_C.ExecuteUbergraph_WBP_NetworkFailureOverlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_NetworkFailureOverlay_C::ExecuteUbergraph_WBP_NetworkFailureOverlay(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NetworkFailureOverlay.WBP_NetworkFailureOverlay_C.ExecuteUbergraph_WBP_NetworkFailureOverlay");
		
		UWBP_NetworkFailureOverlay_C_ExecuteUbergraph_WBP_NetworkFailureOverlay_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_NetworkFailureOverlay_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_NetworkFailureOverlay_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_NetworkFailureOverlay.WBP_NetworkFailureOverlay_C");
		return ptr;
	}

}


