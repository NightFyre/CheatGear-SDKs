#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * BlueprintGeneratedClass BP_HUD.BP_HUD_C
	 * Size -> 0x00A8 (FullSize[0x03C0] - InheritedSize[0x0318])
	 */
	class ABP_HUD_C : public AGBHUD
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0318(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0320(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWBP_HUD_C*                                          HUDWidget;                                               // 0x0328(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWBP_InGameMenuManager_C*                            InGameMenuManager;                                       // 0x0330(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWBP_ChatOverlay_C*                                  ChatOverlay;                                             // 0x0338(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWBP_Hint_Manager_C*                                 HintManager;                                             // 0x0340(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              SuggestedHintClasses[0x50];                              // 0x0348(0x0050) UNKNOWN PROPERTY: MapProperty
		TArray<class FName>                                        EventTags;                                               // 0x0398(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UWBP_ReadyRoomName_C*                                ReadyRoomName;                                           // 0x03A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        TimerHandle_ReadyRoomPlayerName;                         // 0x03B0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UWBP_Spectator_Overlay_C*                            SpectatorOverlay;                                        // 0x03B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool IsMenuVisibleEvent(const class FName& MenuType);
		void OnLoaded_DBAF99D94FF9C0F390EF76BCB18F9A84(class UClass* Loaded);
		void ReceiveBeginPlay();
		void ReceiveDestroyed();
		void OnShowHintEvent();
		void OnSuggestHintEvent(const class FName& HintName);
		void ShowMenuEvent(const class FName& MenuType);
		void ShowChatOverlay(bool bTeamChat);
		void HideMenuEvent(const class FName& MenuType);
		void OnChatLineAddedEvent(class AGBPlayerState* SenderGBPlayerState, const class FString& Message, const class FName& Type);
		void ShowReadyRoomPlayerNameEvent(const class FString& PlayerName, ETeamElement PlayerTeamElement);
		void HideReadyRoomPlayerNameEvent();
		void OnInventorySlotEvent(int32_t Index, bool bImmediate);
		void ShowRadialItemsMenuEvent(TArray<class AGBItem*> Items);
		void HideRadialItemsMenuEvent();
		void HideGamePlayRelated();
		void OpenLinearUserMenu(const class FString& MenuName);
		void OpenRadialUserMenu(const class FString& MenuName);
		void OpenUserMenu(const class FString& MenuName);
		void RemoveReadyRoomPlayerName();
		void ResetRemoveReadyRoomPlayerNameTimer();
		void InternalOpenUserMenu(const class FString& MenuName, const class FName& MenuType);
		void OnShowHUDEvent();
		void ExecuteUbergraph_BP_HUD(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
