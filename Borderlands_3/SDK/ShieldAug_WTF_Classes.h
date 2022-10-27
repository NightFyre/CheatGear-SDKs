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
	 * BlueprintGeneratedClass ShieldAug_WTF.ShieldAug_WTF_C
	 * Size -> 0x0000 (FullSize[0x0110] - InheritedSize[0x0110])
	 */
	class UShieldAug_WTF_C : public UShieldAugment_Triggerable
	{
	public:
		void K2_TriggerEffect(class AShield* Shield, const struct FGameResourcePoolReference& ResourcePool, struct FAugmentData* StackData);
		void K2_UntriggerEffect(class AShield* Shield, const struct FGameResourcePoolReference& ResourcePool, struct FAugmentData* StackData);
		void K2_OnDamageTaken(class AShield* Shield, struct FAugmentData* StackData, class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
