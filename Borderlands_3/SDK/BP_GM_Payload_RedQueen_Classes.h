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
	 * BlueprintGeneratedClass BP_GM_Payload_RedQueen.BP_GM_Payload_RedQueen_C
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UBP_GM_Payload_RedQueen_C : public UGrenadeBehavior_PayloadBlueprint
	{
	public:
		void K2_GrenadeLastBounce(class AGrenade* Grenade, class AGrenadeMod* GrenadeMod, struct FPayloadInstanceData* InstanceData);
		void K2_GrenadeExplode(class AGrenade* Grenade, class AGrenadeMod* GrenadeMod, struct FPayloadInstanceData* InstanceData);
		void K2_GrenadeInitialized(class AGrenade* Grenade, class AGrenadeMod* GrenadeMod, struct FPayloadInstanceData* InstanceData);
		void K2_UpdateChildGeneration(const struct FGrenadeChildGenerationData& InGenerationData, struct FGrenadeChildGenerationData* GenerationData);
		void K2_NativeDelayCallback(class AGrenade* Grenade, class AGrenadeMod* GrenadeMod, struct FPayloadInstanceData* InstanceData, const class FName& DelayName);
		void K2_GrenadeBeginPlay(class AGrenade* Grenade, class AGrenadeMod* GrenadeMod, struct FPayloadInstanceData* InstanceData);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
