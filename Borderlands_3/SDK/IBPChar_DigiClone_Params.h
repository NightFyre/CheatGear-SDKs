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
	 * Function IBPChar_DigiClone.IBPChar_DigiClone_C.SetIsTeleporting
	 */
	struct UIBPChar_DigiClone_C_SetIsTeleporting_Params
	{
	public:
		bool                                                       bIsTeleporting;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IBPChar_DigiClone.IBPChar_DigiClone_C.StartProvoke
	 */
	struct UIBPChar_DigiClone_C_StartProvoke_Params
	{	};

	/**
	 * Function IBPChar_DigiClone.IBPChar_DigiClone_C.OnDigicloneTeleport
	 */
	struct UIBPChar_DigiClone_C_OnDigicloneTeleport_Params
	{	};

	/**
	 * Function IBPChar_DigiClone.IBPChar_DigiClone_C.UpdateMaxTeleportRange
	 */
	struct UIBPChar_DigiClone_C_UpdateMaxTeleportRange_Params
	{	};

	/**
	 * Function IBPChar_DigiClone.IBPChar_DigiClone_C.DigiCloneThrowGrenade
	 */
	struct UIBPChar_DigiClone_C_DigiCloneThrowGrenade_Params
	{	};

	/**
	 * Function IBPChar_DigiClone.IBPChar_DigiClone_C.AutomagicallyRemoveDamageOverride
	 */
	struct UIBPChar_DigiClone_C_AutomagicallyRemoveDamageOverride_Params
	{	};

	/**
	 * Function IBPChar_DigiClone.IBPChar_DigiClone_C.AutomagicallyRegisterDamageOverride
	 */
	struct UIBPChar_DigiClone_C_AutomagicallyRegisterDamageOverride_Params
	{
	public:
		EOakElementalType                                          ElementalType;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_U50U[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Grade;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function IBPChar_DigiClone.IBPChar_DigiClone_C.ReleaseDigiclone
	 */
	struct UIBPChar_DigiClone_C_ReleaseDigiclone_Params
	{	};

	/**
	 * Function IBPChar_DigiClone.IBPChar_DigiClone_C.KillDigiCloneNow
	 */
	struct UIBPChar_DigiClone_C_KillDigiCloneNow_Params
	{	};

	/**
	 * Function IBPChar_DigiClone.IBPChar_DigiClone_C.BlowUpDigiClone
	 */
	struct UIBPChar_DigiClone_C_BlowUpDigiClone_Params
	{	};

	/**
	 * Function IBPChar_DigiClone.IBPChar_DigiClone_C.StopScalingDigiClone
	 */
	struct UIBPChar_DigiClone_C_StopScalingDigiClone_Params
	{	};

	/**
	 * Function IBPChar_DigiClone.IBPChar_DigiClone_C.BeginScalingDigiClone
	 */
	struct UIBPChar_DigiClone_C_BeginScalingDigiClone_Params
	{	};

	/**
	 * Function IBPChar_DigiClone.IBPChar_DigiClone_C.Get Owners Grenade Projectile Class
	 */
	struct UIBPChar_DigiClone_C_Get_Owners_Grenade_Projectile_Class_Params
	{
	public:
		class UClass*                                              Grenade_Projectile_Class;                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
