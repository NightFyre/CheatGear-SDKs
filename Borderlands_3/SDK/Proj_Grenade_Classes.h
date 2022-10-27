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
	 * BlueprintGeneratedClass Proj_Grenade.Proj_Grenade_C
	 * Size -> 0x0009 (FullSize[0x0961] - InheritedSize[0x0958])
	 */
	class AProj_Grenade_C : public AGrenade
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0958(0x0008) Transient, DuplicateTransient
		bool                                                       AIDisarmTorgue;                                          // 0x0960(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		bool AIProjectile_CanBeStolen();
		void AIProjectileDetonate();
		void AIProjectileArm();
		void AIProjectileDisarm();
		void TriggerGrenadeDodge();
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void OnBounce(const struct FHitResult& Hit, const struct FVector& ImpactVelocity);
		void AIProjectile_Arm();
		void AIProjectile_Detonate();
		void AIProjectile_Disarm();
		void ExecuteUbergraph_Proj_Grenade(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
