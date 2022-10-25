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
	 * BlueprintGeneratedClass BPWeaponFireProjectile_Salamander.BPWeaponFireProjectile_Salamander_C
	 * Size -> 0x0001 (FullSize[0x0959] - InheritedSize[0x0958])
	 */
	class UBPWeaponFireProjectile_Salamander_C : public UWeaponFireProjectileComponent
	{
	public:
		bool                                                       bReadyForSplat;                                          // 0x0958(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void SetReadyForSplat(bool bReadyForSplat);
		class UClass* GetShotLightProjectileData();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
