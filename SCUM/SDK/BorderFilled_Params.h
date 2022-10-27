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
	 * Function BorderFilled.BorderFilled_C.UpdateBorderFilled
	 */
	struct UBorderFilled_C_UpdateBorderFilled_Params
	{	};

	/**
	 * Function BorderFilled.BorderFilled_C.SetBottomMarginOn
	 */
	struct UBorderFilled_C_SetBottomMarginOn_Params
	{
	public:
		bool                                                       shouldBottomMarginBeOn;                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BorderFilled.BorderFilled_C.SetPaddingOnBackgroundImage
	 */
	struct UBorderFilled_C_SetPaddingOnBackgroundImage_Params
	{
	public:
		float                                                      Margin;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      marginGap;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BorderFilled.BorderFilled_C.SetColorOnBackgroundImage
	 */
	struct UBorderFilled_C_SetColorOnBackgroundImage_Params
	{
	public:
		struct FLinearColor                                        InColorAndOpacity;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BorderFilled.BorderFilled_C.SetBackgroundColor
	 */
	struct UBorderFilled_C_SetBackgroundColor_Params
	{
	public:
		struct FLinearColor                                        backgroundColorToSet;                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BorderFilled.BorderFilled_C.UpdateBackgroundColor
	 */
	struct UBorderFilled_C_UpdateBackgroundColor_Params
	{
	public:
		struct FLinearColor                                        NewBackgroundColor;                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BorderFilled.BorderFilled_C.SetBorderColor
	 */
	struct UBorderFilled_C_SetBorderColor_Params
	{
	public:
		struct FLinearColor                                        borderColorToSet;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BorderFilled.BorderFilled_C.Construct
	 */
	struct UBorderFilled_C_Construct_Params
	{	};

	/**
	 * Function BorderFilled.BorderFilled_C.OnSynchronizeProperties
	 */
	struct UBorderFilled_C_OnSynchronizeProperties_Params
	{	};

	/**
	 * Function BorderFilled.BorderFilled_C.ExecuteUbergraph_BorderFilled
	 */
	struct UBorderFilled_C_ExecuteUbergraph_BorderFilled_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
