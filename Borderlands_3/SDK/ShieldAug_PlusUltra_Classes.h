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
	 * BlueprintGeneratedClass ShieldAug_PlusUltra.ShieldAug_PlusUltra_C
	 * Size -> 0x0000 (FullSize[0x01A0] - InheritedSize[0x01A0])
	 */
	class UShieldAug_PlusUltra_C : public UShieldAugment_Absorb
	{
	public:
		void K2_OnShieldAbsorbedDamage(class AShield* Shield, struct FAugmentData* StackData, class UDamageSource* DamageSource, class UGbxDamageType* DamageType);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
