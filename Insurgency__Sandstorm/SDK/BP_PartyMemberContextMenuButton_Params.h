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
	 * Function BP_PartyMemberContextMenuButton.BP_PartyMemberContextMenuButton_C.OnFocusReceived
	 */
	struct UBP_PartyMemberContextMenuButton_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_PartyMemberContextMenuButton.BP_PartyMemberContextMenuButton_C.PreConstruct
	 */
	struct UBP_PartyMemberContextMenuButton_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PartyMemberContextMenuButton.BP_PartyMemberContextMenuButton_C.Construct
	 */
	struct UBP_PartyMemberContextMenuButton_C_Construct_Params
	{	};

	/**
	 * Function BP_PartyMemberContextMenuButton.BP_PartyMemberContextMenuButton_C.BndEvt__BtnKickPlayer_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_PartyMemberContextMenuButton_C_BndEvt__BtnKickPlayer_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_PartyMemberContextMenuButton.BP_PartyMemberContextMenuButton_C.OnMouseEnter
	 */
	struct UBP_PartyMemberContextMenuButton_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_PartyMemberContextMenuButton.BP_PartyMemberContextMenuButton_C.OnMouseLeave
	 */
	struct UBP_PartyMemberContextMenuButton_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_PartyMemberContextMenuButton.BP_PartyMemberContextMenuButton_C.OnAddedToFocusPath
	 */
	struct UBP_PartyMemberContextMenuButton_C_OnAddedToFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_PartyMemberContextMenuButton.BP_PartyMemberContextMenuButton_C.OnRemovedFromFocusPath
	 */
	struct UBP_PartyMemberContextMenuButton_C_OnRemovedFromFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_PartyMemberContextMenuButton.BP_PartyMemberContextMenuButton_C.ExecuteUbergraph_BP_PartyMemberContextMenuButton
	 */
	struct UBP_PartyMemberContextMenuButton_C_ExecuteUbergraph_BP_PartyMemberContextMenuButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PartyMemberContextMenuButton.BP_PartyMemberContextMenuButton_C.OnCicked__DelegateSignature
	 */
	struct UBP_PartyMemberContextMenuButton_C_OnCicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
