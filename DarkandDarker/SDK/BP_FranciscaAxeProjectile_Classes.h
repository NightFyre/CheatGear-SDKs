#pragma once

/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
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
	 * BlueprintGeneratedClass BP_FranciscaAxeProjectile.BP_FranciscaAxeProjectile_C
	 * Size -> 0x0010 (FullSize[0x05E0] - InheritedSize[0x05D0])
	 */
	class ABP_FranciscaAxeProjectile_C : public ABP_ProjectileToSpawnItemHolder_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x05D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class URotatingMovementComponent*                          RotatingMovement;                                        // 0x05D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		void ProjectileHit(const struct FHitResult& Hit, bool bIsAttached, const struct FTransform& ActorPrevTickTransform);
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_FranciscaAxeProjectile(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
