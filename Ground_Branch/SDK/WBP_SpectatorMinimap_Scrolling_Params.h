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
	 * Function WBP_SpectatorMinimap_Scrolling.WBP_SpectatorMinimap_Scrolling_C.GetSpectatorArrowVis
	 */
	struct UWBP_SpectatorMinimap_Scrolling_C_GetSpectatorArrowVis_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_SpectatorMinimap_Scrolling.WBP_SpectatorMinimap_Scrolling_C.AddPlayersToMinimap
	 */
	struct UWBP_SpectatorMinimap_Scrolling_C_AddPlayersToMinimap_Params
	{	};

	/**
	 * Function WBP_SpectatorMinimap_Scrolling.WBP_SpectatorMinimap_Scrolling_C.Construct
	 */
	struct UWBP_SpectatorMinimap_Scrolling_C_Construct_Params
	{	};

	/**
	 * Function WBP_SpectatorMinimap_Scrolling.WBP_SpectatorMinimap_Scrolling_C.Tick
	 */
	struct UWBP_SpectatorMinimap_Scrolling_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_SpectatorMinimap_Scrolling.WBP_SpectatorMinimap_Scrolling_C.SetZoom
	 */
	struct UWBP_SpectatorMinimap_Scrolling_C_SetZoom_Params
	{
	public:
		float                                                      Zoom;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_SpectatorMinimap_Scrolling.WBP_SpectatorMinimap_Scrolling_C.SetMinimapStyle
	 */
	struct UWBP_SpectatorMinimap_Scrolling_C_SetMinimapStyle_Params
	{
	public:
		class FName                                                NewStyle;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_SpectatorMinimap_Scrolling.WBP_SpectatorMinimap_Scrolling_C.UpdateTranslation
	 */
	struct UWBP_SpectatorMinimap_Scrolling_C_UpdateTranslation_Params
	{	};

	/**
	 * Function WBP_SpectatorMinimap_Scrolling.WBP_SpectatorMinimap_Scrolling_C.UpdateRotation
	 */
	struct UWBP_SpectatorMinimap_Scrolling_C_UpdateRotation_Params
	{	};

	/**
	 * Function WBP_SpectatorMinimap_Scrolling.WBP_SpectatorMinimap_Scrolling_C.ExecuteUbergraph_WBP_SpectatorMinimap_Scrolling
	 */
	struct UWBP_SpectatorMinimap_Scrolling_C_ExecuteUbergraph_WBP_SpectatorMinimap_Scrolling_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
