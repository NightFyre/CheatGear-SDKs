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
	 * 		Name   -> Function InputWidget.InputWidget_C.Check Key Blocker Bindings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_KeyBinding_C*                            CheckedKeyBinding                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FKey                                        SetKey                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UInputWidget_C::Check_Key_Blocker_Bindings(class UUI_KeyBinding_C* CheckedKeyBinding, const struct FKey& SetKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InputWidget.InputWidget_C.Check Key Blocker Bindings");
		
		UInputWidget_C_Check_Key_Blocker_Bindings_Params params {};
		params.CheckedKeyBinding = CheckedKeyBinding;
		params.SetKey = SetKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InputWidget.InputWidget_C.CheckGroupedKeyBindings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_KeyBinding_C*                            KeyBinding                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FKey                                        SetKey                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UInputWidget_C::CheckGroupedKeyBindings(class UUI_KeyBinding_C* KeyBinding, const struct FKey& SetKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InputWidget.InputWidget_C.CheckGroupedKeyBindings");
		
		UInputWidget_C_CheckGroupedKeyBindings_Params params {};
		params.KeyBinding = KeyBinding;
		params.SetKey = SetKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InputWidget.InputWidget_C.OnMouseButtonDoubleClick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   InMyGeometry                                               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               InMouseEvent                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UInputWidget_C::OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InputWidget.InputWidget_C.OnMouseButtonDoubleClick");
		
		UInputWidget_C_OnMouseButtonDoubleClick_Params params {};
		params.InMyGeometry = InMyGeometry;
		params.InMouseEvent = InMouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InputWidget.InputWidget_C.OnMouseButtonDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UInputWidget_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InputWidget.InputWidget_C.OnMouseButtonDown");
		
		UInputWidget_C_OnMouseButtonDown_Params params {};
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
	 * 		Name   -> Function InputWidget.InputWidget_C.OnMouseWheel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UInputWidget_C::OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InputWidget.InputWidget_C.OnMouseWheel");
		
		UInputWidget_C_OnMouseWheel_Params params {};
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
	 * 		Name   -> Function InputWidget.InputWidget_C.OnPreviewKeyDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UInputWidget_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InputWidget.InputWidget_C.OnPreviewKeyDown");
		
		UInputWidget_C_OnPreviewKeyDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InputWidget.InputWidget_C.OnPreviewMouseButtonDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UInputWidget_C::OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InputWidget.InputWidget_C.OnPreviewMouseButtonDown");
		
		UInputWidget_C_OnPreviewMouseButtonDown_Params params {};
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
	 * 		Name   -> Function InputWidget.InputWidget_C.Construct
	 * 		Flags  -> ()
	 */
	void UInputWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InputWidget.InputWidget_C.Construct");
		
		UInputWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InputWidget.InputWidget_C.OnKeyRebound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ActionName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FKey                                        actionKey                                                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		float                                              Scale                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInputWidget_C::OnKeyRebound(const class FName& ActionName, const struct FKey& actionKey, float Scale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InputWidget.InputWidget_C.OnKeyRebound");
		
		UInputWidget_C_OnKeyRebound_Params params {};
		params.ActionName = ActionName;
		params.actionKey = actionKey;
		params.Scale = Scale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InputWidget.InputWidget_C.OnKeyRebindInitiated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_KeyBinding_C*                            keyBindingWidget                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInputWidget_C::OnKeyRebindInitiated(class UUI_KeyBinding_C* keyBindingWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InputWidget.InputWidget_C.OnKeyRebindInitiated");
		
		UInputWidget_C_OnKeyRebindInitiated_Params params {};
		params.keyBindingWidget = keyBindingWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InputWidget.InputWidget_C.OnAxisRebound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ActionName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FKey                                        actionKey                                                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		float                                              Scale                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInputWidget_C::OnAxisRebound(const class FName& ActionName, const struct FKey& actionKey, float Scale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InputWidget.InputWidget_C.OnAxisRebound");
		
		UInputWidget_C_OnAxisRebound_Params params {};
		params.ActionName = ActionName;
		params.actionKey = actionKey;
		params.Scale = Scale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InputWidget.InputWidget_C.RefreshAllOptionSliders
	 * 		Flags  -> ()
	 */
	void UInputWidget_C::RefreshAllOptionSliders()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InputWidget.InputWidget_C.RefreshAllOptionSliders");
		
		UInputWidget_C_RefreshAllOptionSliders_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InputWidget.InputWidget_C.InitKeyBindings
	 * 		Flags  -> ()
	 */
	void UInputWidget_C::InitKeyBindings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InputWidget.InputWidget_C.InitKeyBindings");
		
		UInputWidget_C_InitKeyBindings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InputWidget.InputWidget_C.BndEvt__UI_OptionsSlider_K2Node_ComponentBoundEvent_667_OnValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OldIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UInputWidget_C::BndEvt__UI_OptionsSlider_K2Node_ComponentBoundEvent_667_OnValueChanged__DelegateSignature(int32_t Index, int32_t OldIndex, const class FText& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InputWidget.InputWidget_C.BndEvt__UI_OptionsSlider_K2Node_ComponentBoundEvent_667_OnValueChanged__DelegateSignature");
		
		UInputWidget_C_BndEvt__UI_OptionsSlider_K2Node_ComponentBoundEvent_667_OnValueChanged__DelegateSignature_Params params {};
		params.Index = Index;
		params.OldIndex = OldIndex;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InputWidget.InputWidget_C.ExecuteUbergraph_InputWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInputWidget_C::ExecuteUbergraph_InputWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InputWidget.InputWidget_C.ExecuteUbergraph_InputWidget");
		
		UInputWidget_C_ExecuteUbergraph_InputWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInputWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass InputWidget.InputWidget_C");
		return ptr;
	}

}


