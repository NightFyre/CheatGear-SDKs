#pragma once

/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
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
	 * Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.SetPopupText
	 */
	struct UWB_MenuOptionsVideos_C_SetPopupText_Params
	{
	public:
		int32_t                                                    RemainTime;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_H3M2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.SetActivateHover
	 */
	struct UWB_MenuOptionsVideos_C_SetActivateHover_Params
	{
	public:
		class UWidgetSwitcher*                                     ActivateHoveer;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Title;                                                   // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                DetailDesc;                                              // 0x0020(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnDisplayOptionInitialized
	 */
	struct UWB_MenuOptionsVideos_C_OnDisplayOptionInitialized_Params
	{	};

	/**
	 * Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnQualityLevelInitialized
	 */
	struct UWB_MenuOptionsVideos_C_OnQualityLevelInitialized_Params
	{	};

	/**
	 * Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnApplyResetButtionInitialized
	 */
	struct UWB_MenuOptionsVideos_C_OnApplyResetButtionInitialized_Params
	{	};

	/**
	 * Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnMessageReceived_E792FD8C4A9CB0949DDA36A51D3D5965
	 */
	struct UWB_MenuOptionsVideos_C_OnMessageReceived_E792FD8C4A9CB0949DDA36A51D3D5965_Params
	{
	public:
		class UMsgBaseNode*                                        ProxyObject;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnInitialized
	 */
	struct UWB_MenuOptionsVideos_C_OnInitialized_Params
	{	};

	/**
	 * Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnAntiAliasingHovered
	 */
	struct UWB_MenuOptionsVideos_C_OnAntiAliasingHovered_Params
	{	};

	/**
	 * Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnEffectHovered
	 */
	struct UWB_MenuOptionsVideos_C_OnEffectHovered_Params
	{	};

	/**
	 * Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnTextureHovered
	 */
	struct UWB_MenuOptionsVideos_C_OnTextureHovered_Params
	{	};

	/**
	 * Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnShadowHovered
	 */
	struct UWB_MenuOptionsVideos_C_OnShadowHovered_Params
	{	};

	/**
	 * Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnPostProcessHovered
	 */
	struct UWB_MenuOptionsVideos_C_OnPostProcessHovered_Params
	{	};

	/**
	 * Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnDisplayModeHovered
	 */
	struct UWB_MenuOptionsVideos_C_OnDisplayModeHovered_Params
	{	};

	/**
	 * Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnDisplayResolusionHovered
	 */
	struct UWB_MenuOptionsVideos_C_OnDisplayResolusionHovered_Params
	{	};

	/**
	 * Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnFrameRateLimitHovered
	 */
	struct UWB_MenuOptionsVideos_C_OnFrameRateLimitHovered_Params
	{	};

	/**
	 * Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnDisplayModeSelected
	 */
	struct UWB_MenuOptionsVideos_C_OnDisplayModeSelected_Params
	{
	public:
		int32_t                                                    SelIndex;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnDisplayOptionChangePopup
	 */
	struct UWB_MenuOptionsVideos_C_OnDisplayOptionChangePopup_Params
	{	};

	/**
	 * Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnBrighthnessHovered
	 */
	struct UWB_MenuOptionsVideos_C_OnBrighthnessHovered_Params
	{	};

	/**
	 * Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnChangeGammaValue
	 */
	struct UWB_MenuOptionsVideos_C_OnChangeGammaValue_Params
	{
	public:
		float                                                      SliderValue;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.EventFMsgWidgetOptionVideoDisplayApplyedNotify
	 */
	struct UWB_MenuOptionsVideos_C_EventFMsgWidgetOptionVideoDisplayApplyedNotify_Params
	{
	public:
		struct FMsgWidgetOptionVideoDisplayApplyedNotify           Msg;                                                     // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnRenderScaleHovered
	 */
	struct UWB_MenuOptionsVideos_C_OnRenderScaleHovered_Params
	{	};

	/**
	 * Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.ExecuteUbergraph_WB_MenuOptionsVideos
	 */
	struct UWB_MenuOptionsVideos_C_ExecuteUbergraph_WB_MenuOptionsVideos_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_B23N[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
