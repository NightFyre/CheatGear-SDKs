#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * WidgetBlueprintGeneratedClass WBP_OptionMenu_JoinGame.WBP_OptionMenu_JoinGame_C
	 * Size -> 0x0081 (FullSize[0x02F1] - InheritedSize[0x0270])
	 */
	class UWBP_OptionMenu_JoinGame_C : public UTBJoinGameMenu
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0270(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UButton*                                             FilterOpenCloseBtn;                                      // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            FilterPanelContainer;                                    // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            FilterPanelOverlay;                                      // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_JoinServer_Header_C*                            GameModeHeader;                                          // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_JoinServer_Header_C*                            MapHeader;                                               // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_JoinServer_Header_C*                            ModHeader;                                               // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_JoinServer_Header_C*                            PingHeader;                                              // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_JoinServer_Header_C*                            PlayersHeader;                                           // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             RefreshListBtn;                                          // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCircularThrobber*                                   RefreshListThrobber;                                     // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_ServerDetails_C*                                ServerDetails;                                           // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             ServerDetailsContainer;                                  // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            ServerListContainer;                                     // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_JoinServer_Header_C*                            ServerNameHeader;                                        // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTBServerListItemData*                               SelectedServerListItem;                                  // 0x02E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bShowServerDetailsInDesigner;                            // 0x02F0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void HasSubMenus(bool* bSubMenuOptions);
		void GetSubMenuOptions(TArray<struct FFSubMenuOption>* SubOptions);
		void GetDesiredHorizontalAlignment(EHorizontalAlignment* Alignment);
		void GetDesiredVerticalAlignment(EVerticalAlignment* Alignment);
		void ToggleServerDetails(bool bShown);
		void IsValidServerListItemIndex(int32_t IndexToTest, bool* bValidIndex);
		void GetSelectedServerListItem(class UTBServerListItemData** ServerItem);
		void ClearServerListItemSelection();
		void ServerListItemSelectionCleared();
		void ServerListItemSelectionUpdated(class UTBServerListItemData* InSelectedServerListItem);
		void SetActiveSubMenuByIndex(int32_t SubMenuIndex);
		void ReceiveOnRefreshStart();
		void ReceiveOnRefreshComplete();
		void BndEvt__RefreshListBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
		void PreConstruct(bool IsDesignTime);
		void BndEvt__ServerDetails_K2Node_ComponentBoundEvent_0_OnJoinServerBtnClicked__DelegateSignature();
		void BndEvt__ServerList_K2Node_ComponentBoundEvent_4_OnListItemSelectionChangedDynamic__DelegateSignature(class UObject* Item, bool bIsSelected);
		void BndEvt__ServerList_K2Node_ComponentBoundEvent_1_OnListItemScrolledIntoViewDynamic__DelegateSignature(class UObject* Item, class UUserWidget* Widget);
		void ExecuteUbergraph_WBP_OptionMenu_JoinGame(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
