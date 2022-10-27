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
	 * Function WeaponType_Hardpoints_Base.WeaponType_Hardpoints_Base_C.GetIronCubAnimBP
	 */
	struct AWeaponType_Hardpoints_Base_C_GetIronCubAnimBP_Params
	{
	public:
		class UBPAnim_IronCub_C*                                   AnimGraph;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WeaponType_Hardpoints_Base.WeaponType_Hardpoints_Base_C.GetIronBearAnimBPs
	 */
	struct AWeaponType_Hardpoints_Base_C_GetIronBearAnimBPs_Params
	{
	public:
		class UBPAnim_IronBear_1st_C*                              AnimGraph_1st;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UBPAnim_IronBear_3rd_C*                              AnimGraph_3rd;                                           // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WeaponType_Hardpoints_Base.WeaponType_Hardpoints_Base_C.UserConstructionScript
	 */
	struct AWeaponType_Hardpoints_Base_C_UserConstructionScript_Params
	{	};

	/**
	 * Function WeaponType_Hardpoints_Base.WeaponType_Hardpoints_Base_C.BeginHardPointAction
	 */
	struct AWeaponType_Hardpoints_Base_C_BeginHardPointAction_Params
	{	};

	/**
	 * Function WeaponType_Hardpoints_Base.WeaponType_Hardpoints_Base_C.EndHardPointAction
	 */
	struct AWeaponType_Hardpoints_Base_C_EndHardPointAction_Params
	{	};

	/**
	 * Function WeaponType_Hardpoints_Base.WeaponType_Hardpoints_Base_C.K2_Initialize
	 */
	struct AWeaponType_Hardpoints_Base_C_K2_Initialize_Params
	{	};

	/**
	 * Function WeaponType_Hardpoints_Base.WeaponType_Hardpoints_Base_C.InitializeHardPointIronCub
	 */
	struct AWeaponType_Hardpoints_Base_C_InitializeHardPointIronCub_Params
	{	};

	/**
	 * Function WeaponType_Hardpoints_Base.WeaponType_Hardpoints_Base_C.ExecuteUbergraph_WeaponType_Hardpoints_Base
	 */
	struct AWeaponType_Hardpoints_Base_C_ExecuteUbergraph_WeaponType_Hardpoints_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
