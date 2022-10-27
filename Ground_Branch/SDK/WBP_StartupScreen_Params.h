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
	 * Function WBP_StartupScreen.WBP_StartupScreen_C.OnMouseButtonDown
	 */
	struct UWBP_StartupScreen_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_StartupScreen.WBP_StartupScreen_C.OnPreviewKeyDown
	 */
	struct UWBP_StartupScreen_C_OnPreviewKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_StartupScreen.WBP_StartupScreen_C.Setup
	 */
	struct UWBP_StartupScreen_C_Setup_Params
	{	};

	/**
	 * Function WBP_StartupScreen.WBP_StartupScreen_C.InternalRemove
	 */
	struct UWBP_StartupScreen_C_InternalRemove_Params
	{	};

	/**
	 * Function WBP_StartupScreen.WBP_StartupScreen_C.Tick
	 */
	struct UWBP_StartupScreen_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_StartupScreen.WBP_StartupScreen_C.BndEvt__Button_Apply_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_StartupScreen_C_BndEvt__Button_Apply_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_StartupScreen.WBP_StartupScreen_C.BindOnLoadingScreenEvent
	 */
	struct UWBP_StartupScreen_C_BindOnLoadingScreenEvent_Params
	{	};

	/**
	 * Function WBP_StartupScreen.WBP_StartupScreen_C.OnLoadingScreenEvent_Event
	 */
	struct UWBP_StartupScreen_C_OnLoadingScreenEvent_Event_Params
	{
	public:
		class FName                                                Event;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_StartupScreen.WBP_StartupScreen_C.StartFadeIn
	 */
	struct UWBP_StartupScreen_C_StartFadeIn_Params
	{	};

	/**
	 * Function WBP_StartupScreen.WBP_StartupScreen_C.HideStartupScreen
	 */
	struct UWBP_StartupScreen_C_HideStartupScreen_Params
	{	};

	/**
	 * Function WBP_StartupScreen.WBP_StartupScreen_C.Construct
	 */
	struct UWBP_StartupScreen_C_Construct_Params
	{	};

	/**
	 * Function WBP_StartupScreen.WBP_StartupScreen_C.ExecuteUbergraph_WBP_StartupScreen
	 */
	struct UWBP_StartupScreen_C_ExecuteUbergraph_WBP_StartupScreen_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
