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
	 * Function WBP_NVGOverlay.WBP_NVGOverlay_C.Tick
	 */
	struct UWBP_NVGOverlay_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_NVGOverlay.WBP_NVGOverlay_C.OnDestroyed_Event_1
	 */
	struct UWBP_NVGOverlay_C_OnDestroyed_Event_1_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_NVGOverlay.WBP_NVGOverlay_C.Construct
	 */
	struct UWBP_NVGOverlay_C_Construct_Params
	{	};

	/**
	 * Function WBP_NVGOverlay.WBP_NVGOverlay_C.ExecuteUbergraph_WBP_NVGOverlay
	 */
	struct UWBP_NVGOverlay_C_ExecuteUbergraph_WBP_NVGOverlay_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
