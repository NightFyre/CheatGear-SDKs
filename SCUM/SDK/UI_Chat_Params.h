#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * Function UI_Chat.UI_Chat_C.CreateSuggestionLine
	 */
	struct UUI_Chat_C_CreateSuggestionLine_Params
	{
	public:
		class FString                                              Text;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UUI_ChatSuggestion_C*                                Widget;                                                  // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Chat.UI_Chat_C.OnPreviewKeyDown
	 */
	struct UUI_Chat_C_OnPreviewKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_Chat.UI_Chat_C.OnKeyDown
	 */
	struct UUI_Chat_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_Chat.UI_Chat_C.SetInputFocusIfNeeded
	 */
	struct UUI_Chat_C_SetInputFocusIfNeeded_Params
	{	};

	/**
	 * Function UI_Chat.UI_Chat_C.OnMouseButtonUp
	 */
	struct UUI_Chat_C_OnMouseButtonUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_Chat.UI_Chat_C.BndEvt__MuteButton_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Chat_C_BndEvt__MuteButton_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Chat.UI_Chat_C.Construct
	 */
	struct UUI_Chat_C_Construct_Params
	{	};

	/**
	 * Function UI_Chat.UI_Chat_C.UpdateActiveSuggestions
	 */
	struct UUI_Chat_C_UpdateActiveSuggestions_Params
	{	};

	/**
	 * Function UI_Chat.UI_Chat_C.ExecuteUbergraph_UI_Chat
	 */
	struct UUI_Chat_C_ExecuteUbergraph_UI_Chat_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4Q2W[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
