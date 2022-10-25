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
	 * BlueprintGeneratedClass BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C
	 * Size -> 0x0014 (FullSize[0x09E0] - InheritedSize[0x09CC])
	 */
	class ABPWeap_COV_BaseWeapon_C : public ABPWeap_BaseWeapon_C
	{
	public:
		unsigned char                                              UnknownData_UOQ7[0x4];                                   // 0x09CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x09D0(0x0008) Transient, DuplicateTransient
		class FName                                                Bone_WaterCool;                                          // 0x09D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void DisableWaterBottle();
		void EnableWaterBottle();
		void GetRepairStyle(int32_t* Param);
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void WeaponOnFire();
		void WeaponPutOut();
		void WeaponSmokeStop();
		void FirstPersonCreated();
		void EngineStart();
		void Notify_ReloadEnded(bool bCompleted);
		void StarterSparks();
		void WeaponStartWatering();
		void ExecuteUbergraph_BPWeap_COV_BaseWeapon(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
