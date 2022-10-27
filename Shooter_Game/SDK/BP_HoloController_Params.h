#pragma once

/**
 * Name: Shooter_Game
 * Version: 03.22.2014
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
	 * Function BP_HoloController.BP_HoloController_C.UserConstructionScript
	 */
	struct ABP_HoloController_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_HoloController.BP_HoloController_C.ReceiveTick
	 */
	struct ABP_HoloController_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HoloController.BP_HoloController_C.ReactivateSound
	 */
	struct ABP_HoloController_C_ReactivateSound_Params
	{	};

	/**
	 * Function BP_HoloController.BP_HoloController_C.ExecuteUbergraph_BP_HoloController
	 */
	struct ABP_HoloController_C_ExecuteUbergraph_BP_HoloController_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
