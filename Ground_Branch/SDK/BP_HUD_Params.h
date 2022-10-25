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
	 * Function BP_HUD.BP_HUD_C.IsMenuVisibleEvent
	 */
	struct ABP_HUD_C_IsMenuVisibleEvent_Params
	{
	public:
		class FName                                                MenuType;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HUD.BP_HUD_C.OnLoaded_DBAF99D94FF9C0F390EF76BCB18F9A84
	 */
	struct ABP_HUD_C_OnLoaded_DBAF99D94FF9C0F390EF76BCB18F9A84_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HUD.BP_HUD_C.ReceiveBeginPlay
	 */
	struct ABP_HUD_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_HUD.BP_HUD_C.ReceiveDestroyed
	 */
	struct ABP_HUD_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function BP_HUD.BP_HUD_C.OnShowHintEvent
	 */
	struct ABP_HUD_C_OnShowHintEvent_Params
	{	};

	/**
	 * Function BP_HUD.BP_HUD_C.OnSuggestHintEvent
	 */
	struct ABP_HUD_C_OnSuggestHintEvent_Params
	{
	public:
		class FName                                                HintName;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HUD.BP_HUD_C.ShowMenuEvent
	 */
	struct ABP_HUD_C_ShowMenuEvent_Params
	{
	public:
		class FName                                                MenuType;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HUD.BP_HUD_C.ShowChatOverlay
	 */
	struct ABP_HUD_C_ShowChatOverlay_Params
	{
	public:
		bool                                                       bTeamChat;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HUD.BP_HUD_C.HideMenuEvent
	 */
	struct ABP_HUD_C_HideMenuEvent_Params
	{
	public:
		class FName                                                MenuType;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HUD.BP_HUD_C.OnChatLineAddedEvent
	 */
	struct ABP_HUD_C_OnChatLineAddedEvent_Params
	{
	public:
		class AGBPlayerState*                                      SenderGBPlayerState;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              Message;                                                 // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FName                                                Type;                                                    // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HUD.BP_HUD_C.ShowReadyRoomPlayerNameEvent
	 */
	struct ABP_HUD_C_ShowReadyRoomPlayerNameEvent_Params
	{
	public:
		class FString                                              PlayerName;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ETeamElement                                               PlayerTeamElement;                                       // 0x0010(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HUD.BP_HUD_C.HideReadyRoomPlayerNameEvent
	 */
	struct ABP_HUD_C_HideReadyRoomPlayerNameEvent_Params
	{	};

	/**
	 * Function BP_HUD.BP_HUD_C.OnInventorySlotEvent
	 */
	struct ABP_HUD_C_OnInventorySlotEvent_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bImmediate;                                              // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HUD.BP_HUD_C.ShowRadialItemsMenuEvent
	 */
	struct ABP_HUD_C_ShowRadialItemsMenuEvent_Params
	{
	public:
		TArray<class AGBItem*>                                     Items;                                                   // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_HUD.BP_HUD_C.HideRadialItemsMenuEvent
	 */
	struct ABP_HUD_C_HideRadialItemsMenuEvent_Params
	{	};

	/**
	 * Function BP_HUD.BP_HUD_C.HideGamePlayRelated
	 */
	struct ABP_HUD_C_HideGamePlayRelated_Params
	{	};

	/**
	 * Function BP_HUD.BP_HUD_C.OpenLinearUserMenu
	 */
	struct ABP_HUD_C_OpenLinearUserMenu_Params
	{
	public:
		class FString                                              MenuName;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HUD.BP_HUD_C.OpenRadialUserMenu
	 */
	struct ABP_HUD_C_OpenRadialUserMenu_Params
	{
	public:
		class FString                                              MenuName;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HUD.BP_HUD_C.OpenUserMenu
	 */
	struct ABP_HUD_C_OpenUserMenu_Params
	{
	public:
		class FString                                              MenuName;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HUD.BP_HUD_C.RemoveReadyRoomPlayerName
	 */
	struct ABP_HUD_C_RemoveReadyRoomPlayerName_Params
	{	};

	/**
	 * Function BP_HUD.BP_HUD_C.ResetRemoveReadyRoomPlayerNameTimer
	 */
	struct ABP_HUD_C_ResetRemoveReadyRoomPlayerNameTimer_Params
	{	};

	/**
	 * Function BP_HUD.BP_HUD_C.InternalOpenUserMenu
	 */
	struct ABP_HUD_C_InternalOpenUserMenu_Params
	{
	public:
		class FString                                              MenuName;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FName                                                MenuType;                                                // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HUD.BP_HUD_C.OnShowHUDEvent
	 */
	struct ABP_HUD_C_OnShowHUDEvent_Params
	{	};

	/**
	 * Function BP_HUD.BP_HUD_C.ExecuteUbergraph_BP_HUD
	 */
	struct ABP_HUD_C_ExecuteUbergraph_BP_HUD_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5SJ4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
