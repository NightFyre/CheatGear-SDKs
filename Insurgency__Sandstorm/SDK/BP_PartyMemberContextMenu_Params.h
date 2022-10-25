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
	 * Function BP_PartyMemberContextMenu.BP_PartyMemberContextMenu_C.ChangeButtonVisibility
	 */
	struct UBP_PartyMemberContextMenu_C_ChangeButtonVisibility_Params
	{	};

	/**
	 * Function BP_PartyMemberContextMenu.BP_PartyMemberContextMenu_C.Get_ContextMenuArrowBox_Visibility_1
	 */
	struct UBP_PartyMemberContextMenu_C_Get_ContextMenuArrowBox_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IEPD[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PartyMemberContextMenu.BP_PartyMemberContextMenu_C.SetDetails
	 */
	struct UBP_PartyMemberContextMenu_C_SetDetails_Params
	{
	public:
		bool                                                       IsLocal;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6V6E[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              PlayerName;                                              // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              InUserNetId;                                             // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PartyMemberContextMenu.BP_PartyMemberContextMenu_C.OnFocusReceived
	 */
	struct UBP_PartyMemberContextMenu_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_PartyMemberContextMenu.BP_PartyMemberContextMenu_C.BndEvt__Btn_LeaveParty_K2Node_ComponentBoundEvent_15_OnCicked__DelegateSignature
	 */
	struct UBP_PartyMemberContextMenu_C_BndEvt__Btn_LeaveParty_K2Node_ComponentBoundEvent_15_OnCicked__DelegateSignature_Params
	{	};

	/**
	 * Function BP_PartyMemberContextMenu.BP_PartyMemberContextMenu_C.BndEvt__Btn_PromoteToLeader_K2Node_ComponentBoundEvent_16_OnCicked__DelegateSignature
	 */
	struct UBP_PartyMemberContextMenu_C_BndEvt__Btn_PromoteToLeader_K2Node_ComponentBoundEvent_16_OnCicked__DelegateSignature_Params
	{	};

	/**
	 * Function BP_PartyMemberContextMenu.BP_PartyMemberContextMenu_C.BndEvt__Btn_KickPlayer_K2Node_ComponentBoundEvent_14_OnCicked__DelegateSignature
	 */
	struct UBP_PartyMemberContextMenu_C_BndEvt__Btn_KickPlayer_K2Node_ComponentBoundEvent_14_OnCicked__DelegateSignature_Params
	{	};

	/**
	 * Function BP_PartyMemberContextMenu.BP_PartyMemberContextMenu_C.OnAddedToFocusPath
	 */
	struct UBP_PartyMemberContextMenu_C_OnAddedToFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_PartyMemberContextMenu.BP_PartyMemberContextMenu_C.OnRemovedFromFocusPath
	 */
	struct UBP_PartyMemberContextMenu_C_OnRemovedFromFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_PartyMemberContextMenu.BP_PartyMemberContextMenu_C.Construct
	 */
	struct UBP_PartyMemberContextMenu_C_Construct_Params
	{	};

	/**
	 * Function BP_PartyMemberContextMenu.BP_PartyMemberContextMenu_C.BndEvt__BtnShowProfile_K2Node_ComponentBoundEvent_0_OnCicked__DelegateSignature
	 */
	struct UBP_PartyMemberContextMenu_C_BndEvt__BtnShowProfile_K2Node_ComponentBoundEvent_0_OnCicked__DelegateSignature_Params
	{	};

	/**
	 * Function BP_PartyMemberContextMenu.BP_PartyMemberContextMenu_C.BndEvt__BtnShowProfile_1_K2Node_ComponentBoundEvent_1_OnCicked__DelegateSignature
	 */
	struct UBP_PartyMemberContextMenu_C_BndEvt__BtnShowProfile_1_K2Node_ComponentBoundEvent_1_OnCicked__DelegateSignature_Params
	{	};

	/**
	 * Function BP_PartyMemberContextMenu.BP_PartyMemberContextMenu_C.ExecuteUbergraph_BP_PartyMemberContextMenu
	 */
	struct UBP_PartyMemberContextMenu_C_ExecuteUbergraph_BP_PartyMemberContextMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PartyMemberContextMenu.BP_PartyMemberContextMenu_C.OnFocused__DelegateSignature
	 */
	struct UBP_PartyMemberContextMenu_C_OnFocused__DelegateSignature_Params
	{	};

	/**
	 * Function BP_PartyMemberContextMenu.BP_PartyMemberContextMenu_C.OnKickPlayer__DelegateSignature
	 */
	struct UBP_PartyMemberContextMenu_C_OnKickPlayer__DelegateSignature_Params
	{
	public:
		class FString                                              User_Net_Id;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PartyMemberContextMenu.BP_PartyMemberContextMenu_C.OnPromotePlayer__DelegateSignature
	 */
	struct UBP_PartyMemberContextMenu_C_OnPromotePlayer__DelegateSignature_Params
	{
	public:
		class FString                                              UserNetId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PartyMemberContextMenu.BP_PartyMemberContextMenu_C.OnLeaveParty__DelegateSignature
	 */
	struct UBP_PartyMemberContextMenu_C_OnLeaveParty__DelegateSignature_Params
	{	};

	/**
	 * Function BP_PartyMemberContextMenu.BP_PartyMemberContextMenu_C.OnLeaveFocusPath__DelegateSignature
	 */
	struct UBP_PartyMemberContextMenu_C_OnLeaveFocusPath__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
