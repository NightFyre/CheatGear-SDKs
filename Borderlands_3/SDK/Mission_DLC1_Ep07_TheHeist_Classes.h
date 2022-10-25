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
	 * BlueprintGeneratedClass Mission_DLC1_Ep07_TheHeist.Mission_DLC1_Ep07_TheHeist_C
	 * Size -> 0x0280 (FullSize[0x0790] - InheritedSize[0x0510])
	 */
	class UMission_DLC1_Ep07_TheHeist_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_ReturnToStrip_ObjSetVar;                             // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReturnToStrip_ObjVar;                                // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_MeetEmber_ObjSetVar;                                 // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MeetEmber_ObjVar;                                    // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToBlastDoor_ObjSetVar;                             // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToBlastDoor_ObjVar;                                // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TakeThermite_ObjSetVar;                              // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TakeThermite_ObjVar;                                 // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlaceThermite_ObjVar;                                // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Survive_ObjSetVar;                                   // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Survive_ObjVar;                                      // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PunchOutHole_ObjSetVar;                              // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PunchOutHole_ObjVar;                                 // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToElevator_ObjSetVar;                              // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToTowerLair_ObjVar;                                // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillEddie_ObjSetVar;                                 // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillEddie_ObjVar;                                    // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ActivateElevator_ObjSetVar;                          // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ActivateElevator_ObjVar;                             // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindTimothy_ObjSetVar;                               // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindTimothy_ObjVar;                                  // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TC_PitBoss_ObjSetVar;                                // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TC_PitBoss_ObjVar;                                   // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillPitBoss_ObjSetVar;                               // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillPitBoss_ObjVar;                                  // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FinalCinamatic_ObjVar;                               // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TC_TraitorEddie_ObjSetVar;                           // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TC_TraitorEddie_ObjVar;                              // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillEddieBot_1_ObjVar;                               // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_PlayerNearEmber_ObjVar;                          // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FinalCinematic_ObjSetVar;                            // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillEddieBot_2_ObjVar;                               // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindTimothy_BC1_ObjVar;                              // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_ElevatorArrivedAtTop_ObjVar;                     // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ClearLobby_ObjSetVar;                                // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_ClearL0bby_ObjVar;                               // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_UseConsoleWithHand_ObjSetVar;                        // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SaveCasino_ObjVar;                                   // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_TryToOverrideProtocol_ObjVar;                    // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_TryToFreeTimothy_ObjVar;                         // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PickUpHand_ObjVar;                                   // 0x0658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_UseConsoleWithHand_ObjVar;                           // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_LaserSeq1_Complete_ObjVar;                       // 0x0668(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_LaserSeq2_Complete_ObjVar;                       // 0x0670(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_LaserSeq3_Complete_ObjVar;                       // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_LaserSeq4_Complete_ObjVar;                       // 0x0680(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_LaserSeq5_Complete_ObjVar;                       // 0x0688(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TryToUseConsole_ObjSetVar;                           // 0x0690(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TryToOpenCell_ObjSetVar;                             // 0x0698(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PickUpHand_ObjSetVar;                                // 0x06A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_ReadyToStartAlarm_ObjVar;                        // 0x06A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PlayerSeq_1_ObjSetVar;                               // 0x06B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PlaySeq_2_ObjSetVar;                                 // 0x06B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PlaySeq_3_ObjSetVar;                                 // 0x06C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PlaySeq_4_ObjSetVar;                                 // 0x06C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PlaySeq_5_ObjSetVar;                                 // 0x06D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_OverrideProtocol_ObjVar;                             // 0x06D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FreeTimothy_ObjVar;                                  // 0x06E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_StartElevator_ObjVar;                            // 0x06E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_PrettyBoyVideoDonePlaying_ObjVar;                // 0x06F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_PrettyBoyMonologueDone_ObjVar;                   // 0x06F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ClearAreaPreThermite_ObjVar;                         // 0x0700(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_Survive_Wave1_ObjVar;                            // 0x0708(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_Survive_Wave2_ObjVar;                            // 0x0710(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_Survive_Wave3_ObjVar;                            // 0x0718(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ClearEnemies_PreThermite_ObjSetVar;                  // 0x0720(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToBlastDoor_PreClearEnemies_ObjSetVar;             // 0x0728(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_PlayerArrivedIn_ClearEnemyArea_ObjVar;           // 0x0730(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ClearAreaPreThermite_PreCheck_ObjVar;                // 0x0738(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PunchOutHole_Sequence_ObjSetVar;                     // 0x0740(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_PunchOutHoleSeq_Done_ObjVar;                         // 0x0748(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_ThermiteDone_ObjVar;                             // 0x0750(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_REAL_ClearL0bby_ObjVar;                              // 0x0758(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_KillEddieCrew_ObjVar;                            // 0x0760(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_FannyPack_ObjVar;                                // 0x0768(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToTowerLair_ObjSetVar;                             // 0x0770(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToElevator_ObjVar;                                 // 0x0778(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_GoToElevator_Precheck_ObjVar;                    // 0x0780(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_ClearLobby_Precheck_ObjVar;                          // 0x0788(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

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
		void MCE_PlayerReturnedToStrip(class UObject* Context);
		void Obj_MeetEmber(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_MeetEmber(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_PlayerMetEmber(class UObject* Context);
		void Obj_GoToBlastDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GoToBlastDoor(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_GoToBlastDoor(class UObject* Context);
		void Obj_TakeThermite(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_TakeThermite(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_PlayerTookThermite(class UObject* Context);
		void Obj_PlaceThermite(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_Survive(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_Survive(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_PunchOutHole(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_PunchOutHole(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_PlayerMeleedHole(class UObject* Context);
		void Obj_GoToTowerLair(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GoToElevator(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_PlayerWentToElevator(class UObject* Context);
		void Set_ReturnToStrip(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_KillEddie(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_KillEddie(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_PlayerKilledEddie(class UObject* Context);
		void Obj_ActivateElevator(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ActivateElevator(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_PlayerCalledElevator(class UObject* Context);
		void Obj_FindTimothy(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_FindTimothy(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_PlayerFoundTimothy(class UObject* Context);
		void Obj_TC_PitBoss(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_TC_PitBoss(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_KillPitBoss(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_KillPitBoss(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_PlayerKilledPitBoss(class UObject* Context);
		void Obj_FinalCinamatic(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_TC_TraitorEddie(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_TC_TraitorEddie(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_KillEddieBot_2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerKilledEddieBot_2(class UObject* Context);
		void INV_Obj_PlayerNearEmber(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerNearEmber(class UObject* Context);
		void Set_FinalCinematic(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_KillEddieBot_3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerKilledEddieBot_3(class UObject* Context);
		void Obj_FindTimothy_BC1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_FoundTimothy_BC1(class UObject* Context);
		void INV_Obj_ElevatorArrivedAtTop(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ElevatorArrivedAtTop(class UObject* Context);
		void MissionKickoff();
		void Obj_ReturnToStrip(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_Obj_ClearL0bby(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ClearLobby(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_PlayerClearedLobby(class UObject* Context);
		void Set_UseConsoleWithHand(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_SaveCasino(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerUsesConsole(class UObject* Context);
		void MCE_PlayerTriesToOpenCell(class UObject* Context);
		void INV_Obj_TryToOverrideProtocol(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_Obj_TryToFreeTimothy(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_PickUpHand(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_UseConsoleWithHand(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerPickedUpHand(class UObject* Context);
		void MCE_PlayerUsedConsoleWithHand(class UObject* Context);
		void MCE_PlayerArrivedInTowerMap(class UObject* Context);
		void INV_Obj_LaserSeq1_Complete(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_LaserSeq1_Complete(class UObject* Context);
		void INV_Obj_LaserSeq2_Complete(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_LaserSeq2_Complete(class UObject* Context);
		void INV_Obj_LaserSeq3_Complete(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_LaserSeq3_Complete(class UObject* Context);
		void INV_Obj_LaserSeq4_Complete(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_LaserSeq4_Complete(class UObject* Context);
		void INV_Obj_LaserSeq5_Complete(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_UpdateSaveCasinoObjective(class UObject* Context);
		void Set_TryToUseConsole(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_TryToOpenCell(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_PickUpHand(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void INV_Obj_ReadyToStartAlarm(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ReadyToStartAlarm(class UObject* Context);
		void Set_PlayerSeq_2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_PlaySeq_3(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_SaveCasino_Objective_PROXY();
		void Obj_SaveCasino_Objective_PROXY_1();
		void Obj_SaveCasino_Objective_PROXY_2();
		void Set_PlaySeq_4(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_SaveCasino_Objective_PROXY_3();
		void Set_PlaySeq_5(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_SaveCasino_Objective_PROXY_4();
		void Obj_SaveCasino_Objective_PROXY_5();
		void Set_PlaySeq_6(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_SaveCasino_Objective_PROXY_6();
		void Obj_OverrideProtocol(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_FreeTimothy(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_Obj_StartElevator(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerStartedElevator(class UObject* Context);
		void UPDATE_ThermitePlaced(class UObject* Context);
		void INV_Obj_PrettyBoyVideoDonePlaying(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_DoneWithPrettyBoyVideo(class UObject* Context);
		void INV_Obj_PrettyBoyMonologueDone(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_ClearAreaPreThermite(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ClearArea_PreThermite(class UObject* Context);
		void INV_Obj_Survive_Wave1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Survived_Wave1_A(class UObject* Context);
		void INV_Obj_Survive_Wave2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Survived_Wave2(class UObject* Context);
		void INV_Obj_Survive_Wave3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Survived_Wave3_A(class UObject* Context);
		void MCE_Survived_Wave1_B(class UObject* Context);
		void MCE_Survived_Wave3_B(class UObject* Context);
		void MCE_Survived_Wave3_C(class UObject* Context);
		void Set_ClearEnemies_PreThermite(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_GoToBlastDoor_PreClearEnemies(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GoToBlastDoor_Objective_PROXY_7();
		void INV_Obj_PlayerArrivedIn_ClearEnemyArea(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerArrivedInClearEnemyArea(class UObject* Context);
		void Obj_ClearAreaPreThermite_PreCheck(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_ClearAreaPreThermite_PreCheck_Objective_PROXY_8();
		void Obj_ClearAreaPreThermite_PreCheck_Objective_PROXY_9();
		void INV_PunchOutHoleSeq_Done(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_PunchOutHole_Sequence(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_PunchOutHoleSeqDone(class UObject* Context);
		void INV_Obj_ThermiteDone(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ThermiteDone(class UObject* Context);
		void INV_Obj_PlayerNearEmber_Objective_PROXY_10();
		void INV_Obj_PlayerNearEmber_Objective_PROXY_11();
		void INV_Obj_PlayerNearEmber_Objective_PROXY_12();
		void ClearSurviveObjectives(class UObject* Context);
		void Obj_REAL_ClearL0bby(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_Obj_KillEddieCrew(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_PlayerKilledEddieAndBots(class UObject* Context);
		void INV_Obj_FannyPack(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_PlayerPickedUpFannyPack(class UObject* Context);
		void Set_GoToTowerLair(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GoToElevator(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_Obj_GoToElevator_Precheck(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_ClearLobby_Precheck(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_ClearLobby_Precheck_Objective_PROXY_13();
		void MCE_StartFinalCinematic(class UObject* Context);
		void ExecuteUbergraph_Mission_DLC1_Ep07_TheHeist(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
