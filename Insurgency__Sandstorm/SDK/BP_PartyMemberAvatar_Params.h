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
	 * Function BP_PartyMemberAvatar.BP_PartyMemberAvatar_C.OnRequestData
	 */
	struct UBP_PartyMemberAvatar_C_OnRequestData_Params
	{	};

	/**
	 * Function BP_PartyMemberAvatar.BP_PartyMemberAvatar_C.OnKickPartyMember
	 */
	struct UBP_PartyMemberAvatar_C_OnKickPartyMember_Params
	{
	public:
		class FString                                              User_Net_Id;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PartyMemberAvatar.BP_PartyMemberAvatar_C.GetUserNetID
	 */
	struct UBP_PartyMemberAvatar_C_GetUserNetID_Params
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PartyMemberAvatar.BP_PartyMemberAvatar_C.SetDefaultAvatar
	 */
	struct UBP_PartyMemberAvatar_C_SetDefaultAvatar_Params
	{	};

	/**
	 * Function BP_PartyMemberAvatar.BP_PartyMemberAvatar_C.SetData
	 */
	struct UBP_PartyMemberAvatar_C_SetData_Params
	{
	public:
		bool                                                       IsLeader;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsLocal;                                                 // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_O6TC[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              PlatfomId;                                               // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PartyMemberAvatar.BP_PartyMemberAvatar_C.On_Anchor_GetMenuContent_1
	 */
	struct UBP_PartyMemberAvatar_C_On_Anchor_GetMenuContent_1_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PartyMemberAvatar.BP_PartyMemberAvatar_C.DisplayPopupMenu
	 */
	struct UBP_PartyMemberAvatar_C_DisplayPopupMenu_Params
	{	};

	/**
	 * Function BP_PartyMemberAvatar.BP_PartyMemberAvatar_C.OnPromotePlayer
	 */
	struct UBP_PartyMemberAvatar_C_OnPromotePlayer_Params
	{
	public:
		class FString                                              InUserNetId;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PartyMemberAvatar.BP_PartyMemberAvatar_C.OnLeaveParty
	 */
	struct UBP_PartyMemberAvatar_C_OnLeaveParty_Params
	{	};

	/**
	 * Function BP_PartyMemberAvatar.BP_PartyMemberAvatar_C.OnPopupLeftFocusPath
	 */
	struct UBP_PartyMemberAvatar_C_OnPopupLeftFocusPath_Params
	{	};

	/**
	 * Function BP_PartyMemberAvatar.BP_PartyMemberAvatar_C.OnMouseEnter
	 */
	struct UBP_PartyMemberAvatar_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_PartyMemberAvatar.BP_PartyMemberAvatar_C.OnMouseLeave
	 */
	struct UBP_PartyMemberAvatar_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_PartyMemberAvatar.BP_PartyMemberAvatar_C.OnRemovedFromFocusPath
	 */
	struct UBP_PartyMemberAvatar_C_OnRemovedFromFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_PartyMemberAvatar.BP_PartyMemberAvatar_C.OnNameUpdated
	 */
	struct UBP_PartyMemberAvatar_C_OnNameUpdated_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PartyMemberAvatar.BP_PartyMemberAvatar_C.OnTextureUpdated
	 */
	struct UBP_PartyMemberAvatar_C_OnTextureUpdated_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PartyMemberAvatar.BP_PartyMemberAvatar_C.Construct
	 */
	struct UBP_PartyMemberAvatar_C_Construct_Params
	{	};

	/**
	 * Function BP_PartyMemberAvatar.BP_PartyMemberAvatar_C.OnConnectionStatusChanged
	 */
	struct UBP_PartyMemberAvatar_C_OnConnectionStatusChanged_Params
	{
	public:
		bool                                                       bConnected;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PartyMemberAvatar.BP_PartyMemberAvatar_C.OnConsoleContextMenuClosed
	 */
	struct UBP_PartyMemberAvatar_C_OnConsoleContextMenuClosed_Params
	{	};

	/**
	 * Function BP_PartyMemberAvatar.BP_PartyMemberAvatar_C.OnAddedToFocusPath
	 */
	struct UBP_PartyMemberAvatar_C_OnAddedToFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_PartyMemberAvatar.BP_PartyMemberAvatar_C.UsingController
	 */
	struct UBP_PartyMemberAvatar_C_UsingController_Params
	{
	public:
		bool                                                       UsingController;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EeInputIconType                                            NewIconType;                                             // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PartyMemberAvatar.BP_PartyMemberAvatar_C.BndEvt__PartyMemberBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_PartyMemberAvatar_C_BndEvt__PartyMemberBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_PartyMemberAvatar.BP_PartyMemberAvatar_C.ExecuteUbergraph_BP_PartyMemberAvatar
	 */
	struct UBP_PartyMemberAvatar_C_ExecuteUbergraph_BP_PartyMemberAvatar_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PartyMemberAvatar.BP_PartyMemberAvatar_C.OnUnhoverPartyMember__DelegateSignature
	 */
	struct UBP_PartyMemberAvatar_C_OnUnhoverPartyMember__DelegateSignature_Params
	{	};

	/**
	 * Function BP_PartyMemberAvatar.BP_PartyMemberAvatar_C.OnHoverPartyMember__DelegateSignature
	 */
	struct UBP_PartyMemberAvatar_C_OnHoverPartyMember__DelegateSignature_Params
	{	};

	/**
	 * Function BP_PartyMemberAvatar.BP_PartyMemberAvatar_C.OnPartyMemberLeave__DelegateSignature
	 */
	struct UBP_PartyMemberAvatar_C_OnPartyMemberLeave__DelegateSignature_Params
	{	};

	/**
	 * Function BP_PartyMemberAvatar.BP_PartyMemberAvatar_C.OnRemoveFromFocusPath__DelegateSignature
	 */
	struct UBP_PartyMemberAvatar_C_OnRemoveFromFocusPath__DelegateSignature_Params
	{	};

	/**
	 * Function BP_PartyMemberAvatar.BP_PartyMemberAvatar_C.OnPartyMemberSelected__DelegateSignature
	 */
	struct UBP_PartyMemberAvatar_C_OnPartyMemberSelected__DelegateSignature_Params
	{
	public:
		bool                                                       bIsLocalPlayer;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsLeader;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OE0C[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              UserNetId;                                               // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              PlayerName;                                              // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
