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
	 * Function WeaponType_Hardpoints_BearFist_Projectile.WeaponType_Hardpoints_BearFist_Projectile_C.InnerSetHandVisible
	 */
	struct AWeaponType_Hardpoints_BearFist_Projectile_C_InnerSetHandVisible_Params
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZYGX[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WeaponType_Hardpoints_BearFist_Projectile.WeaponType_Hardpoints_BearFist_Projectile_C.UserConstructionScript
	 */
	struct AWeaponType_Hardpoints_BearFist_Projectile_C_UserConstructionScript_Params
	{	};

	/**
	 * Function WeaponType_Hardpoints_BearFist_Projectile.WeaponType_Hardpoints_BearFist_Projectile_C.OnAnimEnd_7F5D255649D94023774957950F0FEBE1
	 */
	struct AWeaponType_Hardpoints_BearFist_Projectile_C_OnAnimEnd_7F5D255649D94023774957950F0FEBE1_Params
	{	};

	/**
	 * Function WeaponType_Hardpoints_BearFist_Projectile.WeaponType_Hardpoints_BearFist_Projectile_C.OnEnd_7F5D255649D94023774957950F0FEBE1
	 */
	struct AWeaponType_Hardpoints_BearFist_Projectile_C_OnEnd_7F5D255649D94023774957950F0FEBE1_Params
	{
	public:
		EGbxActionEndState                                         EndState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RQG1[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WeaponType_Hardpoints_BearFist_Projectile.WeaponType_Hardpoints_BearFist_Projectile_C.K2_Initialize
	 */
	struct AWeaponType_Hardpoints_BearFist_Projectile_C_K2_Initialize_Params
	{	};

	/**
	 * Function WeaponType_Hardpoints_BearFist_Projectile.WeaponType_Hardpoints_BearFist_Projectile_C.BndEvt__WeaponClipReload_K2Node_ComponentBoundEvent_1_WeaponReloadEndedEvent__DelegateSignature_WeaponType_Hardpoints_BearFist_Projectile
	 */
	struct AWeaponType_Hardpoints_BearFist_Projectile_C_BndEvt__WeaponClipReload_K2Node_ComponentBoundEvent_1_WeaponReloadEndedEvent__DelegateSignature_WeaponType_Hardpoints_BearFist_Projectile_Params
	{
	public:
		bool                                                       bCompleted;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponType_Hardpoints_BearFist_Projectile.WeaponType_Hardpoints_BearFist_Projectile_C.SetHandVisible
	 */
	struct AWeaponType_Hardpoints_BearFist_Projectile_C_SetHandVisible_Params
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponType_Hardpoints_BearFist_Projectile.WeaponType_Hardpoints_BearFist_Projectile_C.NotifyPlayerLeaving
	 */
	struct AWeaponType_Hardpoints_BearFist_Projectile_C_NotifyPlayerLeaving_Params
	{	};

	/**
	 * Function WeaponType_Hardpoints_BearFist_Projectile.WeaponType_Hardpoints_BearFist_Projectile_C.ExecuteUbergraph_WeaponType_Hardpoints_BearFist_Projectile
	 */
	struct AWeaponType_Hardpoints_BearFist_Projectile_C_ExecuteUbergraph_WeaponType_Hardpoints_BearFist_Projectile_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DZAR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
