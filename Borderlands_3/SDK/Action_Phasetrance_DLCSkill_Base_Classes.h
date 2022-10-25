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
	 * BlueprintGeneratedClass Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C
	 * Size -> 0x0053 (FullSize[0x030C] - InheritedSize[0x02B9])
	 */
	class UAction_Phasetrance_DLCSkill_Base_C : public UAction_Phasetrance_Common_C
	{
	public:
		unsigned char                                              UnknownData_7I4K[0x7];                                   // 0x02B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) Transient, DuplicateTransient
		class UClass*                                              ActionSkillOrb;                                          // 0x02C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AProj_Siren_DLCSkill_WalkingPotato_Base_C*           PhaseOrb;                                                // 0x02D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UGbxSkeletalMeshComponent*                           GhostArms3rd;                                            // 0x02D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UGbxSkeletalMeshComponent*                           GhostArms1st;                                            // 0x02E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              GhostArms;                                               // 0x02E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UActionSkill_Siren_Phasetrance_C*                    BPPhasetrance;                                           // 0x02F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              BodyMesh;                                                // 0x02F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            OwnerRotation;                                           // 0x0300(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetPhaseFlareSpawnLocation(struct FVector* res);
		void SetPhaseFlareSpawnLocation(const struct FVector& Loc, bool* res);
		void OnRep_SpawnLocation();
		void StartSummonAnimation();
		void HideArmsMesh();
		void ResetArmsMesh();
		void CacheSummonMeshes();
		void SummonActionSkillOrb(bool* res, class AProj_Siren_DLCSkill_WalkingPotato_Base_C** Orb);
		void OnServerBegin(class AActor* Actor);
		void OnServerEnd(EGbxActionEndState ActionEndState, class AActor* Actor);
		void DetachOrb();
		void AN_SummonOrb();
		void AN_DetachOrb();
		void SendOrb();
		void AN_Remove3pGhostArms();
		void OnBegin(class AActor* Actor);
		void TriggerActionSkillUseDialogue();
		void TriggerActionSkillReactDialogue();
		void ExecuteUbergraph_Action_Phasetrance_DLCSkill_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
