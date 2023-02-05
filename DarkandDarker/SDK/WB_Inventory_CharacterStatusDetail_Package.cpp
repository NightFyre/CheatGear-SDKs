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
	 * 		Name   -> Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.GetAttributeTextColor
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             BaseValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             CurrentValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSlateColor                                 SlateColor                                                 (Parm, OutParm)
	 */
	void UWB_Inventory_CharacterStatusDetail_C::GetAttributeTextColor(double BaseValue, double CurrentValue, struct FSlateColor* SlateColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.GetAttributeTextColor");
		
		UWB_Inventory_CharacterStatusDetail_C_GetAttributeTextColor_Params params {};
		params.BaseValue = BaseValue;
		params.CurrentValue = CurrentValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SlateColor != nullptr)
			*SlateColor = params.SlateColor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.SetPercentAttribute
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayAttributeData                      GameplayAttributeData                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UTextBlock*                                  AttributeText                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Inventory_CharacterStatusDetail_C::SetPercentAttribute(const struct FGameplayAttributeData& GameplayAttributeData, class UTextBlock* AttributeText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.SetPercentAttribute");
		
		UWB_Inventory_CharacterStatusDetail_C_SetPercentAttribute_Params params {};
		params.GameplayAttributeData = GameplayAttributeData;
		params.AttributeText = AttributeText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.SetBasePercentAttribute
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             BaseValue                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             CurrentValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTextBlock*                                  AttributeText                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Inventory_CharacterStatusDetail_C::SetBasePercentAttribute(double BaseValue, double CurrentValue, class UTextBlock* AttributeText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.SetBasePercentAttribute");
		
		UWB_Inventory_CharacterStatusDetail_C_SetBasePercentAttribute_Params params {};
		params.BaseValue = BaseValue;
		params.CurrentValue = CurrentValue;
		params.AttributeText = AttributeText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.SetIntegerAttribute
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayAttributeData                      GameplayAttributeData                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UTextBlock*                                  AttributeText                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Inventory_CharacterStatusDetail_C::SetIntegerAttribute(const struct FGameplayAttributeData& GameplayAttributeData, class UTextBlock* AttributeText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.SetIntegerAttribute");
		
		UWB_Inventory_CharacterStatusDetail_C_SetIntegerAttribute_Params params {};
		params.GameplayAttributeData = GameplayAttributeData;
		params.AttributeText = AttributeText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnAgility
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayAttributeData                      NewValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_Inventory_CharacterStatusDetail_C::OnAgility(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnAgility");
		
		UWB_Inventory_CharacterStatusDetail_C_OnAgility_Params params {};
		params.NewValue = NewValue;
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnStrength
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayAttributeData                      NewValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_Inventory_CharacterStatusDetail_C::OnStrength(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnStrength");
		
		UWB_Inventory_CharacterStatusDetail_C_OnStrength_Params params {};
		params.NewValue = NewValue;
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnMaxHealth
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayAttributeData                      NewValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_Inventory_CharacterStatusDetail_C::OnMaxHealth(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnMaxHealth");
		
		UWB_Inventory_CharacterStatusDetail_C_OnMaxHealth_Params params {};
		params.NewValue = NewValue;
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnHealth
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayAttributeData                      NewValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_Inventory_CharacterStatusDetail_C::OnHealth(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnHealth");
		
		UWB_Inventory_CharacterStatusDetail_C_OnHealth_Params params {};
		params.NewValue = NewValue;
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnResourcefulness
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayAttributeData                      NewValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_Inventory_CharacterStatusDetail_C::OnResourcefulness(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnResourcefulness");
		
		UWB_Inventory_CharacterStatusDetail_C_OnResourcefulness_Params params {};
		params.NewValue = NewValue;
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnWeight
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayAttributeData                      NewValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_Inventory_CharacterStatusDetail_C::OnWeight(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnWeight");
		
		UWB_Inventory_CharacterStatusDetail_C_OnWeight_Params params {};
		params.NewValue = NewValue;
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnWill
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayAttributeData                      NewValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_Inventory_CharacterStatusDetail_C::OnWill(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnWill");
		
		UWB_Inventory_CharacterStatusDetail_C_OnWill_Params params {};
		params.NewValue = NewValue;
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnKnowledge
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayAttributeData                      NewValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_Inventory_CharacterStatusDetail_C::OnKnowledge(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnKnowledge");
		
		UWB_Inventory_CharacterStatusDetail_C_OnKnowledge_Params params {};
		params.NewValue = NewValue;
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnWeightLimit
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayAttributeData                      NewValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_Inventory_CharacterStatusDetail_C::OnWeightLimit(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnWeightLimit");
		
		UWB_Inventory_CharacterStatusDetail_C_OnWeightLimit_Params params {};
		params.NewValue = NewValue;
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnSpellPayload
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayAttributeData                      NewValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_Inventory_CharacterStatusDetail_C::OnSpellPayload(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnSpellPayload");
		
		UWB_Inventory_CharacterStatusDetail_C_OnSpellPayload_Params params {};
		params.NewValue = NewValue;
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnSpellCapacity
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayAttributeData                      NewValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_Inventory_CharacterStatusDetail_C::OnSpellCapacity(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnSpellCapacity");
		
		UWB_Inventory_CharacterStatusDetail_C_OnSpellCapacity_Params params {};
		params.NewValue = NewValue;
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnUtilityEffectiveness
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayAttributeData                      NewValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_Inventory_CharacterStatusDetail_C::OnUtilityEffectiveness(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnUtilityEffectiveness");
		
		UWB_Inventory_CharacterStatusDetail_C_OnUtilityEffectiveness_Params params {};
		params.NewValue = NewValue;
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnActionSpeed
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayAttributeData                      NewValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_Inventory_CharacterStatusDetail_C::OnActionSpeed(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnActionSpeed");
		
		UWB_Inventory_CharacterStatusDetail_C_OnActionSpeed_Params params {};
		params.NewValue = NewValue;
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnRegularInteractionSpeed
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayAttributeData                      NewValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_Inventory_CharacterStatusDetail_C::OnRegularInteractionSpeed(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnRegularInteractionSpeed");
		
		UWB_Inventory_CharacterStatusDetail_C_OnRegularInteractionSpeed_Params params {};
		params.NewValue = NewValue;
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnMagicalInteractionSpeed
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayAttributeData                      NewValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_Inventory_CharacterStatusDetail_C::OnMagicalInteractionSpeed(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnMagicalInteractionSpeed");
		
		UWB_Inventory_CharacterStatusDetail_C_OnMagicalInteractionSpeed_Params params {};
		params.NewValue = NewValue;
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnItemEquipSpeed
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayAttributeData                      NewValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_Inventory_CharacterStatusDetail_C::OnItemEquipSpeed(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnItemEquipSpeed");
		
		UWB_Inventory_CharacterStatusDetail_C_OnItemEquipSpeed_Params params {};
		params.NewValue = NewValue;
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnArmorRating
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayAttributeData                      NewValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_Inventory_CharacterStatusDetail_C::OnArmorRating(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnArmorRating");
		
		UWB_Inventory_CharacterStatusDetail_C_OnArmorRating_Params params {};
		params.NewValue = NewValue;
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnMagicResistance
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayAttributeData                      NewValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_Inventory_CharacterStatusDetail_C::OnMagicResistance(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnMagicResistance");
		
		UWB_Inventory_CharacterStatusDetail_C_OnMagicResistance_Params params {};
		params.NewValue = NewValue;
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnPhysicalPower
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayAttributeData                      NewValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_Inventory_CharacterStatusDetail_C::OnPhysicalPower(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnPhysicalPower");
		
		UWB_Inventory_CharacterStatusDetail_C_OnPhysicalPower_Params params {};
		params.NewValue = NewValue;
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnPhysicalDamageMod
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayAttributeData                      NewValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_Inventory_CharacterStatusDetail_C::OnPhysicalDamageMod(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnPhysicalDamageMod");
		
		UWB_Inventory_CharacterStatusDetail_C_OnPhysicalDamageMod_Params params {};
		params.NewValue = NewValue;
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnPhysicalDamageModPhysicalPower
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayAttributeData                      NewValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_Inventory_CharacterStatusDetail_C::OnPhysicalDamageModPhysicalPower(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnPhysicalDamageModPhysicalPower");
		
		UWB_Inventory_CharacterStatusDetail_C_OnPhysicalDamageModPhysicalPower_Params params {};
		params.NewValue = NewValue;
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnPhysicalDamageModBonus
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayAttributeData                      NewValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_Inventory_CharacterStatusDetail_C::OnPhysicalDamageModBonus(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnPhysicalDamageModBonus");
		
		UWB_Inventory_CharacterStatusDetail_C_OnPhysicalDamageModBonus_Params params {};
		params.NewValue = NewValue;
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnMagicalPower
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayAttributeData                      NewValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_Inventory_CharacterStatusDetail_C::OnMagicalPower(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnMagicalPower");
		
		UWB_Inventory_CharacterStatusDetail_C_OnMagicalPower_Params params {};
		params.NewValue = NewValue;
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnMagicalDamageModMagicalPower
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayAttributeData                      NewValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_Inventory_CharacterStatusDetail_C::OnMagicalDamageModMagicalPower(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnMagicalDamageModMagicalPower");
		
		UWB_Inventory_CharacterStatusDetail_C_OnMagicalDamageModMagicalPower_Params params {};
		params.NewValue = NewValue;
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnMagicalDamageModBonus
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayAttributeData                      NewValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_Inventory_CharacterStatusDetail_C::OnMagicalDamageModBonus(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnMagicalDamageModBonus");
		
		UWB_Inventory_CharacterStatusDetail_C_OnMagicalDamageModBonus_Params params {};
		params.NewValue = NewValue;
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnPrimaryAbilityWidgetArray
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UItemTooltipStatWidgetData*>          NewValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<class UItemTooltipStatWidgetData*>          OldValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_Inventory_CharacterStatusDetail_C::OnPrimaryAbilityWidgetArray(TArray<class UItemTooltipStatWidgetData*> NewValue, TArray<class UItemTooltipStatWidgetData*> OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnPrimaryAbilityWidgetArray");
		
		UWB_Inventory_CharacterStatusDetail_C_OnPrimaryAbilityWidgetArray_Params params {};
		params.NewValue = NewValue;
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnSecondaryAbilityWidgetArray
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UItemTooltipStatWidgetData*>          NewValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<class UItemTooltipStatWidgetData*>          OldValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_Inventory_CharacterStatusDetail_C::OnSecondaryAbilityWidgetArray(TArray<class UItemTooltipStatWidgetData*> NewValue, TArray<class UItemTooltipStatWidgetData*> OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnSecondaryAbilityWidgetArray");
		
		UWB_Inventory_CharacterStatusDetail_C_OnSecondaryAbilityWidgetArray_Params params {};
		params.NewValue = NewValue;
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnSpellCastingSpeed
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayAttributeData                      NewValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_Inventory_CharacterStatusDetail_C::OnSpellCastingSpeed(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnSpellCastingSpeed");
		
		UWB_Inventory_CharacterStatusDetail_C_OnSpellCastingSpeed_Params params {};
		params.NewValue = NewValue;
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnMagicalDamageMod
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayAttributeData                      NewValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_Inventory_CharacterStatusDetail_C::OnMagicalDamageMod(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnMagicalDamageMod");
		
		UWB_Inventory_CharacterStatusDetail_C_OnMagicalDamageMod_Params params {};
		params.NewValue = NewValue;
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnMoveSpeedWithModifier
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayAttributeData                      NewValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_Inventory_CharacterStatusDetail_C::OnMoveSpeedWithModifier(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnMoveSpeedWithModifier");
		
		UWB_Inventory_CharacterStatusDetail_C_OnMoveSpeedWithModifier_Params params {};
		params.NewValue = NewValue;
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.SetBaseIntegerAttribute
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             BaseValue                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             CurrentValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTextBlock*                                  AttributeText                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Inventory_CharacterStatusDetail_C::SetBaseIntegerAttribute(double BaseValue, double CurrentValue, class UTextBlock* AttributeText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.SetBaseIntegerAttribute");
		
		UWB_Inventory_CharacterStatusDetail_C_SetBaseIntegerAttribute_Params params {};
		params.BaseValue = BaseValue;
		params.CurrentValue = CurrentValue;
		params.AttributeText = AttributeText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnArmorPenetration
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayAttributeData                      NewValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_Inventory_CharacterStatusDetail_C::OnArmorPenetration(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnArmorPenetration");
		
		UWB_Inventory_CharacterStatusDetail_C_OnArmorPenetration_Params params {};
		params.NewValue = NewValue;
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnMagicPenetration
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayAttributeData                      NewValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_Inventory_CharacterStatusDetail_C::OnMagicPenetration(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnMagicPenetration");
		
		UWB_Inventory_CharacterStatusDetail_C_OnMagicPenetration_Params params {};
		params.NewValue = NewValue;
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnImpactPower
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayAttributeData                      NewValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_Inventory_CharacterStatusDetail_C::OnImpactPower(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnImpactPower");
		
		UWB_Inventory_CharacterStatusDetail_C_OnImpactPower_Params params {};
		params.NewValue = NewValue;
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnPrimaryWeaponImpactPower
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              OldValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Inventory_CharacterStatusDetail_C::OnPrimaryWeaponImpactPower(float NewValue, float OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnPrimaryWeaponImpactPower");
		
		UWB_Inventory_CharacterStatusDetail_C_OnPrimaryWeaponImpactPower_Params params {};
		params.NewValue = NewValue;
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnSecondaryWeaponImpactPower
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              OldValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Inventory_CharacterStatusDetail_C::OnSecondaryWeaponImpactPower(float NewValue, float OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnSecondaryWeaponImpactPower");
		
		UWB_Inventory_CharacterStatusDetail_C_OnSecondaryWeaponImpactPower_Params params {};
		params.NewValue = NewValue;
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnPhysicalReduction
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayAttributeData                      NewValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_Inventory_CharacterStatusDetail_C::OnPhysicalReduction(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnPhysicalReduction");
		
		UWB_Inventory_CharacterStatusDetail_C_OnPhysicalReduction_Params params {};
		params.NewValue = NewValue;
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnPhysicalReductionArmorRating
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayAttributeData                      NewValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_Inventory_CharacterStatusDetail_C::OnPhysicalReductionArmorRating(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnPhysicalReductionArmorRating");
		
		UWB_Inventory_CharacterStatusDetail_C_OnPhysicalReductionArmorRating_Params params {};
		params.NewValue = NewValue;
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnPhysicalReductionBonus
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayAttributeData                      NewValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_Inventory_CharacterStatusDetail_C::OnPhysicalReductionBonus(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnPhysicalReductionBonus");
		
		UWB_Inventory_CharacterStatusDetail_C_OnPhysicalReductionBonus_Params params {};
		params.NewValue = NewValue;
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnMagicalReduction
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayAttributeData                      NewValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_Inventory_CharacterStatusDetail_C::OnMagicalReduction(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnMagicalReduction");
		
		UWB_Inventory_CharacterStatusDetail_C_OnMagicalReduction_Params params {};
		params.NewValue = NewValue;
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnMagicalReductionMagicResistance
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayAttributeData                      NewValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_Inventory_CharacterStatusDetail_C::OnMagicalReductionMagicResistance(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnMagicalReductionMagicResistance");
		
		UWB_Inventory_CharacterStatusDetail_C_OnMagicalReductionMagicResistance_Params params {};
		params.NewValue = NewValue;
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnMagicalReductionBonus
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayAttributeData                      NewValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_Inventory_CharacterStatusDetail_C::OnMagicalReductionBonus(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnMagicalReductionBonus");
		
		UWB_Inventory_CharacterStatusDetail_C_OnMagicalReductionBonus_Params params {};
		params.NewValue = NewValue;
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.SetSpellCapacityAttribute
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             BaseValue                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             CompareValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTextBlock*                                  AttributeText                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Inventory_CharacterStatusDetail_C::SetSpellCapacityAttribute(double BaseValue, double CompareValue, class UTextBlock* AttributeText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.SetSpellCapacityAttribute");
		
		UWB_Inventory_CharacterStatusDetail_C_SetSpellCapacityAttribute_Params params {};
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
	 * 		Name   -> Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnBuffDurationMod
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayAttributeData                      NewValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_Inventory_CharacterStatusDetail_C::OnBuffDurationMod(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnBuffDurationMod");
		
		UWB_Inventory_CharacterStatusDetail_C_OnBuffDurationMod_Params params {};
		params.NewValue = NewValue;
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnDebuffDurationMod
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayAttributeData                      NewValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_Inventory_CharacterStatusDetail_C::OnDebuffDurationMod(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnDebuffDurationMod");
		
		UWB_Inventory_CharacterStatusDetail_C_OnDebuffDurationMod_Params params {};
		params.NewValue = NewValue;
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnProjectileReductionMod
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayAttributeData                      NewValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_Inventory_CharacterStatusDetail_C::OnProjectileReductionMod(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnProjectileReductionMod");
		
		UWB_Inventory_CharacterStatusDetail_C_OnProjectileReductionMod_Params params {};
		params.NewValue = NewValue;
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnHeadshotReductionMod
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayAttributeData                      NewValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_Inventory_CharacterStatusDetail_C::OnHeadshotReductionMod(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnHeadshotReductionMod");
		
		UWB_Inventory_CharacterStatusDetail_C_OnHeadshotReductionMod_Params params {};
		params.NewValue = NewValue;
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.ExecuteUbergraph_WB_Inventory_CharacterStatusDetail
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Inventory_CharacterStatusDetail_C::ExecuteUbergraph_WB_Inventory_CharacterStatusDetail(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.ExecuteUbergraph_WB_Inventory_CharacterStatusDetail");
		
		UWB_Inventory_CharacterStatusDetail_C_ExecuteUbergraph_WB_Inventory_CharacterStatusDetail_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWB_Inventory_CharacterStatusDetail_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_Inventory_CharacterStatusDetail_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C");
		return ptr;
	}

}


