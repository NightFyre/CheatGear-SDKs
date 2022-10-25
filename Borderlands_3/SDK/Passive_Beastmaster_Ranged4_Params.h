#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
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
	 * Function Passive_Beastmaster_Ranged4.Passive_Beastmaster_Ranged4_C.ApplyConditionalDamageModifiers
	 */
	struct UPassive_Beastmaster_Ranged4_C_ApplyConditionalDamageModifiers_Params
	{	};

	/**
	 * Function Passive_Beastmaster_Ranged4.Passive_Beastmaster_Ranged4_C.Ranged4_EquippedItem
	 */
	struct UPassive_Beastmaster_Ranged4_C_Ranged4_EquippedItem_Params
	{
	public:
		class AActor*                                              EquippedActor;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInventorySlotData*                                  SlotData;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Passive_Beastmaster_Ranged4.Passive_Beastmaster_Ranged4_C.Ranged4_UnequippedItem
	 */
	struct UPassive_Beastmaster_Ranged4_C_Ranged4_UnequippedItem_Params
	{
	public:
		class AActor*                                              UnequippedActor;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInventorySlotData*                                  SlotData;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Passive_Beastmaster_Ranged4.Passive_Beastmaster_Ranged4_C.RemoveConditionalModifiers
	 */
	struct UPassive_Beastmaster_Ranged4_C_RemoveConditionalModifiers_Params
	{	};

	/**
	 * Function Passive_Beastmaster_Ranged4.Passive_Beastmaster_Ranged4_C.OnActivated
	 */
	struct UPassive_Beastmaster_Ranged4_C_OnActivated_Params
	{	};

	/**
	 * Function Passive_Beastmaster_Ranged4.Passive_Beastmaster_Ranged4_C.OnResumed
	 */
	struct UPassive_Beastmaster_Ranged4_C_OnResumed_Params
	{	};

	/**
	 * Function Passive_Beastmaster_Ranged4.Passive_Beastmaster_Ranged4_C.ExecuteUbergraph_Passive_Beastmaster_Ranged4
	 */
	struct UPassive_Beastmaster_Ranged4_C_ExecuteUbergraph_Passive_Beastmaster_Ranged4_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
