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
	 * Function ScrollableContent.ScrollableContent_C.GetTitleText
	 */
	struct UScrollableContent_C_GetTitleText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function ScrollableContent.ScrollableContent_C.GetDefaultTitle
	 */
	struct UScrollableContent_C_GetDefaultTitle_Params
	{
	public:
		class FText                                                defaultTitle;                                            // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function ScrollableContent.ScrollableContent_C.ResetInputChatLineString
	 */
	struct UScrollableContent_C_ResetInputChatLineString_Params
	{	};

	/**
	 * Function ScrollableContent.ScrollableContent_C.SetInputChatLineString
	 */
	struct UScrollableContent_C_SetInputChatLineString_Params
	{
	public:
		class FText                                                chatLineStringToSet;                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function ScrollableContent.ScrollableContent_C.GetInputChatLineText
	 */
	struct UScrollableContent_C_GetInputChatLineText_Params
	{
	public:
		class FText                                                chatLineString;                                          // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function ScrollableContent.ScrollableContent_C.PrintChatMessages
	 */
	struct UScrollableContent_C_PrintChatMessages_Params
	{	};

	/**
	 * Function ScrollableContent.ScrollableContent_C.SelectCustomColor
	 */
	struct UScrollableContent_C_SelectCustomColor_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScrollableContent.ScrollableContent_C.AutoCreateContent
	 */
	struct UScrollableContent_C_AutoCreateContent_Params
	{	};

	/**
	 * Function ScrollableContent.ScrollableContent_C.PopulateMessageStrings
	 */
	struct UScrollableContent_C_PopulateMessageStrings_Params
	{	};

	/**
	 * Function ScrollableContent.ScrollableContent_C.AddTextLine
	 */
	struct UScrollableContent_C_AddTextLine_Params
	{
	public:
		class FText                                                textToSet;                                               // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FLinearColor                                        Color;                                                   // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       scrollToTheEnd;                                          // 0x0028(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       lineAdded;                                               // 0x0029(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SOU5[0x6];                                   // 0x002A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ScrollableContent.ScrollableContent_C.OnMouseButtonDownOnConsole
	 */
	struct UScrollableContent_C_OnMouseButtonDownOnConsole_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function ScrollableContent.ScrollableContent_C.StartDrag
	 */
	struct UScrollableContent_C_StartDrag_Params
	{	};

	/**
	 * Function ScrollableContent.ScrollableContent_C.BndEvt__InputChatLine_K2Node_ComponentBoundEvent_585_OnEditableTextBoxCommittedEvent__DelegateSignature
	 */
	struct UScrollableContent_C_BndEvt__InputChatLine_K2Node_ComponentBoundEvent_585_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScrollableContent.ScrollableContent_C.Construct
	 */
	struct UScrollableContent_C_Construct_Params
	{	};

	/**
	 * Function ScrollableContent.ScrollableContent_C.OnMinimize
	 */
	struct UScrollableContent_C_OnMinimize_Params
	{
	public:
		bool                                                       shouldMinimize;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ScrollableContent.ScrollableContent_C.ExecuteUbergraph_ScrollableContent
	 */
	struct UScrollableContent_C_ExecuteUbergraph_ScrollableContent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZPR9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
