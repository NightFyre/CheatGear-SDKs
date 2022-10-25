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
	 * BlueprintGeneratedClass BP_GM_Payload_Piss.BP_GM_Payload_Piss_C
	 * Size -> 0x00B8 (FullSize[0x0100] - InheritedSize[0x0048])
	 */
	class UBP_GM_Payload_Piss_C : public UGrenadeBehavior_PayloadBlueprint
	{
	public:
		struct FEnvQueryParams                                     Query;                                                   // 0x0048(0x00B8) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference

	public:
		void K2_GrenadeExplode(class AGrenade* Grenade, class AGrenadeMod* GrenadeMod, struct FPayloadInstanceData* InstanceData);
		void K2_GrenadeDamageDealt(class AGrenade* Grenade, class AGrenadeMod* GrenadeMod, struct FPayloadInstanceData* InstanceData, class AOakCharacter* Character, const struct FDamageDataEventDetails& DamageEvent);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
