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
	 * BlueprintGeneratedClass ShieldMod_StopGap.ShieldMod_StopGap_C
	 * Size -> 0x0000 (FullSize[0x0120] - InheritedSize[0x0120])
	 */
	class UShieldMod_StopGap_C : public UShieldAugment_DamageModifier
	{
	public:
		void K2_UntriggerEffect(class AShield* Shield, const struct FGameResourcePoolReference& ResourcePool, struct FAugmentData* StackData);
		void K2_TriggerEffect(class AShield* Shield, const struct FGameResourcePoolReference& ResourcePool, struct FAugmentData* StackData);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
