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
	 * Function BP_MenuPlayerController.BP_MenuPlayerController_C.ReceiveTick
	 */
	struct ABP_MenuPlayerController_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MenuPlayerController.BP_MenuPlayerController_C.InputComponent_MouseReleased
	 */
	struct ABP_MenuPlayerController_C_InputComponent_MouseReleased_Params
	{	};

	/**
	 * Function BP_MenuPlayerController.BP_MenuPlayerController_C.InputComponent_MousePressed
	 */
	struct ABP_MenuPlayerController_C_InputComponent_MousePressed_Params
	{	};

	/**
	 * Function BP_MenuPlayerController.BP_MenuPlayerController_C.ExecuteUbergraph_BP_MenuPlayerController
	 */
	struct ABP_MenuPlayerController_C_ExecuteUbergraph_BP_MenuPlayerController_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EG72[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
