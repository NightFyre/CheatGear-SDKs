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
	 * BlueprintGeneratedClass BP_GM_Delivery_Slider.BP_GM_Delivery_Slider_C
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UBP_GM_Delivery_Slider_C : public UGrenadeBehavior_DeliveryBlueprint
	{
	public:
		void K2_GrenadeInitialized(class AGrenade* Grenade, class AGrenadeMod* GrenadeMod);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
