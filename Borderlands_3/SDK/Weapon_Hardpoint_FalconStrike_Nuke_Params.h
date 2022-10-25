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
	 * Function Weapon_Hardpoint_FalconStrike_Nuke.Weapon_Hardpoint_FalconStrike_Nuke_C.UserConstructionScript
	 */
	struct AWeapon_Hardpoint_FalconStrike_Nuke_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Weapon_Hardpoint_FalconStrike_Nuke.Weapon_Hardpoint_FalconStrike_Nuke_C.InitAnimation
	 */
	struct AWeapon_Hardpoint_FalconStrike_Nuke_C_InitAnimation_Params
	{
	public:
		class UBPAnim_IronBear_FalconStrike_C*                     Anim;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Weapon_Hardpoint_FalconStrike_Nuke.Weapon_Hardpoint_FalconStrike_Nuke_C.K2_Initialize
	 */
	struct AWeapon_Hardpoint_FalconStrike_Nuke_C_K2_Initialize_Params
	{	};

	/**
	 * Function Weapon_Hardpoint_FalconStrike_Nuke.Weapon_Hardpoint_FalconStrike_Nuke_C.ExecuteUbergraph_Weapon_Hardpoint_FalconStrike_Nuke
	 */
	struct AWeapon_Hardpoint_FalconStrike_Nuke_C_ExecuteUbergraph_Weapon_Hardpoint_FalconStrike_Nuke_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AJ5W[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
