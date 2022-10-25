/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Settings_PageBase.BP_Settings_PageBase_C.OnCustomNavigation
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UWidget* UBP_Settings_PageBase_C::OnCustomNavigation(class UWidget* Widget, const class FName& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Settings_PageBase.BP_Settings_PageBase_C.OnCustomNavigation");
		
		UBP_Settings_PageBase_C_OnCustomNavigation_Params params {};
		params.Widget = Widget;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Settings_PageBase.BP_Settings_PageBase_C.ScrollToWidget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     NewWidget                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Settings_PageBase_C::ScrollToWidget(class UWidget* NewWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Settings_PageBase.BP_Settings_PageBase_C.ScrollToWidget");
		
		UBP_Settings_PageBase_C_ScrollToWidget_Params params {};
		params.NewWidget = NewWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Settings_PageBase.BP_Settings_PageBase_C.SetOwningSettingsMenu
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBP_MainMenu_Settings_C*                     SettingsMenu                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Settings_PageBase_C::SetOwningSettingsMenu(class UBP_MainMenu_Settings_C* SettingsMenu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Settings_PageBase.BP_Settings_PageBase_C.SetOwningSettingsMenu");
		
		UBP_Settings_PageBase_C_SetOwningSettingsMenu_Params params {};
		params.SettingsMenu = SettingsMenu;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Settings_PageBase.BP_Settings_PageBase_C.HideHoveredInfo
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Settings_PageBase_C::HideHoveredInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Settings_PageBase.BP_Settings_PageBase_C.HideHoveredInfo");
		
		UBP_Settings_PageBase_C_HideHoveredInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Settings_PageBase.BP_Settings_PageBase_C.SetHoveredInfoText
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        HeaderText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        DescriptionText                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_Settings_PageBase_C::SetHoveredInfoText(const class FText& HeaderText, const class FText& DescriptionText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Settings_PageBase.BP_Settings_PageBase_C.SetHoveredInfoText");
		
		UBP_Settings_PageBase_C_SetHoveredInfoText_Params params {};
		params.HeaderText = HeaderText;
		params.DescriptionText = DescriptionText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Settings_PageBase.BP_Settings_PageBase_C.SetOwningOptionsMenu
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UOptionsMenu*                                OptionsMenu                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Settings_PageBase_C::SetOwningOptionsMenu(class UOptionsMenu* OptionsMenu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Settings_PageBase.BP_Settings_PageBase_C.SetOwningOptionsMenu");
		
		UBP_Settings_PageBase_C_SetOwningOptionsMenu_Params params {};
		params.OptionsMenu = OptionsMenu;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Settings_PageBase.BP_Settings_PageBase_C.BndEvt__ButtonApplyChanges_K2Node_ComponentBoundEvent_5_OnPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_Settings_PageBase_C::BndEvt__ButtonApplyChanges_K2Node_ComponentBoundEvent_5_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Settings_PageBase.BP_Settings_PageBase_C.BndEvt__ButtonApplyChanges_K2Node_ComponentBoundEvent_5_OnPressed__DelegateSignature");
		
		UBP_Settings_PageBase_C_BndEvt__ButtonApplyChanges_K2Node_ComponentBoundEvent_5_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Settings_PageBase.BP_Settings_PageBase_C.BndEvt__ButtonReset_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_Settings_PageBase_C::BndEvt__ButtonReset_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Settings_PageBase.BP_Settings_PageBase_C.BndEvt__ButtonReset_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature");
		
		UBP_Settings_PageBase_C_BndEvt__ButtonReset_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Settings_PageBase.BP_Settings_PageBase_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_Settings_PageBase_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Settings_PageBase.BP_Settings_PageBase_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature");
		
		UBP_Settings_PageBase_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Settings_PageBase.BP_Settings_PageBase_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_Settings_PageBase_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Settings_PageBase.BP_Settings_PageBase_C.Construct");
		
		UBP_Settings_PageBase_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Settings_PageBase.BP_Settings_PageBase_C.ExecuteUbergraph_BP_Settings_PageBase
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Settings_PageBase_C::ExecuteUbergraph_BP_Settings_PageBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Settings_PageBase.BP_Settings_PageBase_C.ExecuteUbergraph_BP_Settings_PageBase");
		
		UBP_Settings_PageBase_C_ExecuteUbergraph_BP_Settings_PageBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Settings_PageBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Settings_PageBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_Settings_PageBase.BP_Settings_PageBase_C");
		return ptr;
	}

}


