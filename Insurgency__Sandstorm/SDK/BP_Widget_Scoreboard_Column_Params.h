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
	 * Function BP_Widget_Scoreboard_Column.BP_Widget_Scoreboard_Column_C.GetRowToFocus
	 */
	struct UBP_Widget_Scoreboard_Column_C_GetRowToFocus_Params
	{
	public:
		class UBP_Widget_Scoreboard_PlayerRow_C*                   RowToFocus;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Widget_Scoreboard_Column.BP_Widget_Scoreboard_Column_C.OnScoreboardHidden
	 */
	struct UBP_Widget_Scoreboard_Column_C_OnScoreboardHidden_Params
	{	};

	/**
	 * Function BP_Widget_Scoreboard_Column.BP_Widget_Scoreboard_Column_C.OnPlayerMenuDialogClosed
	 */
	struct UBP_Widget_Scoreboard_Column_C_OnPlayerMenuDialogClosed_Params
	{	};

	/**
	 * Function BP_Widget_Scoreboard_Column.BP_Widget_Scoreboard_Column_C.GetNextRowToNavigate
	 */
	struct UBP_Widget_Scoreboard_Column_C_GetNextRowToNavigate_Params
	{
	public:
		bool                                                       Down;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_P7RG[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UBP_Widget_Scoreboard_PlayerRow_C*                   RowToFocus;                                              // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Widget_Scoreboard_Column.BP_Widget_Scoreboard_Column_C.DoCreatePlayerRowWidget
	 */
	struct UBP_Widget_Scoreboard_Column_C_DoCreatePlayerRowWidget_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Widget_Scoreboard_Column.BP_Widget_Scoreboard_Column_C.OnFocusReceived
	 */
	struct UBP_Widget_Scoreboard_Column_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_Widget_Scoreboard_Column.BP_Widget_Scoreboard_Column_C.CheckRowAtIndex
	 */
	struct UBP_Widget_Scoreboard_Column_C_CheckRowAtIndex_Params
	{
	public:
		class AINSPlayerState*                                     PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bMatches;                                                // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7GZ7[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget_Scoreboard_PlayerRow*                        RowWidget;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Widget_Scoreboard_Column.BP_Widget_Scoreboard_Column_C.GetFactionBannerBrush_PreColored
	 */
	struct UBP_Widget_Scoreboard_Column_C_GetFactionBannerBrush_PreColored_Params
	{
	public:
		struct FSlateBrush                                         ReturnValue;                                             // 0x0000(0x0088)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_Widget_Scoreboard_Column.BP_Widget_Scoreboard_Column_C.GetWinTextText
	 */
	struct UBP_Widget_Scoreboard_Column_C_GetWinTextText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_Widget_Scoreboard_Column.BP_Widget_Scoreboard_Column_C.GetFactionNameText
	 */
	struct UBP_Widget_Scoreboard_Column_C_GetFactionNameText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_Widget_Scoreboard_Column.BP_Widget_Scoreboard_Column_C.GetTeamScoreText
	 */
	struct UBP_Widget_Scoreboard_Column_C_GetTeamScoreText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_Widget_Scoreboard_Column.BP_Widget_Scoreboard_Column_C.Destruct
	 */
	struct UBP_Widget_Scoreboard_Column_C_Destruct_Params
	{	};

	/**
	 * Function BP_Widget_Scoreboard_Column.BP_Widget_Scoreboard_Column_C.Tick
	 */
	struct UBP_Widget_Scoreboard_Column_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Widget_Scoreboard_Column.BP_Widget_Scoreboard_Column_C.DoSetTacticalMapToPlayerWidget
	 */
	struct UBP_Widget_Scoreboard_Column_C_DoSetTacticalMapToPlayerWidget_Params
	{
	public:
		class UWidget*                                             InPlayerWidget;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Widget_Scoreboard_Column.BP_Widget_Scoreboard_Column_C.OpenMenuForPlayer
	 */
	struct UBP_Widget_Scoreboard_Column_C_OpenMenuForPlayer_Params
	{
	public:
		class AINSPlayerState*                                     InPlayerState;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Widget_Scoreboard_Column.BP_Widget_Scoreboard_Column_C.BndEvt__JoinFaction_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_Widget_Scoreboard_Column_C_BndEvt__JoinFaction_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Widget_Scoreboard_Column.BP_Widget_Scoreboard_Column_C.Construct
	 */
	struct UBP_Widget_Scoreboard_Column_C_Construct_Params
	{	};

	/**
	 * Function BP_Widget_Scoreboard_Column.BP_Widget_Scoreboard_Column_C.UpdateSelectButtonOnConsole
	 */
	struct UBP_Widget_Scoreboard_Column_C_UpdateSelectButtonOnConsole_Params
	{
	public:
		bool                                                       bIsRowSelectable;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Widget_Scoreboard_Column.BP_Widget_Scoreboard_Column_C.ExecuteUbergraph_BP_Widget_Scoreboard_Column
	 */
	struct UBP_Widget_Scoreboard_Column_C_ExecuteUbergraph_BP_Widget_Scoreboard_Column_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UU0T[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
