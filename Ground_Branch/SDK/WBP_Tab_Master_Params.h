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
	 * Function WBP_Tab_Master.WBP_Tab_Master_C.IsValidClass
	 */
	struct UWBP_Tab_Master_C_IsValidClass_Params
	{
	public:
		class UWidget*                                             ChildWidget;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsValid;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JW7K[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Tab_Master.WBP_Tab_Master_C.GetTabTextFontShadowColour
	 */
	struct UWBP_Tab_Master_C_GetTabTextFontShadowColour_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Tab_Master.WBP_Tab_Master_C.GetTabTextFontColour
	 */
	struct UWBP_Tab_Master_C_GetTabTextFontColour_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_Tab_Master.WBP_Tab_Master_C.SetSelected
	 */
	struct UWBP_Tab_Master_C_SetSelected_Params
	{
	public:
		bool                                                       IsSelected;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Tab_Master.WBP_Tab_Master_C.InternalOnSelected
	 */
	struct UWBP_Tab_Master_C_InternalOnSelected_Params
	{	};

	/**
	 * Function WBP_Tab_Master.WBP_Tab_Master_C.InternalStateChanged
	 */
	struct UWBP_Tab_Master_C_InternalStateChanged_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Tab_Master.WBP_Tab_Master_C.InternalSetSelected
	 */
	struct UWBP_Tab_Master_C_InternalSetSelected_Params
	{
	public:
		bool                                                       IsSelected;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Tab_Master.WBP_Tab_Master_C.SetInitiallySelected
	 */
	struct UWBP_Tab_Master_C_SetInitiallySelected_Params
	{
	public:
		float                                                      SelectionDelay;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Tab_Master.WBP_Tab_Master_C.ExecuteUbergraph_WBP_Tab_Master
	 */
	struct UWBP_Tab_Master_C_ExecuteUbergraph_WBP_Tab_Master_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
