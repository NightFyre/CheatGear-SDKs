﻿#pragma once

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
	 * BlueprintGeneratedClass Passive_Gunner_ExplosivePuncutation.Passive_Gunner_ExplosivePuncutation_C
	 * Size -> 0x0030 (FullSize[0x01E0] - InheritedSize[0x01B0])
	 */
	class UPassive_Gunner_ExplosivePuncutation_C : public UOakPassiveAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01B0(0x0008) Transient, DuplicateTransient
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Passive_Gunner_ExplosivePuncutation; // 0x01B8(0x0028)

	public:
		void OnActivated();
		void CausedDamage_ExplosivePunctuation(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
		void ExecuteUbergraph_Passive_Gunner_ExplosivePuncutation(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
