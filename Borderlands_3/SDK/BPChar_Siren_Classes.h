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
	 * BlueprintGeneratedClass BPChar_Siren.BPChar_Siren_C
	 * Size -> 0x0085 (FullSize[0x366D] - InheritedSize[0x35E8])
	 */
	class ABPChar_Siren_C : public ABPChar_Player_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x35E8(0x0008) Transient, DuplicateTransient
		class UFaceFXComponent*                                    FaceFX;                                                  // 0x35F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBPSirenCharacterComponent_C*                        BPSirenCharacterComponent;                               // 0x35F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              PhaseCast_Body;                                          // 0x3600(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UGbxSkeletalMeshComponent*                           PhaseCast_Head;                                          // 0x3608(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              PhaseCast_Arms;                                          // 0x3610(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UGbxSkeletalMeshComponent*                           SK_Play_SirenBrawler_Base_Head;                          // 0x3618(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UGbxSkeletalMeshComponent*                           Ghost_Arms_rd;                                           // 0x3620(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      TattooFlare_Scalar_D2A50537458CFA8E3B7462A51046E30B;     // 0x3628(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         TattooFlare__Direction_D2A50537458CFA8E3B7462A51046E30B; // 0x362C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_GTKU[0x3];                                   // 0x362D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  TattooFlare;                                             // 0x3630(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FadeArms3rd_Scalar_B54767784E02CDC0D75380ABF7394F15;     // 0x3638(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         FadeArms3rd__Direction_B54767784E02CDC0D75380ABF7394F15; // 0x363C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ASJB[0x3];                                   // 0x363D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  FadeArms3rd;                                             // 0x3640(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UGbxSkeletalMeshComponent*                           Ghost_Arms_st;                                           // 0x3648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UGbxSkeletalMeshComponent*                           Arms;                                                    // 0x3650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBPEventHub_Siren_C*                                 SirenEventHub;                                           // 0x3658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGbxAttributeFloat                                  Att_Siren_FindYourCenterActive;                          // 0x3660(0x000C) Edit, BlueprintVisible, Net, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       bArmFadeInterrupted;                                     // 0x366C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetSoulSapProjectile(class UClass** res);
		void GetStillnessOfMindControlledMove(class UClass** res);
		void SirenHasAscendantSkill(bool* res);
		void GetSirenGhostArmsComponent(class UGbxSkeletalMeshComponent** rd_Person_Mesh, class UGbxSkeletalMeshComponent** st_Person_Mesh);
		void GetPhaseCastProjectileComponents(class USkeletalMeshComponent** Body, class UGbxSkeletalMeshComponent** Head, class USkeletalMeshComponent** GhostArms);
		void GetSirenArmsReference(class UGbxSkeletalMeshComponent** Skel_Mesh_rd, class UGbxSkeletalMeshComponent** Skel_Mesh_st);
		void GetPhaseTranceAbility(class UOakActionAbility_PhaseTrance** res);
		void GetHeadMesh(class USkeletalMesh** HeadMesh);
		class UOakActionAbility* GetPrimaryActionAbility();
		void UserConstructionScript();
		void FadeArms3rd__FinishedFunc();
		void FadeArms3rd__UpdateFunc();
		void TattooFlare__FinishedFunc();
		void TattooFlare__UpdateFunc();
		void SetArmsMaterial(class UMaterialInstance* Material);
		void Play3rdPersonArmFade(bool bInstant, bool bVisible);
		void PlayTattooFade(bool bVisible);
		void SetArmsElement(EPhaseTranceElementalType Type);
		void HandleInstant3rdPersonArmFade(bool bVisible);
		void Handle3rdPersonArmFadeTransition(bool bVisible);
		void BndEvt__OakDamageCauserComponent_K2Node_ComponentBoundEvent_0_CauseAnyPipelineDamageDelegate__DelegateSignature_BPChar_Siren(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
		void ReceiveBeginPlay();
		void InterruptArmFade();
		void BndEvt__OakDamageCauserComponent_K2Node_ComponentBoundEvent_1_CauseDeathDelegate__DelegateSignature_BPChar_Siren(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
		void PhasegraspEndedAndEnemyKilled(bool Killed);
		void ExecuteUbergraph_BPChar_Siren(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
