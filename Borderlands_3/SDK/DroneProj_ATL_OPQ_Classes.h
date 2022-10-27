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
	 * BlueprintGeneratedClass DroneProj_ATL_OPQ.DroneProj_ATL_OPQ_C
	 * Size -> 0x0070 (FullSize[0x07A0] - InheritedSize[0x0730])
	 */
	class ADroneProj_ATL_OPQ_C : public AOakDroneProjectile
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0730(0x0008) Transient, DuplicateTransient
		class UWwiseAudioComponent*                                audio_drone_lp;                                          // 0x0738(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USocketComponent*                                    Muzzle;                                                  // 0x0740(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            Booster_FX;                                              // 0x0748(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                MyBody;                                                  // 0x0750(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         CachedWeaponFireWwiseEvent;                              // 0x0758(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class UClass*                                              DamageType;                                              // 0x0760(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class UClass*                                              DamageSource;                                            // 0x0768(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		struct FVector                                             TargetLocation;                                          // 0x0770(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BulletDamage;                                            // 0x077C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		float                                                      FireRate;                                                // 0x0780(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_UH07[0x4];                                   // 0x0784(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABPWeap_Tediore_BaseWeapon_C*                        Weapon;                                                  // 0x0788(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LoadedAmmo;                                              // 0x0790(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		float                                                      MaxAmmo;                                                 // 0x0794(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABPWeap_ATL_BaseWeapon_C*                            OPQWeap;                                                 // 0x0798(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void DistanceCHeck();
		void NoFriends();
		void StopFire();
		void StartFire();
		void FireWeapon();
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void BndEvt__DroneMovement_K2Node_ComponentBoundEvent_0_OakDroneProjectileFacingTargetChangedDelegate__DelegateSignature_DroneProj_TED_TenGallon(class AOakDroneProjectile* Drone);
		void PutDownNotify(class AWeapon* EventWeapon);
		void OnBeginExplode();
		void ExecuteUbergraph_DroneProj_ATL_OPQ(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
