#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * Function TinkerUI.TBButton.StopDoubleClickPropagation
	 */
	struct UTBButton_StopDoubleClickPropagation_Params
	{	};

	/**
	 * Function TinkerUI.TBButton.SetIsInteractionEnabled
	 */
	struct UTBButton_SetIsInteractionEnabled_Params
	{
	public:
		bool                                                       bInIsInteractionEnabled;                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TinkerUI.TBButton.SetIsFocusable
	 */
	struct UTBButton_SetIsFocusable_Params
	{
	public:
		bool                                                       bInIsFocusable;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TinkerUI.TBButton.IsInteractionEnabled
	 */
	struct UTBButton_IsInteractionEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TinkerUI.TBButton.GetIsFocusable
	 */
	struct UTBButton_GetIsFocusable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TinkerUI.TBSlider.SetSliderFgBarColor
	 */
	struct UTBSlider_SetSliderFgBarColor_Params
	{
	public:
		struct FLinearColor                                        InValue;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TinkerUI.TBSlider.SetMouseUsesStep
	 */
	struct UTBSlider_SetMouseUsesStep_Params
	{
	public:
		bool                                                       bInValue;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
