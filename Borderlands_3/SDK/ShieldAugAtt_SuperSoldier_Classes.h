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
	 * BlueprintGeneratedClass ShieldAugAtt_SuperSoldier.ShieldAugAtt_SuperSoldier_C
	 * Size -> 0x0000 (FullSize[0x0198] - InheritedSize[0x0198])
	 */
	class UShieldAugAtt_SuperSoldier_C : public UShieldAugment_Attribute
	{
	public:
		void K2_OnShieldNotFilled(class AShield* Shield, const struct FGameResourcePoolReference& ResourcePool, struct FAugmentData* StackData);
		void K2_OnShieldFilled(class AShield* Shield, const struct FGameResourcePoolReference& ResourcePool, struct FAugmentData* StackData);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
