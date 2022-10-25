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
	 * BlueprintGeneratedClass OakAbility_Operative_CM_DLC1.OakAbility_Operative_CM_DLC1_C
	 * Size -> 0x0050 (FullSize[0x0148] - InheritedSize[0x00F8])
	 */
	class UOakAbility_Operative_CM_DLC1_C : public UOakAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00F8(0x0008) Transient, DuplicateTransient
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_OakAbility_Operative_ClassMod_Unique_05; // 0x0100(0x0028)
		struct FDataTableValueHandle                               KillSkillChance;                                         // 0x0128(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		class UBPEventHub_Operative_C*                             OperativeEventHub;                                       // 0x0140(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnActivated();
		void OperativeCMDLC1_OnCausedAnyDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
		void ExecuteUbergraph_OakAbility_Operative_CM_DLC1(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
