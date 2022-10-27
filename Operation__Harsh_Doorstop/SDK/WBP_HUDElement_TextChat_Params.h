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
	 * Function WBP_HUDElement_TextChat.WBP_HUDElement_TextChat_C.OnPaint
	 */
	struct UWBP_HUDElement_TextChat_C_OnPaint_Params
	{
	public:
		struct FPaintContext                                       Context;                                                 // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function WBP_HUDElement_TextChat.WBP_HUDElement_TextChat_C.GetChatHistoryIsVisible
	 */
	struct UWBP_HUDElement_TextChat_C_GetChatHistoryIsVisible_Params
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_HUDElement_TextChat.WBP_HUDElement_TextChat_C.AddNewOutputListing
	 */
	struct UWBP_HUDElement_TextChat_C_AddNewOutputListing_Params
	{
	public:
		class UHDTextChatMsgInfo*                                  ChatMsg;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWidget*                                             Listing;                                                 // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_HUDElement_TextChat.WBP_HUDElement_TextChat_C.DisplayChatMessage
	 */
	struct UWBP_HUDElement_TextChat_C_DisplayChatMessage_Params
	{
	public:
		class UHDTextChatMsgInfo*                                  NewChatMsg;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_HUDElement_TextChat.WBP_HUDElement_TextChat_C.PreConstruct
	 */
	struct UWBP_HUDElement_TextChat_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_HUDElement_TextChat.WBP_HUDElement_TextChat_C.StartTalking
	 */
	struct UWBP_HUDElement_TextChat_C_StartTalking_Params
	{
	public:
		class UDFCommChannel*                                      TalkChannel;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_HUDElement_TextChat.WBP_HUDElement_TextChat_C.StopTalking
	 */
	struct UWBP_HUDElement_TextChat_C_StopTalking_Params
	{	};

	/**
	 * Function WBP_HUDElement_TextChat.WBP_HUDElement_TextChat_C.BndEvt__WBP_TextChat_Input_K2Node_ComponentBoundEvent_2_OnInputTextCommitted__DelegateSignature
	 */
	struct UWBP_HUDElement_TextChat_C_BndEvt__WBP_TextChat_Input_K2Node_ComponentBoundEvent_2_OnInputTextCommitted__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_HUDElement_TextChat.WBP_HUDElement_TextChat_C.OnInitialized
	 */
	struct UWBP_HUDElement_TextChat_C_OnInitialized_Params
	{	};

	/**
	 * Function WBP_HUDElement_TextChat.WBP_HUDElement_TextChat_C.ChatHistoryTimeout
	 */
	struct UWBP_HUDElement_TextChat_C_ChatHistoryTimeout_Params
	{	};

	/**
	 * Function WBP_HUDElement_TextChat.WBP_HUDElement_TextChat_C.SetChatHistoryIsVisible
	 */
	struct UWBP_HUDElement_TextChat_C_SetChatHistoryIsVisible_Params
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_HUDElement_TextChat.WBP_HUDElement_TextChat_C.BndEvt__ChatMsgLogSBox_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature
	 */
	struct UWBP_HUDElement_TextChat_C_BndEvt__ChatMsgLogSBox_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature_Params
	{
	public:
		float                                                      CurrentOffset;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_HUDElement_TextChat.WBP_HUDElement_TextChat_C.ExecuteUbergraph_WBP_HUDElement_TextChat
	 */
	struct UWBP_HUDElement_TextChat_C_ExecuteUbergraph_WBP_HUDElement_TextChat_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_B7XN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
