#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
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
	 * BlueprintGeneratedClass BP_OakAttributeComponent.BP_OakAttributeComponent_C
	 * Size -> 0x0440 (FullSize[0x05C8] - InheritedSize[0x0188])
	 */
	class UBP_OakAttributeComponent_C : public UGbxAttributesComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0188(0x0008) Transient, DuplicateTransient
		struct FStruct_DamageTypes                                 TypeInstigatorMultipliers;                               // 0x0190(0x0048) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FStruct_DamageTypes                                 TypeReceiverMultipliers;                                 // 0x01D8(0x0048) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FStruct_DamageSources                               SourceInstigatorMultipliers;                             // 0x0220(0x00E4) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FStruct_DamageSources                               SourceReceiverMultipliers;                               // 0x0304(0x00E4) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FStruct_DamageTypes                                 EffectInstigatorMultipliers;                             // 0x03E8(0x0048) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FStruct_DamageSources                               SourceInstigatorHealFFModifiers_Flesh;                   // 0x0430(0x00E4) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FStruct_DamageTypes                                 EffectActorMultipliers;                                  // 0x0514(0x0048) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		Enum_ElementalAffinity                                     Affinity_Normal;                                         // 0x055C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		Enum_ElementalAffinity                                     Affinity_Fire;                                           // 0x055D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		Enum_ElementalAffinity                                     Affinity_Shock;                                          // 0x055E(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		Enum_ElementalAffinity                                     Affinity_Corrosive;                                      // 0x055F(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		Enum_ElementalAffinity                                     Affinity_Radiation;                                      // 0x0560(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		Enum_ElementalAffinity                                     Affinity_Cryo;                                           // 0x0561(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_1G8H[0x6];                                   // 0x0562(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGbxAttributeModifierHandle>                 AffinityModifiers_Normal;                                // 0x0568(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<struct FGbxAttributeModifierHandle>                 AffinityModifiers_Fire;                                  // 0x0578(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<struct FGbxAttributeModifierHandle>                 AffinityModifiers_Shock;                                 // 0x0588(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<struct FGbxAttributeModifierHandle>                 AffinityModifiers_Corrosive;                             // 0x0598(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<struct FGbxAttributeModifierHandle>                 AffinityModifiers_Radiation;                             // 0x05A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<struct FGbxAttributeModifierHandle>                 AffinityModifiers_Cryo;                                  // 0x05B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance

	public:
		void ClearElementalAffinity();
		void InitElementAffinity();
		void SetElementAffinity(EOakElementalType Element, Enum_ElementalAffinity Affinity);
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_OakAttributeComponent(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
