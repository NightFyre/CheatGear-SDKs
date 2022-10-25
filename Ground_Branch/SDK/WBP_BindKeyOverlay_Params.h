#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * Function WBP_BindKeyOverlay.WBP_BindKeyOverlay_C.GetRemappedKey
	 */
	struct UWBP_BindKeyOverlay_C_GetRemappedKey_Params
	{
	public:
		struct FKey                                                InKey;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		struct FKey                                                OutKey;                                                  // 0x0018(0x0018)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_BindKeyOverlay.WBP_BindKeyOverlay_C.OnMouseButtonDown
	 */
	struct UWBP_BindKeyOverlay_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_BindKeyOverlay.WBP_BindKeyOverlay_C.OnKeyDown
	 */
	struct UWBP_BindKeyOverlay_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_BindKeyOverlay.WBP_BindKeyOverlay_C.OnMouseWheel
	 */
	struct UWBP_BindKeyOverlay_C_OnMouseWheel_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_BindKeyOverlay.WBP_BindKeyOverlay_C.GetVisibility_ModifiersAndKey
	 */
	struct UWBP_BindKeyOverlay_C_GetVisibility_ModifiersAndKey_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_BindKeyOverlay.WBP_BindKeyOverlay_C.GetVisibility_BindKeyMessage
	 */
	struct UWBP_BindKeyOverlay_C_GetVisibility_BindKeyMessage_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_BindKeyOverlay.WBP_BindKeyOverlay_C.BndEvt__Button_Key_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_BindKeyOverlay_C_BndEvt__Button_Key_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_BindKeyOverlay.WBP_BindKeyOverlay_C.Construct
	 */
	struct UWBP_BindKeyOverlay_C_Construct_Params
	{	};

	/**
	 * Function WBP_BindKeyOverlay.WBP_BindKeyOverlay_C.SetKey
	 */
	struct UWBP_BindKeyOverlay_C_SetKey_Params
	{
	public:
		struct FKey                                                InKey;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_BindKeyOverlay.WBP_BindKeyOverlay_C.BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_BindKeyOverlay_C_BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_BindKeyOverlay.WBP_BindKeyOverlay_C.BndEvt__Button_Ok_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_BindKeyOverlay_C_BndEvt__Button_Ok_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_BindKeyOverlay.WBP_BindKeyOverlay_C.BndEvt__Button_ClearBinds_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_BindKeyOverlay_C_BndEvt__Button_ClearBinds_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_BindKeyOverlay.WBP_BindKeyOverlay_C.ExecuteUbergraph_WBP_BindKeyOverlay
	 */
	struct UWBP_BindKeyOverlay_C_ExecuteUbergraph_WBP_BindKeyOverlay_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GDF0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_BindKeyOverlay.WBP_BindKeyOverlay_C.OnOk__DelegateSignature
	 */
	struct UWBP_BindKeyOverlay_C_OnOk__DelegateSignature_Params
	{
	public:
		struct FInputBoundKey                                      BoundKey;                                                // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
