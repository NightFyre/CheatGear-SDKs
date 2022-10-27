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
	 * BlueprintGeneratedClass A_PetSkag_Vortex2.A_PetSkag_Vortex2_C
	 * Size -> 0x0010 (FullSize[0x0228] - InheritedSize[0x0218])
	 */
	class UA_PetSkag_Vortex2_C : public UOakAction_Anim
	{
	public:
		class UDamageCauserComponent*                              MyDamageCausingComponent;                                // 0x0218(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            VortexFX;                                                // 0x0220(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
