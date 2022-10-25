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
	 * BlueprintGeneratedClass ShieldAug_Ember.ShieldAug_Ember_C
	 * Size -> 0x0000 (FullSize[0x02B0] - InheritedSize[0x02B0])
	 */
	class UShieldAug_Ember_C : public UShieldAugment_Damage
	{
	public:
		void K2_NativeDelayCallback(class AShield* Shield, struct FAugmentData* StackData, const class FName& DelayName);
		void K2_OnShieldBeginPlay(class AShield* Shield, struct FAugmentData* StackData);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
