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
	 * BlueprintGeneratedClass HitReactionLayer_HitByVehicle.HitReactionLayer_HitByVehicle_C
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UHitReactionLayer_HitByVehicle_C : public UHitReactionLayer_Blueprint
	{
	public:
		class UHitReactionTag* EvaluateTag(class UDamageComponent* Receiver, class UDamageCauserComponent* Causer, float DamageAmount, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class UHitRegionData* HitRegion, float Force, class UHitReactionTag* PreviousTag);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
