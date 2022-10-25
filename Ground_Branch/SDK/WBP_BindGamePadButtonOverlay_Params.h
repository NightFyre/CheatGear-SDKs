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
	 * Function WBP_BindGamePadButtonOverlay.WBP_BindGamePadButtonOverlay_C.GetRemappedKey
	 */
	struct UWBP_BindGamePadButtonOverlay_C_GetRemappedKey_Params
	{
	public:
		struct FKey                                                InKey;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		struct FKey                                                OutKey;                                                  // 0x0018(0x0018)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_BindGamePadButtonOverlay.WBP_BindGamePadButtonOverlay_C.OnKeyDown
	 */
	struct UWBP_BindGamePadButtonOverlay_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_BindGamePadButtonOverlay.WBP_BindGamePadButtonOverlay_C.GetVisibility_ModifiersAndKey
	 */
	struct UWBP_BindGamePadButtonOverlay_C_GetVisibility_ModifiersAndKey_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_BindGamePadButtonOverlay.WBP_BindGamePadButtonOverlay_C.GetVisibility_BindKeyMessage
	 */
	struct UWBP_BindGamePadButtonOverlay_C_GetVisibility_BindKeyMessage_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_BindGamePadButtonOverlay.WBP_BindGamePadButtonOverlay_C.BndEvt__Button_Key_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_BindGamePadButtonOverlay_C_BndEvt__Button_Key_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_BindGamePadButtonOverlay.WBP_BindGamePadButtonOverlay_C.Construct
	 */
	struct UWBP_BindGamePadButtonOverlay_C_Construct_Params
	{	};

	/**
	 * Function WBP_BindGamePadButtonOverlay.WBP_BindGamePadButtonOverlay_C.SetKey
	 */
	struct UWBP_BindGamePadButtonOverlay_C_SetKey_Params
	{
	public:
		struct FKey                                                InKey;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_BindGamePadButtonOverlay.WBP_BindGamePadButtonOverlay_C.BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_BindGamePadButtonOverlay_C_BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_BindGamePadButtonOverlay.WBP_BindGamePadButtonOverlay_C.BndEvt__Button_Ok_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_BindGamePadButtonOverlay_C_BndEvt__Button_Ok_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_BindGamePadButtonOverlay.WBP_BindGamePadButtonOverlay_C.BndEvt__Button_ClearBinds_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_BindGamePadButtonOverlay_C_BndEvt__Button_ClearBinds_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_BindGamePadButtonOverlay.WBP_BindGamePadButtonOverlay_C.ExecuteUbergraph_WBP_BindGamePadButtonOverlay
	 */
	struct UWBP_BindGamePadButtonOverlay_C_ExecuteUbergraph_WBP_BindGamePadButtonOverlay_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_BindGamePadButtonOverlay.WBP_BindGamePadButtonOverlay_C.OnOk__DelegateSignature
	 */
	struct UWBP_BindGamePadButtonOverlay_C_OnOk__DelegateSignature_Params
	{
	public:
		struct FInputBoundKey                                      BoundKey;                                                // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
