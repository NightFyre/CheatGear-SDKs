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
	 * WidgetBlueprintGeneratedClass WBP_Button_Item.WBP_Button_Item_C
	 * Size -> 0x0268 (FullSize[0x04C8] - InheritedSize[0x0260])
	 */
	class UWBP_Button_Item_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    Hover_ItemList;                                          // 0x0268(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    Hover_EditButton;                                        // 0x0270(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UButton*                                             Button_Edit;                                             // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Button_ItemList;                                         // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Button_Skin;                                             // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_147;                                               // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_ItemIcon;                                          // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_NoItem;                                            // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_Skin;                                              // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            Overlay_TopRight;                                        // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_Attachments;                                   // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_ItemDisplayName;                               // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_ItemType;                                      // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_Skin;                                          // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VerticalBox_BottomLeft;                                  // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VerticalBox_BottomRight;                                 // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                ItemType;                                                // 0x02E8(0x0018) Edit, BlueprintVisible
		struct FPrimaryAssetType                                   ItemAssetType;                                           // 0x0300(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		TArray<class FName>                                        SubTypes;                                                // 0x0308(0x0010) Edit, BlueprintVisible
		unsigned char                                              SubTypeIcons[0x10];                                      // 0x0318(0x0010) UNKNOWN PROPERTY: ArrayProperty
		bool                                                       bCanEdit;                                                // 0x0328(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		bool                                                       bCanClear;                                               // 0x0329(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bUsedForAppearance;                                      // 0x032A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_I38Q[0x5];                                   // 0x032B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            SkinIconMID;                                             // 0x0330(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                LoadoutName;                                             // 0x0338(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FPrimaryAssetId                                     ItemAssetId;                                             // 0x0340(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class FName                                                SkinName;                                                // 0x0350(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              ItemBuild;                                               // 0x0358(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class UWBP_CharacterEditor_C*                              CharacterEditorRef;                                      // 0x0368(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                CurrentSubType;                                          // 0x0370(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UWBP_ListEntry_ItemBuild_C*>                  ItemBuildEntries;                                        // 0x0378(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		struct FSlateColor                                         AppearanceFontColour;                                    // 0x0388(0x0028) Edit, BlueprintVisible
		class FText                                                TextNoItem;                                              // 0x03B0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             PreUpdate;                                               // 0x03C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             PostClear;                                               // 0x03D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             PostUpdate;                                              // 0x03E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bUpdatePresets;                                          // 0x03F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3CCZ[0x3];                                   // 0x03F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPrimaryAssetId                                     PresetItemAssetId;                                       // 0x03FC(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class FName                                                PresetSkinName;                                          // 0x040C(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_FU3X[0x4];                                   // 0x0414(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PresetItemBuild;                                         // 0x0418(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		struct FPrimaryAssetId                                     DefaultItemAssetId;                                      // 0x0428(0x0010) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class FName                                                DefaultSkinName;                                         // 0x0438(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UVaRestJsonObject*                                   ItemJson;                                                // 0x0440(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                DisplayNameTagKey;                                       // 0x0448(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                SkinMaterialPrefixTag;                                   // 0x0450(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                SkinTitle;                                               // 0x0458(0x0018) Edit, BlueprintVisible
		class FName                                                MaterialSuffixTag;                                       // 0x0470(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FSlateColor                                         SubtypeColour_Selected;                                  // 0x0478(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         SubtypeColour_Unselected;                                // 0x04A0(0x0028) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		struct FLinearColor Icon_Hover_Color();
		void IsValidItem(const struct FPrimaryAssetId& ItemAssetId, bool* bOutIsValid);
		void ChooseSimilarSkin();
		void ValidateSkin();
		ESlateVisibility GetEditVis();
		void GetEditItemJson(class UVaRestJsonObject** OutKitJsonObj);
		void GetPresetJson(class UVaRestJsonObject** OutDataEntry);
		void HasBeenChanged(bool* bValue);
		void PreConstruct(bool IsDesignTime);
		void BndEvt__Button_ItemList_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void OnAsyncLoadIconComplete_Event(class UObject* LoadedAsset);
		void OnAsyncLoadSkinDataAsset_Event(class UObject* LoadedAsset);
		void Construct();
		void BndEvt__Button_Skin_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
		void Update(class UVaRestJsonObject* KitJsonObj, bool bFromPreset);
		void UpdateIcon();
		void OnAsyncLoadIcon_Event(class UObject* LoadedAsset);
		void UpdateItem(class UVaRestJsonObject* ItemData);
		void AddSubtypes();
		void AddSubTypeTab(const class FName& SubType, int32_t Index);
		void PopulateItemList(const struct FPrimaryAssetType& ItemAssetType, const class FName& SubType);
		void CreateItemBuildEntry(const class FString& Filename);
		void AddItemAssetEntry(const struct FPrimaryAssetId& ItemAssetId);
		void OnSelectedItemAsset_Event_1(const struct FPrimaryAssetId& ItemAssetId);
		void OnSelectItemBuild_Event_1(class UVaRestJsonObject* JsonObj);
		void UpdateItemBuild(class UVaRestJsonObject* ItemBuildData);
		void OnClicked_Event_1();
		void BindButtonClearRightSelection();
		void OnSelectSkin_Event_1(const class FName& SkinName);
		void UpdateSkin();
		void BindButtonClearLeftSelection();
		void OnClicked_Event_2();
		void ClearItem();
		void UpdatePresetsCheck();
		void UpdatePresets();
		void ClearPresets();
		void BndEvt__Button_Edit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
		void OnCancel_Event_1();
		void OnOk_Event_1(class UVaRestJsonObject* KitJsonObj);
		void SetDefaultIfMissing();
		void BndEvt__WBP_Button_Item_Button_Edit_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__WBP_Button_Item_Button_Edit_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__WBP_Button_Item_Button_ItemList_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__WBP_Button_Item_Button_ItemList_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
		void UpdateItemInternal(TArray<class UObject*> LoadedAssets);
		void UpdateItemBuildInternal(TArray<class UObject*> LoadedAssets);
		void SetSubtypeIconHighlight();
		void ExecuteUbergraph_WBP_Button_Item(int32_t EntryPoint);
		void PostUpdate__DelegateSignature();
		void PostClear__DelegateSignature();
		void PreUpdate__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
