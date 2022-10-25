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
	 * BlueprintGeneratedClass ShieldAug_Rectifier.ShieldAug_Rectifier_C
	 * Size -> 0x00B8 (FullSize[0x01C8] - InheritedSize[0x0110])
	 */
	class UShieldAug_Rectifier_C : public UShieldAugment_Triggerable
	{
	public:
		struct FEnvQueryParams                                     QueryParameter;                                          // 0x0110(0x00B8) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference

	public:
		void K2_NativeDelayCallback(class AShield* Shield, struct FAugmentData* StackData, const class FName& DelayName);
		void K2_UntriggerEffect(class AShield* Shield, const struct FGameResourcePoolReference& ResourcePool, struct FAugmentData* StackData);
		void K2_TriggerEffect(class AShield* Shield, const struct FGameResourcePoolReference& ResourcePool, struct FAugmentData* StackData);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
