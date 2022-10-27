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
	 * BlueprintGeneratedClass BPWeaponFireProjectile_TheNothing.BPWeaponFireProjectile_TheNothing_C
	 * Size -> 0x0038 (FullSize[0x0990] - InheritedSize[0x0958])
	 */
	class UBPWeaponFireProjectile_TheNothing_C : public UWeaponFireProjectileComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0958(0x0008) Transient, DuplicateTransient
		TArray<class UClass*>                                      Projectiles;                                             // 0x0960(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		struct FVector                                             Direction;                                               // 0x0970(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             StartLocation;                                           // 0x097C(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    BurstNumOfExplosions;                                    // 0x0988(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SpreadScalar;                                            // 0x098C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveBeginPlay();
		void NotifyUsed_Event();
		void FireProjectiles(class UClass* Data_Blueprint, int32_t SampleCount);
		void ExecuteUbergraph_BPWeaponFireProjectile_TheNothing(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
