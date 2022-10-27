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
	 * BlueprintGeneratedClass BP_ShieldAug_Roid.BP_ShieldAug_Roid_C
	 * Size -> 0x0000 (FullSize[0x0198] - InheritedSize[0x0198])
	 */
	class UBP_ShieldAug_Roid_C : public UShieldAugment_Attribute
	{
	public:
		void K2_OnShieldDepleted(class AShield* Shield, const struct FGameResourcePoolReference& ResourcePool, struct FAugmentData* StackData);
		void K2_OnShieldFilled(class AShield* Shield, const struct FGameResourcePoolReference& ResourcePool, struct FAugmentData* StackData);
		void K2_OnShieldUnequipped(class AShield* Shield, class AOakCharacter* Equipper, struct FAugmentData* StackData);
		void K2_OnShieldEquipped(class AShield* Shield, class AOakCharacter* Equipper, struct FAugmentData* StackData);
		void K2_OnCausedDamage(class AShield* Shield, struct FAugmentData* StackData, class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
