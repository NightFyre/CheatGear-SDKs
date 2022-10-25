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
	 * BlueprintGeneratedClass BP_GM_Delivery_HunterSeeker.BP_GM_Delivery_HunterSeeker_C
	 * Size -> 0x00B8 (FullSize[0x0290] - InheritedSize[0x01D8])
	 */
	class UBP_GM_Delivery_HunterSeeker_C : public UGrenadeBehavior_DeliveryHoming
	{
	public:
		struct FEnvQueryParams                                     ReSearch;                                                // 0x01D8(0x00B8) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference

	public:
		void K2_GrenadeImpact(class AGrenade* Grenade, class AGrenadeMod* GrenadeMod, const struct FHitResult& HitResult);
		void K2_GrenadeBeginPlay(class AGrenade* Grenade, class AGrenadeMod* GrenadeMod);
		void K2_NativeDelayCallback(class AGrenade* Grenade, class AGrenadeMod* GrenadeMod, const class FName& DelayName);
		void K2_GrenadeInitialized(class AGrenade* Grenade, class AGrenadeMod* GrenadeMod);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
