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
	 * Function WB_InviteParty_UserSlot.WB_InviteParty_UserSlot_C.OnMouseButtonDown
	 */
	struct UWB_InviteParty_UserSlot_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0040(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00D0(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WB_InviteParty_UserSlot.WB_InviteParty_UserSlot_C.GetNickViewNameString
	 */
	struct UWB_InviteParty_UserSlot_C_GetNickViewNameString_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WB_InviteParty_UserSlot.WB_InviteParty_UserSlot_C.GetPartyStateString
	 */
	struct UWB_InviteParty_UserSlot_C_GetPartyStateString_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WB_InviteParty_UserSlot.WB_InviteParty_UserSlot_C.VisibleIfSelected
	 */
	struct UWB_InviteParty_UserSlot_C_VisibleIfSelected_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_InviteParty_UserSlot.WB_InviteParty_UserSlot_C.OnListItemObjectSet
	 */
	struct UWB_InviteParty_UserSlot_C_OnListItemObjectSet_Params
	{
	public:
		class UObject*                                             ListItemObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_InviteParty_UserSlot.WB_InviteParty_UserSlot_C.OnMouseEnter
	 */
	struct UWB_InviteParty_UserSlot_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0040(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_InviteParty_UserSlot.WB_InviteParty_UserSlot_C.OnMouseLeave
	 */
	struct UWB_InviteParty_UserSlot_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_InviteParty_UserSlot.WB_InviteParty_UserSlot_C.ExecuteUbergraph_WB_InviteParty_UserSlot
	 */
	struct UWB_InviteParty_UserSlot_C_ExecuteUbergraph_WB_InviteParty_UserSlot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Y48K[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
