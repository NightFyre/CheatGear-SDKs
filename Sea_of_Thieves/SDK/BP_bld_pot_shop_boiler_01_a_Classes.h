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
	 * BlueprintGeneratedClass BP_bld_pot_shop_boiler_01_a.BP_bld_pot_shop_boiler_01_a_C
	 * Size -> 0x0018 (FullSize[0x03E0] - InheritedSize[0x03C8])
	 */
	class ABP_bld_pot_shop_boiler_01_a_C : public AActor
	{
	public:
		class UParticleSystemComponent*                            vfx_magic_fire_pot;                                      // 0x03C8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UStaticMeshComponent*                                bld_pot_shop_boiler_01_a;                                // 0x03D0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x03D8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
