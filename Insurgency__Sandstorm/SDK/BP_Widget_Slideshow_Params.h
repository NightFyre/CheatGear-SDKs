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
	 * Function BP_Widget_Slideshow.BP_Widget_Slideshow_C.ClearSlideshowEntries
	 */
	struct UBP_Widget_Slideshow_C_ClearSlideshowEntries_Params
	{	};

	/**
	 * Function BP_Widget_Slideshow.BP_Widget_Slideshow_C.HasAnyContent
	 */
	struct UBP_Widget_Slideshow_C_HasAnyContent_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3T4T[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Widget_Slideshow.BP_Widget_Slideshow_C.GetSlideshowCount
	 */
	struct UBP_Widget_Slideshow_C_GetSlideshowCount_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Widget_Slideshow.BP_Widget_Slideshow_C.UpdateNavigationVisibility
	 */
	struct UBP_Widget_Slideshow_C_UpdateNavigationVisibility_Params
	{	};

	/**
	 * Function BP_Widget_Slideshow.BP_Widget_Slideshow_C.StopAutomaticImageSwitch
	 */
	struct UBP_Widget_Slideshow_C_StopAutomaticImageSwitch_Params
	{	};

	/**
	 * Function BP_Widget_Slideshow.BP_Widget_Slideshow_C.SetupAutomaticImageSwitch
	 */
	struct UBP_Widget_Slideshow_C_SetupAutomaticImageSwitch_Params
	{	};

	/**
	 * Function BP_Widget_Slideshow.BP_Widget_Slideshow_C.NavigatePrevious
	 */
	struct UBP_Widget_Slideshow_C_NavigatePrevious_Params
	{	};

	/**
	 * Function BP_Widget_Slideshow.BP_Widget_Slideshow_C.NavigateNext
	 */
	struct UBP_Widget_Slideshow_C_NavigateNext_Params
	{	};

	/**
	 * Function BP_Widget_Slideshow.BP_Widget_Slideshow_C.NavigateDirection
	 */
	struct UBP_Widget_Slideshow_C_NavigateDirection_Params
	{
	public:
		int32_t                                                    Direction;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Widget_Slideshow.BP_Widget_Slideshow_C.UpdateNavigationButtons
	 */
	struct UBP_Widget_Slideshow_C_UpdateNavigationButtons_Params
	{
	public:
		int32_t                                                    OldIndex;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NewIndex;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Widget_Slideshow.BP_Widget_Slideshow_C.AddPageNavigationWidget
	 */
	struct UBP_Widget_Slideshow_C_AddPageNavigationWidget_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Y1Z1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Widget_Slideshow.BP_Widget_Slideshow_C.NavigateTo
	 */
	struct UBP_Widget_Slideshow_C_NavigateTo_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Widget_Slideshow.BP_Widget_Slideshow_C.AddSlideshowEntry
	 */
	struct UBP_Widget_Slideshow_C_AddSlideshowEntry_Params
	{
	public:
		class UUserWidget*                                         NewWidget;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Widget_Slideshow.BP_Widget_Slideshow_C.PreConstruct
	 */
	struct UBP_Widget_Slideshow_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Widget_Slideshow.BP_Widget_Slideshow_C.OnAutomaticImageSwitch
	 */
	struct UBP_Widget_Slideshow_C_OnAutomaticImageSwitch_Params
	{	};

	/**
	 * Function BP_Widget_Slideshow.BP_Widget_Slideshow_C.OnMouseEnter
	 */
	struct UBP_Widget_Slideshow_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_Widget_Slideshow.BP_Widget_Slideshow_C.OnMouseLeave
	 */
	struct UBP_Widget_Slideshow_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_Widget_Slideshow.BP_Widget_Slideshow_C.CompleteFadeOut
	 */
	struct UBP_Widget_Slideshow_C_CompleteFadeOut_Params
	{	};

	/**
	 * Function BP_Widget_Slideshow.BP_Widget_Slideshow_C.ExecuteUbergraph_BP_Widget_Slideshow
	 */
	struct UBP_Widget_Slideshow_C_ExecuteUbergraph_BP_Widget_Slideshow_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
