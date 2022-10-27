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
	 * BlueprintGeneratedClass ShieldAug_Breakup.ShieldAug_Breakup_C
	 * Size -> 0x0000 (FullSize[0x0108] - InheritedSize[0x0108])
	 */
	class UShieldAug_Breakup_C : public UShieldAugment
	{
	public:
		void K2_OnReplicatedEffectTriggered(class AShield* Shield, struct FAugmentData* StackData, class UObject* AdditionalContext);
		void K2_OnShieldUnequipped(class AShield* Shield, class AOakCharacter* Equipper, struct FAugmentData* StackData);
		void K2_OnShieldDepleted(class AShield* Shield, const struct FGameResourcePoolReference& ResourcePool, struct FAugmentData* StackData);
		void K2_OnShieldEquipped(class AShield* Shield, class AOakCharacter* Equipper, struct FAugmentData* StackData);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
