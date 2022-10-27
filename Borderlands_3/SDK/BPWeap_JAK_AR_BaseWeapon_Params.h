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
	 * Function BPWeap_JAK_AR_BaseWeapon.BPWeap_JAK_AR_BaseWeapon_C.UserConstructionScript
	 */
	struct ABPWeap_JAK_AR_BaseWeapon_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BPWeap_JAK_AR_BaseWeapon.BPWeap_JAK_AR_BaseWeapon_C.Notify_ReloadStarted
	 */
	struct ABPWeap_JAK_AR_BaseWeapon_C_Notify_ReloadStarted_Params
	{
	public:
		bool                                                       bAutoReload;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPWeap_JAK_AR_BaseWeapon.BPWeap_JAK_AR_BaseWeapon_C.ReceiveBeginPlay
	 */
	struct ABPWeap_JAK_AR_BaseWeapon_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPWeap_JAK_AR_BaseWeapon.BPWeap_JAK_AR_BaseWeapon_C.AttachAudioComponentToClip
	 */
	struct ABPWeap_JAK_AR_BaseWeapon_C_AttachAudioComponentToClip_Params
	{	};

	/**
	 * Function BPWeap_JAK_AR_BaseWeapon.BPWeap_JAK_AR_BaseWeapon_C.ExecuteUbergraph_BPWeap_JAK_AR_BaseWeapon
	 */
	struct ABPWeap_JAK_AR_BaseWeapon_C_ExecuteUbergraph_BPWeap_JAK_AR_BaseWeapon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RN93[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
