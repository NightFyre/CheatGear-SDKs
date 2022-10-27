#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * Function BP_Weapon_BlackHawk_Crossbow.BP_Weapon_BlackHawk_Crossbow_C.CanAddAttachment
	 */
	struct ABP_Weapon_BlackHawk_Crossbow_C_CanAddAttachment_Params
	{
	public:
		class AWeaponAttachment*                                   attachment;                                              // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Weapon_BlackHawk_Crossbow.BP_Weapon_BlackHawk_Crossbow_C.OnAttachmentAdded
	 */
	struct ABP_Weapon_BlackHawk_Crossbow_C_OnAttachmentAdded_Params
	{
	public:
		class AWeaponAttachment*                                   attachment;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Weapon_BlackHawk_Crossbow.BP_Weapon_BlackHawk_Crossbow_C.OnAttachmentRemoved
	 */
	struct ABP_Weapon_BlackHawk_Crossbow_C_OnAttachmentRemoved_Params
	{
	public:
		class AWeaponAttachment*                                   attachment;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Weapon_BlackHawk_Crossbow.BP_Weapon_BlackHawk_Crossbow_C.ExecuteUbergraph_BP_Weapon_BlackHawk_Crossbow
	 */
	struct ABP_Weapon_BlackHawk_Crossbow_C_ExecuteUbergraph_BP_Weapon_BlackHawk_Crossbow_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MU0Q[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
