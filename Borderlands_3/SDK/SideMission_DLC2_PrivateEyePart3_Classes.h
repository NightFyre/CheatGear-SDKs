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
	 * BlueprintGeneratedClass SideMission_DLC2_PrivateEyePart3.SideMission_DLC2_PrivateEyePart3_C
	 * Size -> 0x0250 (FullSize[0x0760] - InheritedSize[0x0510])
	 */
	class USideMission_DLC2_PrivateEyePart3_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_takeDevice_ObjSetVar;                                // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TakeDevice_ObjVar;                                   // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ActivateDevice_ObjSetVar;                            // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ActivateDevice_ObjVar;                               // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ShootDevice_ObjSetVar;                               // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ShootDevice_ObjVar;                                  // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_EnterThePortal_ObjSetVar;                            // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EnterThePortal_ObjVar;                               // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Memory1_KillWolves_ObjVar;                           // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Memory2_ObjSetVar;                                   // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Memory2_KillBonded_ObjVar;                           // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Memory3_FollowBurton_ObjSetVar;                      // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_Memory3_FollowBurton_ObjVar;                     // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Memory3_StopTheSacrifice_ObjSetVar;                  // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Memory3_StopTheSacrifice_ObjVar;                     // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Memory4_TalkToIris_BeforeFight_ObjSetVar;            // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Memory4_TalkToIris_ObjVar;                           // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Memory4_ProtectIris_ObjSetVar;                       // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Memory4_ProtectIris_ObjVar;                          // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Memory4_TalkToIris_AfterFight_ObjSetVar;             // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MemoryEnd_TalkToIris_ObjVar;                         // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_EscapeMemories_ObjSetVar;                            // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EscapeMemories_ObjVar;                               // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_StopTheBonded_ObjSetVar;                             // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Survive_ObjVar;                                      // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_SaveIris_ObjSetVar;                                  // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SaveIris_ObjVar;                                     // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TalkToIris_LastTime_ObjSetVar;                       // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_talkToIris_LastTime_ObjVar;                          // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindBurtonAtBar_ObjSetVar;                           // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindBurtonAtBar_ObjVar;                              // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Inv_Memory_2SeqComplete_ObjVar;                          // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Memory3_KillBonded_ObjVar;                               // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Memory4_TeleportComplete_ObjVar;                     // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Memory4_SpawnIris_ObjVar;                            // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Memory1B_PlaySeq_ObjSetVar;                          // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_Memory1_B_SeqComplete_ObjVar;                    // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Memory1_ReadyForKillWolvesObjective_ObjVar;          // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_PlayerInMemory_ObjVar;                               // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Inv_Memory2_ReadyForSeq_ObjVar;                          // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_Memory2_SpawnBonded_ObjVar;                      // 0x0658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_Memory3_ReadyForSeq_Beginning_ObjVar;            // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_Memory3_SeqComplete_Beginning_ObjVar;            // 0x0668(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Memory3_ReadyForEndSeq_ObjVar;                       // 0x0670(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Memory3_SeqComplete_Ending_ObjVar;                   // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_Memory4_ReadyToDespawnIris_ObjVar;               // 0x0680(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_TalkToIrisLastTime_ReadyToAgreeAndDespawn_ObjVar; // 0x0688(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Memory1A_PlaySeq_ObjSetVar;                          // 0x0690(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_Memory1_A_SeqComplete_ObjVar;                    // 0x0698(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_ReadyForSeq1A_ObjVar;                            // 0x06A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_Mem4_SeqBComplete_ObjVar;                        // 0x06A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Memory4_IrisGetsPulledIntoDarkness_ObjSetVar;        // 0x06B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_Mem4_IrisPulledBack_Done_ObjVar;                 // 0x06B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_Memory4_ReadyForPreAttack_ObjVar;                // 0x06C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_Memory4_ReadyForIrisToBeSuckedIn_ObjVar;         // 0x06C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TalkToBurtonAtBar_ObjSetVar;                         // 0x06D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToBurtonAtBar_ObjVar;                            // 0x06D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_ReadyForFinalSeq_ObjVar;                         // 0x06E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PlayFinalSeq_ObjSetVar;                              // 0x06E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_SeqDone_FinalSequence_ObjVar;                        // 0x06F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_IrisFloatedDown_ObjVar;                              // 0x06F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_Memory2_ReadyForMemory3_ObjVar;                  // 0x0700(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_ReadyToSpawnBurtonInMemory_ObjVar;               // 0x0708(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Memory1_ReadyForSeqB_ObjVar;                         // 0x0710(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Memory1_KillWolves_SpawnerCompleteCounter_ObjVar;    // 0x0718(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_PreTakeDevice_ObjVar;                                // 0x0720(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_BurtonArrivedAtDevice_ObjVar;                        // 0x0728(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_ReadyToShootDevice_ObjVar;                           // 0x0730(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_ReadyToTurnOnPortal_ObjVar;                          // 0x0738(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_ReadyToSpawnIrisAfterPortalActivation_ObjVar;        // 0x0740(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_ReadyForBurtonToRespond_ObjVar;                  // 0x0748(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_ReadyToEndTalkingAction_ObjVar;                  // 0x0750(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_FinalSequenceStarted_ObjVar;                         // 0x0758(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnDialogSequenceFinished_35();
		void OnDialogSequenceFinished_34();
		void OnDialogSequenceFinished_33();
		void OnDialogSequenceFinished_32();
		void OnDialogSequenceFinished_31();
		void OnDialogSequenceFinished_30();
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
		void Set_TakeDevice(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TakeDevice(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ActivateDevice(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ActivateDevice(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void TookDevice(class UObject* Context);
		void ActivatedDevice(class UObject* Context);
		void Set_ShootDevice(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ShootDevice(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ShotDevice(class UObject* Context);
		void Set_EnterThePortal(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_EnterThePortal(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void EnteredThePortal(class UObject* Context);
		void Obj_Memory1_KillWolves(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Memory1_KilledWolves(class UObject* Context);
		void Set_Memory2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_Memory2_KillBonded(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_Memory3_FollowBurton(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void INV_Obj_Memory3_FollowBurton(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Memory3_FollowBurton_Complete(class UObject* Context);
		void Set_Memory3_StopTheSacrifice(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_Memory3_StopTheSacrifice(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_Memory4_TalkToIris_BeforeFight(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_Memory4_TalkToIris(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Memory4_TalkToIris_Complete(class UObject* Context);
		void Set_Memory4_ProtectIris(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_Memory4_ProtectIris(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Memory4_ProtectIris_Complete(class UObject* Context);
		void Set_Memory4_TalkToIris_AfterFight(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_MemoryEnd_TalkToIris(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MemoryEnd_TalkToIris_Complete(class UObject* Context);
		void Set_EscapeMemories(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_EscapeMemories(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void EscapedMemories(class UObject* Context);
		void Set_StopTheBonded(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_Survive(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Survived(class UObject* Context);
		void Set_SaveIris(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_SaveIris(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SavedIris(class UObject* Context);
		void Set_TalkToIris_LastTime(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_talkToIris_LastTime(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void TalkedToIris_LastTime(class UObject* Context);
		void Set_FindBurtonAtBar(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindBurtonAtBar(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void FoundBurtonAtBar(class UObject* Context);
		void Obj_Memory4_ProtectIris_Objective_PROXY();
		void Obj_Memory4_ProtectIris_Objective_PROXY_1();
		void Obj_Memory4_ProtectIris_Objective_PROXY_2();
		void Obj_Memory4_ProtectIris_Objective_PROXY_3();
		void SkipToMemory2(class UObject* Context);
		void SkipToMemory4(class UObject* Context);
		void Inv_Memory_2SeqComplete(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Memory3_KillBonded(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Memory3_KilledBonded(class UObject* Context);
		void INV_Memory4_TeleportComplete(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Memory4_TeleportComplete(class UObject* Context);
		void INV_Memory4_SpawnIris(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Memory4_SpawnIris(class UObject* Context);
		void INV_Obj_Memory1_B_SeqComplete(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_Memory1B_PlaySeq(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_Memory4_ProtectIris_Objective_PROXY_4();
		void Memory1B_SeqComplete(class UObject* Context);
		void INV_Memory1_ReadyForKillWolvesObjective(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_PlayerInMemory_Objective_PROXY_5();
		void INV_PlayerInMemory(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void PlayerInMemory(class UObject* Context);
		void AllPlayersLeftMemory(class UObject* Context);
		void INV_PlayerInMemory_Objective_PROXY_6();
		void INV_PlayerInMemory_Objective_PROXY_7();
		void INV_PlayerInMemory_Objective_PROXY_8();
		void INV_PlayerInMemory_Objective_PROXY_9();
		void INV_PlayerInMemory_Objective_PROXY_10();
		void Inv_Memory2_ReadyForSeq(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Memory2_SeqComplete(class UObject* Context);
		void INV_Obj_Memory2_SpawnBonded(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Memory2_SpawnBonded(class UObject* Context);
		void INV_Obj_Memory3_SeqComplete_Beginning(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_Obj_Memory3_ReadyForSeq_Beginning(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Memory3_SeqComplete_Beginning(class UObject* Context);
		void INV_Memory3_ReadyForEndSeq(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_Memory3_SeqComplete_Ending(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Memory3_SeqComplete_Ending(class UObject* Context);
		void INV_Obj_Memory4_ReadyToDespawnIris(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_PlayerInMemory_Objective_PROXY_11();
		void INV_PlayerInMemory_Objective_PROXY_12();
		void INV_Obj_TalkToIrisLastTime_ReadyToAgreeAndDespawn(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_PlayerInMemory_Objective_PROXY_13();
		void INV_Obj_Memory1_A_SeqComplete(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_Memory1A_PlaySeq(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_Memory4_ProtectIris_Objective_PROXY_14();
		void Memory1A_SeqComplete(class UObject* Context);
		void INV_PlayerInMemory_Objective_PROXY_15();
		void INV_Obj_ReadyForSeq1A(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_Obj_Mem4_SeqBComplete(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Memory4_SeqBComplete(class UObject* Context);
		void Set_Memory4_IrisGetsPulledIntoDarkness(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void INV_PlayerInMemory_Objective_PROXY_16();
		void INV_Obj_Mem4_IrisPulledBack_Done(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Memory4_IrisPulledBack_Done(class UObject* Context);
		void INV_Obj_Memory4_ReadyForPreAttack(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_Obj_Memory4_ReadyForIrisToBeSuckedIn(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Memory1_ReadyForKillWolvesObjective(class UObject* Context);
		void Set_TalkToBurtonAtBar(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TalkToBurtonAtBar(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void TalkedToBurtonAtBar(class UObject* Context);
		void Set_PlayFinalSeq(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void INV_SeqDone_FinalSequence(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SeqDone_FinalSequence(class UObject* Context);
		void INV_Obj_ReadyForFinalSeq(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void BurtonInPlaceForMem3EndingSeq(class UObject* Context);
		void Obj_Memory4_ProtectIris_Objective_PROXY_17();
		void Obj_Memory4_ProtectIris_Objective_PROXY_18();
		void INV_IrisFloatedDown(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void IrisFloatedDown(class UObject* Context);
		void MemoryEnd_IrisReadyToBeSuckedIn(class UObject* Context);
		void INV_Obj_Memory2_ReadyForMemory3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Memory2_ReadyForMemory3(class UObject* Context);
		void INV_Obj_ReadyToSpawnBurtonInMemory(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ReadyToSpawnBurtonInMemory(class UObject* Context);
		void Obj_Memory1_ReadyForSeqB(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void AdvanceToEnterPortal(class UObject* Context);
		void INV_Memory1_KillWolves_SpawnerCompleteCounter(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_PreTakeDevice(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_BurtonArrivedAtDevice(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void BurtonArrivedAtDevice(class UObject* Context);
		void INV_ReadyToShootDevice(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_ReadyToTurnOnPortal(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ReadyToTurnOnPortal(class UObject* Context);
		void INV_ReadyToSpawnIrisAfterPortalActivation(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ReadyToSpawnIrisAfterPortalActivation(class UObject* Context);
		void INV_Obj_ReadyForBurtonToRespond(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_Obj_ReadyToEndTalkingAction(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ReadyForFinalSeq(class UObject* Context);
		void MCE_BurtonAnswers(class UObject* Context);
		void INV_FinalSequenceStarted(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ExecuteUbergraph_SideMission_DLC2_PrivateEyePart3(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
