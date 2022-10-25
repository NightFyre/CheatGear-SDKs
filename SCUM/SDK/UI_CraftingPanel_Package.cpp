/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * 		Name   -> Function UI_CraftingPanel.UI_CraftingPanel_C.On_SearchBarBackground_MouseButtonDown_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UUI_CraftingPanel_C::On_SearchBarBackground_MouseButtonDown_1(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingPanel.UI_CraftingPanel_C.On_SearchBarBackground_MouseButtonDown_1");
		
		UUI_CraftingPanel_C_On_SearchBarBackground_MouseButtonDown_1_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingPanel.UI_CraftingPanel_C.GetbIsEnabled_1
	 * 		Flags  -> ()
	 */
	bool UUI_CraftingPanel_C::GetbIsEnabled_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingPanel.UI_CraftingPanel_C.GetbIsEnabled_1");
		
		UUI_CraftingPanel_C_GetbIsEnabled_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingPanel.UI_CraftingPanel_C.GetIsCraftButtonEnabled
	 * 		Flags  -> ()
	 */
	bool UUI_CraftingPanel_C::GetIsCraftButtonEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingPanel.UI_CraftingPanel_C.GetIsCraftButtonEnabled");
		
		UUI_CraftingPanel_C_GetIsCraftButtonEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingPanel.UI_CraftingPanel_C.UpdateParameter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URetainerBox*                                RetainerBox                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWidget*                                     Box                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CraftingPanel_C::UpdateParameter(class URetainerBox* RetainerBox, class UWidget* Box)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingPanel.UI_CraftingPanel_C.UpdateParameter");
		
		UUI_CraftingPanel_C_UpdateParameter_Params params {};
		params.RetainerBox = RetainerBox;
		params.Box = Box;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingPanel.UI_CraftingPanel_C.BndEvt__CraftButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_CraftingPanel_C::BndEvt__CraftButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingPanel.UI_CraftingPanel_C.BndEvt__CraftButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");
		
		UUI_CraftingPanel_C_BndEvt__CraftButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingPanel.UI_CraftingPanel_C.BndEvt__CraftButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_CraftingPanel_C::BndEvt__CraftButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingPanel.UI_CraftingPanel_C.BndEvt__CraftButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature");
		
		UUI_CraftingPanel_C_BndEvt__CraftButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingPanel.UI_CraftingPanel_C.BndEvt__SearchBar_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUI_CraftingPanel_C::BndEvt__SearchBar_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingPanel.UI_CraftingPanel_C.BndEvt__SearchBar_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature");
		
		UUI_CraftingPanel_C_BndEvt__SearchBar_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingPanel.UI_CraftingPanel_C.ExecuteUbergraph_UI_CraftingPanel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CraftingPanel_C::ExecuteUbergraph_UI_CraftingPanel(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingPanel.UI_CraftingPanel_C.ExecuteUbergraph_UI_CraftingPanel");
		
		UUI_CraftingPanel_C_ExecuteUbergraph_UI_CraftingPanel_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_CraftingPanel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_CraftingPanel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_CraftingPanel.UI_CraftingPanel_C");
		return ptr;
	}

}


