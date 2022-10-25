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
	 * Function BP_ChatBox.BP_ChatBox_C.UpdateChatPosition
	 */
	struct UBP_ChatBox_C_UpdateChatPosition_Params
	{	};

	/**
	 * Function BP_ChatBox.BP_ChatBox_C.GetChatboxVisibility
	 */
	struct UBP_ChatBox_C_GetChatboxVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ChatBox.BP_ChatBox_C.UpdateChatInputHint
	 */
	struct UBP_ChatBox_C_UpdateChatInputHint_Params
	{	};

	/**
	 * Function BP_ChatBox.BP_ChatBox_C.OnFocusReceived
	 */
	struct UBP_ChatBox_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_ChatBox.BP_ChatBox_C.OnChatInputStarted
	 */
	struct UBP_ChatBox_C_OnChatInputStarted_Params
	{	};

	/**
	 * Function BP_ChatBox.BP_ChatBox_C.OnChatInputEnded
	 */
	struct UBP_ChatBox_C_OnChatInputEnded_Params
	{	};

	/**
	 * Function BP_ChatBox.BP_ChatBox_C.BndEvt__Input_K2Node_ComponentBoundEvent_14_OnEditableTextBoxCommittedEvent__DelegateSignature
	 */
	struct UBP_ChatBox_C_BndEvt__Input_K2Node_ComponentBoundEvent_14_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ChatBox.BP_ChatBox_C.OnChatMessageRecieved
	 */
	struct UBP_ChatBox_C_OnChatMessageRecieved_Params
	{
	public:
		class FText                                                Message;                                                 // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_ChatBox.BP_ChatBox_C.BndEvt__Input_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature
	 */
	struct UBP_ChatBox_C_BndEvt__Input_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_ChatBox.BP_ChatBox_C.HideChat
	 */
	struct UBP_ChatBox_C_HideChat_Params
	{	};

	/**
	 * Function BP_ChatBox.BP_ChatBox_C.Tick
	 */
	struct UBP_ChatBox_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ChatBox.BP_ChatBox_C.Construct
	 */
	struct UBP_ChatBox_C_Construct_Params
	{	};

	/**
	 * Function BP_ChatBox.BP_ChatBox_C.ExecuteUbergraph_BP_ChatBox
	 */
	struct UBP_ChatBox_C_ExecuteUbergraph_BP_ChatBox_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PGQO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
