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
	 * Function BPChar_TED_SG_FriendZoneEscape.BPChar_TED_SG_FriendZoneEscape_C.DialogueCalloutIdle
	 */
	struct ABPChar_TED_SG_FriendZoneEscape_C_DialogueCalloutIdle_Params
	{	};

	/**
	 * Function BPChar_TED_SG_FriendZoneEscape.BPChar_TED_SG_FriendZoneEscape_C.DialogueCalloutSearchingForTarget
	 */
	struct ABPChar_TED_SG_FriendZoneEscape_C_DialogueCalloutSearchingForTarget_Params
	{	};

	/**
	 * Function BPChar_TED_SG_FriendZoneEscape.BPChar_TED_SG_FriendZoneEscape_C.DialogueCalloutTargetAcquired
	 */
	struct ABPChar_TED_SG_FriendZoneEscape_C_DialogueCalloutTargetAcquired_Params
	{	};

	/**
	 * Function BPChar_TED_SG_FriendZoneEscape.BPChar_TED_SG_FriendZoneEscape_C.DialogueCalloutTargetKilled
	 */
	struct ABPChar_TED_SG_FriendZoneEscape_C_DialogueCalloutTargetKilled_Params
	{	};

	/**
	 * Function BPChar_TED_SG_FriendZoneEscape.BPChar_TED_SG_FriendZoneEscape_C.DialogueCalloutReloading
	 */
	struct ABPChar_TED_SG_FriendZoneEscape_C_DialogueCalloutReloading_Params
	{	};

	/**
	 * Function BPChar_TED_SG_FriendZoneEscape.BPChar_TED_SG_FriendZoneEscape_C.InitBlackboardKeys
	 */
	struct ABPChar_TED_SG_FriendZoneEscape_C_InitBlackboardKeys_Params
	{	};

	/**
	 * Function BPChar_TED_SG_FriendZoneEscape.BPChar_TED_SG_FriendZoneEscape_C.WeaponCreation
	 */
	struct ABPChar_TED_SG_FriendZoneEscape_C_WeaponCreation_Params
	{	};

	/**
	 * Function BPChar_TED_SG_FriendZoneEscape.BPChar_TED_SG_FriendZoneEscape_C.InitWeaponData
	 */
	struct ABPChar_TED_SG_FriendZoneEscape_C_InitWeaponData_Params
	{	};

	/**
	 * Function BPChar_TED_SG_FriendZoneEscape.BPChar_TED_SG_FriendZoneEscape_C.Detonated
	 */
	struct ABPChar_TED_SG_FriendZoneEscape_C_Detonated_Params
	{	};

	/**
	 * Function BPChar_TED_SG_FriendZoneEscape.BPChar_TED_SG_FriendZoneEscape_C.UserConstructionScript
	 */
	struct ABPChar_TED_SG_FriendZoneEscape_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BPChar_TED_SG_FriendZoneEscape.BPChar_TED_SG_FriendZoneEscape_C.BndEvt__DamageComponent_K2Node_ComponentBoundEvent_0_DamageCompHealthDepletedDelegate__DelegateSignature_BPChar_TedioreTurret
	 */
	struct ABPChar_TED_SG_FriendZoneEscape_C_BndEvt__DamageComponent_K2Node_ComponentBoundEvent_0_DamageCompHealthDepletedDelegate__DelegateSignature_BPChar_TedioreTurret_Params
	{
	public:
		class UDamageComponent*                                    DamageReceiver;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDamageCauserComponent*                              DamageCauser;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_TED_SG_FriendZoneEscape.BPChar_TED_SG_FriendZoneEscape_C.InitializeWeapon
	 */
	struct ABPChar_TED_SG_FriendZoneEscape_C_InitializeWeapon_Params
	{	};

	/**
	 * Function BPChar_TED_SG_FriendZoneEscape.BPChar_TED_SG_FriendZoneEscape_C.ReceiveBeginPlay
	 */
	struct ABPChar_TED_SG_FriendZoneEscape_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPChar_TED_SG_FriendZoneEscape.BPChar_TED_SG_FriendZoneEscape_C.ExecuteUbergraph_BPChar_TED_SG_FriendZoneEscape
	 */
	struct ABPChar_TED_SG_FriendZoneEscape_C_ExecuteUbergraph_BPChar_TED_SG_FriendZoneEscape_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_48IZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
