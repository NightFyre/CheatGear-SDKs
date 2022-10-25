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
	 * Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.OperativeShoulderCannonCreateLightProjectile
	 */
	struct AIO_Operative_ShoulderCannon_C_OperativeShoulderCannonCreateLightProjectile_Params
	{
	public:
		bool                                                       res;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SHQI[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.OperativeShoulderCannonSetState
	 */
	struct AIO_Operative_ShoulderCannon_C_OperativeShoulderCannonSetState_Params
	{
	public:
		EOperativeShoulderCannon                                   NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       res;                                                     // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.OperativeFireShoulderCannon
	 */
	struct AIO_Operative_ShoulderCannon_C_OperativeFireShoulderCannon_Params
	{
	public:
		bool                                                       res;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BB1N[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.OperativeShoulderCannonDigistructFinished
	 */
	struct AIO_Operative_ShoulderCannon_C_OperativeShoulderCannonDigistructFinished_Params
	{
	public:
		bool                                                       DigistructIn;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       res;                                                     // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.TryCannonMod5
	 */
	struct AIO_Operative_ShoulderCannon_C_TryCannonMod5_Params
	{
	public:
		class UObject*                                             DamageType;                                              // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamagedActor;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       res;                                                     // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CYMB[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.TryCannonMod4
	 */
	struct AIO_Operative_ShoulderCannon_C_TryCannonMod4_Params
	{
	public:
		bool                                                       WarCrit;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       res;                                                     // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XG1I[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.TryCannonMod3
	 */
	struct AIO_Operative_ShoulderCannon_C_TryCannonMod3_Params
	{
	public:
		class AActor*                                              DamagedActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       WasCritOrDeath;                                          // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       res;                                                     // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.CanBePulled
	 */
	struct AIO_Operative_ShoulderCannon_C_CanBePulled_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       res;                                                     // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VOGW[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.PlayCannonFeedback
	 */
	struct AIO_Operative_ShoulderCannon_C_PlayCannonFeedback_Params
	{	};

	/**
	 * Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.AttachToOwner
	 */
	struct AIO_Operative_ShoulderCannon_C_AttachToOwner_Params
	{	};

	/**
	 * Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.GetFireAction
	 */
	struct AIO_Operative_ShoulderCannon_C_GetFireAction_Params
	{
	public:
		class UClass*                                              res;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.GetShoulderCannonDamage
	 */
	struct AIO_Operative_ShoulderCannon_C_GetShoulderCannonDamage_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_A8B7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.OnBeginReload
	 */
	struct AIO_Operative_ShoulderCannon_C_OnBeginReload_Params
	{	};

	/**
	 * Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.OnFininshedDespawned
	 */
	struct AIO_Operative_ShoulderCannon_C_OnFininshedDespawned_Params
	{	};

	/**
	 * Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.OnDespawning
	 */
	struct AIO_Operative_ShoulderCannon_C_OnDespawning_Params
	{	};

	/**
	 * Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.OnCannonFired
	 */
	struct AIO_Operative_ShoulderCannon_C_OnCannonFired_Params
	{	};

	/**
	 * Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.OnCannonCreated
	 */
	struct AIO_Operative_ShoulderCannon_C_OnCannonCreated_Params
	{	};

	/**
	 * Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.OnRep_CannonState
	 */
	struct AIO_Operative_ShoulderCannon_C_OnRep_CannonState_Params
	{	};

	/**
	 * Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.UserConstructionScript
	 */
	struct AIO_Operative_ShoulderCannon_C_UserConstructionScript_Params
	{	};

	/**
	 * Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.BeginReloadAnim
	 */
	struct AIO_Operative_ShoulderCannon_C_BeginReloadAnim_Params
	{	};

	/**
	 * Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.EndReload
	 */
	struct AIO_Operative_ShoulderCannon_C_EndReload_Params
	{	};

	/**
	 * Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.OperativeShoulderCannonReload
	 */
	struct AIO_Operative_ShoulderCannon_C_OperativeShoulderCannonReload_Params
	{
	public:
		bool                                                       Start;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.OperativeRemoveShoulderCannon
	 */
	struct AIO_Operative_ShoulderCannon_C_OperativeRemoveShoulderCannon_Params
	{
	public:
		bool                                                       Fast;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.StartIdleAfterFireTimer
	 */
	struct AIO_Operative_ShoulderCannon_C_StartIdleAfterFireTimer_Params
	{	};

	/**
	 * Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.IdleToUnequip
	 */
	struct AIO_Operative_ShoulderCannon_C_IdleToUnequip_Params
	{	};

	/**
	 * Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.TransitionToUnequipState
	 */
	struct AIO_Operative_ShoulderCannon_C_TransitionToUnequipState_Params
	{	};

	/**
	 * Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.StartUnequippedIdle
	 */
	struct AIO_Operative_ShoulderCannon_C_StartUnequippedIdle_Params
	{	};

	/**
	 * Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.ShoulderCannon_OnCausedDeath
	 */
	struct AIO_Operative_ShoulderCannon_C_ShoulderCannon_OnCausedDeath_Params
	{
	public:
		class UDamageComponent*                                    Damaged;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCausedDeathDetails                                 Details;                                                 // 0x0008(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.BeginCannonFireAnim
	 */
	struct AIO_Operative_ShoulderCannon_C_BeginCannonFireAnim_Params
	{	};

	/**
	 * Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.ShoulderCannon_OnCausedAnyDamage
	 */
	struct AIO_Operative_ShoulderCannon_C_ShoulderCannon_OnCausedAnyDamage_Params
	{
	public:
		class AActor*                                              DamageInstigator;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Damage;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NHZL[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGbxDamageType*                                      DamageType;                                              // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDamageSource*                                       DamageSource;                                            // 0x0018(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamagedActor;                                            // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCausedDamageDetails                                Details;                                                 // 0x0028(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	};

	/**
	 * Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.ReceiveBeginPlay
	 */
	struct AIO_Operative_ShoulderCannon_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.Audio_PlayFiringSound
	 */
	struct AIO_Operative_ShoulderCannon_C_Audio_PlayFiringSound_Params
	{	};

	/**
	 * Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.ExecuteUbergraph_IO_Operative_ShoulderCannon
	 */
	struct AIO_Operative_ShoulderCannon_C_ExecuteUbergraph_IO_Operative_ShoulderCannon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_S3PP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
