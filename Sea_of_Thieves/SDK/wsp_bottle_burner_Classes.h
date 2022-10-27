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
	 * BlueprintGeneratedClass wsp_bottle_burner.wsp_bottle_burner_C
	 * Size -> 0x0028 (FullSize[0x03F0] - InheritedSize[0x03C8])
	 */
	class Awsp_bottle_burner_C : public AActor
	{
	public:
		class UPointLightComponent*                                PointLight;                                              // 0x03C8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UParticleSystemComponent*                            ParticleSystem;                                          // 0x03D0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UStaticMeshComponent*                                StaticMeshComponent01;                                   // 0x03D8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UStaticMeshComponent*                                StaticMeshComponent0;                                    // 0x03E0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class USceneComponent*                                     SharedRoot;                                              // 0x03E8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
