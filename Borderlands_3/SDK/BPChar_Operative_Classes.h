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
	 * BlueprintGeneratedClass BPChar_Operative.BPChar_Operative_C
	 * Size -> 0x00F4 (FullSize[0x36DC] - InheritedSize[0x35E8])
	 */
	class ABPChar_Operative_C : public ABPChar_Player_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x35E8(0x0008) Transient, DuplicateTransient
		class UFaceFXComponent*                                    FaceFX;                                                  // 0x35F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_OperativeCharacterComponent_C*                   BP_OperativeCharacterComponent;                          // 0x35F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UGbxSkeletalMeshComponent*                           ActionSkillDevice3rd;                                    // 0x3600(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UGbxSkeletalMeshComponent*                           DroneSpawn3rd;                                           // 0x3608(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWwiseAudioComponent*                                WwiseAudio;                                              // 0x3610(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFoleyAccessoryComponent*                            R_Hand_Audio;                                            // 0x3618(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFoleyAccessoryComponent*                            L_Hand_Audio;                                            // 0x3620(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UGbxSkeletalMeshComponent*                           Head;                                                    // 0x3628(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      DigistructSNTRY_MaterialScalar_9133ADCB49700F8E9184039E3D946B87; // 0x3630(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         DigistructSNTRY__Direction_9133ADCB49700F8E9184039E3D946B87; // 0x3634(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KKO0[0x3];                                   // 0x3635(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  DigistructSNTRY;                                         // 0x3638(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UGbxSkeletalMeshComponent*                           DroneSpawn;                                              // 0x3640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UGbxSkeletalMeshComponent*                           ActionSkillDevice1st;                                    // 0x3648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FWwisePlaybackInstance                              DroneSpawnWWiseComponent;                                // 0x3650(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class UWwiseAudioComponent*                                DroneSpawnAudio;                                         // 0x3668(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDataTableValueHandle                               StatusEffectBaseChance;                                  // 0x3670(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FDataTableValueHandle                               StatusEffectBaseDuration;                                // 0x3688(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FDataTableValueHandle                               StatusEffectBaseDamage;                                  // 0x36A0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FGbxAttributeFloat                                  DeathFollowsCloseDurationBonus;                          // 0x36B8(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FGbxAttributeFloat                                  DeathFollowsCloseEffectBonus;                            // 0x36C4(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FGbxAttributeFloat                                  bActivateTrapCard;                                       // 0x36D0(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash

	public:
		void CanActivateTrapCard(bool* res);
		void GetBarrierActionAbility(class UOakActionAbility_Barrier** res);
		void GetOperativeStatusEffectOverrides(struct FCauseDamageStatusEffectOverrides* Overrides);
		void GetOperativeShieldRemainingPercent(float* ShieldPercentRemaining);
		void GetDigiCloneShieldRemainingPercent(float* ShieldPercentRemaining);
		void GetGRMLNActionAbility(class UOakActionAbility_GRMLN** res);
		void GetDigicloneActionAbility(class UOakActionAbility_Digiclone** res);
		void SpawnAndThrowOperativeGrenade(class AActor* SpawnFromActor, const class FName& SpawnFromSocket, bool* res, class AActor** Grenade);
		void BlockOperativeActionSkillActivation(bool* ShouldBlock);
		void GetDroneSpawnLocation(struct FTransform* Transform);
		void Get_Skeletal_Mesh_Head(class UGbxSkeletalMeshComponent** Head_Mesh);
		void Get_Skeletal_Mesh_Arms(class USkeletalMeshComponent** Arms_Mesh);
		void Get_Skeletal_Mesh_Legs(class UGbxSkeletalMeshComponent** Legs);
		void Get_Skeletal_Mesh(class USkeletalMeshComponent** Skeletal_Mesh);
		void Get_Materials_Head(TArray<class UMaterialInterface*>* Materials);
		void Get_Materials_Arms(TArray<class UMaterialInterface*>* Materials);
		void Get_Materials_Legs(TArray<class UMaterialInterface*>* Materials);
		void Get_Materials_Skeletal_Mesh(TArray<class UMaterialInterface*>* Materials);
		void Get_Materials_FP_Gun(TArray<class UMaterialInterface*>* Materials);
		void Get_Materials_TP_Gun(TArray<class UMaterialInterface*>* Materials);
		void GetHeadMesh(class USkeletalMesh** HeadMesh);
		void InnerDoCryoNovaAtLocation(const struct FVector& InLocation, float InDamage);
		class UOakActionAbility* GetSecondaryActionAbility();
		class UOakActionAbility* GetPrimaryActionAbility();
		void UserConstructionScript();
		void DigistructSNTRY__FinishedFunc();
		void DigistructSNTRY__UpdateFunc();
		void PlayerOperativeDroneSpawnAnimation();
		void HideOperativeDroneSpawnAnimation();
		void DoOperativeCryoNovaAtLocation(const struct FVector& Location, float Damage);
		void SetOperativeDeviceVisible(bool bVisible);
		void SpawnCannonEmitterMulticast(class UParticleSystem* CannonEmitter, class USkeletalMeshComponent* CannonComponent);
		void ExecuteUbergraph_BPChar_Operative(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
