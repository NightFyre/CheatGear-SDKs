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
	 * Function Ability_Artifact_IceSpiker.Ability_Artifact_IceSpiker_C.GbxAsyncRequest_Spawned_8F4C186441C83D0984C828A8A9143007
	 */
	struct UAbility_Artifact_IceSpiker_C_GbxAsyncRequest_Spawned_8F4C186441C83D0984C828A8A9143007_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InstanceIndex;                                           // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ability_Artifact_IceSpiker.Ability_Artifact_IceSpiker_C.GbxAsyncRequest_Spawned_3D3B284F40AA4A2CD27B3FA660DADB8E
	 */
	struct UAbility_Artifact_IceSpiker_C_GbxAsyncRequest_Spawned_3D3B284F40AA4A2CD27B3FA660DADB8E_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InstanceIndex;                                           // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ability_Artifact_IceSpiker.Ability_Artifact_IceSpiker_C.OnActivated
	 */
	struct UAbility_Artifact_IceSpiker_C_OnActivated_Params
	{	};

	/**
	 * Function Ability_Artifact_IceSpiker.Ability_Artifact_IceSpiker_C.OnDeactivated
	 */
	struct UAbility_Artifact_IceSpiker_C_OnDeactivated_Params
	{	};

	/**
	 * Function Ability_Artifact_IceSpiker.Ability_Artifact_IceSpiker_C.GroundSlam_End
	 */
	struct UAbility_Artifact_IceSpiker_C_GroundSlam_End_Params
	{
	public:
		struct FGroundSlamEndedDetails                             Details;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function Ability_Artifact_IceSpiker.Ability_Artifact_IceSpiker_C.ExecuteUbergraph_Ability_Artifact_IceSpiker
	 */
	struct UAbility_Artifact_IceSpiker_C_ExecuteUbergraph_Ability_Artifact_IceSpiker_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WO8K[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
