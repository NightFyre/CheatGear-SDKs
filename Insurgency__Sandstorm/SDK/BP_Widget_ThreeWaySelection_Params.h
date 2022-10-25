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
	 * Function BP_Widget_ThreeWaySelection.BP_Widget_ThreeWaySelection_C.SetState
	 */
	struct UBP_Widget_ThreeWaySelection_C_SetState_Params
	{
	public:
		int32_t                                                    State;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Widget_ThreeWaySelection.BP_Widget_ThreeWaySelection_C.SetHovered
	 */
	struct UBP_Widget_ThreeWaySelection_C_SetHovered_Params
	{
	public:
		bool                                                       NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Widget_ThreeWaySelection.BP_Widget_ThreeWaySelection_C.UpdateState
	 */
	struct UBP_Widget_ThreeWaySelection_C_UpdateState_Params
	{	};

	/**
	 * Function BP_Widget_ThreeWaySelection.BP_Widget_ThreeWaySelection_C.PreConstruct
	 */
	struct UBP_Widget_ThreeWaySelection_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Widget_ThreeWaySelection.BP_Widget_ThreeWaySelection_C.BndEvt__ThreeWayBtn_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UBP_Widget_ThreeWaySelection_C_BndEvt__ThreeWayBtn_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Widget_ThreeWaySelection.BP_Widget_ThreeWaySelection_C.OnMouseEnter
	 */
	struct UBP_Widget_ThreeWaySelection_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_Widget_ThreeWaySelection.BP_Widget_ThreeWaySelection_C.OnAddedToFocusPath
	 */
	struct UBP_Widget_ThreeWaySelection_C_OnAddedToFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_Widget_ThreeWaySelection.BP_Widget_ThreeWaySelection_C.OnMouseLeave
	 */
	struct UBP_Widget_ThreeWaySelection_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_Widget_ThreeWaySelection.BP_Widget_ThreeWaySelection_C.OnRemovedFromFocusPath
	 */
	struct UBP_Widget_ThreeWaySelection_C_OnRemovedFromFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_Widget_ThreeWaySelection.BP_Widget_ThreeWaySelection_C.ExecuteUbergraph_BP_Widget_ThreeWaySelection
	 */
	struct UBP_Widget_ThreeWaySelection_C_ExecuteUbergraph_BP_Widget_ThreeWaySelection_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Widget_ThreeWaySelection.BP_Widget_ThreeWaySelection_C.OnStateChange__DelegateSignature
	 */
	struct UBP_Widget_ThreeWaySelection_C_OnStateChange__DelegateSignature_Params
	{
	public:
		int32_t                                                    NewState;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Widget_ThreeWaySelection.BP_Widget_ThreeWaySelection_C.OnToggle__DelegateSignature
	 */
	struct UBP_Widget_ThreeWaySelection_C_OnToggle__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
