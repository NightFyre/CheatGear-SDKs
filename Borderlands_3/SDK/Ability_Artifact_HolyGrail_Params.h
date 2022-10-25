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
	 * Function Ability_Artifact_HolyGrail.Ability_Artifact_HolyGrail_C.OnActivated
	 */
	struct UAbility_Artifact_HolyGrail_C_OnActivated_Params
	{	};

	/**
	 * Function Ability_Artifact_HolyGrail.Ability_Artifact_HolyGrail_C.OnRegistered
	 */
	struct UAbility_Artifact_HolyGrail_C_OnRegistered_Params
	{	};

	/**
	 * Function Ability_Artifact_HolyGrail.Ability_Artifact_HolyGrail_C.OnRevivingStopped
	 */
	struct UAbility_Artifact_HolyGrail_C_OnRevivingStopped_Params
	{
	public:
		bool                                                       IsSuccessful;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ability_Artifact_HolyGrail.Ability_Artifact_HolyGrail_C.OnReviveStart
	 */
	struct UAbility_Artifact_HolyGrail_C_OnReviveStart_Params
	{
	public:
		class AActor*                                              ActorBeingRevived;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ability_Artifact_HolyGrail.Ability_Artifact_HolyGrail_C.ExecuteUbergraph_Ability_Artifact_HolyGrail
	 */
	struct UAbility_Artifact_HolyGrail_C_ExecuteUbergraph_Ability_Artifact_HolyGrail_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
