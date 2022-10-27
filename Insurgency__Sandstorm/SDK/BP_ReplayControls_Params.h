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
	 * Function BP_ReplayControls.BP_ReplayControls_C.CreateReplayEventWidgets
	 */
	struct UBP_ReplayControls_C_CreateReplayEventWidgets_Params
	{
	public:
		TArray<struct FBlueprintReplayEvent>                       Events;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ReplayControls.BP_ReplayControls_C.UpdateTimeText
	 */
	struct UBP_ReplayControls_C_UpdateTimeText_Params
	{	};

	/**
	 * Function BP_ReplayControls.BP_ReplayControls_C.UpdateTimeDilationText
	 */
	struct UBP_ReplayControls_C_UpdateTimeDilationText_Params
	{	};

	/**
	 * Function BP_ReplayControls.BP_ReplayControls_C.OnFocusReceived
	 */
	struct UBP_ReplayControls_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_ReplayControls.BP_ReplayControls_C.OnMouseButtonDoubleClick
	 */
	struct UBP_ReplayControls_C_OnMouseButtonDoubleClick_Params
	{
	public:
		struct FGeometry                                           InMyGeometry;                                            // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       InMouseEvent;                                            // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_ReplayControls.BP_ReplayControls_C.OnMouseButtonUp
	 */
	struct UBP_ReplayControls_C_OnMouseButtonUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_ReplayControls.BP_ReplayControls_C.ScrubToTime
	 */
	struct UBP_ReplayControls_C_ScrubToTime_Params
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_R79B[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ReplayControls.BP_ReplayControls_C.GetTimeDilationText
	 */
	struct UBP_ReplayControls_C_GetTimeDilationText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_ReplayControls.BP_ReplayControls_C.UpdateSliderBackground
	 */
	struct UBP_ReplayControls_C_UpdateSliderBackground_Params
	{	};

	/**
	 * Function BP_ReplayControls.BP_ReplayControls_C.IsInteractable
	 */
	struct UBP_ReplayControls_C_IsInteractable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ReplayControls.BP_ReplayControls_C.OnMouseButtonDown
	 */
	struct UBP_ReplayControls_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_ReplayControls.BP_ReplayControls_C.GetSliderProgress
	 */
	struct UBP_ReplayControls_C_GetSliderProgress_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TM0A[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ReplayControls.BP_ReplayControls_C.GetTimerText
	 */
	struct UBP_ReplayControls_C_GetTimerText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_ReplayControls.BP_ReplayControls_C.OnEventsEnumerated_A1896B8F41770B019E95A6B00CA704BE
	 */
	struct UBP_ReplayControls_C_OnEventsEnumerated_A1896B8F41770B019E95A6B00CA704BE_Params
	{
	public:
		TArray<struct FBlueprintReplayEvent>                       EventsList;                                              // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ReplayControls.BP_ReplayControls_C.Construct
	 */
	struct UBP_ReplayControls_C_Construct_Params
	{	};

	/**
	 * Function BP_ReplayControls.BP_ReplayControls_C.Tick
	 */
	struct UBP_ReplayControls_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ReplayControls.BP_ReplayControls_C.BndEvt__SliderProgress_K2Node_ComponentBoundEvent_30_OnMouseCaptureBeginEvent__DelegateSignature
	 */
	struct UBP_ReplayControls_C_BndEvt__SliderProgress_K2Node_ComponentBoundEvent_30_OnMouseCaptureBeginEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_ReplayControls.BP_ReplayControls_C.BndEvt__SliderProgress_K2Node_ComponentBoundEvent_49_OnMouseCaptureEndEvent__DelegateSignature
	 */
	struct UBP_ReplayControls_C_BndEvt__SliderProgress_K2Node_ComponentBoundEvent_49_OnMouseCaptureEndEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_ReplayControls.BP_ReplayControls_C.OnScrubToTimeComplete
	 */
	struct UBP_ReplayControls_C_OnScrubToTimeComplete_Params
	{
	public:
		bool                                                       bSuccessful;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ReplayControls.BP_ReplayControls_C.BndEvt__Button_424_K2Node_ComponentBoundEvent_85_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_ReplayControls_C_BndEvt__Button_424_K2Node_ComponentBoundEvent_85_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_ReplayControls.BP_ReplayControls_C.BndEvt__BtnHidecontrols_K2Node_ComponentBoundEvent_46_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_ReplayControls_C_BndEvt__BtnHidecontrols_K2Node_ComponentBoundEvent_46_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_ReplayControls.BP_ReplayControls_C.BndEvt__SliderProgress_K2Node_ComponentBoundEvent_229_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct UBP_ReplayControls_C_BndEvt__SliderProgress_K2Node_ComponentBoundEvent_229_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ReplayControls.BP_ReplayControls_C.BndEvt__BP_ImageButton_K2Node_ComponentBoundEvent_374_OnClicked__DelegateSignature
	 */
	struct UBP_ReplayControls_C_BndEvt__BP_ImageButton_K2Node_ComponentBoundEvent_374_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BP_ReplayControls.BP_ReplayControls_C.OnScrubbingStateChanged
	 */
	struct UBP_ReplayControls_C_OnScrubbingStateChanged_Params
	{
	public:
		bool                                                       bIsScrubbing;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ReplayControls.BP_ReplayControls_C.ExecuteUbergraph_BP_ReplayControls
	 */
	struct UBP_ReplayControls_C_ExecuteUbergraph_BP_ReplayControls_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GZYD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
