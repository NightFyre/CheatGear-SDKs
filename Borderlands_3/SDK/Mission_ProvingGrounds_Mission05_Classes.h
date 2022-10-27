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
	 * BlueprintGeneratedClass Mission_ProvingGrounds_Mission05.Mission_ProvingGrounds_Mission05_C
	 * Size -> 0x00F0 (FullSize[0x0600] - InheritedSize[0x0510])
	 */
	class UMission_ProvingGrounds_Mission05_C : public UOakMissionProvingGrounds
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_EnterEncounter_1_ObjSetVar;                          // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EnterEncounter_1_ObjVar;                             // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CompleteEncounter_1_ObjVar;                          // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_EnterEncounter_2_ObjSetVar;                          // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EnterEncounter_2_ObjVar;                             // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CompleteEncounter_2_ObjVar;                          // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_EnterEncounter_3_ObjSetVar;                          // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EnterEncounter_3_ObjVar;                             // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CompleteEncounter_3_ObjVar;                          // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Boss_ObjSetVar;                                      // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EnterBossArena_ObjVar;                               // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CompleteBossArena_ObjVar;                            // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TurnIn_ObjSetVar;                                    // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TurnIn_ObjVar;                                       // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Encounter_1_KillSpawner_ObjVar;                      // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Encounter_2_KillSpawner_ObjVar;                      // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Encounter_3_KillSpawner_ObjVar;                      // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_HiddenGoblin1_ObjVar;                                // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_HiddenGoblin2_ObjVar;                                // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_HiddenGoblin3_ObjVar;                                // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_CompleteEncounter1_ObjSetVar;                        // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_CompleteEncounter2_ObjSetVar;                        // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_CompleteEncounter3_ObjSetVar;                        // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillGemGuardian_ObjVar;                              // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindGemGuardian_ObjVar;                              // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TimedGem_Gold_ObjVar;                                // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TimedGem_Silver_ObjVar;                              // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DeathGem_ObjVar;                                     // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TriggerEndDialogue_ObjVar;                           // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnDialogSequenceFinished_29();
		void OnDialogSequenceFinished_28();
		void OnDialogSequenceFinished_27();
		void OnDialogSequenceFinished_26();
		void OnDialogSequenceFinished_25();
		void OnDialogSequenceFinished_24();
		void OnDialogSequenceFinished_23();
		void OnDialogSequenceFinished_22();
		void OnDialogSequenceFinished_21();
		void OnDialogSequenceFinished_20();
		void OnDialogSequenceFinished_19();
		void OnDialogSequenceFinished_18();
		void OnDialogSequenceFinished_17();
		void OnDialogSequenceFinished_16();
		void MCE_Update_Obj_EnterEncounter_2(class UObject* Context);
		void MCE_Update_Obj_CompleteEncounter_2(class UObject* Context);
		void Obj_EnterBossArena(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_Boss(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_Update_Obj_EnterEncounter_3(class UObject* Context);
		void MCE_Update_Obj_CompleteEncounter_3(class UObject* Context);
		void MCE_Update_Obj_EnterEncounter_4(class UObject* Context);
		void MCE_Update_Obj_CompleteEncounter_4(class UObject* Context);
		void MCE_Update_Obj_EnterBossArena(class UObject* Context);
		void MCE_Update_Obj_CompleteBossArena(class UObject* Context);
		void Set_EnterEncounter_2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_Update_Obj_TurnIn(class UObject* Context);
		void Set_TurnIn(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TurnIn(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_CompleteEncounter_4(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_Encounter_1_KillSpawner(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_Obj_Encounter_1_KillSpawner(class UObject* Context);
		void Obj_EnterEncounter_4(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_Encounter_2_KillSpawner(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_EnterEncounter_4(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_Update_Obj_Encounter_2_KillSpawner(class UObject* Context);
		void Obj_Encounter_3_KillSpawner(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_Obj_Encounter_3_KillSpawner(class UObject* Context);
		void Obj_CompleteEncounter_3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_FindGemGuardian(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_KillGemGuardian(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_EnterEncounter_3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_EnterEncounter_3(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_CompleteEncounter_2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_EnterEncounter_2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_Obj_KillGemGuardian(class UObject* Context);
		void MCE_Update_Obj_FindGemGuardian(class UObject* Context);
		void Obj_HiddenGoblin1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_HiddenGoblin2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_HiddenGoblin3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_HiddenGoblin1(class UObject* Context);
		void Update_HiddenGoblin2(class UObject* Context);
		void Update_HiddenGoblin3(class UObject* Context);
		void Set_CompleteEncounter1(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_CompleteEncounter2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_CompleteEncounter3(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TimedGem_Gold(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_Obj_TimedGem_Gold(class UObject* Context);
		void Obj_TimedGem_Silver(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_Obj_TimedGem_Silver(class UObject* Context);
		void Obj_DeathGem(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_Obj_DeathGem(class UObject* Context);
		void MissionKickoff();
		void Obj_TriggerEndDialogue(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_Obj_TriggerEndDialogue(class UObject* Context);
		void Obj_CompleteBossArena(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ExecuteUbergraph_Mission_ProvingGrounds_Mission05(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
