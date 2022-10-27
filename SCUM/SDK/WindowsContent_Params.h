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
	 * Function WindowsContent.WindowsContent_C.GetChildrenWindows
	 */
	struct UWindowsContent_C_GetChildrenWindows_Params
	{
	public:
		TArray<class UCustomGUIWindow_C*>                          childrenWidgets;                                         // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function WindowsContent.WindowsContent_C.AddChildWindow
	 */
	struct UWindowsContent_C_AddChildWindow_Params
	{
	public:
		class UCustomGUIWindow_C*                                  childWindowRef;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WindowsContent.WindowsContent_C.NotifyParentOnAlarmSwitchedOffOnContent
	 */
	struct UWindowsContent_C_NotifyParentOnAlarmSwitchedOffOnContent_Params
	{	};

	/**
	 * Function WindowsContent.WindowsContent_C.NotifyParentOnAlarmRaisedOnContent
	 */
	struct UWindowsContent_C_NotifyParentOnAlarmRaisedOnContent_Params
	{	};

	/**
	 * Function WindowsContent.WindowsContent_C.NotifyParentOnWindowsContentSizeChanged
	 */
	struct UWindowsContent_C_NotifyParentOnWindowsContentSizeChanged_Params
	{	};

	/**
	 * Function WindowsContent.WindowsContent_C.SetParentWindow
	 */
	struct UWindowsContent_C_SetParentWindow_Params
	{
	public:
		class UCustomGUIWindow_C*                                  parentWindowToSet;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WindowsContent.WindowsContent_C.GetParentWindow
	 */
	struct UWindowsContent_C_GetParentWindow_Params
	{
	public:
		class UCustomGUIWindow_C*                                  parentWindow;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WindowsContent.WindowsContent_C.WindowContentSizeChanged
	 */
	struct UWindowsContent_C_WindowContentSizeChanged_Params
	{	};

	/**
	 * Function WindowsContent.WindowsContent_C.ExecuteUbergraph_WindowsContent
	 */
	struct UWindowsContent_C_ExecuteUbergraph_WindowsContent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
