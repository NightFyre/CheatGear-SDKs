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
	 * Function BPWeap_SG_TED_FriendZone.BPWeap_SG_TED_FriendZone_C.TedioreThrowWeapon
	 */
	struct ABPWeap_SG_TED_FriendZone_C_TedioreThrowWeapon_Params
	{
	public:
		class AActor*                                              ThrownProjectile;                                        // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPWeap_SG_TED_FriendZone.BPWeap_SG_TED_FriendZone_C.UserConstructionScript
	 */
	struct ABPWeap_SG_TED_FriendZone_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BPWeap_SG_TED_FriendZone.BPWeap_SG_TED_FriendZone_C.SpawnTurret
	 */
	struct ABPWeap_SG_TED_FriendZone_C_SpawnTurret_Params
	{	};

	/**
	 * Function BPWeap_SG_TED_FriendZone.BPWeap_SG_TED_FriendZone_C.ExecuteUbergraph_BPWeap_SG_TED_FriendZone
	 */
	struct ABPWeap_SG_TED_FriendZone_C_ExecuteUbergraph_BPWeap_SG_TED_FriendZone_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
