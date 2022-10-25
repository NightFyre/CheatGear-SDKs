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
	 * Function BPWeap_SM_TED_PatMk3.BPWeap_SM_TED_PatMk3_C.Tediore_WeaponData
	 */
	struct ABPWeap_SM_TED_PatMk3_C_Tediore_WeaponData_Params
	{
	public:
		float                                                      DamageRadius;                                            // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NL8P[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              DamageTypeClass;                                         // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NumMirvProjectiles;                                      // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      FireRate;                                                // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      LoadedAmmo;                                              // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ThrowType;                                               // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPWeap_SM_TED_PatMk3.BPWeap_SM_TED_PatMk3_C.TryAdvancingAudio
	 */
	struct ABPWeap_SM_TED_PatMk3_C_TryAdvancingAudio_Params
	{	};

	/**
	 * Function BPWeap_SM_TED_PatMk3.BPWeap_SM_TED_PatMk3_C.UserConstructionScript
	 */
	struct ABPWeap_SM_TED_PatMk3_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BPWeap_SM_TED_PatMk3.BPWeap_SM_TED_PatMk3_C.WeaponAttached
	 */
	struct ABPWeap_SM_TED_PatMk3_C_WeaponAttached_Params
	{	};

	/**
	 * Function BPWeap_SM_TED_PatMk3.BPWeap_SM_TED_PatMk3_C.EquipEventNotify
	 */
	struct ABPWeap_SM_TED_PatMk3_C_EquipEventNotify_Params
	{	};

	/**
	 * Function BPWeap_SM_TED_PatMk3.BPWeap_SM_TED_PatMk3_C.WeaponPutDownEvent
	 */
	struct ABPWeap_SM_TED_PatMk3_C_WeaponPutDownEvent_Params
	{
	public:
		class AWeapon*                                             EventWeapon;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPWeap_SM_TED_PatMk3.BPWeap_SM_TED_PatMk3_C.OnKilledEnemy_Event
	 */
	struct ABPWeap_SM_TED_PatMk3_C_OnKilledEnemy_Event_Params
	{
	public:
		class UDamageComponent*                                    Damaged;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCausedDeathDetails                                 Details;                                                 // 0x0008(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPWeap_SM_TED_PatMk3.BPWeap_SM_TED_PatMk3_C.ReceiveBeginPlay
	 */
	struct ABPWeap_SM_TED_PatMk3_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPWeap_SM_TED_PatMk3.BPWeap_SM_TED_PatMk3_C.ExecuteUbergraph_BPWeap_SM_TED_PatMk3
	 */
	struct ABPWeap_SM_TED_PatMk3_C_ExecuteUbergraph_BPWeap_SM_TED_PatMk3_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_95B0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
