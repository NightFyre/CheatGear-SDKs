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
	 * Function Action_Operative_RedirectDrone.Action_Operative_RedirectDrone_C.AN_RedirectDrone
	 */
	struct UAction_Operative_RedirectDrone_C_AN_RedirectDrone_Params
	{	};

	/**
	 * Function Action_Operative_RedirectDrone.Action_Operative_RedirectDrone_C.OnServerBegin
	 */
	struct UAction_Operative_RedirectDrone_C_OnServerBegin_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_Operative_RedirectDrone.Action_Operative_RedirectDrone_C.AN_PerformRedirectFeedback
	 */
	struct UAction_Operative_RedirectDrone_C_AN_PerformRedirectFeedback_Params
	{	};

	/**
	 * Function Action_Operative_RedirectDrone.Action_Operative_RedirectDrone_C.ExecuteUbergraph_Action_Operative_RedirectDrone
	 */
	struct UAction_Operative_RedirectDrone_C_ExecuteUbergraph_Action_Operative_RedirectDrone_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
