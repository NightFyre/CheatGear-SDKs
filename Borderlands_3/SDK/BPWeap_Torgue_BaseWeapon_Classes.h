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
	 * BlueprintGeneratedClass BPWeap_Torgue_BaseWeapon.BPWeap_Torgue_BaseWeapon_C
	 * Size -> 0x0025 (FullSize[0x09F1] - InheritedSize[0x09CC])
	 */
	class ABPWeap_Torgue_BaseWeapon_C : public ABPWeap_BaseWeapon_C
	{
	public:
		unsigned char                                              UnknownData_5CQS[0x4];                                   // 0x09CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x09D0(0x0008) Transient, DuplicateTransient
		float                                                      DetonationDelay;                                         // 0x09D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DetonationTime;                                          // 0x09DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ProjectileType;                                          // 0x09E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TOR_ProjectilePerShot;                                   // 0x09E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ProjectileDamageScale;                                   // 0x09E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      OverrideForcedDetonation;                                // 0x09EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              StickyDetonationMode;                                    // 0x09F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void DetonateActiveProjectiles();
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ModeSwitched();
		void Notify_ReloadEnded(bool bCompleted);
		void DetonateProjectiles();
		void Weapon_NotifyPutDown(class AWeapon* EventWeapon);
		void ExecuteUbergraph_BPWeap_Torgue_BaseWeapon(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
