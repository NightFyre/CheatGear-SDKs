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
	 * 		Name   -> Function WB_Inventory_CharacterStatus.WB_Inventory_CharacterStatus_C.GetAttributeTextColor
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayAttributeData                      GameplayAttributeData                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FSlateColor                                 SlateColor                                                 (Parm, OutParm)
	 */
	void UWB_Inventory_CharacterStatus_C::GetAttributeTextColor(const struct FGameplayAttributeData& GameplayAttributeData, struct FSlateColor* SlateColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Inventory_CharacterStatus.WB_Inventory_CharacterStatus_C.GetAttributeTextColor");
		
		UWB_Inventory_CharacterStatus_C_GetAttributeTextColor_Params params {};
		params.GameplayAttributeData = GameplayAttributeData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SlateColor != nullptr)
			*SlateColor = params.SlateColor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Inventory_CharacterStatus.WB_Inventory_CharacterStatus_C.SetIntegerAttribute
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayAttributeData                      GameplayAttributeData                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UTextBlock*                                  AttributeText                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Inventory_CharacterStatus_C::SetIntegerAttribute(const struct FGameplayAttributeData& GameplayAttributeData, class UTextBlock* AttributeText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Inventory_CharacterStatus.WB_Inventory_CharacterStatus_C.SetIntegerAttribute");
		
		UWB_Inventory_CharacterStatus_C_SetIntegerAttribute_Params params {};
		params.GameplayAttributeData = GameplayAttributeData;
		params.AttributeText = AttributeText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Inventory_CharacterStatus.WB_Inventory_CharacterStatus_C.OnStrength
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayAttributeData                      NewValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_Inventory_CharacterStatus_C::OnStrength(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Inventory_CharacterStatus.WB_Inventory_CharacterStatus_C.OnStrength");
		
		UWB_Inventory_CharacterStatus_C_OnStrength_Params params {};
		params.NewValue = NewValue;
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Inventory_CharacterStatus.WB_Inventory_CharacterStatus_C.OnAgility
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayAttributeData                      NewValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_Inventory_CharacterStatus_C::OnAgility(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Inventory_CharacterStatus.WB_Inventory_CharacterStatus_C.OnAgility");
		
		UWB_Inventory_CharacterStatus_C_OnAgility_Params params {};
		params.NewValue = NewValue;
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Inventory_CharacterStatus.WB_Inventory_CharacterStatus_C.OnKnowledge
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayAttributeData                      NewValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_Inventory_CharacterStatus_C::OnKnowledge(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Inventory_CharacterStatus.WB_Inventory_CharacterStatus_C.OnKnowledge");
		
		UWB_Inventory_CharacterStatus_C_OnKnowledge_Params params {};
		params.NewValue = NewValue;
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Inventory_CharacterStatus.WB_Inventory_CharacterStatus_C.OnWill
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayAttributeData                      NewValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_Inventory_CharacterStatus_C::OnWill(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Inventory_CharacterStatus.WB_Inventory_CharacterStatus_C.OnWill");
		
		UWB_Inventory_CharacterStatus_C_OnWill_Params params {};
		params.NewValue = NewValue;
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Inventory_CharacterStatus.WB_Inventory_CharacterStatus_C.OnHealth
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayAttributeData                      NewValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_Inventory_CharacterStatus_C::OnHealth(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Inventory_CharacterStatus.WB_Inventory_CharacterStatus_C.OnHealth");
		
		UWB_Inventory_CharacterStatus_C_OnHealth_Params params {};
		params.NewValue = NewValue;
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Inventory_CharacterStatus.WB_Inventory_CharacterStatus_C.OnMaxHealth
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayAttributeData                      NewValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_Inventory_CharacterStatus_C::OnMaxHealth(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Inventory_CharacterStatus.WB_Inventory_CharacterStatus_C.OnMaxHealth");
		
		UWB_Inventory_CharacterStatus_C_OnMaxHealth_Params params {};
		params.NewValue = NewValue;
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Inventory_CharacterStatus.WB_Inventory_CharacterStatus_C.OnResourcefulness
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayAttributeData                      NewValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_Inventory_CharacterStatus_C::OnResourcefulness(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Inventory_CharacterStatus.WB_Inventory_CharacterStatus_C.OnResourcefulness");
		
		UWB_Inventory_CharacterStatus_C_OnResourcefulness_Params params {};
		params.NewValue = NewValue;
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Inventory_CharacterStatus.WB_Inventory_CharacterStatus_C.OnWeight
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayAttributeData                      NewValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_Inventory_CharacterStatus_C::OnWeight(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Inventory_CharacterStatus.WB_Inventory_CharacterStatus_C.OnWeight");
		
		UWB_Inventory_CharacterStatus_C_OnWeight_Params params {};
		params.NewValue = NewValue;
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Inventory_CharacterStatus.WB_Inventory_CharacterStatus_C.OnWeightLimit
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayAttributeData                      NewValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_Inventory_CharacterStatus_C::OnWeightLimit(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Inventory_CharacterStatus.WB_Inventory_CharacterStatus_C.OnWeightLimit");
		
		UWB_Inventory_CharacterStatus_C_OnWeightLimit_Params params {};
		params.NewValue = NewValue;
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Inventory_CharacterStatus.WB_Inventory_CharacterStatus_C.OnSpellPayload
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayAttributeData                      NewValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_Inventory_CharacterStatus_C::OnSpellPayload(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Inventory_CharacterStatus.WB_Inventory_CharacterStatus_C.OnSpellPayload");
		
		UWB_Inventory_CharacterStatus_C_OnSpellPayload_Params params {};
		params.NewValue = NewValue;
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Inventory_CharacterStatus.WB_Inventory_CharacterStatus_C.OnSpellCapacity
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayAttributeData                      NewValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_Inventory_CharacterStatus_C::OnSpellCapacity(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Inventory_CharacterStatus.WB_Inventory_CharacterStatus_C.OnSpellCapacity");
		
		UWB_Inventory_CharacterStatus_C_OnSpellCapacity_Params params {};
		params.NewValue = NewValue;
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Inventory_CharacterStatus.WB_Inventory_CharacterStatus_C.OnUtilityEffectiveness
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayAttributeData                      NewValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_Inventory_CharacterStatus_C::OnUtilityEffectiveness(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Inventory_CharacterStatus.WB_Inventory_CharacterStatus_C.OnUtilityEffectiveness");
		
		UWB_Inventory_CharacterStatus_C_OnUtilityEffectiveness_Params params {};
		params.NewValue = NewValue;
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Inventory_CharacterStatus.WB_Inventory_CharacterStatus_C.SetSpellCapacityAttribute
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             BaseValue                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             CompareValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTextBlock*                                  AttributeText                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Inventory_CharacterStatus_C::SetSpellCapacityAttribute(double BaseValue, double CompareValue, class UTextBlock* AttributeText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Inventory_CharacterStatus.WB_Inventory_CharacterStatus_C.SetSpellCapacityAttribute");
		
		UWB_Inventory_CharacterStatus_C_SetSpellCapacityAttribute_Params params {};
		params.BaseValue = BaseValue;
		params.CompareValue = CompareValue;
		params.AttributeText = AttributeText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Inventory_CharacterStatus.WB_Inventory_CharacterStatus_C.ExecuteUbergraph_WB_Inventory_CharacterStatus
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Inventory_CharacterStatus_C::ExecuteUbergraph_WB_Inventory_CharacterStatus(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Inventory_CharacterStatus.WB_Inventory_CharacterStatus_C.ExecuteUbergraph_WB_Inventory_CharacterStatus");
		
		UWB_Inventory_CharacterStatus_C_ExecuteUbergraph_WB_Inventory_CharacterStatus_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWB_Inventory_CharacterStatus_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_Inventory_CharacterStatus_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_Inventory_CharacterStatus.WB_Inventory_CharacterStatus_C");
		return ptr;
	}

}


