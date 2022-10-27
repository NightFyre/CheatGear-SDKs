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
	 * BlueprintGeneratedClass ShieldAug_ReCharger.ShieldAug_ReCharger_C
	 * Size -> 0x0000 (FullSize[0x0108] - InheritedSize[0x0108])
	 */
	class UShieldAug_ReCharger_C : public UShieldAugment
	{
	public:
		void K2_OnBarrierEnd(class AActor* BarrierActor, class AShield* Shield, struct FAugmentData* StackData);
		void RestoreShield(class AOakCharacter* Character);
		void K2_OnShieldUnequipped(class AShield* Shield, class AOakCharacter* Equipper, struct FAugmentData* StackData);
		void K2_NativeDelayCallback(class AShield* Shield, struct FAugmentData* StackData, const class FName& DelayName);
		void K2_OnShieldDepleted(class AShield* Shield, const struct FGameResourcePoolReference& ResourcePool, struct FAugmentData* StackData);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
