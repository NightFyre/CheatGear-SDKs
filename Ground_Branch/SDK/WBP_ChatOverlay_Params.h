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
	 * Function WBP_ChatOverlay.WBP_ChatOverlay_C.OnGetMenuContent_1
	 */
	struct UWBP_ChatOverlay_C_OnGetMenuContent_1_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ChatOverlay.WBP_ChatOverlay_C.GetVisibility_1
	 */
	struct UWBP_ChatOverlay_C_GetVisibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ChatOverlay.WBP_ChatOverlay_C.OnKeyUp
	 */
	struct UWBP_ChatOverlay_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_ChatOverlay.WBP_ChatOverlay_C.OnKeyDown
	 */
	struct UWBP_ChatOverlay_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_ChatOverlay.WBP_ChatOverlay_C.AddChatLine
	 */
	struct UWBP_ChatOverlay_C_AddChatLine_Params
	{
	public:
		class AGBPlayerState*                                      InSenderPlayerState;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              InMessage;                                               // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FName                                                InType;                                                  // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ChatOverlay.WBP_ChatOverlay_C.BndEvt__ChatWindow_K2Node_ComponentBoundEvent_933_OnEditableTextBoxCommittedEvent__DelegateSignature
	 */
	struct UWBP_ChatOverlay_C_BndEvt__ChatWindow_K2Node_ComponentBoundEvent_933_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ChatOverlay.WBP_ChatOverlay_C.DelayedChatFocus
	 */
	struct UWBP_ChatOverlay_C_DelayedChatFocus_Params
	{	};

	/**
	 * Function WBP_ChatOverlay.WBP_ChatOverlay_C.Open
	 */
	struct UWBP_ChatOverlay_C_Open_Params
	{
	public:
		bool                                                       bTeamChat;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ChatOverlay.WBP_ChatOverlay_C.Close
	 */
	struct UWBP_ChatOverlay_C_Close_Params
	{	};

	/**
	 * Function WBP_ChatOverlay.WBP_ChatOverlay_C.BindEmojiList
	 */
	struct UWBP_ChatOverlay_C_BindEmojiList_Params
	{
	public:
		class UWBP_ChatEmojiList_Content_C*                        EmojiList;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ChatOverlay.WBP_ChatOverlay_C.BndEvt__Button_AddEmoji_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
	 */
	struct UWBP_ChatOverlay_C_BndEvt__Button_AddEmoji_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_ChatOverlay.WBP_ChatOverlay_C.OnEmojiSelected_Event_1
	 */
	struct UWBP_ChatOverlay_C_OnEmojiSelected_Event_1_Params
	{
	public:
		class FString                                              Code;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ChatOverlay.WBP_ChatOverlay_C.UpdateDeadChatNote
	 */
	struct UWBP_ChatOverlay_C_UpdateDeadChatNote_Params
	{	};

	/**
	 * Function WBP_ChatOverlay.WBP_ChatOverlay_C.CloseIfShowing
	 */
	struct UWBP_ChatOverlay_C_CloseIfShowing_Params
	{	};

	/**
	 * Function WBP_ChatOverlay.WBP_ChatOverlay_C.ExecuteUbergraph_WBP_ChatOverlay
	 */
	struct UWBP_ChatOverlay_C_ExecuteUbergraph_WBP_ChatOverlay_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
