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
	 * Function UI_TabModeTab.UI_TabModeTab_C.SetIsAlerted
	 */
	struct UUI_TabModeTab_C_SetIsAlerted_Params
	{
	public:
		bool                                                       Alerted;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_TabModeTab.UI_TabModeTab_C.GetIsActive
	 */
	struct UUI_TabModeTab_C_GetIsActive_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_TabModeTab.UI_TabModeTab_C.OnClick
	 */
	struct UUI_TabModeTab_C_OnClick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_TabModeTab.UI_TabModeTab_C.SetIsActive
	 */
	struct UUI_TabModeTab_C_SetIsActive_Params
	{
	public:
		bool                                                       Active;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8G7Y[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_TabModeTab.UI_TabModeTab_C.Construct
	 */
	struct UUI_TabModeTab_C_Construct_Params
	{	};

	/**
	 * Function UI_TabModeTab.UI_TabModeTab_C.Tick
	 */
	struct UUI_TabModeTab_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_TabModeTab.UI_TabModeTab_C.OnSynchronizeProperties
	 */
	struct UUI_TabModeTab_C_OnSynchronizeProperties_Params
	{	};

	/**
	 * Function UI_TabModeTab.UI_TabModeTab_C.ExecuteUbergraph_UI_TabModeTab
	 */
	struct UUI_TabModeTab_C_ExecuteUbergraph_UI_TabModeTab_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_TabModeTab.UI_TabModeTab_C.Clicked__DelegateSignature
	 */
	struct UUI_TabModeTab_C_Clicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
