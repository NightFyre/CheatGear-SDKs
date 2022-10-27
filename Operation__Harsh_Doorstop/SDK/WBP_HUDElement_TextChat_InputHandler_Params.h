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
	 * Function WBP_HUDElement_TextChat_InputHandler.WBP_HUDElement_TextChat_InputHandler_C.StartTalking
	 */
	struct UWBP_HUDElement_TextChat_InputHandler_C_StartTalking_Params
	{
	public:
		class UDFCommChannel*                                      NewTalkChannel;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_HUDElement_TextChat_InputHandler.WBP_HUDElement_TextChat_InputHandler_C.StopTalking
	 */
	struct UWBP_HUDElement_TextChat_InputHandler_C_StopTalking_Params
	{
	public:
		class UDFCommChannel*                                      CurrentChannel;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_HUDElement_TextChat_InputHandler.WBP_HUDElement_TextChat_InputHandler_C.InputTextEntered
	 */
	struct UWBP_HUDElement_TextChat_InputHandler_C_InputTextEntered_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_HUDElement_TextChat_InputHandler.WBP_HUDElement_TextChat_InputHandler_C.BndEvt__MsgInputTextBox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature
	 */
	struct UWBP_HUDElement_TextChat_InputHandler_C_BndEvt__MsgInputTextBox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_HUDElement_TextChat_InputHandler.WBP_HUDElement_TextChat_InputHandler_C.ExecuteUbergraph_WBP_HUDElement_TextChat_InputHandler
	 */
	struct UWBP_HUDElement_TextChat_InputHandler_C_ExecuteUbergraph_WBP_HUDElement_TextChat_InputHandler_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PIHO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_HUDElement_TextChat_InputHandler.WBP_HUDElement_TextChat_InputHandler_C.OnInputTextCommitted__DelegateSignature
	 */
	struct UWBP_HUDElement_TextChat_InputHandler_C_OnInputTextCommitted__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
