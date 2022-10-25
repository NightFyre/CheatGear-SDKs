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
	 * 		Name   -> Function BP_InGameMenu_CosmeticSelect.BP_InGameMenu_CosmeticSelect_C.OnAnalogValueChanged
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FAnalogInputEvent                           InAnalogInputEvent                                         (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UBP_InGameMenu_CosmeticSelect_C::OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_CosmeticSelect.BP_InGameMenu_CosmeticSelect_C.OnAnalogValueChanged");
		
		UBP_InGameMenu_CosmeticSelect_C_OnAnalogValueChanged_Params params {};
		params.MyGeometry = MyGeometry;
		params.InAnalogInputEvent = InAnalogInputEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_CosmeticSelect.BP_InGameMenu_CosmeticSelect_C.OnMouseMove
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UBP_InGameMenu_CosmeticSelect_C::OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_CosmeticSelect.BP_InGameMenu_CosmeticSelect_C.OnMouseMove");
		
		UBP_InGameMenu_CosmeticSelect_C_OnMouseMove_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_CosmeticSelect.BP_InGameMenu_CosmeticSelect_C.OnMouseButtonUp
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UBP_InGameMenu_CosmeticSelect_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_CosmeticSelect.BP_InGameMenu_CosmeticSelect_C.OnMouseButtonUp");
		
		UBP_InGameMenu_CosmeticSelect_C_OnMouseButtonUp_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_CosmeticSelect.BP_InGameMenu_CosmeticSelect_C.OnMouseButtonDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UBP_InGameMenu_CosmeticSelect_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_CosmeticSelect.BP_InGameMenu_CosmeticSelect_C.OnMouseButtonDown");
		
		UBP_InGameMenu_CosmeticSelect_C_OnMouseButtonDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_CosmeticSelect.BP_InGameMenu_CosmeticSelect_C.ResetCharacterRotation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_CosmeticSelect_C::ResetCharacterRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_CosmeticSelect.BP_InGameMenu_CosmeticSelect_C.ResetCharacterRotation");
		
		UBP_InGameMenu_CosmeticSelect_C_ResetCharacterRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_CosmeticSelect.BP_InGameMenu_CosmeticSelect_C.AddCharacterRotation
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_CosmeticSelect_C::AddCharacterRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_CosmeticSelect.BP_InGameMenu_CosmeticSelect_C.AddCharacterRotation");
		
		UBP_InGameMenu_CosmeticSelect_C_AddCharacterRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_CosmeticSelect.BP_InGameMenu_CosmeticSelect_C.OnFocusReceived
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UBP_InGameMenu_CosmeticSelect_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_CosmeticSelect.BP_InGameMenu_CosmeticSelect_C.OnFocusReceived");
		
		UBP_InGameMenu_CosmeticSelect_C_OnFocusReceived_Params params {};
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
	 * 		Name   -> Function BP_InGameMenu_CosmeticSelect.BP_InGameMenu_CosmeticSelect_C.SavePreset
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_CosmeticSelect_C::SavePreset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_CosmeticSelect.BP_InGameMenu_CosmeticSelect_C.SavePreset");
		
		UBP_InGameMenu_CosmeticSelect_C_SavePreset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_CosmeticSelect.BP_InGameMenu_CosmeticSelect_C.SelectCosmeticFromSave
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_CosmeticSelect_C::SelectCosmeticFromSave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_CosmeticSelect.BP_InGameMenu_CosmeticSelect_C.SelectCosmeticFromSave");
		
		UBP_InGameMenu_CosmeticSelect_C_SelectCosmeticFromSave_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_CosmeticSelect.BP_InGameMenu_CosmeticSelect_C.LoadPreset
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_InGameMenu_CosmeticSelect_C::LoadPreset(const class FText& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_CosmeticSelect.BP_InGameMenu_CosmeticSelect_C.LoadPreset");
		
		UBP_InGameMenu_CosmeticSelect_C_LoadPreset_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_CosmeticSelect.BP_InGameMenu_CosmeticSelect_C.OnClickPreset
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        PresetName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_InGameMenu_CosmeticSelect_C::OnClickPreset(const class FText& PresetName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_CosmeticSelect.BP_InGameMenu_CosmeticSelect_C.OnClickPreset");
		
		UBP_InGameMenu_CosmeticSelect_C_OnClickPreset_Params params {};
		params.PresetName = PresetName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_CosmeticSelect.BP_InGameMenu_CosmeticSelect_C.OnTeamInfoRep
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		unsigned char                                      TeamId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_CosmeticSelect_C::OnTeamInfoRep(unsigned char TeamId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_CosmeticSelect.BP_InGameMenu_CosmeticSelect_C.OnTeamInfoRep");
		
		UBP_InGameMenu_CosmeticSelect_C_OnTeamInfoRep_Params params {};
		params.TeamId = TeamId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_CosmeticSelect.BP_InGameMenu_CosmeticSelect_C.PopulatePresets
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_CosmeticSelect_C::PopulatePresets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_CosmeticSelect.BP_InGameMenu_CosmeticSelect_C.PopulatePresets");
		
		UBP_InGameMenu_CosmeticSelect_C_PopulatePresets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_CosmeticSelect.BP_InGameMenu_CosmeticSelect_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_InGameMenu_CosmeticSelect_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_CosmeticSelect.BP_InGameMenu_CosmeticSelect_C.Construct");
		
		UBP_InGameMenu_CosmeticSelect_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_CosmeticSelect.BP_InGameMenu_CosmeticSelect_C.OnPanelClosed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_CosmeticSelect_C::OnPanelClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_CosmeticSelect.BP_InGameMenu_CosmeticSelect_C.OnPanelClosed");
		
		UBP_InGameMenu_CosmeticSelect_C_OnPanelClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_CosmeticSelect.BP_InGameMenu_CosmeticSelect_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_InGameMenu_CosmeticSelect_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_CosmeticSelect.BP_InGameMenu_CosmeticSelect_C.Destruct");
		
		UBP_InGameMenu_CosmeticSelect_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_CosmeticSelect.BP_InGameMenu_CosmeticSelect_C.OnPanelOpened
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_CosmeticSelect_C::OnPanelOpened()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_CosmeticSelect.BP_InGameMenu_CosmeticSelect_C.OnPanelOpened");
		
		UBP_InGameMenu_CosmeticSelect_C_OnPanelOpened_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_CosmeticSelect.BP_InGameMenu_CosmeticSelect_C.OnConfirmPreset
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_CosmeticSelect_C::OnConfirmPreset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_CosmeticSelect.BP_InGameMenu_CosmeticSelect_C.OnConfirmPreset");
		
		UBP_InGameMenu_CosmeticSelect_C_OnConfirmPreset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_CosmeticSelect.BP_InGameMenu_CosmeticSelect_C.BndEvt__BtnConfirmGamepad_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_InGameMenu_CosmeticSelect_C::BndEvt__BtnConfirmGamepad_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_CosmeticSelect.BP_InGameMenu_CosmeticSelect_C.BndEvt__BtnConfirmGamepad_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature");
		
		UBP_InGameMenu_CosmeticSelect_C_BndEvt__BtnConfirmGamepad_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_CosmeticSelect.BP_InGameMenu_CosmeticSelect_C.OnItemHovered
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     Ref                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_CosmeticSelect_C::OnItemHovered(class UWidget* Ref)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_CosmeticSelect.BP_InGameMenu_CosmeticSelect_C.OnItemHovered");
		
		UBP_InGameMenu_CosmeticSelect_C_OnItemHovered_Params params {};
		params.Ref = Ref;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_CosmeticSelect.BP_InGameMenu_CosmeticSelect_C.OnMouseLeave
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_InGameMenu_CosmeticSelect_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_CosmeticSelect.BP_InGameMenu_CosmeticSelect_C.OnMouseLeave");
		
		UBP_InGameMenu_CosmeticSelect_C_OnMouseLeave_Params params {};
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_CosmeticSelect.BP_InGameMenu_CosmeticSelect_C.ExecuteUbergraph_BP_InGameMenu_CosmeticSelect
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_CosmeticSelect_C::ExecuteUbergraph_BP_InGameMenu_CosmeticSelect(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_CosmeticSelect.BP_InGameMenu_CosmeticSelect_C.ExecuteUbergraph_BP_InGameMenu_CosmeticSelect");
		
		UBP_InGameMenu_CosmeticSelect_C_ExecuteUbergraph_BP_InGameMenu_CosmeticSelect_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_CosmeticSelect.BP_InGameMenu_CosmeticSelect_C.OnConfirmCosmeticPreset__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_CosmeticSelect_C::OnConfirmCosmeticPreset__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_CosmeticSelect.BP_InGameMenu_CosmeticSelect_C.OnConfirmCosmeticPreset__DelegateSignature");
		
		UBP_InGameMenu_CosmeticSelect_C_OnConfirmCosmeticPreset__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_InGameMenu_CosmeticSelect_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_InGameMenu_CosmeticSelect_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_InGameMenu_CosmeticSelect.BP_InGameMenu_CosmeticSelect_C");
		return ptr;
	}

}


