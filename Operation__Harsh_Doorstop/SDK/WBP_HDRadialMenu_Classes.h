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
	 * WidgetBlueprintGeneratedClass WBP_HDRadialMenu.WBP_HDRadialMenu_C
	 * Size -> 0x012C (FullSize[0x03A4] - InheritedSize[0x0278])
	 */
	class UWBP_HDRadialMenu_C : public UWBP_HDRadialMenuBase_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    ShowFirst;                                               // 0x0280(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    ShowCategory;                                            // 0x0288(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    ShowBuild;                                               // 0x0290(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UTextBlock*                                          CategoryTitle;                                           // 0x0298(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              CenterCircle;                                            // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_RadialMenuBase_C*                               MenuOptionsRing;                                         // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          MenuSubselection;                                        // 0x02B0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FName                                                SelectedItem;                                            // 0x02B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                SelectedMenuOption;                                      // 0x02C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FSHDRadialMenu_OptionData                           CategoryData;                                            // 0x02C8(0x0028) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       bPickingItem;                                            // 0x02F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4KCU[0x7];                                   // 0x02F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSHDRadialMenu_OptionData                           SelectedItemData;                                        // 0x02F8(0x0028) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		int32_t                                                    SelectedIndex;                                           // 0x0320(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_X3LW[0x4];                                   // 0x0324(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundBase*                                          CategorySelectSound;                                     // 0x0328(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          GoBackSound;                                             // 0x0330(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FSRadialMenuIconSettings                            IconStyle;                                               // 0x0338(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UDataTable*                                          MenuOptionsMain;                                         // 0x0360(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UDataTable*                                          MenuOptionsSelected;                                     // 0x0368(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FSRadialMenuIconSettings                            DisabledIconStyle;                                       // 0x0370(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RallypointRespawnTimeDefault;                            // 0x0398(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      OutpostRespawnTime;                                      // 0x039C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumberOfSegments;                                        // 0x03A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		class FText GetOutpostName();
		void GetOutpostTimeRemaining(class ABP_HDPlayerCharacterBase_C* OwnerPawn, class FText* TimeRemaining);
		class FText GetRallypointName();
		void GetRallypointTimeRemaining(class ABP_HDPlayerCharacterBase_C* OwnerPawn, class FText* TimeRemaining);
		void OwnerPawnDeath(class APawn* VictimPawn, class AController* VictimController, float KillingDamage, const struct FDamageEvent& DamageEvent, class APawn* InstigatingPawn, class AActor* DamageCauser);
		void MakeOutpostIcon(const struct FSHDRadialMenu_OptionData& OptionData, class UWBP_RadialMenuIconBase_C** Widget);
		void MakeRallypointIcon(const struct FSHDRadialMenu_OptionData& OptionData, class UWBP_RadialMenuIconBase_C** Widget);
		void MakeSpottingIcon(const struct FSHDRadialMenu_OptionData& OptionData, class UWBP_RadialMenuIconBase_C** Widget);
		void SelectSubmenu();
		void PopulateSubmenuOptions();
		void PopulateMenuOptions(class UDataTable* MenuOptions);
		void GetItemData(const class FName& RowName, struct FSHDRadialMenu_OptionData* ItemData);
		void GetItemNamesForSelectedOption(TArray<class FName>* OutRowNames);
		void GetCategoryData(const class FName& Category, struct FSHDRadialMenu_OptionData* CategoryData);
		void GetCategories(TArray<class FName>* Categories);
		class FText GetCategoryName();
		void BndEvt__categoryRing_K2Node_ComponentBoundEvent_1_SelectionChanged__DelegateSignature(int32_t NewSelection, int32_t OldSelection);
		void Submit();
		void GoBack();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void Construct();
		void OnCancel();
		void ExecuteUbergraph_WBP_HDRadialMenu(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
