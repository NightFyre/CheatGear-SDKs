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
	 * BlueprintGeneratedClass Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C
	 * Size -> 0x0037 (FullSize[0x02F0] - InheritedSize[0x02B9])
	 */
	class UAction_PhaseTrance_Cast_Base_C : public UAction_Phasetrance_Common_C
	{
	public:
		unsigned char                                              UnknownData_E9GE[0x7];                                   // 0x02B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) Transient, DuplicateTransient
		class USkeletalMeshComponent*                              BodyMesh;                                                // 0x02C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UGbxSkeletalMeshComponent*                           HeadMesh;                                                // 0x02D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              GhostArms;                                               // 0x02D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              PhaseCastProjectileClass;                                // 0x02E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                AttachSocket;                                            // 0x02E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void CacheSummonMeshes();
		void FirePhaseCastProjectile();
		void ResetCastMesh();
		void StartCastSummonAnimation();
		void AN_PerformCastFeedback();
		void AN_CreateCastProjectile();
		void OnBegin(class AActor* Actor);
		void TriggerActionSkillReactDialogue();
		void TriggerActionSkillUseDialogue();
		void OnServerEnd(EGbxActionEndState ActionEndState, class AActor* Actor);
		void AN_PerformCastCS_Part1();
		void AN_PerformCastCS_Part2();
		void PlayPhaseTranceHandEffects();
		void ExecuteUbergraph_Action_PhaseTrance_Cast_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
