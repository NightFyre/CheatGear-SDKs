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
	 * BlueprintGeneratedClass BP_HDHUDBase.BP_HDHUDBase_C
	 * Size -> 0x0060 (FullSize[0x0370] - InheritedSize[0x0310])
	 */
	class ABP_HDHUDBase_C : public AHDHUD
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0310(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0318(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       bDrawCrosshair;                                          // 0x0320(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KIBF[0x7];                                   // 0x0321(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWBP_HUD_C*                                          HUDContainerUW;                                          // 0x0328(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bShowCompass;                                            // 0x0330(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bShowPlayerStatus;                                       // 0x0331(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bShowWeaponStatus;                                       // 0x0332(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bShowCaptureStatus;                                      // 0x0333(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bShowEquipmentSelect;                                    // 0x0334(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bShowWatermark;                                          // 0x0335(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bInitialized;                                            // 0x0336(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HH3T[0x1];                                   // 0x0337(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CrosshairWidth;                                          // 0x0338(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CrosshairHeight;                                         // 0x033C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              HUDContainerUWClass;                                     // 0x0340(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESlateVisibility                                           HUDContainerUWVisibilityOverride;                        // 0x0348(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		bool                                                       bHUDWidgetShown;                                         // 0x0349(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EJ86[0x6];                                   // 0x034A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APawn*                                               LastOwningPawn;                                          // 0x0350(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_HDPlayerControllerBase_C*                        OwningHDPC;                                              // 0x0358(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_HDPlayerCharacterBase_C*                         OwningHDPawn;                                            // 0x0360(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ADFBaseItem*                                         OwningPawnEquippedItem;                                  // 0x0368(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void IsTextChatHistoryVisible(bool* bVisible);
		void SetTextChatHistoryVisibility(bool bVisible);
		void SetMedicHealingEffectVisibility(bool bVisible);
		void SetAmmoResupplyEffectVisibility(bool bVisible);
		void ResetPlayerStatusEffectsUI();
		void ClearOwningPawnReferences();
		void ForceUpdateOwningPawnReferences();
		void ClearAllOwningPlayerReferences();
		void ForceUpdateAllOwningPlayerReferences();
		void CleanupDelegatesForHDPawn(class ABP_HDPlayerCharacterBase_C* PlayerChar);
		void InitOwningHDPawnDelegates();
		void CleanupOwningHDPCDelegates();
		void InitOwningHDPCDelegates();
		void UpdateHUDVisibility(bool bDestroyOnHide);
		void HideHUDWidget(bool bDestroyWidgetOnHide);
		void ShowHUDWidget();
		void EquipmentSelectEquippedItem(class UHDKit* CurrentLoadout, class AHDBaseWeapon* EquippedItem);
		void EquipmentSelectItemBySlotNum(int32_t SlotNum, bool* bOutNewSelection);
		void EquipmentGetSelectedItemSlotNum(int32_t* OutSlotNum, bool* bFoundItem);
		void EquipmentGetSelectedItem(class AHDBaseWeapon** OutItemToEquip, bool* bFoundItem);
		void EquipmentAddItemsFromLoadout(class UHDKit* NewLoadout, class UDFInventoryComponent* PlayerInventory, class ADFBaseWeapon* EquippedItem);
		void EquipmentSelectItem(int32_t ItemIndex);
		void EquipmentSelectPrevItem();
		void EquipmentSelectNextItem();
		void ToggleWeaponStatusUI(bool bShown);
		void ToggleEquipmentUI(bool bShown);
		void ReceiveDrawHUD(int32_t SizeX, int32_t SizeY);
		void ReceiveBeginPlay();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void ReceiveTick(float DeltaSeconds);
		void OwningPawnUpdated(class APawn* NewOwningPawn, class APawn* PrevOwningPawn);
		void OwningPawnEquipmentItemChanged(class ADFBaseCharacter* Character, class ADFBaseItem* NewEquippedItem, class ADFBaseItem* PrevEquippedItem);
		void OwningPlayerPossessPawn(class APawn* Pawn);
		void OwningPlayerUnpossessPawn(class APawn* Pawn);
		void ExecuteUbergraph_BP_HDHUDBase(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
