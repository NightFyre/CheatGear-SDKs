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
	 * Function WB_Inventory_CharacterStatus.WB_Inventory_CharacterStatus_C.GetAttributeTextColor
	 */
	struct UWB_Inventory_CharacterStatus_C_GetAttributeTextColor_Params
	{
	public:
		struct FGameplayAttributeData                              GameplayAttributeData;                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FSlateColor                                         SlateColor;                                              // 0x0010(0x0014)  (Parm, OutParm)
	};

	/**
	 * Function WB_Inventory_CharacterStatus.WB_Inventory_CharacterStatus_C.SetIntegerAttribute
	 */
	struct UWB_Inventory_CharacterStatus_C_SetIntegerAttribute_Params
	{
	public:
		struct FGameplayAttributeData                              GameplayAttributeData;                                   // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UTextBlock*                                          AttributeText;                                           // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Inventory_CharacterStatus.WB_Inventory_CharacterStatus_C.OnStrength
	 */
	struct UWB_Inventory_CharacterStatus_C_OnStrength_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_CharacterStatus.WB_Inventory_CharacterStatus_C.OnAgility
	 */
	struct UWB_Inventory_CharacterStatus_C_OnAgility_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_CharacterStatus.WB_Inventory_CharacterStatus_C.OnKnowledge
	 */
	struct UWB_Inventory_CharacterStatus_C_OnKnowledge_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_CharacterStatus.WB_Inventory_CharacterStatus_C.OnWill
	 */
	struct UWB_Inventory_CharacterStatus_C_OnWill_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_CharacterStatus.WB_Inventory_CharacterStatus_C.OnHealth
	 */
	struct UWB_Inventory_CharacterStatus_C_OnHealth_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_CharacterStatus.WB_Inventory_CharacterStatus_C.OnMaxHealth
	 */
	struct UWB_Inventory_CharacterStatus_C_OnMaxHealth_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_CharacterStatus.WB_Inventory_CharacterStatus_C.OnResourcefulness
	 */
	struct UWB_Inventory_CharacterStatus_C_OnResourcefulness_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_CharacterStatus.WB_Inventory_CharacterStatus_C.OnWeight
	 */
	struct UWB_Inventory_CharacterStatus_C_OnWeight_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_CharacterStatus.WB_Inventory_CharacterStatus_C.OnWeightLimit
	 */
	struct UWB_Inventory_CharacterStatus_C_OnWeightLimit_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_CharacterStatus.WB_Inventory_CharacterStatus_C.OnSpellPayload
	 */
	struct UWB_Inventory_CharacterStatus_C_OnSpellPayload_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_CharacterStatus.WB_Inventory_CharacterStatus_C.OnSpellCapacity
	 */
	struct UWB_Inventory_CharacterStatus_C_OnSpellCapacity_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_CharacterStatus.WB_Inventory_CharacterStatus_C.OnUtilityEffectiveness
	 */
	struct UWB_Inventory_CharacterStatus_C_OnUtilityEffectiveness_Params
	{
	public:
		struct FGameplayAttributeData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayAttributeData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Inventory_CharacterStatus.WB_Inventory_CharacterStatus_C.SetSpellCapacityAttribute
	 */
	struct UWB_Inventory_CharacterStatus_C_SetSpellCapacityAttribute_Params
	{
	public:
		double                                                     BaseValue;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     CompareValue;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UTextBlock*                                          AttributeText;                                           // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Inventory_CharacterStatus.WB_Inventory_CharacterStatus_C.ExecuteUbergraph_WB_Inventory_CharacterStatus
	 */
	struct UWB_Inventory_CharacterStatus_C_ExecuteUbergraph_WB_Inventory_CharacterStatus_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LQTB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
