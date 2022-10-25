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
	 * BlueprintGeneratedClass BPWeaponFireProjectile_Gunner_GrenadeLauncher.BPWeaponFireProjectile_Gunner_GrenadeLauncher_C
	 * Size -> 0x0011 (FullSize[0x0969] - InheritedSize[0x0958])
	 */
	class UBPWeaponFireProjectile_Gunner_GrenadeLauncher_C : public UWeaponFireProjectileComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0958(0x0008) Transient, DuplicateTransient
		class AOakWeapon_IronBearHardPoint*                        OwnerHardpoint;                                          // 0x0960(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bReadyForSingularityGrenade;                             // 0x0968(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		class UClass* GetShotLightProjectileData();
		void SetNewGrenadeType(bool bReadyForSingularityGrenade);
		class UClass* GetShotProjectileData();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BPWeaponFireProjectile_Gunner_GrenadeLauncher(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
