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
	 * BlueprintGeneratedClass LightProjectile_LovableRogue.LightProjectile_LovableRogue_C
	 * Size -> 0x017C (FullSize[0x04BC] - InheritedSize[0x0340])
	 */
	class ULightProjectile_LovableRogue_C : public ULightProjectile_TOR_AR_GyroJet_Sticky_C
	{
	public:
		struct FEnvQueryParams                                     EnvQuery;                                                // 0x0340(0x00B8) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		struct FEnvQueryParams                                     EnvQuery2;                                               // 0x03F8(0x00B8) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class UClass*                                              RicochetProj;                                            // 0x04B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxNumChildProj;                                         // 0x04B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnExplode(class ULightProjectile* Projectile);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
