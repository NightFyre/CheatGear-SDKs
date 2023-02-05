#pragma once

/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
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
	 * Function WB_PartyChat.WB_PartyChat_C.OnMouseButtonDown
	 */
	struct UWB_PartyChat_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0040(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00D0(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WB_PartyChat.WB_PartyChat_C.OnChatEditFocus
	 */
	struct UWB_PartyChat_C_OnChatEditFocus_Params
	{
	public:
		bool                                                       InbFocus;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_PartyChat.WB_PartyChat_C.OnChatAccountData
	 */
	struct UWB_PartyChat_C_OnChatAccountData_Params
	{
	public:
		struct FChatAccountData                                    NewItemData;                                             // 0x0000(0x0040)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FChatAccountData                                    OldItemData;                                             // 0x0040(0x0040)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_PartyChat.WB_PartyChat_C.BndEvt__WB_PartyChat_ChatListView_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature
	 */
	struct UWB_PartyChat_C_BndEvt__WB_PartyChat_ChatListView_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature_Params
	{
	public:
		class UObject*                                             Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_PartyChat.WB_PartyChat_C.ExecuteUbergraph_WB_PartyChat
	 */
	struct UWB_PartyChat_C_ExecuteUbergraph_WB_PartyChat_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
