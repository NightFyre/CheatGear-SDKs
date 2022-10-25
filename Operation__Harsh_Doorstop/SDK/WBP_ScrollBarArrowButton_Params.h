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
	 * Function WBP_ScrollBarArrowButton.WBP_ScrollBarArrowButton_C.GetMaxScrollOffset
	 */
	struct UWBP_ScrollBarArrowButton_C_GetMaxScrollOffset_Params
	{
	public:
		float                                                      MaxOffset;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ScrollBarArrowButton.WBP_ScrollBarArrowButton_C.IsInitialized
	 */
	struct UWBP_ScrollBarArrowButton_C_IsInitialized_Params
	{
	public:
		bool                                                       bInitialized;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ScrollBarArrowButton.WBP_ScrollBarArrowButton_C.SetScrollBox
	 */
	struct UWBP_ScrollBarArrowButton_C_SetScrollBox_Params
	{
	public:
		class UScrollBox*                                          ScrollBoxToUse;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ScrollBarArrowButton.WBP_ScrollBarArrowButton_C.BndEvt__ArrowBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_ScrollBarArrowButton_C_BndEvt__ArrowBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_ScrollBarArrowButton.WBP_ScrollBarArrowButton_C.PreConstruct
	 */
	struct UWBP_ScrollBarArrowButton_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ScrollBarArrowButton.WBP_ScrollBarArrowButton_C.OnInitialized
	 */
	struct UWBP_ScrollBarArrowButton_C_OnInitialized_Params
	{	};

	/**
	 * Function WBP_ScrollBarArrowButton.WBP_ScrollBarArrowButton_C.ExecuteUbergraph_WBP_ScrollBarArrowButton
	 */
	struct UWBP_ScrollBarArrowButton_C_ExecuteUbergraph_WBP_ScrollBarArrowButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
