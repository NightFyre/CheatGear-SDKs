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
	 * BlueprintGeneratedClass BP_GM_Delivery_HOTSpring.BP_GM_Delivery_HOTSpring_C
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UBP_GM_Delivery_HOTSpring_C : public UGrenadeBehavior_DeliveryBlueprint
	{
	public:
		void K2_GrenadeBeginPlay(class AGrenade* Grenade, class AGrenadeMod* GrenadeMod);
		void K2_GrenadeExplode(class AGrenade* Grenade, class AGrenadeMod* GrenadeMod);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
