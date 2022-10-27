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
	 * 		Name   -> Function WBP_Controls_KeyBind_AddNewKeyBind.WBP_Controls_KeyBind_AddNewKeyBind_C.BndEvt__Button_AddBind_K2Node_ComponentBoundEvent_1024_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Controls_KeyBind_AddNewKeyBind_C::BndEvt__Button_AddBind_K2Node_ComponentBoundEvent_1024_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Controls_KeyBind_AddNewKeyBind.WBP_Controls_KeyBind_AddNewKeyBind_C.BndEvt__Button_AddBind_K2Node_ComponentBoundEvent_1024_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_Controls_KeyBind_AddNewKeyBind_C_BndEvt__Button_AddBind_K2Node_ComponentBoundEvent_1024_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Controls_KeyBind_AddNewKeyBind.WBP_Controls_KeyBind_AddNewKeyBind_C.ExecuteUbergraph_WBP_Controls_KeyBind_AddNewKeyBind
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Controls_KeyBind_AddNewKeyBind_C::ExecuteUbergraph_WBP_Controls_KeyBind_AddNewKeyBind(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Controls_KeyBind_AddNewKeyBind.WBP_Controls_KeyBind_AddNewKeyBind_C.ExecuteUbergraph_WBP_Controls_KeyBind_AddNewKeyBind");
		
		UWBP_Controls_KeyBind_AddNewKeyBind_C_ExecuteUbergraph_WBP_Controls_KeyBind_AddNewKeyBind_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Controls_KeyBind_AddNewKeyBind.WBP_Controls_KeyBind_AddNewKeyBind_C.OnAddNewKeyBind__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Controls_KeyBind_AddNewKeyBind_C::OnAddNewKeyBind__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Controls_KeyBind_AddNewKeyBind.WBP_Controls_KeyBind_AddNewKeyBind_C.OnAddNewKeyBind__DelegateSignature");
		
		UWBP_Controls_KeyBind_AddNewKeyBind_C_OnAddNewKeyBind__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Controls_KeyBind_AddNewKeyBind_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Controls_KeyBind_AddNewKeyBind_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Controls_KeyBind_AddNewKeyBind.WBP_Controls_KeyBind_AddNewKeyBind_C");
		return ptr;
	}

}


