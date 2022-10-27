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
	 * Function BP_PhotoModeController.BP_PhotoModeController_C.UserConstructionScript
	 */
	struct ABP_PhotoModeController_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_PhotoModeController.BP_PhotoModeController_C.OnEnterPhotoMode
	 */
	struct ABP_PhotoModeController_C_OnEnterPhotoMode_Params
	{	};

	/**
	 * Function BP_PhotoModeController.BP_PhotoModeController_C.OnExitPhotoMode
	 */
	struct ABP_PhotoModeController_C_OnExitPhotoMode_Params
	{	};

	/**
	 * Function BP_PhotoModeController.BP_PhotoModeController_C.ExecuteUbergraph_BP_PhotoModeController
	 */
	struct ABP_PhotoModeController_C_ExecuteUbergraph_BP_PhotoModeController_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Y94X[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
