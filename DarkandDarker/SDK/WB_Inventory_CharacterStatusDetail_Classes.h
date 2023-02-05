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
	 * WidgetBlueprintGeneratedClass WB_Inventory_CharacterStatusDetail.WB_Inventory_CharacterStatusDetail_C
	 * Size -> 0x0150 (FullSize[0x0A50] - InheritedSize[0x0900])
	 */
	class UWB_Inventory_CharacterStatusDetail_C : public UCharacterStatusDetailWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0900(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UListView*                                           PrimaryWeaponAbilityList;                                // 0x0908(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UListView*                                           SecondaryWeaponAbilityList;                              // 0x0910(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_CharacterStatusTooltipBase_C*                    WB_Status_ActionSpeed;                                   // 0x0918(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_CharacterStatusTooltipBase_C*                    WB_Status_Agility;                                       // 0x0920(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_CharacterStatusTooltipBase_C*                    WB_Status_ArmorPenetration;                              // 0x0928(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_CharacterStatusTooltipBase_C*                    WB_Status_BuffDurationMod;                               // 0x0930(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_CharacterStatusTooltipBase_C*                    WB_Status_DebuffDurationMod;                             // 0x0938(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_CharacterStatusTooltipBase_C*                    WB_Status_EquipSpeed;                                    // 0x0940(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_CharacterStatusTooltipBase_C*                    WB_Status_HeadshotReductionMod;                          // 0x0948(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_CharacterStatusTooltipBase_C*                    WB_Status_Health;                                        // 0x0950(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_CharacterStatusTooltipBase_C*                    WB_Status_ImpactPower;                                   // 0x0958(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_CharacterStatusTooltipBase_C*                    WB_Status_ImpactPower_Primary;                           // 0x0960(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_CharacterStatusTooltipBase_C*                    WB_Status_ImpactPower_Secondary;                         // 0x0968(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_CharacterStatusTooltipBase_C*                    WB_Status_InteractionSpeed_Magical;                      // 0x0970(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_CharacterStatusTooltipBase_C*                    WB_Status_InteractionSpeed_Regular;                      // 0x0978(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_CharacterStatusTooltipBase_C*                    WB_Status_Knowledge;                                     // 0x0980(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_CharacterStatusTooltipBase_C*                    WB_Status_MagicPenetration;                              // 0x0988(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_CharacterStatusTooltipBase_C*                    WB_Status_MagicPowerBonus;                               // 0x0990(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_CharacterStatusTooltipBase_C*                    WB_Status_MagicPowerBonus_Bonuses;                       // 0x0998(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_CharacterStatusTooltipBase_C*                    WB_Status_MagicPowerBonus_MagicPower;                    // 0x09A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_CharacterStatusTooltipBase_C*                    WB_Status_MagicResist;                                   // 0x09A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_CharacterStatusTooltipBase_C*                    WB_Status_MagicResist_Bonuses;                           // 0x09B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_CharacterStatusTooltipBase_C*                    WB_Status_MagicResist_ResistRating;                      // 0x09B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_CharacterStatusTooltipBase_C*                    WB_Status_MoveSpeed;                                     // 0x09C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_CharacterStatusTooltipBase_C*                    WB_Status_PhysicalDmgReduction;                          // 0x09C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_CharacterStatusTooltipBase_C*                    WB_Status_PhysicalDmgReduction_ArmorRating;              // 0x09D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_CharacterStatusTooltipBase_C*                    WB_Status_PhysicalDmgReduction_Bonuses;                  // 0x09D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_CharacterStatusTooltipBase_C*                    WB_Status_PhysicalPowerBonus;                            // 0x09E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_CharacterStatusTooltipBase_C*                    WB_Status_PhysicalPowerBonus_Bonuses;                    // 0x09E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_CharacterStatusTooltipBase_C*                    WB_Status_PhysicalPowerBonus_PhysicalPower;              // 0x09F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_CharacterStatusTooltipBase_C*                    WB_Status_PrimaryWeapon;                                 // 0x09F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_CharacterStatusTooltipBase_C*                    WB_Status_ProjectileReductionMod;                        // 0x0A00(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_CharacterStatusTooltipBase_C*                    WB_Status_Resourcefulness;                               // 0x0A08(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_CharacterStatusTooltipBase_C*                    WB_Status_SecondaryWeapon;                               // 0x0A10(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_CharacterStatusTooltipBase_C*                    WB_Status_SpellCastingSpeed;                             // 0x0A18(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_CharacterStatusTooltipBase_C*                    WB_Status_SpellMemory;                                   // 0x0A20(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_CharacterStatusTooltipBase_C*                    WB_Status_Strength;                                      // 0x0A28(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_CharacterStatusTooltipBase_C*                    WB_Status_UtilityEffectiveness;                          // 0x0A30(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_CharacterStatusTooltipBase_C*                    WB_Status_WeightLimit;                                   // 0x0A38(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_CharacterStatusTooltipBase_C*                    WB_Status_Will;                                          // 0x0A40(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_GameTooltip_C*                                   ToolTip;                                                 // 0x0A48(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetAttributeTextColor(double BaseValue, double CurrentValue, struct FSlateColor* SlateColor);
		void SetPercentAttribute(const struct FGameplayAttributeData& GameplayAttributeData, class UTextBlock* AttributeText);
		void SetBasePercentAttribute(double BaseValue, double CurrentValue, class UTextBlock* AttributeText);
		void SetIntegerAttribute(const struct FGameplayAttributeData& GameplayAttributeData, class UTextBlock* AttributeText);
		void OnAgility(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnStrength(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnMaxHealth(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnHealth(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnResourcefulness(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnWeight(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnWill(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnKnowledge(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnWeightLimit(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnSpellPayload(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnSpellCapacity(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnUtilityEffectiveness(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnActionSpeed(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnRegularInteractionSpeed(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnMagicalInteractionSpeed(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnItemEquipSpeed(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnArmorRating(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnMagicResistance(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnPhysicalPower(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnPhysicalDamageMod(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnPhysicalDamageModPhysicalPower(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnPhysicalDamageModBonus(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnMagicalPower(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnMagicalDamageModMagicalPower(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnMagicalDamageModBonus(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnPrimaryAbilityWidgetArray(TArray<class UItemTooltipStatWidgetData*> NewValue, TArray<class UItemTooltipStatWidgetData*> OldValue);
		void OnSecondaryAbilityWidgetArray(TArray<class UItemTooltipStatWidgetData*> NewValue, TArray<class UItemTooltipStatWidgetData*> OldValue);
		void OnSpellCastingSpeed(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnMagicalDamageMod(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnMoveSpeedWithModifier(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void SetBaseIntegerAttribute(double BaseValue, double CurrentValue, class UTextBlock* AttributeText);
		void OnArmorPenetration(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnMagicPenetration(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnImpactPower(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnPrimaryWeaponImpactPower(float NewValue, float OldValue);
		void OnSecondaryWeaponImpactPower(float NewValue, float OldValue);
		void OnPhysicalReduction(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnPhysicalReductionArmorRating(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnPhysicalReductionBonus(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnMagicalReduction(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnMagicalReductionMagicResistance(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnMagicalReductionBonus(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void SetSpellCapacityAttribute(double BaseValue, double CompareValue, class UTextBlock* AttributeText);
		void OnBuffDurationMod(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnDebuffDurationMod(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnProjectileReductionMod(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnHeadshotReductionMod(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void ExecuteUbergraph_WB_Inventory_CharacterStatusDetail(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
