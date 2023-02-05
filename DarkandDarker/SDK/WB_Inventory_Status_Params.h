#pragma once

/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function WB_Inventory_Status.WB_Inventory_Status_C.GetAttributeTextColor
	 */
	struct UWB_Inventory_Status_C_GetAttributeTextColor_Params
	{
	public:
		struct FGameplayAttributeData                              GameplayAttributeData;                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FSlateColor                                         SlateColor;                                              // 0x0010(0x0014)  (Parm, OutParm)
	};

	/**
	 * Function WB_Inventory_Status.WB_Inventory_Status_C.OnPhysicalReduction
	 */
	struct UWB_Inventory_Status_C_OnPhysicalReduction_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_Status.WB_Inventory_Status_C.SetBasePercentAttribute
	 */
	struct UWB_Inventory_Status_C_SetBasePercentAttribute_Params
	{
	public:
		struct FGameplayAttributeData                              GameplayAttributeData;                                   // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UTextBlock*                                          AttributeText;                                           // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Inventory_Status.WB_Inventory_Status_C.OnUtilityEffectiveness
	 */
	struct UWB_Inventory_Status_C_OnUtilityEffectiveness_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_Status.WB_Inventory_Status_C.OnMagicalDamageMod
	 */
	struct UWB_Inventory_Status_C_OnMagicalDamageMod_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_Status.WB_Inventory_Status_C.OnItemEquipSpeed
	 */
	struct UWB_Inventory_Status_C_OnItemEquipSpeed_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_Status.WB_Inventory_Status_C.OnPhysicalReductionArmorRating
	 */
	struct UWB_Inventory_Status_C_OnPhysicalReductionArmorRating_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_Status.WB_Inventory_Status_C.OnMagicalInteractionSpeed
	 */
	struct UWB_Inventory_Status_C_OnMagicalInteractionSpeed_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_Status.WB_Inventory_Status_C.OnMaxHealth
	 */
	struct UWB_Inventory_Status_C_OnMaxHealth_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_Status.WB_Inventory_Status_C.OnRegularInteractionSpeed
	 */
	struct UWB_Inventory_Status_C_OnRegularInteractionSpeed_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_Status.WB_Inventory_Status_C.OnMagicalPower
	 */
	struct UWB_Inventory_Status_C_OnMagicalPower_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_Status.WB_Inventory_Status_C.OnSpellCapacity
	 */
	struct UWB_Inventory_Status_C_OnSpellCapacity_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_Status.WB_Inventory_Status_C.OnHealth
	 */
	struct UWB_Inventory_Status_C_OnHealth_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_Status.WB_Inventory_Status_C.OnSpellPayload
	 */
	struct UWB_Inventory_Status_C_OnSpellPayload_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_Status.WB_Inventory_Status_C.OnPhysicalDamageMod
	 */
	struct UWB_Inventory_Status_C_OnPhysicalDamageMod_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_Status.WB_Inventory_Status_C.OnWeightLimit
	 */
	struct UWB_Inventory_Status_C_OnWeightLimit_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_Status.WB_Inventory_Status_C.OnWeight
	 */
	struct UWB_Inventory_Status_C_OnWeight_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_Status.WB_Inventory_Status_C.OnSpellCastingSpeed
	 */
	struct UWB_Inventory_Status_C_OnSpellCastingSpeed_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_Status.WB_Inventory_Status_C.OnPrimaryAbilityWidgetArray
	 */
	struct UWB_Inventory_Status_C_OnPrimaryAbilityWidgetArray_Params
	{
	public:
		TArray<class UItemTooltipStatWidgetData*>                  NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<class UItemTooltipStatWidgetData*>                  OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_Status.WB_Inventory_Status_C.OnPhysicalReductionBonus
	 */
	struct UWB_Inventory_Status_C_OnPhysicalReductionBonus_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_Status.WB_Inventory_Status_C.OnSecondaryAbilityWidgetArray
	 */
	struct UWB_Inventory_Status_C_OnSecondaryAbilityWidgetArray_Params
	{
	public:
		TArray<class UItemTooltipStatWidgetData*>                  NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<class UItemTooltipStatWidgetData*>                  OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_Status.WB_Inventory_Status_C.SetIntegerAttribute
	 */
	struct UWB_Inventory_Status_C_SetIntegerAttribute_Params
	{
	public:
		struct FGameplayAttributeData                              GameplayAttributeData;                                   // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UTextBlock*                                          AttributeText;                                           // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Inventory_Status.WB_Inventory_Status_C.OnPhysicalPower
	 */
	struct UWB_Inventory_Status_C_OnPhysicalPower_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_Status.WB_Inventory_Status_C.OnMagicalReduction
	 */
	struct UWB_Inventory_Status_C_OnMagicalReduction_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_Status.WB_Inventory_Status_C.OnMagicalReductionMagicResistance
	 */
	struct UWB_Inventory_Status_C_OnMagicalReductionMagicResistance_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_Status.WB_Inventory_Status_C.SetPercentAttribute
	 */
	struct UWB_Inventory_Status_C_SetPercentAttribute_Params
	{
	public:
		struct FGameplayAttributeData                              GameplayAttributeData;                                   // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UTextBlock*                                          AttributeText;                                           // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Inventory_Status.WB_Inventory_Status_C.OnArmorRating
	 */
	struct UWB_Inventory_Status_C_OnArmorRating_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_Status.WB_Inventory_Status_C.OnPlayerCharacterName
	 */
	struct UWB_Inventory_Status_C_OnPlayerCharacterName_Params
	{
	public:
		class FText                                                NewValue;                                                // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FText                                                OldValue;                                                // 0x0018(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_Status.WB_Inventory_Status_C.OnPhysicalDamageModPhysicalPower
	 */
	struct UWB_Inventory_Status_C_OnPhysicalDamageModPhysicalPower_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_Status.WB_Inventory_Status_C.OnAgility
	 */
	struct UWB_Inventory_Status_C_OnAgility_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_Status.WB_Inventory_Status_C.OnPhysicalDamageModBonus
	 */
	struct UWB_Inventory_Status_C_OnPhysicalDamageModBonus_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_Status.WB_Inventory_Status_C.OnResourcefulness
	 */
	struct UWB_Inventory_Status_C_OnResourcefulness_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_Status.WB_Inventory_Status_C.OnActionSpeed
	 */
	struct UWB_Inventory_Status_C_OnActionSpeed_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_Status.WB_Inventory_Status_C.OnMagicResistance
	 */
	struct UWB_Inventory_Status_C_OnMagicResistance_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_Status.WB_Inventory_Status_C.OnKnowledge
	 */
	struct UWB_Inventory_Status_C_OnKnowledge_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_Status.WB_Inventory_Status_C.OnMagicalReductionBonus
	 */
	struct UWB_Inventory_Status_C_OnMagicalReductionBonus_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_Status.WB_Inventory_Status_C.OnMagicalDamageModMagicalPower
	 */
	struct UWB_Inventory_Status_C_OnMagicalDamageModMagicalPower_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_Status.WB_Inventory_Status_C.OnMagicalDamageModBonus
	 */
	struct UWB_Inventory_Status_C_OnMagicalDamageModBonus_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_Status.WB_Inventory_Status_C.OnStrength
	 */
	struct UWB_Inventory_Status_C_OnStrength_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_Status.WB_Inventory_Status_C.OnMoveSpeed
	 */
	struct UWB_Inventory_Status_C_OnMoveSpeed_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_Status.WB_Inventory_Status_C.OnWill
	 */
	struct UWB_Inventory_Status_C_OnWill_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_Status.WB_Inventory_Status_C.BndEvt__WB_Inventory_Status_Btn_Detail_On_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWB_Inventory_Status_C_BndEvt__WB_Inventory_Status_Btn_Detail_On_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WB_Inventory_Status.WB_Inventory_Status_C.BndEvt__WB_Inventory_Status_Btn_Detail_Off_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWB_Inventory_Status_C_BndEvt__WB_Inventory_Status_Btn_Detail_Off_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WB_Inventory_Status.WB_Inventory_Status_C.ExecuteUbergraph_WB_Inventory_Status
	 */
	struct UWB_Inventory_Status_C_ExecuteUbergraph_WB_Inventory_Status_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_X6WP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
