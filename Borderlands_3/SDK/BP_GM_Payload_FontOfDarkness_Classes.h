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
	 * BlueprintGeneratedClass BP_GM_Payload_FontOfDarkness.BP_GM_Payload_FontOfDarkness_C
	 * Size -> 0x00BC (FullSize[0x0104] - InheritedSize[0x0048])
	 */
	class UBP_GM_Payload_FontOfDarkness_C : public UGrenadeBehavior_PayloadBlueprint
	{
	public:
		struct FEnvQueryParams                                     HomingQuery;                                             // 0x0048(0x00B8) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		int32_t                                                    Flags;                                                   // 0x0100(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void K2_GrenadeBeginPlay(class AGrenade* Grenade, class AGrenadeMod* GrenadeMod, struct FPayloadInstanceData* InstanceData);
		void K2_NativeDelayCallback(class AGrenade* Grenade, class AGrenadeMod* GrenadeMod, struct FPayloadInstanceData* InstanceData, const class FName& DelayName);
		void K2_GrenadeDamageDealt(class AGrenade* Grenade, class AGrenadeMod* GrenadeMod, struct FPayloadInstanceData* InstanceData, class AOakCharacter* Character, const struct FDamageDataEventDetails& DamageEvent);
		void K2_GrenadeExplode(class AGrenade* Grenade, class AGrenadeMod* GrenadeMod, struct FPayloadInstanceData* InstanceData);
		void K2_GrenadeInitialized(class AGrenade* Grenade, class AGrenadeMod* GrenadeMod, struct FPayloadInstanceData* InstanceData);
		void K2_UpdateChildGeneration(const struct FGrenadeChildGenerationData& InGenerationData, struct FGrenadeChildGenerationData* GenerationData);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
