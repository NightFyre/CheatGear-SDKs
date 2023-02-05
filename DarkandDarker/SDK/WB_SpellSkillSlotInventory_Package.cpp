/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_SpellSkillSlotInventory.WB_SpellSkillSlotInventory_C.OnMouseButtonUp
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UWB_SpellSkillSlotInventory_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_SpellSkillSlotInventory.WB_SpellSkillSlotInventory_C.OnMouseButtonUp");
		
		UWB_SpellSkillSlotInventory_C_OnMouseButtonUp_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_SpellSkillSlotInventory.WB_SpellSkillSlotInventory_C.OnPreviewMouseButtonDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UWB_SpellSkillSlotInventory_C::OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_SpellSkillSlotInventory.WB_SpellSkillSlotInventory_C.OnPreviewMouseButtonDown");
		
		UWB_SpellSkillSlotInventory_C_OnPreviewMouseButtonDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_SpellSkillSlotInventory.WB_SpellSkillSlotInventory_C.OnMouseButtonDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UWB_SpellSkillSlotInventory_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_SpellSkillSlotInventory.WB_SpellSkillSlotInventory_C.OnMouseButtonDown");
		
		UWB_SpellSkillSlotInventory_C_OnMouseButtonDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_SpellSkillSlotInventory.WB_SpellSkillSlotInventory_C.BndEvt__WB_PerkSlot_Btn_Perk_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWB_SpellSkillSlotInventory_C::BndEvt__WB_PerkSlot_Btn_Perk_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_SpellSkillSlotInventory.WB_SpellSkillSlotInventory_C.BndEvt__WB_PerkSlot_Btn_Perk_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");
		
		UWB_SpellSkillSlotInventory_C_BndEvt__WB_PerkSlot_Btn_Perk_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_SpellSkillSlotInventory.WB_SpellSkillSlotInventory_C.BndEvt__WB_PerkSlot_Btn_Perk_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWB_SpellSkillSlotInventory_C::BndEvt__WB_PerkSlot_Btn_Perk_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_SpellSkillSlotInventory.WB_SpellSkillSlotInventory_C.BndEvt__WB_PerkSlot_Btn_Perk_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UWB_SpellSkillSlotInventory_C_BndEvt__WB_PerkSlot_Btn_Perk_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_SpellSkillSlotInventory.WB_SpellSkillSlotInventory_C.BndEvt__WB_PerkSlot_Btn_Perk_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWB_SpellSkillSlotInventory_C::BndEvt__WB_PerkSlot_Btn_Perk_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_SpellSkillSlotInventory.WB_SpellSkillSlotInventory_C.BndEvt__WB_PerkSlot_Btn_Perk_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature");
		
		UWB_SpellSkillSlotInventory_C_BndEvt__WB_PerkSlot_Btn_Perk_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_SpellSkillSlotInventory.WB_SpellSkillSlotInventory_C.BndEvt__WB_PerkSlot_Btn_Perk_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWB_SpellSkillSlotInventory_C::BndEvt__WB_PerkSlot_Btn_Perk_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_SpellSkillSlotInventory.WB_SpellSkillSlotInventory_C.BndEvt__WB_PerkSlot_Btn_Perk_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature");
		
		UWB_SpellSkillSlotInventory_C_BndEvt__WB_PerkSlot_Btn_Perk_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_SpellSkillSlotInventory.WB_SpellSkillSlotInventory_C.BndEvt__WB_SkillSlotInventory_Btn_Perk_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWB_SpellSkillSlotInventory_C::BndEvt__WB_SkillSlotInventory_Btn_Perk_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_SpellSkillSlotInventory.WB_SpellSkillSlotInventory_C.BndEvt__WB_SkillSlotInventory_Btn_Perk_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");
		
		UWB_SpellSkillSlotInventory_C_BndEvt__WB_SkillSlotInventory_Btn_Perk_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_SpellSkillSlotInventory.WB_SpellSkillSlotInventory_C.OnPress
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWB_SpellSkillSlotInventory_C::OnPress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_SpellSkillSlotInventory.WB_SpellSkillSlotInventory_C.OnPress");
		
		UWB_SpellSkillSlotInventory_C_OnPress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_SpellSkillSlotInventory.WB_SpellSkillSlotInventory_C.OnRelease
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWB_SpellSkillSlotInventory_C::OnRelease()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_SpellSkillSlotInventory.WB_SpellSkillSlotInventory_C.OnRelease");
		
		UWB_SpellSkillSlotInventory_C_OnRelease_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_SpellSkillSlotInventory.WB_SpellSkillSlotInventory_C.OnClick
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWB_SpellSkillSlotInventory_C::OnClick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_SpellSkillSlotInventory.WB_SpellSkillSlotInventory_C.OnClick");
		
		UWB_SpellSkillSlotInventory_C_OnClick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_SpellSkillSlotInventory.WB_SpellSkillSlotInventory_C.ExecuteUbergraph_WB_SpellSkillSlotInventory
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_SpellSkillSlotInventory_C::ExecuteUbergraph_WB_SpellSkillSlotInventory(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_SpellSkillSlotInventory.WB_SpellSkillSlotInventory_C.ExecuteUbergraph_WB_SpellSkillSlotInventory");
		
		UWB_SpellSkillSlotInventory_C_ExecuteUbergraph_WB_SpellSkillSlotInventory_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWB_SpellSkillSlotInventory_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_SpellSkillSlotInventory_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_SpellSkillSlotInventory.WB_SpellSkillSlotInventory_C");
		return ptr;
	}

}


