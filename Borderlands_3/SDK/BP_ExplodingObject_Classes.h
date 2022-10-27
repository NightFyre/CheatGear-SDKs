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
	 * BlueprintGeneratedClass BP_ExplodingObject.BP_ExplodingObject_C
	 * Size -> 0x0108 (FullSize[0x0658] - InheritedSize[0x0550])
	 */
	class ABP_ExplodingObject_C : public AInteractiveObject
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0550(0x0008) Transient, DuplicateTransient
		class USocketComponent*                                    Socket_Loot;                                             // 0x0558(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UGbxActionComponent*                                 GbxAction;                                               // 0x0560(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USocketComponent*                                    Socket_Damage;                                           // 0x0568(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UOakDamageComponent*                                 OakDamage;                                               // 0x0570(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URigidBodyComponent*                                 SM_ExplodingObject;                                      // 0x0578(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAIPerceptionStimuliSourceComponent*                 AIPerceptionStimuliSource;                               // 0x0580(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UTargetableComponent*                                Targetable;                                              // 0x0588(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URegionBalanceStateComponent*                        RegionBalanceState;                                      // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UGbxNavMeshPainterComponent*                         GbxNavMeshPainter;                                       // 0x0598(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       NavPaintCollision;                                       // 0x05A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            FX_PostExplosion;                                        // 0x05A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            FX_Fuse;                                                 // 0x05B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       PhysicsSim;                                              // 0x05B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		bool                                                       PhysicsDetonation;                                       // 0x05B9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_V4QN[0x2];                                   // 0x05BA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PhysicsDetonation_ImpulseToStartFuse;                    // 0x05BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             Exploded;                                                // 0x05C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		float                                                      PhysicsDetonation_ImpulseToExplode;                      // 0x05D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_QORJ[0x4];                                   // 0x05D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ACharacter*                                          Attacker;                                                // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FWwisePlaybackInstance                              FuseAudioInstance;                                       // 0x05E0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    DamageTypes;                                             // 0x05F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		Enum_ExplodingObjectDamage                                 DamageType;                                              // 0x05FC(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		Enum_ExplodingObjectState                                  ExplodingObjectState;                                    // 0x05FD(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Z77Y[0x2];                                   // 0x05FE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDA_ExplodingObject_C*                               ExplodingObject;                                         // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UDA_ExplodingObjectPresentation_C*                   Presentation;                                            // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DestroyOnCleanup;                                        // 0x0610(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2QX2[0x3];                                   // 0x0611(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ExplodeDelay_Explosion;                                  // 0x0614(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ExplodeDelay_Puddle;                                     // 0x0618(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ExplodeDelay_Cloud;                                      // 0x061C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ExplodeDelay_Loot;                                       // 0x0620(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ImpulseOnExplode;                                        // 0x0624(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9ZEX[0x3];                                   // 0x0625(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ImpulseOnExplode_Force;                                  // 0x0628(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             ImpulseOnExplode_ForceExtra;                             // 0x062C(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ExplodeDelay_MeshSwap;                                   // 0x0638(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_24LE[0x4];                                   // 0x063C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGbxCondition*                                       Cond_ExplodingObjectState_NewEnumerator1;                // 0x0640(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGbxCondition*                                       Cond_ExplodingObjectState_NewEnumerator2;                // 0x0648(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGbxCondition*                                       Cond_ExplodingObjectState_NewEnumerator3;                // 0x0650(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void SetSimulatePhysics(bool bNewSimulate);
		void Damaged(class UGbxDamageType* DamageType, class UDamageSource* DamageSource);
		void VisualState_ExplodedStop();
		void VisualState_ExplodedStart();
		void Get_DamageType(Enum_ExplodingObjectDamage* DamageType);
		void VisualState_FuseStop();
		void VisualState_FuseStart();
		void OnRep_DamageType();
		void ThrowExplodingObject(const struct FVector& ThrowVector, float Force, const struct FRotator& RotatorForSpin, const struct FVector& OptionalAdditiveVector);
		void Setup_ExplodingObject(class UDA_ExplodingObjectPresentation_C* NewPresentation, class UMaterialInstanceDynamic** DynamicMI);
		void Setup_RandomizeDamageType();
		void UserConstructionScript();
		void BPI_ResetHealth();
		void BndEvt__SM_Barrel_K2Node_ComponentBoundEvent_9_ComponentHitSignature__DelegateSignature_IO_Combat_Barrel_Universal(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		void BPI_Explode();
		void BPI_ImpulseThrow(const struct FVector& ThrowVector, float Force, const struct FRotator& RotatorForSpin, float FuseSpeedScale, const struct FVector& AdditiveVector);
		void BPI_SetSimulatePhysics(bool PhysicsOn);
		void BPI_StartFuse();
		void ReceiveBeginPlay();
		void __UserState_ExplodingObjectState_1(bool bFromLoad);
		void __UserState_ExplodingObjectState_2(bool bFromLoad);
		void __UserState_ExplodingObjectState_3(bool bFromLoad);
		void __UserState_ExplodingObjectState_4(bool bFromLoad);
		void BndEvt__OakDamage_K2Node_ComponentBoundEvent_1_TakeAnyPipelineDamageDelegate__DelegateSignature_BP_ExplodingObject(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details);
		void Explode_Damage();
		void Explode_Puddle();
		void Explode_Cloud();
		void Explode_Loot();
		void Explode();
		void BndEvt__SM_ExplodingObject_K2Node_ComponentBoundEvent_0_ComponentWakeSignature__DelegateSignature_BP_ExplodingObject(class UPrimitiveComponent* WakingComponent, const class FName& BoneName);
		void BndEvt__SM_ExplodingObject_K2Node_ComponentBoundEvent_3_ComponentSleepSignature__DelegateSignature_BP_ExplodingObject(class UPrimitiveComponent* SleepingComponent, const class FName& BoneName);
		void BPI_SetNavPainterEnabled(bool Enabled);
		void ExecuteUbergraph_BP_ExplodingObject(int32_t EntryPoint);
		void Exploded__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
