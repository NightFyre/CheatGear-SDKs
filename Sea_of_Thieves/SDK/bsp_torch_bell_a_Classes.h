#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * BlueprintGeneratedClass bsp_torch_bell_a.bsp_torch_bell_a_C
	 * Size -> 0x0010 (FullSize[0x03E8] - InheritedSize[0x03D8])
	 */
	class Absp_torch_bell_a_C : public AStaticMeshActor
	{
	public:
		class UPointLightComponent*                                PointLight;                                              // 0x03D8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UParticleSystemComponent*                            ParticleSystem;                                          // 0x03E0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
