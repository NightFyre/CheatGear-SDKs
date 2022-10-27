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
	 * 		Name   -> Function BP_BindSettings.BP_BindSettings_C.OnFocusReceived
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UBP_BindSettings_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BindSettings.BP_BindSettings_C.OnFocusReceived");
		
		UBP_BindSettings_C_OnFocusReceived_Params params {};
		params.MyGeometry = MyGeometry;
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_BindSettings.BP_BindSettings_C.CreateKeyConflictDialog
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FKeyBindingOption                           KeyBindingOption                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FKey                                        ConflictingKey                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		class FName                                        ConflictingActionName                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBP_OptionsRow_KeyInput_C*                   KeyWidget                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_BindSettings_C::CreateKeyConflictDialog(struct FKeyBindingOption* KeyBindingOption, const struct FKey& ConflictingKey, const class FName& ConflictingActionName, class UBP_OptionsRow_KeyInput_C* KeyWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BindSettings.BP_BindSettings_C.CreateKeyConflictDialog");
		
		UBP_BindSettings_C_CreateKeyConflictDialog_Params params {};
		params.ConflictingKey = ConflictingKey;
		params.ConflictingActionName = ConflictingActionName;
		params.KeyWidget = KeyWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (KeyBindingOption != nullptr)
			*KeyBindingOption = params.KeyBindingOption;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_BindSettings.BP_BindSettings_C.OnReplaceKeyBinding
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FKeyBindingOption                           BindingOption                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FKey                                        ConflictedKey                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		class FName                                        ConflictAction                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_BindSettings_C::OnReplaceKeyBinding(const struct FKeyBindingOption& BindingOption, const struct FKey& ConflictedKey, const class FName& ConflictAction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BindSettings.BP_BindSettings_C.OnReplaceKeyBinding");
		
		UBP_BindSettings_C_OnReplaceKeyBinding_Params params {};
		params.BindingOption = BindingOption;
		params.ConflictedKey = ConflictedKey;
		params.ConflictAction = ConflictAction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_BindSettings.BP_BindSettings_C.PopulateKeyBindings
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_BindSettings_C::PopulateKeyBindings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BindSettings.BP_BindSettings_C.PopulateKeyBindings");
		
		UBP_BindSettings_C_PopulateKeyBindings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_BindSettings.BP_BindSettings_C.OnActionKeyUpdated
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FKeyBindingOption                           KeyBindOption                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FInputChord                                 NewKey                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		class UBP_OptionsRow_KeyInput_C*                   KeyWidget                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_BindSettings_C::OnActionKeyUpdated(const struct FKeyBindingOption& KeyBindOption, const struct FInputChord& NewKey, class UBP_OptionsRow_KeyInput_C* KeyWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BindSettings.BP_BindSettings_C.OnActionKeyUpdated");
		
		UBP_BindSettings_C_OnActionKeyUpdated_Params params {};
		params.KeyBindOption = KeyBindOption;
		params.NewKey = NewKey;
		params.KeyWidget = KeyWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_BindSettings.BP_BindSettings_C.Get_BtnSaveChanges_bIsEnabled_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool UBP_BindSettings_C::Get_BtnSaveChanges_bIsEnabled_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BindSettings.BP_BindSettings_C.Get_BtnSaveChanges_bIsEnabled_1");
		
		UBP_BindSettings_C_Get_BtnSaveChanges_bIsEnabled_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_BindSettings.BP_BindSettings_C.PopulateOptions
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_BindSettings_C::PopulateOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BindSettings.BP_BindSettings_C.PopulateOptions");
		
		UBP_BindSettings_C_PopulateOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_BindSettings.BP_BindSettings_C.OnTabSelected
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_BindSettings_C::OnTabSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BindSettings.BP_BindSettings_C.OnTabSelected");
		
		UBP_BindSettings_C_OnTabSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_BindSettings.BP_BindSettings_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_BindSettings_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BindSettings.BP_BindSettings_C.Construct");
		
		UBP_BindSettings_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_BindSettings.BP_BindSettings_C.BlueprintResetToDefaults
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBP_BindSettings_C::BlueprintResetToDefaults()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BindSettings.BP_BindSettings_C.BlueprintResetToDefaults");
		
		UBP_BindSettings_C_BlueprintResetToDefaults_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_BindSettings.BP_BindSettings_C.BlueprintApplyChanges
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBP_BindSettings_C::BlueprintApplyChanges()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BindSettings.BP_BindSettings_C.BlueprintApplyChanges");
		
		UBP_BindSettings_C_BlueprintApplyChanges_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_BindSettings.BP_BindSettings_C.OnKeyBindHovered
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        HoveredKeyTitle                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        HoveredKeyDescription                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UBP_OptionsRow_BaseClass_C*                  OptionWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_BindSettings_C::OnKeyBindHovered(const class FText& HoveredKeyTitle, const class FText& HoveredKeyDescription, class UBP_OptionsRow_BaseClass_C* OptionWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BindSettings.BP_BindSettings_C.OnKeyBindHovered");
		
		UBP_BindSettings_C_OnKeyBindHovered_Params params {};
		params.HoveredKeyTitle = HoveredKeyTitle;
		params.HoveredKeyDescription = HoveredKeyDescription;
		params.OptionWidget = OptionWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_BindSettings.BP_BindSettings_C.BlueprintRefreshSettings
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBP_BindSettings_C::BlueprintRefreshSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BindSettings.BP_BindSettings_C.BlueprintRefreshSettings");
		
		UBP_BindSettings_C_BlueprintRefreshSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_BindSettings.BP_BindSettings_C.OnProfileBlockLoadedDelegate_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EProfileBlockType                                  Type                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromCloud                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_BindSettings_C::OnProfileBlockLoadedDelegate_Event_1(EProfileBlockType Type, bool bFromCloud)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BindSettings.BP_BindSettings_C.OnProfileBlockLoadedDelegate_Event_1");
		
		UBP_BindSettings_C_OnProfileBlockLoadedDelegate_Event_1_Params params {};
		params.Type = Type;
		params.bFromCloud = bFromCloud;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_BindSettings.BP_BindSettings_C.ExecuteUbergraph_BP_BindSettings
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_BindSettings_C::ExecuteUbergraph_BP_BindSettings(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BindSettings.BP_BindSettings_C.ExecuteUbergraph_BP_BindSettings");
		
		UBP_BindSettings_C_ExecuteUbergraph_BP_BindSettings_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_BindSettings_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_BindSettings_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_BindSettings.BP_BindSettings_C");
		return ptr;
	}

}


