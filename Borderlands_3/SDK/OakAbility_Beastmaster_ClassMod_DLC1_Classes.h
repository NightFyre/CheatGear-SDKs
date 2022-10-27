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
	 * BlueprintGeneratedClass OakAbility_Beastmaster_ClassMod_DLC1.OakAbility_Beastmaster_ClassMod_DLC1_C
	 * Size -> 0x0030 (FullSize[0x0128] - InheritedSize[0x00F8])
	 */
	class UOakAbility_Beastmaster_ClassMod_DLC1_C : public UOakAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00F8(0x0008) Transient, DuplicateTransient
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_PassiveAbility_Beastmaster_Unique_01; // 0x0100(0x0028)

	public:
		void OnActivated();
		void Beastmaster_DLC1_Class_Mod_On_Caused_Any_Damage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
		void ExecuteUbergraph_OakAbility_Beastmaster_ClassMod_DLC1(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
