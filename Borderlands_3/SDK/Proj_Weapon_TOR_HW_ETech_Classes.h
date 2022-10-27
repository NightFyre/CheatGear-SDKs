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
	 * BlueprintGeneratedClass Proj_Weapon_TOR_HW_ETech.Proj_Weapon_TOR_HW_ETech_C
	 * Size -> 0x0036 (FullSize[0x07C0] - InheritedSize[0x078A])
	 */
	class AProj_Weapon_TOR_HW_ETech_C : public AProj_Weapon_BaseProjectile_C
	{
	public:
		unsigned char                                              UnknownData_6GHD[0x6];                                   // 0x078A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0790(0x0008) Transient, DuplicateTransient
		class USphereComponent*                                    TriggerCollision;                                        // 0x0798(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UOakTriggerComponent*                                OakTrigger;                                              // 0x07A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            TracerTrailFX;                                           // 0x07A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<class AActor*>                                      AttachedTargets;                                         // 0x07B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance

	public:
		void UserConstructionScript();
		void BndEvt__OakTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_Proj_Weapon_MAL_SG_Wisp(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched);
		void ReceiveDestroyed();
		void ReceiveBeginPlay();
		void RainDeath();
		void OnExplode();
		void ExecuteUbergraph_Proj_Weapon_TOR_HW_ETech(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
