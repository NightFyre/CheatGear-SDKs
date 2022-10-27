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
	 * Function WBP_SpectaorMinimap_ActorBlips.WBP_SpectaorMinimap_ActorBlips_C.OnMouseButtonDown
	 */
	struct UWBP_SpectaorMinimap_ActorBlips_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_SpectaorMinimap_ActorBlips.WBP_SpectaorMinimap_ActorBlips_C.Tick
	 */
	struct UWBP_SpectaorMinimap_ActorBlips_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_SpectaorMinimap_ActorBlips.WBP_SpectaorMinimap_ActorBlips_C.Construct
	 */
	struct UWBP_SpectaorMinimap_ActorBlips_C_Construct_Params
	{	};

	/**
	 * Function WBP_SpectaorMinimap_ActorBlips.WBP_SpectaorMinimap_ActorBlips_C.UpdatePosition
	 */
	struct UWBP_SpectaorMinimap_ActorBlips_C_UpdatePosition_Params
	{	};

	/**
	 * Function WBP_SpectaorMinimap_ActorBlips.WBP_SpectaorMinimap_ActorBlips_C.OnMouseEnter
	 */
	struct UWBP_SpectaorMinimap_ActorBlips_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_SpectaorMinimap_ActorBlips.WBP_SpectaorMinimap_ActorBlips_C.OnMouseLeave
	 */
	struct UWBP_SpectaorMinimap_ActorBlips_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_SpectaorMinimap_ActorBlips.WBP_SpectaorMinimap_ActorBlips_C.ExecuteUbergraph_WBP_SpectaorMinimap_ActorBlips
	 */
	struct UWBP_SpectaorMinimap_ActorBlips_C_ExecuteUbergraph_WBP_SpectaorMinimap_ActorBlips_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
