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
	 * Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.DoPortalFX
	 */
	struct UAction_Beastmaster_RakkAttack_Base_C_DoPortalFX_Params
	{
	public:
		bool                                                       Var2Anim;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.EnsureGoodEnd
	 */
	struct UAction_Beastmaster_RakkAttack_Base_C_EnsureGoodEnd_Params
	{	};

	/**
	 * Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.GetNextHomingTarget
	 */
	struct UAction_Beastmaster_RakkAttack_Base_C_GetNextHomingTarget_Params
	{
	public:
		class AActor*                                              res;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.HandleRakkSpawn
	 */
	struct UAction_Beastmaster_RakkAttack_Base_C_HandleRakkSpawn_Params
	{
	public:
		class AProjectile_RakkAttack_Rakk_C*                       NewRakk;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.GetRakkSpawnTransform
	 */
	struct UAction_Beastmaster_RakkAttack_Base_C_GetRakkSpawnTransform_Params
	{
	public:
		struct FTransform                                          res;                                                     // 0x0000(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.SetMaxNumRakks
	 */
	struct UAction_Beastmaster_RakkAttack_Base_C_SetMaxNumRakks_Params
	{	};

	/**
	 * Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.GbxAsyncRequest_Spawned_244167AD48FDCDF195CF85BCDF0B8202
	 */
	struct UAction_Beastmaster_RakkAttack_Base_C_GbxAsyncRequest_Spawned_244167AD48FDCDF195CF85BCDF0B8202_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InstanceIndex;                                           // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.Notify_SpawnRakks
	 */
	struct UAction_Beastmaster_RakkAttack_Base_C_Notify_SpawnRakks_Params
	{	};

	/**
	 * Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.OnServerBegin
	 */
	struct UAction_Beastmaster_RakkAttack_Base_C_OnServerBegin_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.FindTargets
	 */
	struct UAction_Beastmaster_RakkAttack_Base_C_FindTargets_Params
	{	};

	/**
	 * Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.OnServerEnd
	 */
	struct UAction_Beastmaster_RakkAttack_Base_C_OnServerEnd_Params
	{
	public:
		EGbxActionEndState                                         ActionEndState;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2FMU[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.Notify_SpawnPortal
	 */
	struct UAction_Beastmaster_RakkAttack_Base_C_Notify_SpawnPortal_Params
	{	};

	/**
	 * Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.Notify_SpawnPortal_Var2
	 */
	struct UAction_Beastmaster_RakkAttack_Base_C_Notify_SpawnPortal_Var2_Params
	{	};

	/**
	 * Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.Notify_Rumble
	 */
	struct UAction_Beastmaster_RakkAttack_Base_C_Notify_Rumble_Params
	{	};

	/**
	 * Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.Notify_CameraShake
	 */
	struct UAction_Beastmaster_RakkAttack_Base_C_Notify_CameraShake_Params
	{	};

	/**
	 * Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.Notify_CameraShake_Var2
	 */
	struct UAction_Beastmaster_RakkAttack_Base_C_Notify_CameraShake_Var2_Params
	{	};

	/**
	 * Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.ExecuteUbergraph_Action_Beastmaster_RakkAttack_Base
	 */
	struct UAction_Beastmaster_RakkAttack_Base_C_ExecuteUbergraph_Action_Beastmaster_RakkAttack_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8NWH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
