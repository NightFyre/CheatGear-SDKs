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
	 * WidgetBlueprintGeneratedClass BP_AmmoCount.BP_AmmoCount_C
	 * Size -> 0x021C (FullSize[0x044C] - InheritedSize[0x0230])
	 */
	class UBP_AmmoCount_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    GetAmmoFeedback;                                         // 0x0238(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    FlashMagazineReloading;                                  // 0x0240(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    FlashMagazineEmpty;                                      // 0x0248(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    FlashMagwell;                                            // 0x0250(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    FadeOut;                                                 // 0x0258(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    FadeIn;                                                  // 0x0260(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                              ActiveMagwellIndicator;                                  // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              BackgroundGradient;                                      // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_FireMode_C*                                      BP_FireMode;                                             // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      CountersBox;                                             // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              GradientFeedback;                                        // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UInvalidationBox*                                    InvalidationBox_1;                                       // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      MagContainerBox;                                         // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            MagInfoContainer;                                        // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_AmmoCount_PhysicalMag_C*                         PhysicalMag01;                                           // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_AmmoCount_PhysicalMag_C*                         PhysicalMag02;                                           // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_AmmoCount_PhysicalMag_C*                         PhysicalMag03;                                           // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_AmmoCount_PhysicalMag_C*                         PhysicalMagMagwell;                                      // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              PlusSign;                                                // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          RepresentativeAmmoCountText;                             // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SingleLoadReserveContainer;                              // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          SingleLoadReserveText;                                   // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextAmmoType;                                            // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class AItemWeapon*                                         Weapon;                                                  // 0x02F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       WeaponConsumesAmmo;                                      // 0x02F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_F0GF[0x3];                                   // 0x02F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    AmmoCounter;                                             // 0x02FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SinglyLoaded;                                            // 0x0300(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MEFO[0x7];                                   // 0x0301(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        FadeOutTimer;                                            // 0x0308(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CurrentReserveCount;                                     // 0x0310(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LE6Z[0x4];                                   // 0x0314(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateColor                                         AmmoCounterColorDefault;                                 // 0x0318(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         AmmoCounterColorOut;                                     // 0x0340(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       bHasLoadedMag;                                           // 0x0368(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2U3R[0x7];                                   // 0x0369(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            RepresentativeAmmoCount;                                 // 0x0370(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		class FText                                                AmmoTypeText;                                            // 0x0380(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		EAmmoContainerType                                         ContainerType;                                           // 0x0398(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bWantsFadeOut;                                           // 0x0399(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bPendingAmmoUpdate;                                      // 0x039A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bPendingReserveUpdate;                                   // 0x039B(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OGTG[0x4];                                   // 0x039C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                AmmoTypeMags;                                            // 0x03A0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                AmmoTypeDrums;                                           // 0x03B8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                AmmoTypeBoxes;                                           // 0x03D0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                AmmoTypeRounds;                                          // 0x03E8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                AmmoTypRockets;                                          // 0x0400(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                AmmoTypeShells;                                          // 0x0418(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       bHasLoadedAmmoContainer;                                 // 0x0430(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       HideAmmoCountTutorial;                                   // 0x0431(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6MTU[0x6];                                   // 0x0432(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            AmmoCounters;                                            // 0x0438(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		int32_t                                                    IndexCurrentCounter;                                     // 0x0448(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AddNewCounter(int32_t Index, bool bPlus, float Padding);
		void Get_Counters(bool Chamber, int32_t Count, TArray<int32_t>* Counters);
		void HasNotNullCounter(TArray<int32_t>* Counters, bool* HasNotNull);
		void HandleGrenadeLauncherType(int32_t CurrentMagIndex, float MagFrac, EAmmoContainerType ContainerType, bool* bIsHandled, int32_t* NextMagIndexOut);
		void UpdateSingleLoadReserveTextVisibility();
		void GetTextForContainer(EAmmoContainerType Type, class FText* Text);
		void OnMagazineScavenged(class AINSSoldier* Soldier, class AItemWeapon* Weapon);
		void OnUseBegin(class AINSSoldier* Soldier, class AActor* UsingActor, EUseItem Item);
		void OnSoldierSpawned();
		void UpdateLastMagVisibility();
		void UpdateAmmoCounter(TArray<int32_t>* NewAmmoCounter);
		void Update_Representative_Ammo_Count(TArray<int32_t>* NewCounts);
		void UpdateActiveMagAnimation();
		void UpdateActiveMagazine();
		void SetupMagwellRepresentation(EAmmoContainerType Index, bool bSetContainerName);
		void ShouldDisplayRedFlashingMagazine(bool* Display);
		void OnReloadInterrupted();
		void UpdateAmmoType();
		void MakeFiremodeVisible();
		void ShouldShowReserveMagCount(bool* Result);
		ESlateVisibility GetPhysicalMagMagwellVisibility();
		struct FSlateColor GetAmmoCounterColor();
		class FText GetSingleLoadReserveText();
		ESlateVisibility GetSingleLoadReserveVisibility();
		void CheckMagEmpty();
		ESlateVisibility GetMagwellVisibility();
		ESlateVisibility GetCountVisibility();
		void FadeInDisplayWithTimeout();
		void FadeOutDisplay();
		void FadeInDisplay();
		void WeaponIsLoaded(bool* Loaded);
		void GetMagazinesToRepresent(TArray<float>* Magazines, TArray<EAmmoContainerType>* ContainerTypes);
		void UpdateVisibleMagazine(int32_t Entry, float Frac, EAmmoContainerType Type);
		void UpdateAmmoRepresentation();
		ESlateVisibility GetPhysicalMag03Visibility();
		ESlateVisibility GetPhysicalMag02Visibility();
		ESlateVisibility GetPhysicalMag01Visibility();
		ESlateVisibility GetPlusSignVisibility();
		class FText Get_Ammo_Count_Text();
		void FirearmFire(const struct FVector& FireOrigin, const struct FVector& FireDirection);
		void ReserveAmmoUpdated();
		void FirearmReload(bool DryReload, bool SingleReload, float Speed);
		void BndEvt__BP_FireMode_K2Node_ComponentBoundEvent_1_UpdateFiremodeContainerVisibility__DelegateSignature(bool bVisible);
		void ActiveAmmoUpdated();
		void FirearmDryFire();
		void FirearmAmmoCheck();
		void HideAmmoCountInTutorial(class AINSSoldier* Soldier, class AItemBase* Item);
		void BindInventoryEvents();
		void WeaponChanged(class AItemEquipable* NewItem, class AItemEquipable* PreviousItem);
		void PlayGatherAmmoFeedback();
		void Construct();
		void ExecuteUbergraph_BP_AmmoCount(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
