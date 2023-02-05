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
	 * WidgetBlueprintGeneratedClass WB_Inventory_CharacterStatus.WB_Inventory_CharacterStatus_C
	 * Size -> 0x0050 (FullSize[0x04F0] - InheritedSize[0x04A0])
	 */
	class UWB_Inventory_CharacterStatus_C : public UCharacterStatusWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04A0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWB_CharacterStatusTooltipBase_C*                    WB_Status_Agility;                                       // 0x04A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_CharacterStatusTooltipBase_C*                    WB_Status_Health;                                        // 0x04B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_CharacterStatusTooltipBase_C*                    WB_Status_Knowledge;                                     // 0x04B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_CharacterStatusTooltipBase_C*                    WB_Status_Resourcefulness;                               // 0x04C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_CharacterStatusTooltipBase_C*                    WB_Status_SpellMemory;                                   // 0x04C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_CharacterStatusTooltipBase_C*                    WB_Status_Strength;                                      // 0x04D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_CharacterStatusTooltipBase_C*                    WB_Status_UtilityEffectiveness;                          // 0x04D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_CharacterStatusTooltipBase_C*                    WB_Status_WeightLimit;                                   // 0x04E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_CharacterStatusTooltipBase_C*                    WB_Status_Will;                                          // 0x04E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void GetAttributeTextColor(const struct FGameplayAttributeData& GameplayAttributeData, struct FSlateColor* SlateColor);
		void SetIntegerAttribute(const struct FGameplayAttributeData& GameplayAttributeData, class UTextBlock* AttributeText);
		void OnStrength(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnAgility(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnKnowledge(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnWill(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnHealth(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnMaxHealth(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnResourcefulness(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnWeight(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnWeightLimit(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnSpellPayload(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnSpellCapacity(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void OnUtilityEffectiveness(const struct FGameplayAttributeData& NewValue, const struct FGameplayAttributeData& OldValue);
		void SetSpellCapacityAttribute(double BaseValue, double CompareValue, class UTextBlock* AttributeText);
		void ExecuteUbergraph_WB_Inventory_CharacterStatus(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
