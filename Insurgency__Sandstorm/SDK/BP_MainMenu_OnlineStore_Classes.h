#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * WidgetBlueprintGeneratedClass BP_MainMenu_OnlineStore.BP_MainMenu_OnlineStore_C
	 * Size -> 0x00D1 (FullSize[0x03D1] - InheritedSize[0x0300])
	 */
	class UBP_MainMenu_OnlineStore_C : public UBaseOnlineStore
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0300(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_KeyActionButton_C*                               BackButton;                                              // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OnlineStore_Item_C*                              BP_OnlineStore_Item;                                     // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OnlineStore_Item_C*                              BP_OnlineStore_Item_113;                                 // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OnlineStore_Item_C*                              BP_OnlineStore_Item_238;                                 // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OnlineStore_Item_C*                              BP_OnlineStore_Item_351;                                 // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OnlineStore_Item_C*                              BP_OnlineStore_Item_470;                                 // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_KeyActionButton_C*                               BtnSelectGamepad;                                        // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        CategoriesList;                                          // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OnlineStore_CategoryBaseButton_C*                CategoryButtonAll;                                       // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OnlineStore_CategoryBaseButton_C*                CategoryButtonSales;                                     // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_KeyActionButton_C*                               ClearIndications;                                        // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_132;                                               // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                          ItemsList;                                               // 0x0368(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_KeyActionButton_C*                               ResetBackend;                                            // 0x0370(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_KeyActionButton_C*                               ResetProfile;                                            // 0x0378(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USafeZone*                                           SafeZone_4;                                              // 0x0380(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USafeZone*                                           SafeZone_147;                                            // 0x0388(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USafeZone*                                           SafeZone_206;                                            // 0x0390(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_PlayMenu_PlaylistBG_C*                           SelectedItemBG;                                          // 0x0398(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_KeyActionButton_C*                               ShowHideOwned;                                           // 0x03A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnNavigateBack;                                          // 0x03A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UBP_OnlineStore_CategoryBaseButton_C*                SelectedCategory;                                        // 0x03B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBP_OnlineStore_Item_C*                              SelectedItem;                                            // 0x03C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTexture2D*                                          DefaultStoreTexture;                                     // 0x03C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bShowOwned;                                              // 0x03D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ShowOwned();
		void DoResetProfile();
		void NavigateBack();
		void ClearNewIndications();
		struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void SelectFirstVisibleItem();
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		void UpdateHintsButtons();
		class UWidget* OnCustomNavigation(class UWidget* Widget, const class FName& Key);
		void SetNavigationRules();
		class UWidget* DoUpDownNaviagtion(EUINavigation Navigation);
		class UWidget* DoLeftRightNaviagtion(EUINavigation Navigation);
		void UpdateCategoryNotification();
		void HasNewItemsByCategoryAndOperation(EStoreItemCategory InCategory, const class FName& InOperationName, bool* OutHasNew);
		void ClickStoreItem(class UBP_OnlineStore_Item_C* InStoreItem);
		void PurchaseItem(class UStoreItem* PurchasedItem);
		void GetListByCategoryAndOperation(EStoreItemCategory InCategory, const class FName& InOperationName, TArray<class UStoreItem*>* OutStoreItems);
		void ClearItemsList();
		void UpdateSelectedItemData();
		void ChangeSelectedItem(class UBP_OnlineStore_Item_C* InSelectedItem);
		void PopulateItemsByList(TArray<class UStoreItem*>* InItemsList);
		void BindActionsToItemButton(class UBP_OnlineStore_Item_C* InItemButton);
		void BindActionsToCategoriesButtons();
		void UpdateSelectedCategory(class UBP_OnlineStore_CategoryBaseButton_C* InNewCategory);
		void ChangeSelectedCategoryButton(class UBP_OnlineStore_CategoryBaseButton_C* InCategoryButton);
		void BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature();
		void BndEvt__CategoryButtonAll_K2Node_ComponentBoundEvent_1_OnSelected__DelegateSignature(class UBP_OnlineStore_CategoryBaseButton_C* SelectedCategory);
		void BndEvt__CategoryButtonSales_K2Node_ComponentBoundEvent_2_OnSelected__DelegateSignature(class UBP_OnlineStore_CategoryBaseButton_C* SelectedCategory);
		void OnStoreItemListUpdated();
		void BndEvt__ResetProfile_K2Node_ComponentBoundEvent_4_OnPressed__DelegateSignature();
		void OnHasSalesChanged();
		void BndEvt__ResetBackend_K2Node_ComponentBoundEvent_5_OnPressed__DelegateSignature();
		void BndEvt__ShowOwned_K2Node_ComponentBoundEvent_6_OnPressed__DelegateSignature();
		void BndEvt__ClearIndications_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature();
		void Construct();
		void ExecuteUbergraph_BP_MainMenu_OnlineStore(int32_t EntryPoint);
		void OnNavigateBack__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
