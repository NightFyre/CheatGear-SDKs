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
	 * BlueprintGeneratedClass BPWeap_Copybeast.BPWeap_Copybeast_C
	 * Size -> 0x0024 (FullSize[0x09F0] - InheritedSize[0x09CC])
	 */
	class ABPWeap_Copybeast_C : public ABPWeap_BaseWeapon_C
	{
	public:
		unsigned char                                              UnknownData_BNCK[0x4];                                   // 0x09CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x09D0(0x0008) Transient, DuplicateTransient
		class UClass*                                              Projectile_ThrownWeapon;                                 // 0x09D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CachedLoadedAmmo;                                        // 0x09E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DetonationDelay;                                         // 0x09E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ProjectileDamageScale;                                   // 0x09E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      OverrideForcedDetonation;                                // 0x09EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Tediore_WeaponData(float* DamageRadius, class UClass** DamageTypeClass, int32_t* NumMirvProjectiles, float* FireRate, float* LoadedAmmo, int32_t* ThrowType);
		void DetonateActiveProjectiles();
		void HideWeapon();
		void ShowWeapon();
		void ThrowWeapon();
		void UserConstructionScript();
		void WeaponAttached();
		void Notify_ReloadStarted(bool bAutoReload);
		void ReceiveBeginPlay();
		void Weapon_NotifyPutDown(class AWeapon* EventWeapon);
		void DetonateProjectiles();
		void ExecuteUbergraph_BPWeap_Copybeast(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
