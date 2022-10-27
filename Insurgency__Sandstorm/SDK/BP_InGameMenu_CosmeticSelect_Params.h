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
	 * Function BP_InGameMenu_CosmeticSelect.BP_InGameMenu_CosmeticSelect_C.OnAnalogValueChanged
	 */
	struct UBP_InGameMenu_CosmeticSelect_C_OnAnalogValueChanged_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FAnalogInputEvent                                   InAnalogInputEvent;                                      // 0x0038(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0078(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_InGameMenu_CosmeticSelect.BP_InGameMenu_CosmeticSelect_C.OnMouseMove
	 */
	struct UBP_InGameMenu_CosmeticSelect_C_OnMouseMove_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_InGameMenu_CosmeticSelect.BP_InGameMenu_CosmeticSelect_C.OnMouseButtonUp
	 */
	struct UBP_InGameMenu_CosmeticSelect_C_OnMouseButtonUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_InGameMenu_CosmeticSelect.BP_InGameMenu_CosmeticSelect_C.OnMouseButtonDown
	 */
	struct UBP_InGameMenu_CosmeticSelect_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_InGameMenu_CosmeticSelect.BP_InGameMenu_CosmeticSelect_C.ResetCharacterRotation
	 */
	struct UBP_InGameMenu_CosmeticSelect_C_ResetCharacterRotation_Params
	{	};

	/**
	 * Function BP_InGameMenu_CosmeticSelect.BP_InGameMenu_CosmeticSelect_C.AddCharacterRotation
	 */
	struct UBP_InGameMenu_CosmeticSelect_C_AddCharacterRotation_Params
	{	};

	/**
	 * Function BP_InGameMenu_CosmeticSelect.BP_InGameMenu_CosmeticSelect_C.OnFocusReceived
	 */
	struct UBP_InGameMenu_CosmeticSelect_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_InGameMenu_CosmeticSelect.BP_InGameMenu_CosmeticSelect_C.SavePreset
	 */
	struct UBP_InGameMenu_CosmeticSelect_C_SavePreset_Params
	{	};

	/**
	 * Function BP_InGameMenu_CosmeticSelect.BP_InGameMenu_CosmeticSelect_C.SelectCosmeticFromSave
	 */
	struct UBP_InGameMenu_CosmeticSelect_C_SelectCosmeticFromSave_Params
	{	};

	/**
	 * Function BP_InGameMenu_CosmeticSelect.BP_InGameMenu_CosmeticSelect_C.LoadPreset
	 */
	struct UBP_InGameMenu_CosmeticSelect_C_LoadPreset_Params
	{
	public:
		class FText                                                Name;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_InGameMenu_CosmeticSelect.BP_InGameMenu_CosmeticSelect_C.OnClickPreset
	 */
	struct UBP_InGameMenu_CosmeticSelect_C_OnClickPreset_Params
	{
	public:
		class FText                                                PresetName;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_InGameMenu_CosmeticSelect.BP_InGameMenu_CosmeticSelect_C.OnTeamInfoRep
	 */
	struct UBP_InGameMenu_CosmeticSelect_C_OnTeamInfoRep_Params
	{
	public:
		unsigned char                                              TeamId;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_CosmeticSelect.BP_InGameMenu_CosmeticSelect_C.PopulatePresets
	 */
	struct UBP_InGameMenu_CosmeticSelect_C_PopulatePresets_Params
	{	};

	/**
	 * Function BP_InGameMenu_CosmeticSelect.BP_InGameMenu_CosmeticSelect_C.Construct
	 */
	struct UBP_InGameMenu_CosmeticSelect_C_Construct_Params
	{	};

	/**
	 * Function BP_InGameMenu_CosmeticSelect.BP_InGameMenu_CosmeticSelect_C.OnPanelClosed
	 */
	struct UBP_InGameMenu_CosmeticSelect_C_OnPanelClosed_Params
	{	};

	/**
	 * Function BP_InGameMenu_CosmeticSelect.BP_InGameMenu_CosmeticSelect_C.Destruct
	 */
	struct UBP_InGameMenu_CosmeticSelect_C_Destruct_Params
	{	};

	/**
	 * Function BP_InGameMenu_CosmeticSelect.BP_InGameMenu_CosmeticSelect_C.OnPanelOpened
	 */
	struct UBP_InGameMenu_CosmeticSelect_C_OnPanelOpened_Params
	{	};

	/**
	 * Function BP_InGameMenu_CosmeticSelect.BP_InGameMenu_CosmeticSelect_C.OnConfirmPreset
	 */
	struct UBP_InGameMenu_CosmeticSelect_C_OnConfirmPreset_Params
	{	};

	/**
	 * Function BP_InGameMenu_CosmeticSelect.BP_InGameMenu_CosmeticSelect_C.BndEvt__BtnConfirmGamepad_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature
	 */
	struct UBP_InGameMenu_CosmeticSelect_C_BndEvt__BtnConfirmGamepad_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_InGameMenu_CosmeticSelect.BP_InGameMenu_CosmeticSelect_C.OnItemHovered
	 */
	struct UBP_InGameMenu_CosmeticSelect_C_OnItemHovered_Params
	{
	public:
		class UWidget*                                             Ref;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_CosmeticSelect.BP_InGameMenu_CosmeticSelect_C.OnMouseLeave
	 */
	struct UBP_InGameMenu_CosmeticSelect_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_InGameMenu_CosmeticSelect.BP_InGameMenu_CosmeticSelect_C.ExecuteUbergraph_BP_InGameMenu_CosmeticSelect
	 */
	struct UBP_InGameMenu_CosmeticSelect_C_ExecuteUbergraph_BP_InGameMenu_CosmeticSelect_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_L7OQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_InGameMenu_CosmeticSelect.BP_InGameMenu_CosmeticSelect_C.OnConfirmCosmeticPreset__DelegateSignature
	 */
	struct UBP_InGameMenu_CosmeticSelect_C_OnConfirmCosmeticPreset__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
