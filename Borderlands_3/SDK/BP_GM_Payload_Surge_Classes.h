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
	 * BlueprintGeneratedClass BP_GM_Payload_Surge.BP_GM_Payload_Surge_C
	 * Size -> 0x0004 (FullSize[0x007C] - InheritedSize[0x0078])
	 */
	class UBP_GM_Payload_Surge_C : public UGrenadeBehavior_PayloadSpring
	{
	public:
		float                                                      SpeedIncrease;                                           // 0x0078(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void K2_GrenadeExplode(class AGrenade* Grenade, class AGrenadeMod* GrenadeMod, struct FPayloadInstanceData* InstanceData);
		void K2_GrenadeInitialized(class AGrenade* Grenade, class AGrenadeMod* GrenadeMod, struct FPayloadInstanceData* InstanceData);
		void K2_GrenadeBounce(class AGrenade* Grenade, class AGrenadeMod* GrenadeMod, struct FPayloadInstanceData* InstanceData);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
