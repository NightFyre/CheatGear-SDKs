#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * Function BP_ObjectiveSecondaryIcon.BP_ObjectiveSecondaryIcon_C.GetObjectiveIconFillColorAndOpacity
	 */
	struct UBP_ObjectiveSecondaryIcon_C_GetObjectiveIconFillColorAndOpacity_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ObjectiveSecondaryIcon.BP_ObjectiveSecondaryIcon_C.GetObjectiveIconColorAndOpacity
	 */
	struct UBP_ObjectiveSecondaryIcon_C_GetObjectiveIconColorAndOpacity_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ObjectiveSecondaryIcon.BP_ObjectiveSecondaryIcon_C.GetMainOpacity
	 */
	struct UBP_ObjectiveSecondaryIcon_C_GetMainOpacity_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_ObjectiveSecondaryIcon.BP_ObjectiveSecondaryIcon_C.GetTextColor
	 */
	struct UBP_ObjectiveSecondaryIcon_C_GetTextColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_ObjectiveSecondaryIcon.BP_ObjectiveSecondaryIcon_C.GetBgColor
	 */
	struct UBP_ObjectiveSecondaryIcon_C_GetBgColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ObjectiveSecondaryIcon.BP_ObjectiveSecondaryIcon_C.CheckObjectiveDestroyed
	 */
	struct UBP_ObjectiveSecondaryIcon_C_CheckObjectiveDestroyed_Params
	{	};

	/**
	 * Function BP_ObjectiveSecondaryIcon.BP_ObjectiveSecondaryIcon_C.GetTypeIcon
	 */
	struct UBP_ObjectiveSecondaryIcon_C_GetTypeIcon_Params
	{
	public:
		struct FSlateBrush                                         ReturnValue;                                             // 0x0000(0x0088)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_ObjectiveSecondaryIcon.BP_ObjectiveSecondaryIcon_C.GetCanvasVisibility
	 */
	struct UBP_ObjectiveSecondaryIcon_C_GetCanvasVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ObjectiveSecondaryIcon.BP_ObjectiveSecondaryIcon_C.GetRightSecondaryTypeVisibility
	 */
	struct UBP_ObjectiveSecondaryIcon_C_GetRightSecondaryTypeVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ObjectiveSecondaryIcon.BP_ObjectiveSecondaryIcon_C.GetLeftSecondaryTypeVisibility
	 */
	struct UBP_ObjectiveSecondaryIcon_C_GetLeftSecondaryTypeVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ObjectiveSecondaryIcon.BP_ObjectiveSecondaryIcon_C.Tick
	 */
	struct UBP_ObjectiveSecondaryIcon_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ObjectiveSecondaryIcon.BP_ObjectiveSecondaryIcon_C.Construct
	 */
	struct UBP_ObjectiveSecondaryIcon_C_Construct_Params
	{	};

	/**
	 * Function BP_ObjectiveSecondaryIcon.BP_ObjectiveSecondaryIcon_C.ExecuteUbergraph_BP_ObjectiveSecondaryIcon
	 */
	struct UBP_ObjectiveSecondaryIcon_C_ExecuteUbergraph_BP_ObjectiveSecondaryIcon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
