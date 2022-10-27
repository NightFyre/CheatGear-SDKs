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
	 * BlueprintGeneratedClass BP_GM_Payload_Stormfront.BP_GM_Payload_Stormfront_C
	 * Size -> 0x0000 (FullSize[0x00C8] - InheritedSize[0x00C8])
	 */
	class UBP_GM_Payload_Stormfront_C : public UGrenadeBehavior_PayloadLingering
	{
	public:
		void K2_UpdateChildGeneration(const struct FGrenadeChildGenerationData& InGenerationData, struct FGrenadeChildGenerationData* GenerationData);
		void K2_GrenadeExplode(class AGrenade* Grenade, class AGrenadeMod* GrenadeMod, struct FPayloadInstanceData* InstanceData);
		void K2_GrenadeInitialized(class AGrenade* Grenade, class AGrenadeMod* GrenadeMod, struct FPayloadInstanceData* InstanceData);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
