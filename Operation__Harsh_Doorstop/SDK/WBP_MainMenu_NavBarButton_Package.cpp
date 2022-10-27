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
	 * 		Name   -> Function WBP_MainMenu_NavBarButton.WBP_MainMenu_NavBarButton_C.UpdateAppearance
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_MainMenu_NavBarButton_C::UpdateAppearance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MainMenu_NavBarButton.WBP_MainMenu_NavBarButton_C.UpdateAppearance");
		
		UWBP_MainMenu_NavBarButton_C_UpdateAppearance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_MainMenu_NavBarButton.WBP_MainMenu_NavBarButton_C.SetActive
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewActive                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_MainMenu_NavBarButton_C::SetActive(bool bNewActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MainMenu_NavBarButton.WBP_MainMenu_NavBarButton_C.SetActive");
		
		UWBP_MainMenu_NavBarButton_C_SetActive_Params params {};
		params.bNewActive = bNewActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_MainMenu_NavBarButton.WBP_MainMenu_NavBarButton_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_MainMenu_NavBarButton_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MainMenu_NavBarButton.WBP_MainMenu_NavBarButton_C.PreConstruct");
		
		UWBP_MainMenu_NavBarButton_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_MainMenu_NavBarButton.WBP_MainMenu_NavBarButton_C.BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWBP_MainMenu_NavBarButton_C::BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MainMenu_NavBarButton.WBP_MainMenu_NavBarButton_C.BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_MainMenu_NavBarButton_C_BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_MainMenu_NavBarButton.WBP_MainMenu_NavBarButton_C.BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWBP_MainMenu_NavBarButton_C::BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MainMenu_NavBarButton.WBP_MainMenu_NavBarButton_C.BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");
		
		UWBP_MainMenu_NavBarButton_C_BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_MainMenu_NavBarButton.WBP_MainMenu_NavBarButton_C.BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWBP_MainMenu_NavBarButton_C::BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MainMenu_NavBarButton.WBP_MainMenu_NavBarButton_C.BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature");
		
		UWBP_MainMenu_NavBarButton_C_BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_MainMenu_NavBarButton.WBP_MainMenu_NavBarButton_C.BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWBP_MainMenu_NavBarButton_C::BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MainMenu_NavBarButton.WBP_MainMenu_NavBarButton_C.BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");
		
		UWBP_MainMenu_NavBarButton_C_BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_MainMenu_NavBarButton.WBP_MainMenu_NavBarButton_C.BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWBP_MainMenu_NavBarButton_C::BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MainMenu_NavBarButton.WBP_MainMenu_NavBarButton_C.BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");
		
		UWBP_MainMenu_NavBarButton_C_BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_MainMenu_NavBarButton.WBP_MainMenu_NavBarButton_C.OnInitialized
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWBP_MainMenu_NavBarButton_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MainMenu_NavBarButton.WBP_MainMenu_NavBarButton_C.OnInitialized");
		
		UWBP_MainMenu_NavBarButton_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_MainMenu_NavBarButton.WBP_MainMenu_NavBarButton_C.ExecuteUbergraph_WBP_MainMenu_NavBarButton
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_MainMenu_NavBarButton_C::ExecuteUbergraph_WBP_MainMenu_NavBarButton(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MainMenu_NavBarButton.WBP_MainMenu_NavBarButton_C.ExecuteUbergraph_WBP_MainMenu_NavBarButton");
		
		UWBP_MainMenu_NavBarButton_C_ExecuteUbergraph_WBP_MainMenu_NavBarButton_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_MainMenu_NavBarButton.WBP_MainMenu_NavBarButton_C.ButtonClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWBP_MainMenu_NavBarButton_C*                ClickedBtn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_MainMenu_NavBarButton_C::ButtonClicked__DelegateSignature(class UWBP_MainMenu_NavBarButton_C* ClickedBtn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MainMenu_NavBarButton.WBP_MainMenu_NavBarButton_C.ButtonClicked__DelegateSignature");
		
		UWBP_MainMenu_NavBarButton_C_ButtonClicked__DelegateSignature_Params params {};
		params.ClickedBtn = ClickedBtn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_MainMenu_NavBarButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_MainMenu_NavBarButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_MainMenu_NavBarButton.WBP_MainMenu_NavBarButton_C");
		return ptr;
	}

}


