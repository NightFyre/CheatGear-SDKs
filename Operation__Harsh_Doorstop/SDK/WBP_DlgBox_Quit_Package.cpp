/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DlgBox_Quit.WBP_DlgBox_Quit_C.OnMouseButtonDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UWBP_DlgBox_Quit_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DlgBox_Quit.WBP_DlgBox_Quit_C.OnMouseButtonDown");
		
		UWBP_DlgBox_Quit_C_OnMouseButtonDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DlgBox_Quit.WBP_DlgBox_Quit_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWBP_DlgBox_Quit_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DlgBox_Quit.WBP_DlgBox_Quit_C.Construct");
		
		UWBP_DlgBox_Quit_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DlgBox_Quit.WBP_DlgBox_Quit_C.BndEvt__YesBtn_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UWBP_DialogBox_Button_C*                     ClickedBtn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_DlgBox_Quit_C::BndEvt__YesBtn_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature(class UWBP_DialogBox_Button_C* ClickedBtn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DlgBox_Quit.WBP_DlgBox_Quit_C.BndEvt__YesBtn_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature");
		
		UWBP_DlgBox_Quit_C_BndEvt__YesBtn_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature_Params params {};
		params.ClickedBtn = ClickedBtn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DlgBox_Quit.WBP_DlgBox_Quit_C.BndEvt__NoBtn_K2Node_ComponentBoundEvent_3_ButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UWBP_DialogBox_Button_C*                     ClickedBtn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_DlgBox_Quit_C::BndEvt__NoBtn_K2Node_ComponentBoundEvent_3_ButtonClicked__DelegateSignature(class UWBP_DialogBox_Button_C* ClickedBtn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DlgBox_Quit.WBP_DlgBox_Quit_C.BndEvt__NoBtn_K2Node_ComponentBoundEvent_3_ButtonClicked__DelegateSignature");
		
		UWBP_DlgBox_Quit_C_BndEvt__NoBtn_K2Node_ComponentBoundEvent_3_ButtonClicked__DelegateSignature_Params params {};
		params.ClickedBtn = ClickedBtn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DlgBox_Quit.WBP_DlgBox_Quit_C.DummyInput
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_DlgBox_Quit_C::DummyInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DlgBox_Quit.WBP_DlgBox_Quit_C.DummyInput");
		
		UWBP_DlgBox_Quit_C_DummyInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DlgBox_Quit.WBP_DlgBox_Quit_C.ExecuteUbergraph_WBP_DlgBox_Quit
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_DlgBox_Quit_C::ExecuteUbergraph_WBP_DlgBox_Quit(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DlgBox_Quit.WBP_DlgBox_Quit_C.ExecuteUbergraph_WBP_DlgBox_Quit");
		
		UWBP_DlgBox_Quit_C_ExecuteUbergraph_WBP_DlgBox_Quit_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_DlgBox_Quit_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_DlgBox_Quit_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_DlgBox_Quit.WBP_DlgBox_Quit_C");
		return ptr;
	}

}


