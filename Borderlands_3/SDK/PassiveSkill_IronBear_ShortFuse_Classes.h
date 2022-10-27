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
	 * BlueprintGeneratedClass PassiveSkill_IronBear_ShortFuse.PassiveSkill_IronBear_ShortFuse_C
	 * Size -> 0x0039 (FullSize[0x01E9] - InheritedSize[0x01B0])
	 */
	class UPassiveSkill_IronBear_ShortFuse_C : public UOakPassiveAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01B0(0x0008) Transient, DuplicateTransient
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_PassiveSkill_Gunner_LongFuse; // 0x01B8(0x0028)
		struct FRandomStream                                       RandomStream_ShortFuse;                                  // 0x01E0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		bool                                                       bCanBeTriggered;                                         // 0x01E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void NewFunction_1(float Damage, class UDamageSource* DamageSource, const struct FVector& HitLoc);
		void OnActivated();
		void CausedDamage_ShortFuse(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
		void ExecuteUbergraph_PassiveSkill_IronBear_ShortFuse(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
