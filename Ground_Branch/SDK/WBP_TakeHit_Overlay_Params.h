#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * Function WBP_TakeHit_Overlay.WBP_TakeHit_Overlay_C.Construct
	 */
	struct UWBP_TakeHit_Overlay_C_Construct_Params
	{	};

	/**
	 * Function WBP_TakeHit_Overlay.WBP_TakeHit_Overlay_C.OnPlayerControllerNotifyTakeHit_Event
	 */
	struct UWBP_TakeHit_Overlay_C_OnPlayerControllerNotifyTakeHit_Event_Params
	{
	public:
		struct FVector                                             ViewLocation;                                            // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            ViewRotation;                                            // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FTakeHitInfo                                        LastTakeHitInfo;                                         // 0x0018(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function WBP_TakeHit_Overlay.WBP_TakeHit_Overlay_C.HitBack
	 */
	struct UWBP_TakeHit_Overlay_C_HitBack_Params
	{	};

	/**
	 * Function WBP_TakeHit_Overlay.WBP_TakeHit_Overlay_C.HitLeft
	 */
	struct UWBP_TakeHit_Overlay_C_HitLeft_Params
	{	};

	/**
	 * Function WBP_TakeHit_Overlay.WBP_TakeHit_Overlay_C.HitRight
	 */
	struct UWBP_TakeHit_Overlay_C_HitRight_Params
	{	};

	/**
	 * Function WBP_TakeHit_Overlay.WBP_TakeHit_Overlay_C.HitDown
	 */
	struct UWBP_TakeHit_Overlay_C_HitDown_Params
	{	};

	/**
	 * Function WBP_TakeHit_Overlay.WBP_TakeHit_Overlay_C.HitUp
	 */
	struct UWBP_TakeHit_Overlay_C_HitUp_Params
	{	};

	/**
	 * Function WBP_TakeHit_Overlay.WBP_TakeHit_Overlay_C.HitForward
	 */
	struct UWBP_TakeHit_Overlay_C_HitForward_Params
	{	};

	/**
	 * Function WBP_TakeHit_Overlay.WBP_TakeHit_Overlay_C.ExecuteUbergraph_WBP_TakeHit_Overlay
	 */
	struct UWBP_TakeHit_Overlay_C_ExecuteUbergraph_WBP_TakeHit_Overlay_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HTUT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
