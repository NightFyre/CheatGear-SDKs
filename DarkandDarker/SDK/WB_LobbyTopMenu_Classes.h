#pragma once

/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass WB_LobbyTopMenu.WB_LobbyTopMenu_C
	 * Size -> 0x0058 (FullSize[0x0348] - InheritedSize[0x02F0])
	 */
	class UWB_LobbyTopMenu_C : public ULobbyTopMenuWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWB_LobbyTopMenuBtn_C*                               TopMenuBtnClass;                                         // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_LobbyTopMenuBtn_C*                               TopMenuBtnCustomize;                                     // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_LobbyTopMenuBtn_C*                               TopMenuBtnLeaderboard;                                   // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_LobbyTopMenuBtn_C*                               TopMenuBtnLoadout;                                       // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_LobbyTopMenuBtn_C*                               TopMenuBtnMerchant;                                      // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_LobbyTopMenuBtn_C*                               TopMenuBtnPlay;                                          // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_LobbyTopMenuBtn_C*                               TopMenuBtnShop;                                          // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_LobbyTopMenuBtn_C*                               TopMenuBtnTrade;                                         // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_TabWingLeft_L_C*                                 WB_TabWingLeft_L;                                        // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_TabWingRight_L_C*                                WB_TabWingRight_L;                                       // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void Construct();
		void TopMenuPlayButtonClicked();
		void UpdateTopMenuSwitch(EWidgetLobbyGroupType CurrentGroupType);
		void TopMenuLeaderBoardButtonClicked();
		void TopMenuLoadoutButtonClicked();
		void TopMenuMerchantButtonClicked();
		void OnPlayPartyReadyStateChanged(bool bMine, bool bLeader, bool bReady);
		void OnMatchingStateChanged(bool bMatching);
		void TopMenuClassButtonClicked();
		void TopMenuTradeButtonClicked();
		void TopMenuCustomizeButtonClicked();
		void TopMenuShopButtonClicked();
		void ExecuteUbergraph_WB_LobbyTopMenu(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
