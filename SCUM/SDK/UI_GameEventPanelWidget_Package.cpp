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
	 * 		Name   -> Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.GetDropdownVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_GameEventPanelWidget_C::GetDropdownVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.GetDropdownVisibility");
		
		UUI_GameEventPanelWidget_C_GetDropdownVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.RestoreSelected
	 * 		Flags  -> ()
	 */
	void UUI_GameEventPanelWidget_C::RestoreSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.RestoreSelected");
		
		UUI_GameEventPanelWidget_C_RestoreSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.UpdateSelection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UComboBoxString*                             Dropdown                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class AGameEventBase*>                      GameEvents                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FString                                      Selected                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUI_GameEventPanelWidget_C::UpdateSelection(class UComboBoxString* Dropdown, TArray<class AGameEventBase*>* GameEvents, const class FString& Selected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.UpdateSelection");
		
		UUI_GameEventPanelWidget_C_UpdateSelection_Params params {};
		params.Dropdown = Dropdown;
		params.Selected = Selected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GameEvents != nullptr)
			*GameEvents = params.GameEvents;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.GetSelectedEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGameEventBase*                              gameEvent                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_GameEventPanelWidget_C::GetSelectedEvent(class AGameEventBase** gameEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.GetSelectedEvent");
		
		UUI_GameEventPanelWidget_C_GetSelectedEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (gameEvent != nullptr)
			*gameEvent = params.gameEvent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.GetGameEventOptionString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGameEventBase*                              gameEvent                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      OptionString                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUI_GameEventPanelWidget_C::GetGameEventOptionString(class AGameEventBase* gameEvent, class FString* OptionString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.GetGameEventOptionString");
		
		UUI_GameEventPanelWidget_C_GetGameEventOptionString_Params params {};
		params.gameEvent = gameEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OptionString != nullptr)
			*OptionString = params.OptionString;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.SelectEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Current                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_GameEventPanelWidget_C::SelectEvent(int32_t Index, bool Current)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.SelectEvent");
		
		UUI_GameEventPanelWidget_C_SelectEvent_Params params {};
		params.Index = Index;
		params.Current = Current;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.AddCurrentEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGameEventBase*                              gameEvent                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_GameEventPanelWidget_C::AddCurrentEvent(class AGameEventBase* gameEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.AddCurrentEvent");
		
		UUI_GameEventPanelWidget_C_AddCurrentEvent_Params params {};
		params.gameEvent = gameEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.EmptyLists
	 * 		Flags  -> ()
	 */
	void UUI_GameEventPanelWidget_C::EmptyLists()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.EmptyLists");
		
		UUI_GameEventPanelWidget_C_EmptyLists_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.AddAnnouncedEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGameEventBase*                              gameEvent                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_GameEventPanelWidget_C::AddAnnouncedEvent(class AGameEventBase* gameEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.AddAnnouncedEvent");
		
		UUI_GameEventPanelWidget_C_AddAnnouncedEvent_Params params {};
		params.gameEvent = gameEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.OnUpdate
	 * 		Flags  -> ()
	 */
	void UUI_GameEventPanelWidget_C::OnUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.OnUpdate");
		
		UUI_GameEventPanelWidget_C_OnUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_GameEventPanelWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.Construct");
		
		UUI_GameEventPanelWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.OnOpened
	 * 		Flags  -> ()
	 */
	void UUI_GameEventPanelWidget_C::OnOpened()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.OnOpened");
		
		UUI_GameEventPanelWidget_C_OnOpened_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.OnClosed
	 * 		Flags  -> ()
	 */
	void UUI_GameEventPanelWidget_C::OnClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.OnClosed");
		
		UUI_GameEventPanelWidget_C_OnClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.OnEventComboBoxSelectionChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_GameEventPanelWidget_C::OnEventComboBoxSelectionChanged(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.OnEventComboBoxSelectionChanged");
		
		UUI_GameEventPanelWidget_C_OnEventComboBoxSelectionChanged_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.ExecuteUbergraph_UI_GameEventPanelWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_GameEventPanelWidget_C::ExecuteUbergraph_UI_GameEventPanelWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.ExecuteUbergraph_UI_GameEventPanelWidget");
		
		UUI_GameEventPanelWidget_C_ExecuteUbergraph_UI_GameEventPanelWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_GameEventPanelWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_GameEventPanelWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_GameEventPanelWidget.UI_GameEventPanelWidget_C");
		return ptr;
	}

}


