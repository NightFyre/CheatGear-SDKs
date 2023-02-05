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
	 * Function WB_LobbyTopMenu.WB_LobbyTopMenu_C.Construct
	 */
	struct UWB_LobbyTopMenu_C_Construct_Params
	{	};

	/**
	 * Function WB_LobbyTopMenu.WB_LobbyTopMenu_C.TopMenuPlayButtonClicked
	 */
	struct UWB_LobbyTopMenu_C_TopMenuPlayButtonClicked_Params
	{	};

	/**
	 * Function WB_LobbyTopMenu.WB_LobbyTopMenu_C.UpdateTopMenuSwitch
	 */
	struct UWB_LobbyTopMenu_C_UpdateTopMenuSwitch_Params
	{
	public:
		EWidgetLobbyGroupType                                      CurrentGroupType;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_LobbyTopMenu.WB_LobbyTopMenu_C.TopMenuLeaderBoardButtonClicked
	 */
	struct UWB_LobbyTopMenu_C_TopMenuLeaderBoardButtonClicked_Params
	{	};

	/**
	 * Function WB_LobbyTopMenu.WB_LobbyTopMenu_C.TopMenuLoadoutButtonClicked
	 */
	struct UWB_LobbyTopMenu_C_TopMenuLoadoutButtonClicked_Params
	{	};

	/**
	 * Function WB_LobbyTopMenu.WB_LobbyTopMenu_C.TopMenuMerchantButtonClicked
	 */
	struct UWB_LobbyTopMenu_C_TopMenuMerchantButtonClicked_Params
	{	};

	/**
	 * Function WB_LobbyTopMenu.WB_LobbyTopMenu_C.OnPlayPartyReadyStateChanged
	 */
	struct UWB_LobbyTopMenu_C_OnPlayPartyReadyStateChanged_Params
	{
	public:
		bool                                                       bMine;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bLeader;                                                 // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bReady;                                                  // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_LobbyTopMenu.WB_LobbyTopMenu_C.OnMatchingStateChanged
	 */
	struct UWB_LobbyTopMenu_C_OnMatchingStateChanged_Params
	{
	public:
		bool                                                       bMatching;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_LobbyTopMenu.WB_LobbyTopMenu_C.TopMenuClassButtonClicked
	 */
	struct UWB_LobbyTopMenu_C_TopMenuClassButtonClicked_Params
	{	};

	/**
	 * Function WB_LobbyTopMenu.WB_LobbyTopMenu_C.TopMenuTradeButtonClicked
	 */
	struct UWB_LobbyTopMenu_C_TopMenuTradeButtonClicked_Params
	{	};

	/**
	 * Function WB_LobbyTopMenu.WB_LobbyTopMenu_C.TopMenuCustomizeButtonClicked
	 */
	struct UWB_LobbyTopMenu_C_TopMenuCustomizeButtonClicked_Params
	{	};

	/**
	 * Function WB_LobbyTopMenu.WB_LobbyTopMenu_C.TopMenuShopButtonClicked
	 */
	struct UWB_LobbyTopMenu_C_TopMenuShopButtonClicked_Params
	{	};

	/**
	 * Function WB_LobbyTopMenu.WB_LobbyTopMenu_C.ExecuteUbergraph_WB_LobbyTopMenu
	 */
	struct UWB_LobbyTopMenu_C_ExecuteUbergraph_WB_LobbyTopMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2A3Q[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
