#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * Function sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C.LeaveMapTableAnimation
	 */
	struct Asot_frontend_01_a_start_terrain_C_LeaveMapTableAnimation_Params
	{	};

	/**
	 * Function sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C.GetFrontendCamera
	 */
	struct Asot_frontend_01_a_start_terrain_C_GetFrontendCamera_Params
	{
	public:
		class UFrontendCameraComponent*                            CameraComponent;                                         // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C.K2Node_MatineeController_10_MatineeSequenceFinished
	 */
	struct Asot_frontend_01_a_start_terrain_C_K2Node_MatineeController_10_MatineeSequenceFinished_Params
	{	};

	/**
	 * Function sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C.K2Node_MatineeController_10_Finished
	 */
	struct Asot_frontend_01_a_start_terrain_C_K2Node_MatineeController_10_Finished_Params
	{	};

	/**
	 * Function sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C.PlayIntroMatinee
	 */
	struct Asot_frontend_01_a_start_terrain_C_PlayIntroMatinee_Params
	{	};

	/**
	 * Function sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C.EnteredEngageState
	 */
	struct Asot_frontend_01_a_start_terrain_C_EnteredEngageState_Params
	{	};

	/**
	 * Function sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C.SetMatineePlaybackRate
	 */
	struct Asot_frontend_01_a_start_terrain_C_SetMatineePlaybackRate_Params
	{
	public:
		float                                                      PlaybackRate;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C.ReceiveBeginPlay
	 */
	struct Asot_frontend_01_a_start_terrain_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C.ExitIntroMatinee
	 */
	struct Asot_frontend_01_a_start_terrain_C_ExitIntroMatinee_Params
	{	};

	/**
	 * Function sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C.ExecuteUbergraph_sot_frontend_01_a_start_terrain
	 */
	struct Asot_frontend_01_a_start_terrain_C_ExecuteUbergraph_sot_frontend_01_a_start_terrain_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
