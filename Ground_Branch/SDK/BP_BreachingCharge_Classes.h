#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * BlueprintGeneratedClass BP_BreachingCharge.BP_BreachingCharge_C
	 * Size -> 0x00DC (FullSize[0x04CC] - InheritedSize[0x03F0])
	 */
	class ABP_BreachingCharge_C : public AGBItem
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UParticleSystemComponent*                            PS_Armed;                                                // 0x03F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UArrowComponent*                                     Arrow;                                                   // 0x0400(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                BreachingChargeMesh;                                     // 0x0408(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      MaxPlacementRange;                                       // 0x0410(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0G6W[0x4];                                   // 0x0414(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystem*                                     DetonateEffect;                                          // 0x0418(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxBlastRadius;                                          // 0x0420(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_SFWX[0x4];                                   // 0x0424(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundBase*                                          DetonateSound;                                           // 0x0428(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DirectionalDamage;                                       // 0x0430(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_3MNK[0x4];                                   // 0x0434(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              DirectionalDamageType;                                   // 0x0438(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinDotAngle;                                             // 0x0440(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RadialDamage;                                            // 0x0444(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              RadialDamageType;                                        // 0x0448(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              Door;                                                    // 0x0450(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<EObjectTypeQuery>                                   ObjectTypes;                                             // 0x0458(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class AActor*>                                      Ignore;                                                  // 0x0468(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		struct FVector                                             ExplosionOrigin;                                         // 0x0478(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bCanBeArmed;                                             // 0x0484(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		unsigned char                                              UnknownData_E05F[0x3];                                   // 0x0485(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinDetonationDelay;                                      // 0x0488(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxDetonationDelay;                                      // 0x048C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TimeToArm;                                               // 0x0490(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_SNDR[0x4];                                   // 0x0494(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        TimerHandle_ArmCharge;                                   // 0x0498(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class ABP_Detonator_C*                                     DetonatorRef;                                            // 0x04A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinDamageRadius;                                         // 0x04A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxDamageRadius;                                         // 0x04AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bCheckForTeamKills;                                      // 0x04B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KQKV[0x7];                                   // 0x04B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<EPhysicalSurface>                                   SurfaceTpesToIgnore;                                     // 0x04B8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      OldDesiredEngagedAlpha;                                  // 0x04C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		class FName AIQuestion(class AController* Controller, const class FName& UseType);
		class FName AIQuestionWithParams(class AController* Controller, const class FName& UseType, const class FString& Params);
		bool GetEquipInfo(EHand TargetHand, struct FGBSwitchItemInfo* OutEquipInfo);
		void DamageCharacter(class AGBCharacter* InGBCharacter);
		bool DecodeKit(class UVaRestJsonObject* ItemAsJson, class AActor* DecodedOwner, class AGBItem* DecodedParentItem);
		void OnRep_bCanBeArmed();
		void K2_OnReset();
		void UseMainHandPressed();
		void ServerAttach();
		void MulticastSetCanBeArmed(bool bCanBe);
		void BndEvt__BreachinCharge0_K2Node_ComponentBoundEvent_0_ComponentBeginCursorOverSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent);
		void BndEvt__BreachinCharge0_K2Node_ComponentBoundEvent_1_ComponentEndCursorOverSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent);
		void SpawnFX();
		void MakeInteractive();
		void ServerUseWithParams(class AController* Controller, const class FName& UseType, const class FString& Params);
		void ClientUseWithParams(class AController* Controller, const class FName& UseType, const class FString& Params);
		void ClientUse(class AController* Controller, const class FName& UseType);
		void Detonate();
		void DisableInteraction();
		void ServerUse(class AController* Controller, const class FName& UseType);
		void InputArm();
		void AIUseWithParams(class AController* Controller, const class FName& UseType, const class FString& Params);
		void AIUse(class AController* Controller, const class FName& UseType);
		void OnDetonatorUse_Event_1(class ABP_Detonator_C* Detonator);
		void OnBeingEquipped();
		void OnBeingUnequipped();
		void ExecuteUbergraph_BP_BreachingCharge(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
