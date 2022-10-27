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
	 * Function BP_MapVoteButton.BP_MapVoteButton_C.SetSelectedStyle
	 */
	struct UBP_MapVoteButton_C_SetSelectedStyle_Params
	{
	public:
		bool                                                       bSelected;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MapVoteButton.BP_MapVoteButton_C.SetHoverStyle
	 */
	struct UBP_MapVoteButton_C_SetHoverStyle_Params
	{
	public:
		bool                                                       bHovered;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MapVoteButton.BP_MapVoteButton_C.InternalSetVoteCount
	 */
	struct UBP_MapVoteButton_C_InternalSetVoteCount_Params
	{
	public:
		int32_t                                                    Count;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MapVoteButton.BP_MapVoteButton_C.PreConstruct
	 */
	struct UBP_MapVoteButton_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MapVoteButton.BP_MapVoteButton_C.Construct
	 */
	struct UBP_MapVoteButton_C_Construct_Params
	{	};

	/**
	 * Function BP_MapVoteButton.BP_MapVoteButton_C.SetVoteCount
	 */
	struct UBP_MapVoteButton_C_SetVoteCount_Params
	{
	public:
		int32_t                                                    NewVoteCount;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MapVoteButton.BP_MapVoteButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 */
	struct UBP_MapVoteButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MapVoteButton.BP_MapVoteButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBP_MapVoteButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MapVoteButton.BP_MapVoteButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBP_MapVoteButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MapVoteButton.BP_MapVoteButton_C.SetLocalVoteState
	 */
	struct UBP_MapVoteButton_C_SetLocalVoteState_Params
	{
	public:
		bool                                                       bSelected;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MapVoteButton.BP_MapVoteButton_C.PlayWinningVoteAnimation
	 */
	struct UBP_MapVoteButton_C_PlayWinningVoteAnimation_Params
	{	};

	/**
	 * Function BP_MapVoteButton.BP_MapVoteButton_C.PlayLosingVoteAnimation
	 */
	struct UBP_MapVoteButton_C_PlayLosingVoteAnimation_Params
	{	};

	/**
	 * Function BP_MapVoteButton.BP_MapVoteButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonFocusEvent__DelegateSignature
	 */
	struct UBP_MapVoteButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonFocusEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MapVoteButton.BP_MapVoteButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonFocusEvent__DelegateSignature
	 */
	struct UBP_MapVoteButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonFocusEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MapVoteButton.BP_MapVoteButton_C.ExecuteUbergraph_BP_MapVoteButton
	 */
	struct UBP_MapVoteButton_C_ExecuteUbergraph_BP_MapVoteButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MapVoteButton.BP_MapVoteButton_C.OnOptionSelected__DelegateSignature
	 */
	struct UBP_MapVoteButton_C_OnOptionSelected__DelegateSignature_Params
	{
	public:
		EMapVoteSelection                                          Selection;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
