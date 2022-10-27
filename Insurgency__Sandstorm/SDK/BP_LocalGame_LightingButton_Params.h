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
	 * Function BP_LocalGame_LightingButton.BP_LocalGame_LightingButton_C.OnFocusReceived
	 */
	struct UBP_LocalGame_LightingButton_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_LocalGame_LightingButton.BP_LocalGame_LightingButton_C.SetChosen
	 */
	struct UBP_LocalGame_LightingButton_C_SetChosen_Params
	{
	public:
		bool                                                       IsChosen;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_LocalGame_LightingButton.BP_LocalGame_LightingButton_C.Construct
	 */
	struct UBP_LocalGame_LightingButton_C_Construct_Params
	{	};

	/**
	 * Function BP_LocalGame_LightingButton.BP_LocalGame_LightingButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_LocalGame_LightingButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_LocalGame_LightingButton.BP_LocalGame_LightingButton_C.OnAddedToFocusPath
	 */
	struct UBP_LocalGame_LightingButton_C_OnAddedToFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_LocalGame_LightingButton.BP_LocalGame_LightingButton_C.OnRemovedFromFocusPath
	 */
	struct UBP_LocalGame_LightingButton_C_OnRemovedFromFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_LocalGame_LightingButton.BP_LocalGame_LightingButton_C.OnMouseEnter
	 */
	struct UBP_LocalGame_LightingButton_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_LocalGame_LightingButton.BP_LocalGame_LightingButton_C.OnMouseLeave
	 */
	struct UBP_LocalGame_LightingButton_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_LocalGame_LightingButton.BP_LocalGame_LightingButton_C.ExecuteUbergraph_BP_LocalGame_LightingButton
	 */
	struct UBP_LocalGame_LightingButton_C_ExecuteUbergraph_BP_LocalGame_LightingButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_LocalGame_LightingButton.BP_LocalGame_LightingButton_C.OnLightingChosen__DelegateSignature
	 */
	struct UBP_LocalGame_LightingButton_C_OnLightingChosen__DelegateSignature_Params
	{
	public:
		class UBP_LocalGame_LightingButton_C*                      LightingButton;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
