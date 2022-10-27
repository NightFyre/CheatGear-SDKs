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
	 * Function Challenge_BloodyHarvest_13_AnointedLegendary.Challenge_BloodyHarvest_13_AnointedLegendary_C.CheckAllSlots
	 */
	struct UChallenge_BloodyHarvest_13_AnointedLegendary_C_CheckAllSlots_Params
	{
	public:
		class AActor*                                              EquippedActor;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInventorySlotData*                                  SlotData;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Challenge_BloodyHarvest_13_AnointedLegendary.Challenge_BloodyHarvest_13_AnointedLegendary_C.CheckInvSlotIsFromLeague
	 */
	struct UChallenge_BloodyHarvest_13_AnointedLegendary_C_CheckInvSlotIsFromLeague_Params
	{
	public:
		class UInventorySlotData*                                  InvSlot;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsBHAnointedGear;                                        // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Y7PL[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Challenge_BloodyHarvest_13_AnointedLegendary.Challenge_BloodyHarvest_13_AnointedLegendary_C.OnInitChallengeInstance
	 */
	struct UChallenge_BloodyHarvest_13_AnointedLegendary_C_OnInitChallengeInstance_Params
	{
	public:
		class UChallengesComponent*                                OwningChallenges;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AGbxCharacter*                                       AssociatedCharacter;                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Challenge_BloodyHarvest_13_AnointedLegendary.Challenge_BloodyHarvest_13_AnointedLegendary_C.CompletedChallenge
	 */
	struct UChallenge_BloodyHarvest_13_AnointedLegendary_C_CompletedChallenge_Params
	{
	public:
		class AGbxPlayerController*                                CompletedPlayer;                                         // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Challenge_BloodyHarvest_13_AnointedLegendary.Challenge_BloodyHarvest_13_AnointedLegendary_C.ExecuteUbergraph_Challenge_BloodyHarvest_13_AnointedLegendary
	 */
	struct UChallenge_BloodyHarvest_13_AnointedLegendary_C_ExecuteUbergraph_Challenge_BloodyHarvest_13_AnointedLegendary_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_55HP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
