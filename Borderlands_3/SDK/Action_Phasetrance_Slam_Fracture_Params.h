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
	 * Function Action_Phasetrance_Slam_Fracture.Action_Phasetrance_Slam_Fracture_C.AN_CreateCastProjectile
	 */
	struct UAction_Phasetrance_Slam_Fracture_C_AN_CreateCastProjectile_Params
	{	};

	/**
	 * Function Action_Phasetrance_Slam_Fracture.Action_Phasetrance_Slam_Fracture_C.OnServerEnd
	 */
	struct UAction_Phasetrance_Slam_Fracture_C_OnServerEnd_Params
	{
	public:
		EGbxActionEndState                                         ActionEndState;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QD7D[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_Phasetrance_Slam_Fracture.Action_Phasetrance_Slam_Fracture_C.OnBeginBringUpWeapon
	 */
	struct UAction_Phasetrance_Slam_Fracture_C_OnBeginBringUpWeapon_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_Phasetrance_Slam_Fracture.Action_Phasetrance_Slam_Fracture_C.AN_PerformSlamFractureRumble
	 */
	struct UAction_Phasetrance_Slam_Fracture_C_AN_PerformSlamFractureRumble_Params
	{	};

	/**
	 * Function Action_Phasetrance_Slam_Fracture.Action_Phasetrance_Slam_Fracture_C.AN_PerformSlamFractureCS_Start
	 */
	struct UAction_Phasetrance_Slam_Fracture_C_AN_PerformSlamFractureCS_Start_Params
	{	};

	/**
	 * Function Action_Phasetrance_Slam_Fracture.Action_Phasetrance_Slam_Fracture_C.AN_PerformSlamFractureCS_Quake
	 */
	struct UAction_Phasetrance_Slam_Fracture_C_AN_PerformSlamFractureCS_Quake_Params
	{	};

	/**
	 * Function Action_Phasetrance_Slam_Fracture.Action_Phasetrance_Slam_Fracture_C.AN_PerformSlamFractureFB_Server
	 */
	struct UAction_Phasetrance_Slam_Fracture_C_AN_PerformSlamFractureFB_Server_Params
	{	};

	/**
	 * Function Action_Phasetrance_Slam_Fracture.Action_Phasetrance_Slam_Fracture_C.ExecuteUbergraph_Action_Phasetrance_Slam_Fracture
	 */
	struct UAction_Phasetrance_Slam_Fracture_C_ExecuteUbergraph_Action_Phasetrance_Slam_Fracture_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
