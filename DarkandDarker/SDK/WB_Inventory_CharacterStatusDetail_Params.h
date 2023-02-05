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
	 * Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.GetAttributeTextColor
	 */
	struct UWB_Inventory_CharacterStatusDetail_C_GetAttributeTextColor_Params
	{
	public:
		double                                                     BaseValue;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     CurrentValue;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSlateColor                                         SlateColor;                                              // 0x0010(0x0014)  (Parm, OutParm)
	};

	/**
	 * Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.SetPercentAttribute
	 */
	struct UWB_Inventory_CharacterStatusDetail_C_SetPercentAttribute_Params
	{
	public:
		struct FGameplayAttributeData                              GameplayAttributeData;                                   // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UTextBlock*                                          AttributeText;                                           // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.SetBasePercentAttribute
	 */
	struct UWB_Inventory_CharacterStatusDetail_C_SetBasePercentAttribute_Params
	{
	public:
		double                                                     BaseValue;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     CurrentValue;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UTextBlock*                                          AttributeText;                                           // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.SetIntegerAttribute
	 */
	struct UWB_Inventory_CharacterStatusDetail_C_SetIntegerAttribute_Params
	{
	public:
		struct FGameplayAttributeData                              GameplayAttributeData;                                   // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UTextBlock*                                          AttributeText;                                           // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnAgility
	 */
	struct UWB_Inventory_CharacterStatusDetail_C_OnAgility_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnStrength
	 */
	struct UWB_Inventory_CharacterStatusDetail_C_OnStrength_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnMaxHealth
	 */
	struct UWB_Inventory_CharacterStatusDetail_C_OnMaxHealth_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnHealth
	 */
	struct UWB_Inventory_CharacterStatusDetail_C_OnHealth_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnResourcefulness
	 */
	struct UWB_Inventory_CharacterStatusDetail_C_OnResourcefulness_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnWeight
	 */
	struct UWB_Inventory_CharacterStatusDetail_C_OnWeight_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnWill
	 */
	struct UWB_Inventory_CharacterStatusDetail_C_OnWill_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnKnowledge
	 */
	struct UWB_Inventory_CharacterStatusDetail_C_OnKnowledge_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnWeightLimit
	 */
	struct UWB_Inventory_CharacterStatusDetail_C_OnWeightLimit_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnSpellPayload
	 */
	struct UWB_Inventory_CharacterStatusDetail_C_OnSpellPayload_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnSpellCapacity
	 */
	struct UWB_Inventory_CharacterStatusDetail_C_OnSpellCapacity_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnUtilityEffectiveness
	 */
	struct UWB_Inventory_CharacterStatusDetail_C_OnUtilityEffectiveness_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnActionSpeed
	 */
	struct UWB_Inventory_CharacterStatusDetail_C_OnActionSpeed_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnRegularInteractionSpeed
	 */
	struct UWB_Inventory_CharacterStatusDetail_C_OnRegularInteractionSpeed_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnMagicalInteractionSpeed
	 */
	struct UWB_Inventory_CharacterStatusDetail_C_OnMagicalInteractionSpeed_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnItemEquipSpeed
	 */
	struct UWB_Inventory_CharacterStatusDetail_C_OnItemEquipSpeed_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnArmorRating
	 */
	struct UWB_Inventory_CharacterStatusDetail_C_OnArmorRating_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnMagicResistance
	 */
	struct UWB_Inventory_CharacterStatusDetail_C_OnMagicResistance_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnPhysicalPower
	 */
	struct UWB_Inventory_CharacterStatusDetail_C_OnPhysicalPower_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnPhysicalDamageMod
	 */
	struct UWB_Inventory_CharacterStatusDetail_C_OnPhysicalDamageMod_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnPhysicalDamageModPhysicalPower
	 */
	struct UWB_Inventory_CharacterStatusDetail_C_OnPhysicalDamageModPhysicalPower_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnPhysicalDamageModBonus
	 */
	struct UWB_Inventory_CharacterStatusDetail_C_OnPhysicalDamageModBonus_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnMagicalPower
	 */
	struct UWB_Inventory_CharacterStatusDetail_C_OnMagicalPower_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnMagicalDamageModMagicalPower
	 */
	struct UWB_Inventory_CharacterStatusDetail_C_OnMagicalDamageModMagicalPower_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnMagicalDamageModBonus
	 */
	struct UWB_Inventory_CharacterStatusDetail_C_OnMagicalDamageModBonus_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnPrimaryAbilityWidgetArray
	 */
	struct UWB_Inventory_CharacterStatusDetail_C_OnPrimaryAbilityWidgetArray_Params
	{
	public:
		TArray<class UItemTooltipStatWidgetData*>                  NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<class UItemTooltipStatWidgetData*>                  OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnSecondaryAbilityWidgetArray
	 */
	struct UWB_Inventory_CharacterStatusDetail_C_OnSecondaryAbilityWidgetArray_Params
	{
	public:
		TArray<class UItemTooltipStatWidgetData*>                  NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<class UItemTooltipStatWidgetData*>                  OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnSpellCastingSpeed
	 */
	struct UWB_Inventory_CharacterStatusDetail_C_OnSpellCastingSpeed_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnMagicalDamageMod
	 */
	struct UWB_Inventory_CharacterStatusDetail_C_OnMagicalDamageMod_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnMoveSpeedWithModifier
	 */
	struct UWB_Inventory_CharacterStatusDetail_C_OnMoveSpeedWithModifier_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.SetBaseIntegerAttribute
	 */
	struct UWB_Inventory_CharacterStatusDetail_C_SetBaseIntegerAttribute_Params
	{
	public:
		double                                                     BaseValue;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     CurrentValue;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UTextBlock*                                          AttributeText;                                           // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnArmorPenetration
	 */
	struct UWB_Inventory_CharacterStatusDetail_C_OnArmorPenetration_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnMagicPenetration
	 */
	struct UWB_Inventory_CharacterStatusDetail_C_OnMagicPenetration_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnImpactPower
	 */
	struct UWB_Inventory_CharacterStatusDetail_C_OnImpactPower_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnPrimaryWeaponImpactPower
	 */
	struct UWB_Inventory_CharacterStatusDetail_C_OnPrimaryWeaponImpactPower_Params
	{
	public:
		float                                                      NewValue;                                                // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      OldValue;                                                // 0x0004(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnSecondaryWeaponImpactPower
	 */
	struct UWB_Inventory_CharacterStatusDetail_C_OnSecondaryWeaponImpactPower_Params
	{
	public:
		float                                                      NewValue;                                                // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      OldValue;                                                // 0x0004(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnPhysicalReduction
	 */
	struct UWB_Inventory_CharacterStatusDetail_C_OnPhysicalReduction_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnPhysicalReductionArmorRating
	 */
	struct UWB_Inventory_CharacterStatusDetail_C_OnPhysicalReductionArmorRating_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnPhysicalReductionBonus
	 */
	struct UWB_Inventory_CharacterStatusDetail_C_OnPhysicalReductionBonus_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnMagicalReduction
	 */
	struct UWB_Inventory_CharacterStatusDetail_C_OnMagicalReduction_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnMagicalReductionMagicResistance
	 */
	struct UWB_Inventory_CharacterStatusDetail_C_OnMagicalReductionMagicResistance_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnMagicalReductionBonus
	 */
	struct UWB_Inventory_CharacterStatusDetail_C_OnMagicalReductionBonus_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.SetSpellCapacityAttribute
	 */
	struct UWB_Inventory_CharacterStatusDetail_C_SetSpellCapacityAttribute_Params
	{
	public:
		double                                                     BaseValue;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     CompareValue;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UTextBlock*                                          AttributeText;                                           // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnBuffDurationMod
	 */
	struct UWB_Inventory_CharacterStatusDetail_C_OnBuffDurationMod_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnDebuffDurationMod
	 */
	struct UWB_Inventory_CharacterStatusDetail_C_OnDebuffDurationMod_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnProjectileReductionMod
	 */
	struct UWB_Inventory_CharacterStatusDetail_C_OnProjectileReductionMod_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.OnHeadshotReductionMod
	 */
	struct UWB_Inventory_CharacterStatusDetail_C_OnHeadshotReductionMod_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C.ExecuteUbergraph_WB_Inventory_CharacterStatusDetail
	 */
	struct UWB_Inventory_CharacterStatusDetail_C_ExecuteUbergraph_WB_Inventory_CharacterStatusDetail_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_M2ZX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
