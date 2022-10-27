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
	 * WidgetBlueprintGeneratedClass WBP_OptionMenu_CreateGame.WBP_OptionMenu_CreateGame_C
	 * Size -> 0x0130 (FullSize[0x0368] - InheritedSize[0x0238])
	 */
	class UWBP_OptionMenu_CreateGame_C : public UDFBaseMenu
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0238(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTBListView*                                         GMList;                                                  // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTBListView*                                         MapList;                                                 // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              MapPreviewImg;                                           // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                          ModifierListScrollBox;                                   // 0x0258(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_BotsGameModifierSettings_C*                     SettingsModifierBots;                                    // 0x0260(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_FactionGameModifierSettings_C*                  SettingsModifierFactions;                                // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             StartGameBtn;                                            // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       bAutoSelectFirstMap;                                     // 0x0278(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bUsePredefinedMapList;                                   // 0x0279(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XFUK[0x6];                                   // 0x027A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FFMapInfo>                                   PredefinedMapList;                                       // 0x0280(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash
		bool                                                       bAutoSelectFirstGame;                                    // 0x0290(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8QBN[0x7];                                   // 0x0291(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          DefaultGMBanner;                                         // 0x0298(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              LegacyAASGMClass[0x28];                                  // 0x02A0(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		bool                                                       bUsePredefinedGameList;                                  // 0x02C8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_W3PU[0x7];                                   // 0x02C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FFGameModeInfo>                              PredefinedGameList;                                      // 0x02D0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnBuildTravelURL;                                        // 0x02E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FString                                              TravelURL;                                               // 0x02F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		TMap<class FName, class FText>                             PredefinedMapParentNameOverrides;                        // 0x0300(0x0050) Edit, BlueprintVisible, BlueprintReadOnly
		TArray<class UHDGameModeDefinition*>                       SelectableGMDefs;                                        // 0x0350(0x0010) Edit, BlueprintVisible, Transient, DisableEditOnInstance, HasGetValueTypeHash
		class UHDGameModeDefinition*                               SelectedGM;                                              // 0x0360(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetValidDisplayNameForGMDefinition(class UHDGameModeDefinition* GMDef, class FText* DisplayName);
		void FindGMDefinitionByClassName(class FString* ClassName, class UHDGameModeDefinition** GMDef);
		void ContainsGMByClass(bool* bContainsGM);
		void FilterExcludesGMClass(bool bLegacyAASSupport, bool* bExcludeGM);
		void FilterExcludesMapPrefix(const class FString& MapName, bool* bExcludePrefix);
		void SortGMList(TArray<struct FFGameModeInfo>* GMListToSort, bool bDescending);
		void SortMapList(TArray<struct FFMapInfo>* MapListToSort, bool bDescending);
		void UpdateStartButtonState();
		void ClearMapPreviewImage();
		void SetMapPreviewImage(class UTexture2D* NewImg);
		void AddGMToList(struct FFGameModeInfo* GMInfo, class UBP_GMListItemData_C** NewGMItem);
		void CreateGMListItem(struct FFGameModeInfo* GMInfo, class UBP_GMListItemData_C** GMItem);
		void HandleStartGame(struct FFMapInfo* SelectedMapInfo, struct FFGameModeInfo* SelectedGMInfo);
		void AppendOptionsFromActiveModifiers();
		void GetActiveModifiers();
		void AppendTravelURL(class FString* OptionsToAdd);
		void AddMapToList(struct FFMapInfo* MapInfo, class UBP_MapListItemData_C** NewMapItem);
		void CreateMapListItem(struct FFMapInfo* MapInfo, class UBP_MapListItemData_C** MapItem);
		void RepopulateMapListFromRegistry(class UBP_GMListItemData_C* GMItemFilter);
		void RepopulateGameListFromRegistry();
		void ShouldAddGMListing(class UHDGameModeDefinition* GMDef, bool* bAddListing);
		void FetchGameModesFromRegistry(TArray<struct FFGameModeInfo>* GMsFound);
		void ShouldAddMapListing(struct FPrimaryAssetId* MapAssetId, bool* bAddListing);
		void FetchMapsFromRegistry(TArray<struct FFMapInfo>* MapsFound);
		void Completed_D5E8D9AE41A0DF3C4DEC0184D72FF481(TArray<class UObject*> Loaded);
		void BndEvt__CreateGameBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void OnInitialized();
		void BndEvt__GMList_K2Node_ComponentBoundEvent_2_OnListItemSelectionChangedDynamic__DelegateSignature(class UObject* Item, bool bIsSelected);
		void BndEvt__GMList_K2Node_ComponentBoundEvent_3_OnListEntryInitializedDynamic__DelegateSignature(class UObject* Item, class UUserWidget* Widget);
		void BndEvt__MapList_K2Node_ComponentBoundEvent_5_OnListEntryInitializedDynamic__DelegateSignature(class UObject* Item, class UUserWidget* Widget);
		void BndEvt__MapList_K2Node_ComponentBoundEvent_1_OnListItemSelectionChangedDynamic__DelegateSignature(class UObject* Item, bool bIsSelected);
		void FetchGameModes();
		void Destruct();
		void ExecuteUbergraph_WBP_OptionMenu_CreateGame(int32_t EntryPoint);
		void OnBuildTravelURL__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
