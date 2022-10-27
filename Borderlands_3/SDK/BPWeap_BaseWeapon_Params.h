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
	 * Function BPWeap_BaseWeapon.BPWeap_BaseWeapon_C.BPAnim_Data
	 */
	struct ABPWeap_BaseWeapon_C_BPAnim_Data_Params
	{
	public:
		float                                                      FiregripType;                                            // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      GripType;                                                // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ScopeType;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ModeType;                                                // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPWeap_BaseWeapon.BPWeap_BaseWeapon_C.GetChargePercent
	 */
	struct ABPWeap_BaseWeapon_C_GetChargePercent_Params
	{
	public:
		float                                                      ChargePercent;                                           // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPWeap_BaseWeapon.BPWeap_BaseWeapon_C.JokeReload
	 */
	struct ABPWeap_BaseWeapon_C_JokeReload_Params
	{	};

	/**
	 * Function BPWeap_BaseWeapon.BPWeap_BaseWeapon_C.Get IK Offset Data
	 */
	struct ABPWeap_BaseWeapon_C_Get_IK_Offset_Data_Params
	{
	public:
		bool                                                       DebugSockets;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       First_Person;                                            // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0SEL[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                WeaponSocket_Left;                                       // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                WeaponSocket_Right;                                      // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4CZB[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          L_IK_Offset;                                             // 0x0020(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
		struct FTransform                                          R_IK_Offset;                                             // 0x0050(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPWeap_BaseWeapon.BPWeap_BaseWeapon_C.BoneRotator_Incremental
	 */
	struct ABPWeap_BaseWeapon_C_BoneRotator_Incremental_Params
	{
	public:
		float                                                      Current;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Target;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DeltaTime;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      BoneRotationSpeed;                                       // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TotalRotation;                                           // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      CurrentRotation;                                         // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      NewRotation;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            CurrentRotator;                                          // 0x001C(0x000C)  (Parm, OutParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPWeap_BaseWeapon.BPWeap_BaseWeapon_C.UserConstructionScript
	 */
	struct ABPWeap_BaseWeapon_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BPWeap_BaseWeapon.BPWeap_BaseWeapon_C.ReceiveBeginPlay
	 */
	struct ABPWeap_BaseWeapon_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPWeap_BaseWeapon.BPWeap_BaseWeapon_C.ReInitialize
	 */
	struct ABPWeap_BaseWeapon_C_ReInitialize_Params
	{	};

	/**
	 * Function BPWeap_BaseWeapon.BPWeap_BaseWeapon_C.WeaponAttached
	 */
	struct ABPWeap_BaseWeapon_C_WeaponAttached_Params
	{	};

	/**
	 * Function BPWeap_BaseWeapon.BPWeap_BaseWeapon_C.Notify_ReloadStarted
	 */
	struct ABPWeap_BaseWeapon_C_Notify_ReloadStarted_Params
	{
	public:
		bool                                                       bAutoReload;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPWeap_BaseWeapon.BPWeap_BaseWeapon_C.Notify_ReloadEnded
	 */
	struct ABPWeap_BaseWeapon_C_Notify_ReloadEnded_Params
	{
	public:
		bool                                                       bCompleted;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPWeap_BaseWeapon.BPWeap_BaseWeapon_C.ExecuteUbergraph_BPWeap_BaseWeapon
	 */
	struct ABPWeap_BaseWeapon_C_ExecuteUbergraph_BPWeap_BaseWeapon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_90XT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
