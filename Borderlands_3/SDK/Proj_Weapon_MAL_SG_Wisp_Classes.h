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
	 * BlueprintGeneratedClass Proj_Weapon_MAL_SG_Wisp.Proj_Weapon_MAL_SG_Wisp_C
	 * Size -> 0x002E (FullSize[0x07B8] - InheritedSize[0x078A])
	 */
	class AProj_Weapon_MAL_SG_Wisp_C : public AProj_Weapon_BaseProjectile_C
	{
	public:
		unsigned char                                              UnknownData_YD8I[0x6];                                   // 0x078A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0790(0x0008) Transient, DuplicateTransient
		class USphereComponent*                                    TriggerCollision;                                        // 0x0798(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            TracerTrailFX;                                           // 0x07A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<class AActor*>                                      AttachedTargets;                                         // 0x07A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance

	public:
		void UserConstructionScript();
		void ReceiveDestroyed();
		void BndEvt__TriggerCollision_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Proj_Weapon_MAL_SG_Wisp(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void BndEvt__TriggerCollision_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Proj_Weapon_MAL_SG_Wisp(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void ExecuteUbergraph_Proj_Weapon_MAL_SG_Wisp(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
