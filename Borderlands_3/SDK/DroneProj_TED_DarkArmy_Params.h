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
	 * Function DroneProj_TED_DarkArmy.DroneProj_TED_DarkArmy_C.DistanceCHeck
	 */
	struct ADroneProj_TED_DarkArmy_C_DistanceCHeck_Params
	{	};

	/**
	 * Function DroneProj_TED_DarkArmy.DroneProj_TED_DarkArmy_C.DestroyDrone
	 */
	struct ADroneProj_TED_DarkArmy_C_DestroyDrone_Params
	{	};

	/**
	 * Function DroneProj_TED_DarkArmy.DroneProj_TED_DarkArmy_C.FireWeapon
	 */
	struct ADroneProj_TED_DarkArmy_C_FireWeapon_Params
	{	};

	/**
	 * Function DroneProj_TED_DarkArmy.DroneProj_TED_DarkArmy_C.UserConstructionScript
	 */
	struct ADroneProj_TED_DarkArmy_C_UserConstructionScript_Params
	{	};

	/**
	 * Function DroneProj_TED_DarkArmy.DroneProj_TED_DarkArmy_C.ReceiveBeginPlay
	 */
	struct ADroneProj_TED_DarkArmy_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function DroneProj_TED_DarkArmy.DroneProj_TED_DarkArmy_C.PutDownNotify
	 */
	struct ADroneProj_TED_DarkArmy_C_PutDownNotify_Params
	{
	public:
		class AWeapon*                                             EventWeapon;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DroneProj_TED_DarkArmy.DroneProj_TED_DarkArmy_C.OnBeginExplode
	 */
	struct ADroneProj_TED_DarkArmy_C_OnBeginExplode_Params
	{	};

	/**
	 * Function DroneProj_TED_DarkArmy.DroneProj_TED_DarkArmy_C.ReloadStarted
	 */
	struct ADroneProj_TED_DarkArmy_C_ReloadStarted_Params
	{
	public:
		class AWeapon*                                             EventWeapon;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bAutoReload;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DroneProj_TED_DarkArmy.DroneProj_TED_DarkArmy_C.ExecuteUbergraph_DroneProj_TED_DarkArmy
	 */
	struct ADroneProj_TED_DarkArmy_C_ExecuteUbergraph_DroneProj_TED_DarkArmy_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RI1P[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
