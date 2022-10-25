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
	 * BlueprintGeneratedClass TEDProjectile_MIRV_Base.TEDProjectile_MIRV_Base_C
	 * Size -> 0x0018 (FullSize[0x0850] - InheritedSize[0x0838])
	 */
	class ATEDProjectile_MIRV_Base_C : public ATedioreProjectile
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0838(0x0008) Transient, DuplicateTransient
		class UParticleSystemComponent*                            ParticleSystem;                                          // 0x0840(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UClass*                                              CurrentBehavior;                                         // 0x0848(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool AIProjectile_CanBeStolen();
		void FuelOut();
		void UserConstructionScript();
		void OnBehaviorInitialized(class UClass* BehaviorClass);
		void ReceiveBeginPlay();
		void ExecuteUbergraph_TEDProjectile_MIRV_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
