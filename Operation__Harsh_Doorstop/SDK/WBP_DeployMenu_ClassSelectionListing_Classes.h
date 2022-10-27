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
	 * WidgetBlueprintGeneratedClass WBP_DeployMenu_ClassSelectionListing.WBP_DeployMenu_ClassSelectionListing_C
	 * Size -> 0x07E8 (FullSize[0x0A18] - InheritedSize[0x0230])
	 */
	class UWBP_DeployMenu_ClassSelectionListing_C : public UDeployMenu_ClassSelectionListing
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              ClassBg;                                                 // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          ClassNameText;                                           // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          ClassRestrictedText;                                     // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ClassSymbol;                                             // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUniformGridPanel*                                   EqpGrid;                                                 // 0x0258(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              EqpSlot1;                                                // 0x0260(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              EqpSlot2;                                                // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              EqpSlot3;                                                // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              EqpSlot4;                                                // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              EqpSlot5;                                                // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              EqpSlot6;                                                // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              EqpSlot7;                                                // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              EqpSlot8;                                                // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_11;                                                // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_12;                                                // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_13;                                                // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_14;                                                // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              PrimaryWeaponIcon;                                       // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            RestrictedOverlay;                                       // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             SelectClassBtn;                                          // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHDKit*                                              Kit;                                                     // 0x02D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bListingInitialized;                                     // 0x02E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IF13[0x7];                                   // 0x02E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_HDPlayerControllerBase_C*                        HDOwningPlayer;                                          // 0x02E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnClassSelected;                                         // 0x02F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bSelected;                                               // 0x0300(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bRestricted;                                             // 0x0301(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DIJ9[0x6];                                   // 0x0302(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnClassDeselected;                                       // 0x0308(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FSlateBrush                                         DefaultDisplaySymbolBrush;                               // 0x0318(0x0088) Edit, BlueprintVisible, BlueprintReadOnly
		struct FLinearColor                                        NoSymbolColor;                                           // 0x03A0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                DefaultDisplayNameText;                                  // 0x03B0(0x0018) Edit, BlueprintVisible, BlueprintReadOnly
		struct FButtonStyle                                        SelectedBtnStyle;                                        // 0x03C8(0x0278) Edit, BlueprintVisible, BlueprintReadOnly
		struct FButtonStyle                                        DeselectedBtnStyle;                                      // 0x0640(0x0278) Edit, BlueprintVisible, BlueprintReadOnly
		struct FSlateColor                                         ClassSymbolDisabledTint;                                 // 0x08B8(0x0028) Edit, BlueprintVisible, BlueprintReadOnly
		struct FSlateColor                                         ClassSymbolEnabledTint;                                  // 0x08E0(0x0028) Edit, BlueprintVisible, BlueprintReadOnly
		TArray<struct FHDItemEntry>                                KitItemEntries;                                          // 0x0908(0x0010) Edit, BlueprintVisible, Transient, DisableEditOnInstance, HasGetValueTypeHash
		struct FSlateBrush                                         DefaultEqpSymbolBrush;                                   // 0x0918(0x0088) Edit, BlueprintVisible, BlueprintReadOnly
		struct FLinearColor                                        DefaultEqpSymbolColor;                                   // 0x09A0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FSlateColor                                         RestrictedTextColor;                                     // 0x09B0(0x0028) Edit, BlueprintVisible, BlueprintReadOnly
		struct FSlateColor                                         UnrestrictedTextColor;                                   // 0x09D8(0x0028) Edit, BlueprintVisible, BlueprintReadOnly
		class FText                                                KitLimitationDisplayText;                                // 0x0A00(0x0018) Edit, BlueprintVisible, BlueprintReadOnly

	public:
		void AreColorsNearlyEqual(const struct FLinearColor& ColorOne, const struct FLinearColor& ColorTwo, bool* bEqual);
		void InternalFillEqpSlots();
		void SortItemEntriesInPlaceBySlotNum(TArray<struct FHDItemEntry>* EntriesToSort);
		void InternalSetEqpDisplaySymbolBySlotNum(int32_t SlotNum, class UTexture2D* SlotSymbolToUse, bool bDesignTime);
		void InternalSetupKitDisplayEqpSlots();
		void InternalGetEqpSlotImageWidgetByNum(int32_t SlotNum, class UImage** EqpSlotImage);
		void InternalSetClassRestrictedState(bool bNewRestricted, class FText* NewRestrictionReason);
		void InternalUpdateClassRestrictedText(bool bKitRestricted, class FText* KitRestrictionReason);
		void InternalSetupKitRestrictionDisplay(bool bKitRestricted, class FText* KitRestrictionReason);
		void InternalIsKitRestricted(bool* bKitRestricted, class FText* KitRestrictionReason);
		void InternalSetupKitDisplayName();
		void InternalSetupKitDisplaySymbol();
		void SetSelected(bool bSelected);
		void ToggleClassSelection();
		void InternalSetClassSelectionState(bool bNewSelected);
		void DeselectClass();
		void SelectClass();
		void InternalSetupPrimaryWeaponIcon();
		void UpdateRestrictedState();
		void InternalKitDisplaySetup();
		void Init(class UHDKit* Kit, class ABP_HDPlayerControllerBase_C* OwningPC);
		void BndEvt__SelectClassBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void ExecuteUbergraph_WBP_DeployMenu_ClassSelectionListing(int32_t EntryPoint);
		void OnClassDeselected__DelegateSignature(class UWBP_DeployMenu_ClassSelectionListing_C* DeselectedClassWidget);
		void OnClassSelected__DelegateSignature(class UWBP_DeployMenu_ClassSelectionListing_C* SelectedClassWidget);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
