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
	 * 		Name   -> Function WBP_MainMenu_NavBarButton_SubMenu.WBP_MainMenu_NavBarButton_SubMenu_C.GetSubMenuIndex
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            SubMenuIndex                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_MainMenu_NavBarButton_SubMenu_C::GetSubMenuIndex(int32_t* SubMenuIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MainMenu_NavBarButton_SubMenu.WBP_MainMenu_NavBarButton_SubMenu_C.GetSubMenuIndex");
		
		UWBP_MainMenu_NavBarButton_SubMenu_C_GetSubMenuIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SubMenuIndex != nullptr)
			*SubMenuIndex = params.SubMenuIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_MainMenu_NavBarButton_SubMenu.WBP_MainMenu_NavBarButton_SubMenu_C.SetSubMenuIndex
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewSubMenuIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_MainMenu_NavBarButton_SubMenu_C::SetSubMenuIndex(int32_t NewSubMenuIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MainMenu_NavBarButton_SubMenu.WBP_MainMenu_NavBarButton_SubMenu_C.SetSubMenuIndex");
		
		UWBP_MainMenu_NavBarButton_SubMenu_C_SetSubMenuIndex_Params params {};
		params.NewSubMenuIndex = NewSubMenuIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_MainMenu_NavBarButton_SubMenu.WBP_MainMenu_NavBarButton_SubMenu_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_MainMenu_NavBarButton_SubMenu_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MainMenu_NavBarButton_SubMenu.WBP_MainMenu_NavBarButton_SubMenu_C.PreConstruct");
		
		UWBP_MainMenu_NavBarButton_SubMenu_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_MainMenu_NavBarButton_SubMenu.WBP_MainMenu_NavBarButton_SubMenu_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWBP_MainMenu_NavBarButton_SubMenu_C::BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MainMenu_NavBarButton_SubMenu.WBP_MainMenu_NavBarButton_SubMenu_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_MainMenu_NavBarButton_SubMenu_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_MainMenu_NavBarButton_SubMenu.WBP_MainMenu_NavBarButton_SubMenu_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWBP_MainMenu_NavBarButton_SubMenu_C::BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MainMenu_NavBarButton_SubMenu.WBP_MainMenu_NavBarButton_SubMenu_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");
		
		UWBP_MainMenu_NavBarButton_SubMenu_C_BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_MainMenu_NavBarButton_SubMenu.WBP_MainMenu_NavBarButton_SubMenu_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWBP_MainMenu_NavBarButton_SubMenu_C::BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MainMenu_NavBarButton_SubMenu.WBP_MainMenu_NavBarButton_SubMenu_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature");
		
		UWBP_MainMenu_NavBarButton_SubMenu_C_BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_MainMenu_NavBarButton_SubMenu.WBP_MainMenu_NavBarButton_SubMenu_C.BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWBP_MainMenu_NavBarButton_SubMenu_C::BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MainMenu_NavBarButton_SubMenu.WBP_MainMenu_NavBarButton_SubMenu_C.BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");
		
		UWBP_MainMenu_NavBarButton_SubMenu_C_BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_MainMenu_NavBarButton_SubMenu.WBP_MainMenu_NavBarButton_SubMenu_C.BndEvt__Button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWBP_MainMenu_NavBarButton_SubMenu_C::BndEvt__Button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MainMenu_NavBarButton_SubMenu.WBP_MainMenu_NavBarButton_SubMenu_C.BndEvt__Button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");
		
		UWBP_MainMenu_NavBarButton_SubMenu_C_BndEvt__Button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_MainMenu_NavBarButton_SubMenu.WBP_MainMenu_NavBarButton_SubMenu_C.ExecuteUbergraph_WBP_MainMenu_NavBarButton_SubMenu
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_MainMenu_NavBarButton_SubMenu_C::ExecuteUbergraph_WBP_MainMenu_NavBarButton_SubMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MainMenu_NavBarButton_SubMenu.WBP_MainMenu_NavBarButton_SubMenu_C.ExecuteUbergraph_WBP_MainMenu_NavBarButton_SubMenu");
		
		UWBP_MainMenu_NavBarButton_SubMenu_C_ExecuteUbergraph_WBP_MainMenu_NavBarButton_SubMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_MainMenu_NavBarButton_SubMenu.WBP_MainMenu_NavBarButton_SubMenu_C.ButtonUnhovered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_MainMenu_NavBarButton_SubMenu_C::ButtonUnhovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MainMenu_NavBarButton_SubMenu.WBP_MainMenu_NavBarButton_SubMenu_C.ButtonUnhovered__DelegateSignature");
		
		UWBP_MainMenu_NavBarButton_SubMenu_C_ButtonUnhovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_MainMenu_NavBarButton_SubMenu.WBP_MainMenu_NavBarButton_SubMenu_C.ButtonHovered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_MainMenu_NavBarButton_SubMenu_C::ButtonHovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MainMenu_NavBarButton_SubMenu.WBP_MainMenu_NavBarButton_SubMenu_C.ButtonHovered__DelegateSignature");
		
		UWBP_MainMenu_NavBarButton_SubMenu_C_ButtonHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_MainMenu_NavBarButton_SubMenu.WBP_MainMenu_NavBarButton_SubMenu_C.ButtonReleased__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_MainMenu_NavBarButton_SubMenu_C::ButtonReleased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MainMenu_NavBarButton_SubMenu.WBP_MainMenu_NavBarButton_SubMenu_C.ButtonReleased__DelegateSignature");
		
		UWBP_MainMenu_NavBarButton_SubMenu_C_ButtonReleased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_MainMenu_NavBarButton_SubMenu.WBP_MainMenu_NavBarButton_SubMenu_C.ButtonPressed__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_MainMenu_NavBarButton_SubMenu_C::ButtonPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MainMenu_NavBarButton_SubMenu.WBP_MainMenu_NavBarButton_SubMenu_C.ButtonPressed__DelegateSignature");
		
		UWBP_MainMenu_NavBarButton_SubMenu_C_ButtonPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_MainMenu_NavBarButton_SubMenu.WBP_MainMenu_NavBarButton_SubMenu_C.ButtonClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWBP_MainMenu_NavBarButton_SubMenu_C*        ClickedBtn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_MainMenu_NavBarButton_SubMenu_C::ButtonClicked__DelegateSignature(class UWBP_MainMenu_NavBarButton_SubMenu_C* ClickedBtn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MainMenu_NavBarButton_SubMenu.WBP_MainMenu_NavBarButton_SubMenu_C.ButtonClicked__DelegateSignature");
		
		UWBP_MainMenu_NavBarButton_SubMenu_C_ButtonClicked__DelegateSignature_Params params {};
		params.ClickedBtn = ClickedBtn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_MainMenu_NavBarButton_SubMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_MainMenu_NavBarButton_SubMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_MainMenu_NavBarButton_SubMenu.WBP_MainMenu_NavBarButton_SubMenu_C");
		return ptr;
	}

}


