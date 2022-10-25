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
	 * WidgetBlueprintGeneratedClass BP_ProfileAppearance.BP_ProfileAppearance_C
	 * Size -> 0x0398 (FullSize[0x05D8] - InheritedSize[0x0240])
	 */
	class UBP_ProfileAppearance_C : public UOptionsMenu
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0240(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    CloseCheckoutWindow;                                     // 0x0248(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    OpenCheckoutWindow;                                      // 0x0250(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    ScrollToSlotDetail;                                      // 0x0258(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    ScrollToSlotList;                                        // 0x0260(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UHorizontalBox*                                      AmmoOptionsBox;                                          // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      ArmorBox;                                                // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      ArmorOptionsBox;                                         // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_BtnBack_C*                                       BP_BtnBack;                                              // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_KeyActionIcon_C*                                 BP_KeyActionIcon;                                        // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_KeyActionIcon_C*                                 BP_KeyActionIcon_FocusAmmo;                              // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_KeyActionIcon_C*                                 BP_KeyActionIcon_FocusArmor;                             // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_Profile_Preset_Button_C*                         BP_Profile_Preset_Button;                                // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_ProfileAppearance_CosmeticSlot_C*                BP_ProfileAppearance_CosmeticSlot;                       // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             BtnPlayVoiceSample;                                      // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             BtnRandomize;                                            // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             BtnToggle;                                               // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             ButtonPurchaseCart;                                      // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          CartCosmeticName;                                        // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          CartCosmeticSlot;                                        // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          CartTotalCost;                                           // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          CartVariationName;                                       // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            ConfirmPurchaseWindow;                                   // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        CosmeticSlotContainer;                                   // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                          CosmeticStyleContainer;                                  // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        CosmeticStyleOuter;                                      // 0x0308(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          CurrentPreferredFactionName;                             // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          CurrentPreferredShoppingCartName;                        // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            DetailsGenderDisplay;                                    // 0x0320(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        DevDebugBox;                                             // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                          FactionsList;                                            // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            GenderDisplay;                                           // 0x0338(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             GenderSwitchButton;                                      // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              GenderSwitchImage;                                       // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_SelectableImageButton_C*                         HeavyArmorBtn;                                           // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_SelectableImageButton_C*                         HeavyCarrierBtn;                                         // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_1;                                                 // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_2;                                                 // 0x0368(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_3;                                                 // 0x0370(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_4;                                                 // 0x0378(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_5;                                                 // 0x0380(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_6;                                                 // 0x0388(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_7;                                                 // 0x0390(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_10;                                                // 0x0398(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_11;                                                // 0x03A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_12;                                                // 0x03A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_13;                                                // 0x03B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_14;                                                // 0x03B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_15;                                                // 0x03C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_16;                                                // 0x03C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_17;                                                // 0x03D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_18;                                                // 0x03D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_116;                                               // 0x03E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_Profile_Appearance_Button_C*                     InsurgentFactionSelect;                                  // 0x03E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_TextWithActions_C*                               ItemDescriptionActionText;                               // 0x03F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ItemImage;                                               // 0x03F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          ItemNameBlock_2;                                         // 0x0400(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                          ItemsEquippedScrollBox;                                  // 0x0408(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_SelectableImageButton_C*                         LightArmorBtn;                                           // 0x0410(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_SelectableImageButton_C*                         LightCarrierBtn;                                         // 0x0418(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_SelectableImageButton_C*                         NoArmorBtn;                                              // 0x0420(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_SelectableImageButton_C*                         NoCarrierBtn;                                            // 0x0428(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            Overlay_ItemInfoContainer;                               // 0x0430(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          PlayerBalance;                                           // 0x0438(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                          PresetButtons;                                           // 0x0440(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_KeyActionIcon_C*                                 PurchaseKeyActionIcon;                                   // 0x0448(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          PurchaseText;                                            // 0x0450(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     PurchaseTypeSwitcher;                                    // 0x0458(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     PurchseTextSwitcher;                                     // 0x0460(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            RightSidebar;                                            // 0x0468(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USafeZone*                                           SafeZone_3;                                              // 0x0470(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_Profile_Appearance_Button_C*                     SecurityFactionSelect;                                   // 0x0478(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                          ShoppingCartScrollBox;                                   // 0x0480(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SizeBox_Selected;                                        // 0x0488(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          SlotDetailName;                                          // 0x0490(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SlotDetailsContainer;                                    // 0x0498(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                          SlotItemContainer;                                       // 0x04A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SlotListContainer;                                       // 0x04A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_6;                                             // 0x04B0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_7;                                             // 0x04B8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_9;                                             // 0x04C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_15;                                            // 0x04C8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            VoiceIconWindow;                                         // 0x04D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		ECharacterAppearanceSlot                                   CurrentSlot;                                             // 0x04D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bShoppingListActive;                                     // 0x04D9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_V5FR[0x2];                                   // 0x04DA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CurrentSubSlot;                                          // 0x04DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CurrentCosmeticSubSlot;                                  // 0x04E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_QI3K[0x4];                                   // 0x04E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UINSLocalPlayer*                                     LocalPlayer;                                             // 0x04E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsEditingPreset;                                        // 0x04F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bToggleDebugBox;                                         // 0x04F1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bMousePressed;                                           // 0x04F2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bCheckingOut;                                            // 0x04F3(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    CurrentItemSelectedForPurchase;                          // 0x04F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECharacterGender                                           CurrentGender;                                           // 0x04F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LFIL[0x7];                                   // 0x04F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              SelectedCosmetic;                                        // 0x0500(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            CharacterRotator;                                        // 0x0508(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FName                                                CurrentArmorLevel;                                       // 0x0514(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                CurrentCarrierLevel;                                     // 0x051C(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_N4DH[0x4];                                   // 0x0524(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBP_SelectableImageButton_C*                         CurrentSelectedCarrierBtn;                               // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBP_SelectableImageButton_C*                         CurrentSelectedArmorBtn;                                 // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           ArmorOffset;                                             // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DeltaTime;                                               // 0x0540(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_JGR0[0x4];                                   // 0x0544(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBP_GenericLoadingDialog_C*                          ProgressWidget;                                          // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bBtnRandomizeHovered;                                    // 0x0550(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RFQJ[0x7];                                   // 0x0551(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBP_ProfileAppearance_Variation_C*                   CurrentlySelectedVariation;                              // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    EditingPresetIndex;                                      // 0x0560(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_B94R[0x4];                                   // 0x0564(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBP_Profile_Preset_Button_C*                         CurrentlySelectedPreset;                                 // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECharacterAppearanceSlot                                   LastSlot;                                                // 0x0570(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_TWOS[0x7];                                   // 0x0571(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              SelectedBundle;                                          // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnClicked;                                               // 0x0580(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UBP_GenericDialog_C*                                 ActiveGenericDialogWidget;                               // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnPresetHover;                                           // 0x0598(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnPresetUnhover;                                         // 0x05A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    HoveredPresetIndex;                                      // 0x05B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsEquipmentSelection;                                   // 0x05BC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bBtnGenderSwitchHovered;                                 // 0x05BD(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_D1W7[0x2];                                   // 0x05BE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    LastHoveredSubSlotIndex;                                 // 0x05C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    LastHoveredTeamIndex;                                    // 0x05C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             RefreshBackButtonHint;                                   // 0x05C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void UpdateCachedWidgets();
		void SaveSelectedPreset();
		void SetPresetButtonSelected(const class FText& PresetName);
		ESlateVisibility GetVisibilityBtnBack();
		void GetWidgetToFocusFromCache(class UWidget** Widget);
		void ResetHoveredCache();
		void OnSubSlotHover(class UUserWidget* SelfRef);
		class UWidget* GetPresetToFocusFromCache();
		void GetSelectedSlotItem(class UBP_ProfileAppearance_CosmeticItem_C** SelectedItemRef);
		void RemoveActiveDialogWidget();
		void On_Confirm_Network_Purchase_Error_Dialog();
		void On_Button_Purchase_Cart_Clicked();
		class UWidget* OnCustomNavigation(class UWidget* Widget, const class FName& Key);
		struct FEventReply OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent);
		void SelectEquippedVariation();
		void ClearUnviewedItems();
		void OnConfirmedError();
		void SetupPurchaseBox(const struct FSelectedCosmetic& SelectedCosmetic);
		void OnPresetCanceled();
		void OnCancelPurchase();
		struct FSlateColor GetTextColor_GenderSwitchBtn();
		struct FLinearColor GetBrushColor_1();
		struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void GetCurrentSlotWidget(class UWidget** Widget);
		void OnSlotListVisible();
		void OnSlotDetailVisible();
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		void OnEditPresetCanceled();
		void OnEditPresetConfirmed(const class FText& newText);
		void OnPresetConfirmed(const class FText& CommitedText);
		struct FLinearColor GetTextColor_RandomizeBtn();
		void OnConfirmPurchase();
		void Prompt_Purchase_Shopping_Cart();
		void ResetCosmeticState();
		void EmptyShoppingCart();
		void GetEntitledCosmeticsInSlot(ECharacterAppearanceSlot Slot, int32_t SubSlot, bool bActive, TArray<class UClass*>* OutArray);
		void IsCosmeticEquipped(int32_t ItemId, bool bIncludeBase, bool* bEquipped);
		void PlayerOwnsItemId(int32_t ItemId, bool* Owns);
		void GetCurrentFaction(class FName* OutFaction);
		void SwitchFactionTo(const class FName& NewFaction);
		void Open_Hands_Slot_List(ECharacterAppearanceSlot Slot, int32_t SubSlot);
		void UpdatePreferredFactionSelection();
		void InitializeCarrierAndArmorButtons();
		void UpdateEquipmentPreview();
		void OnTabSelected();
		void ForceCameraForCurrentSlot();
		void UpdateCarrierLevel(const class FName& Level);
		void NotifyArmorOrCarrierUpdate();
		void UpdateArmorLevel(const class FName& Level);
		void UpdateBalance();
		void GetLastKnownBalance(int32_t* Credits);
		void GetLastKnownBalanceAsText(class FText* Balance);
		void PopulateEquipmentList(ECharacterAppearanceSlot Slot, int32_t SubSlot);
		void ResetCharacterRotation();
		void AddCharacterRotation();
		void UpdateExternalCamera(ECharacterAppearanceSlot Slot, int32_t Sub_Slot, bool Reset);
		void OnQueryEntitlementsComplete();
		struct FSlateBrush GetColor_GenderSwitchImage();
		class FText GetGenderText();
		ESlateVisibility Get_GenderDisplay_Visibility_1();
		void PressBackButton();
		void ShouldNavigateBackToMenu(bool* ShouldReturn);
		ESlateVisibility Get_VoiceIconWindow_Visibility_1();
		void UpdateCurrentGender();
		void CloseShoppingCart();
		ESlateVisibility Get_RightSidebar_Visibility_1();
		void OnCosmeticUnHovered();
		void SaveCurrentStateAsPreset();
		void OnCreatePresetHovered();
		void GetNextPresetName(class FText* PresetName);
		class FText GetRandomizeText();
		void RandomizeCurrentCosmetics(ECharacterAppearanceSlot Slot, int32_t SubSlot, bool bIsSubSlotButton);
		void PurchaseShoppingCart();
		ESlateVisibility Get_ConfirmPurchaseWindow_Visibility_1();
		void StartCheckout();
		void PreviewItem(int32_t ItemId);
		void CloseShoppingList(bool Skip_Camera, bool To_Initial_Slot);
		struct FEventReply OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void IsCosmeticAvailable(class UClass* Cosmetic, bool* IsAvailable);
		void GetCosmeticRarity(int32_t ItemId, ECollectibleRarity* Rarity);
		void UpdateSelectedItems();
		void UpdateDevBox();
		void UnhoveredItemButton(class UWidget* WidgetRef);
		void HoverItemButton(class UWidget* Ref);
		void PressItemButton(int32_t ItemId, class UBP_ProfileAppearance_Variation_C* VariationButtonReference);
		void Open_Sub_Slot_List(ECharacterAppearanceSlot Slot);
		ESlateVisibility Get_SlotDetailsContainer_Visibility_1();
		void ScrollToSlotListNow();
		void OnInventoryPurchase(int32_t NewItemDefId);
		ESlateVisibility GetCosmeticStyleVisibility();
		void AnimScrollToSlotDetail();
		void AnimReturnToSlotList();
		void OnPresetUnHovered();
		void OnPresetHovered(class UWidget* ItemRef);
		void OnPresetCancelButtonClicked(const class FText& PresetName);
		void UpdateFactionSelectButtons();
		void RemovePreset(const class FText& PresetName);
		void OnPresetEditButtonClicked(const class FText& PresetName);
		void SetEditingPreset(bool bEditing);
		void OnPresetSaveButtonClicked(const class FText& PresetName, const class FText& PresetDesignation);
		ESlateVisibility Get_BtnAddNewPreset_Visibility_1();
		void ReloadPresets();
		ESlateVisibility VisibleIfEditingPreset();
		void LoadPreset(class FText* PresetName);
		void OnPresetButtonClicked(const class FText& PresetName);
		void SwitchFactionToInsurgent();
		void GetLocalPlayer(class UINSLocalPlayer** LocalPlayer);
		void PressVarietyButton(class UBP_ProfileAppearance_CosmeticVariety_C* VarietyButton);
		void PopulateVarietiesList(class UClass* Cosmetic);
		void PopulateItemsList(ECharacterAppearanceSlot Slot, int32_t SubSlot, bool Clear);
		void SwitchFactionToSecurity();
		void PressCosmeticButton(class UBP_ProfileAppearance_CosmeticItem_C* CosmeticButton);
		void PressSlotButton(ECharacterAppearanceSlot Slot, int32_t SubSlot, bool bIsSubSlotButton);
		void RefreshAppearanceSlotList();
		void Construct();
		void BndEvt__SwitchFactionButton_K2Node_ComponentBoundEvent_252_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__BP_Profile_Appearance_Button_K2Node_ComponentBoundEvent_90_OnClicked__DelegateSignature(const class FString& Parameter);
		void BndEvt__BP_Profile_Appearance_Button_C_0_K2Node_ComponentBoundEvent_102_OnClicked__DelegateSignature(const class FString& Parameter);
		void BndEvt__BP_Profile_Preset_Button_K2Node_ComponentBoundEvent_47_OnClicked__DelegateSignature(const class FText& PresetName);
		void BndEvt__BtnCancelEditPreset_K2Node_ComponentBoundEvent_246_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__BtnAddNewPreset_K2Node_ComponentBoundEvent_323_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__BP_Profile_Preset_Button_K2Node_ComponentBoundEvent_14_OnPresetClicked__DelegateSignature(const class FText& PresetName);
		void BndEvt__BP_Profile_Preset_Button_C_1_K2Node_ComponentBoundEvent_23_OnPresetClicked__DelegateSignature(const class FText& PresetName);
		void BndEvt__SecurityFactionSelect_K2Node_ComponentBoundEvent_31_OnRefreshClicked__DelegateSignature();
		void BndEvt__BtnCloseSlotContainer_K2Node_ComponentBoundEvent_376_OnButtonClickedEvent__DelegateSignature();
		void OnScrollToSlotListStart();
		void OnScrollToSlotListEnd();
		void BndEvt__BP_ProfileAppearance_CosmeticSlot_K2Node_ComponentBoundEvent_86_OnPressed__DelegateSignature(ECharacterAppearanceSlot Slot, int32_t SubSlot, bool bIsSubSlotButton);
		void BndEvt__InsurgentFactionSelect_K2Node_ComponentBoundEvent_15_OnRefreshClicked__DelegateSignature();
		void RefreshCosmetics();
		void SetSlotDetailVisibilities();
		void SetSlotListVisibilities();
		void BndEvt__BtnToggle_K2Node_ComponentBoundEvent_64_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__BtnCloseSlotContainer_K2Node_ComponentBoundEvent_175_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__ButtonPurchaseCart_K2Node_ComponentBoundEvent_629_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__BtnRandomize_K2Node_ComponentBoundEvent_372_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__BtnPlayVoiceSample_K2Node_ComponentBoundEvent_977_OnButtonClickedEvent__DelegateSignature();
		void OnMouseLeave(const struct FPointerEvent& MouseEvent);
		void BndEvt__NoArmorBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(const class FName& Context);
		void BndEvt__LightArmorBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(const class FName& Context);
		void BndEvt__HeavyArmorBtn_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(const class FName& Context);
		void BndEvt__NoCarrierBtn_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(const class FName& Context);
		void BndEvt__LightCarrierBtn_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(const class FName& Context);
		void BndEvt__HeavyCarrierBtn_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(const class FName& Context);
		void PreConstruct(bool IsDesignTime);
		void OnProfileBlockLoaded(EProfileBlockType Type, bool bFromCloud);
		void OnCosmeticsProfileLoaded();
		void BndEvt__BtnRandomize_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__BtnRandomize_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__GenderSwitchButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__GenderSwitchButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__GenderSwitchButton_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature();
		void PlayVoiceSample();
		void BndEvt__InsurgentFactionSelect_K2Node_ComponentBoundEvent_7_OnHovered__DelegateSignature();
		void BndEvt__SecurityFactionSelect_K2Node_ComponentBoundEvent_8_OnHovered__DelegateSignature();
		void BndEvt__BP_BtnBack_K2Node_ComponentBoundEvent_17_Click__DelegateSignature();
		void OnEntitlementsQueryCompleted();
		void ExecuteUbergraph_BP_ProfileAppearance(int32_t EntryPoint);
		void RefreshBackButtonHint__DelegateSignature();
		void OnPresetUnhover__DelegateSignature();
		void OnPresetHover__DelegateSignature();
		void OnClicked__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
