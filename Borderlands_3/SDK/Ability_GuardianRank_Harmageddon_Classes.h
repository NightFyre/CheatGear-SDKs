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
	 * BlueprintGeneratedClass Ability_GuardianRank_Harmageddon.Ability_GuardianRank_Harmageddon_C
	 * Size -> 0x0098 (FullSize[0x0248] - InheritedSize[0x01B0])
	 */
	class UAbility_GuardianRank_Harmageddon_C : public UOakPassiveAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01B0(0x0008) Transient, DuplicateTransient
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_GuardianRank_Harmageddon; // 0x01B8(0x0028)
		class AActor*                                              Target;                                                  // 0x01E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EOakElementalType                                          SE_Element;                                              // 0x01E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_67QA[0x7];                                   // 0x01E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class UStatusEffectData*, class UStatusEffectData*>   SE_Lookup;                                               // 0x01F0(0x0050) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class UStatusEffectData*                                   SE_Type;                                                 // 0x0240(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnActivated();
		void ApplyDebuffOnCausedElementalEffect(class AActor* Target, const struct FStatusEffectSpec& Spec);
		void ExecuteUbergraph_Ability_GuardianRank_Harmageddon(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
