#pragma once

/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
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
	 * WidgetBlueprintGeneratedClass WB_Inventory_Status.WB_Inventory_Status_C
	 * Size -> 0x0058 (FullSize[0x0388] - InheritedSize[0x0330])
	 */
	class UWB_Inventory_Status_C : public UInventoryStatusWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0330(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UButton*                                             Btn_Detail_Off;                                          // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Btn_Detail_On;                                           // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          ClassName;                                               // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          ClassName_First;                                         // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      HBox_Title;                                              // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_BG;                                                // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     Switcher_Detail_OnOff;                                   // 0x0368(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_Inventory_CharacterStatus_C*                     WB_Inventory_CharacterStatus;                            // 0x0370(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_Inventory_CharacterStatusDetail_C*               WB_Inventory_CharacterStatusDetail;                      // 0x0378(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		double                                                     MoveSpeedBase;                                           // 0x0380(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetAttributeTextColor(const struct FGameplayAttributeData& GameplayAttributeData, struct FSlateColor* SlateColor);
		void OnPhysicalReduction(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void SetBasePercentAttribute(const struct FGameplayAttributeData& GameplayAttributeData, class UTextBlock* AttributeText);
		void OnUtilityEffectiveness(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnMagicalDamageMod(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnItemEquipSpeed(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnPhysicalReductionArmorRating(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnMagicalInteractionSpeed(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnMaxHealth(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnRegularInteractionSpeed(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnMagicalPower(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnSpellCapacity(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnHealth(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnSpellPayload(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnPhysicalDamageMod(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnWeightLimit(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnWeight(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnSpellCastingSpeed(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnPrimaryAbilityWidgetArray(TArray<class UItemTooltipStatWidgetData*> NewValue, TArray<class UItemTooltipStatWidgetData*> OldValue);
		void OnPhysicalReductionBonus(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnSecondaryAbilityWidgetArray(TArray<class UItemTooltipStatWidgetData*> NewValue, TArray<class UItemTooltipStatWidgetData*> OldValue);
		void SetIntegerAttribute(const struct FGameplayAttributeData& GameplayAttributeData, class UTextBlock* AttributeText);
		void OnPhysicalPower(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnMagicalReduction(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnMagicalReductionMagicResistance(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void SetPercentAttribute(const struct FGameplayAttributeData& GameplayAttributeData, class UTextBlock* AttributeText);
		void OnArmorRating(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnPlayerCharacterName(const class FText& NewValue, const class FText& OldValue);
		void OnPhysicalDamageModPhysicalPower(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnAgility(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnPhysicalDamageModBonus(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnResourcefulness(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnActionSpeed(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnMagicResistance(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnKnowledge(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnMagicalReductionBonus(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnMagicalDamageModMagicalPower(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnMagicalDamageModBonus(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnStrength(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnMoveSpeed(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnWill(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void BndEvt__WB_Inventory_Status_Btn_Detail_On_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__WB_Inventory_Status_Btn_Detail_Off_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
		void ExecuteUbergraph_WB_Inventory_Status(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
