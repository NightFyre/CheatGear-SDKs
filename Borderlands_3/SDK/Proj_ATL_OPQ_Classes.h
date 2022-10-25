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
	 * BlueprintGeneratedClass Proj_ATL_OPQ.Proj_ATL_OPQ_C
	 * Size -> 0x0017 (FullSize[0x07A1] - InheritedSize[0x078A])
	 */
	class AProj_ATL_OPQ_C : public AProj_Weapon_BaseProjectile_C
	{
	public:
		unsigned char                                              UnknownData_LGU9[0x6];                                   // 0x078A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0790(0x0008) Transient, DuplicateTransient
		class UParticleSystemComponent*                            Trail;                                                   // 0x0798(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       NoImpact;                                                // 0x07A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void GbxAsyncRequest_Spawned_9C35FAAF46B286381928AF9A06BE659F(class AActor* Actor, int32_t InstanceIndex);
		void ReceiveBeginPlay();
		void OnHitWorld(const struct FHitResult& Hit);
		void OnExplode();
		void ExecuteUbergraph_Proj_ATL_OPQ(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
