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
	 * Function BP_LocalGame_StartGameButton.BP_LocalGame_StartGameButton_C.HandleButtonClick
	 */
	struct UBP_LocalGame_StartGameButton_C_HandleButtonClick_Params
	{	};

	/**
	 * Function BP_LocalGame_StartGameButton.BP_LocalGame_StartGameButton_C.OnFocusReceived
	 */
	struct UBP_LocalGame_StartGameButton_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_LocalGame_StartGameButton.BP_LocalGame_StartGameButton_C.Construct
	 */
	struct UBP_LocalGame_StartGameButton_C_Construct_Params
	{	};

	/**
	 * Function BP_LocalGame_StartGameButton.BP_LocalGame_StartGameButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_LocalGame_StartGameButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_LocalGame_StartGameButton.BP_LocalGame_StartGameButton_C.OnRemovedFromFocusPath
	 */
	struct UBP_LocalGame_StartGameButton_C_OnRemovedFromFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_LocalGame_StartGameButton.BP_LocalGame_StartGameButton_C.OnAddedToFocusPath
	 */
	struct UBP_LocalGame_StartGameButton_C_OnAddedToFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_LocalGame_StartGameButton.BP_LocalGame_StartGameButton_C.OnMouseEnter
	 */
	struct UBP_LocalGame_StartGameButton_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_LocalGame_StartGameButton.BP_LocalGame_StartGameButton_C.OnMouseLeave
	 */
	struct UBP_LocalGame_StartGameButton_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_LocalGame_StartGameButton.BP_LocalGame_StartGameButton_C.SetPressedStyle
	 */
	struct UBP_LocalGame_StartGameButton_C_SetPressedStyle_Params
	{	};

	/**
	 * Function BP_LocalGame_StartGameButton.BP_LocalGame_StartGameButton_C.SetReleassedStyle
	 */
	struct UBP_LocalGame_StartGameButton_C_SetReleassedStyle_Params
	{	};

	/**
	 * Function BP_LocalGame_StartGameButton.BP_LocalGame_StartGameButton_C.ExecuteUbergraph_BP_LocalGame_StartGameButton
	 */
	struct UBP_LocalGame_StartGameButton_C_ExecuteUbergraph_BP_LocalGame_StartGameButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_LocalGame_StartGameButton.BP_LocalGame_StartGameButton_C.OnButtonPressed__DelegateSignature
	 */
	struct UBP_LocalGame_StartGameButton_C_OnButtonPressed__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
