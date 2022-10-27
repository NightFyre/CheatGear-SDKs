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
	 * BlueprintGeneratedClass Mission_Ixora_Main02.Mission_Ixora_Main02_C
	 * Size -> 0x02A0 (FullSize[0x07B0] - InheritedSize[0x0510])
	 */
	class UMission_Ixora_Main02_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_GoToMap_ObjSetVar;                                   // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToMap_ObjVar;                                      // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CombatZone1_ObjVar;                                  // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TakeECHOFromClay_ObjSetVar;                          // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TakeECHOFromClay_ObjVar;                             // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FollowClay1_ObjSetVar;                               // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FollowClay1_Inv_ObjVar;                              // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ClearPath1_ObjVar;                                   // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ClearPath1_ObjSetVar;                                // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_CombatZone1_ObjSetVar;                               // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FollowClay2_ObjVar;                                  // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FollowClay2_ObjSetVar;                               // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CabinReveal_ObjVar;                                  // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_EnterCabinFAKE_ObjSetVar;                            // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EnterCabinFAKE_ObjVar;                               // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_InvestigateClues_ObjSetVar;                          // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_InvestigateClues_ObjVar;                             // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Clue_SideDoor_ObjVar;                                // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Clue_Blood_ObjVar;                                   // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Clue_BookshelfDoor_ObjVar;                           // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ReviewWithClay_ObjSetVar;                            // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReviewWithClay_ObjVar;                               // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Combat2_ObjSetVar;                                   // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ClearPath3_ObjSetVar;                                // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ClearPath3_ObjVar;                                   // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ClearPath2_ObjSetVar;                                // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ClearPath2_ObjVar;                                   // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_OpenGate1_ObjSetVar;                                 // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CombatZone3_ObjVar;                                  // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_OpenGate2_ObjSetVar;                                 // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_OpenGate2_ObjVar;                                    // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Moment_Gunshot_INV_ObjVar;                           // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_RunToBody_ObjSetVar;                                 // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_RunToBody_ObjVar;                                    // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ExamineCorpse_ObjSetVar;                             // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ExamineCorpse_ObjVar;                                // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PickupKeys_ObjSetVar;                                // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PickupKeys_ObjVar;                                   // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_InvestigateLockedRoom_ObjSetVar;                     // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_InvestigateLockedRoom_ObjVar;                        // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ListenToFinalECHO_ObjSetVar;                         // 0x0658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ListenToFinalEcho_ObjVar;                            // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TurnIn_ObjSetVar;                                    // 0x0668(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TurnIn_ObjVar;                                       // 0x0670(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_MeetClay_ObjSetVar;                                  // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MeetClay_ObjVar;                                     // 0x0680(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindTony_ObjVar;                                     // 0x0688(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DummyClue1_ObjVar;                                   // 0x0690(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DummyClue2_ObjVar;                                   // 0x0698(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KidnappingECHO_ObjSetVar;                            // 0x06A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KidnappingECHO_ObjVar;                               // 0x06A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FollowClayToTrailECHO_ObjSetVar;                     // 0x06B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FollowClayToTrailECHO_ObjVar;                        // 0x06B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TrailECHO_ObjSetVar;                                 // 0x06C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TrailECHO_ObjVar;                                    // 0x06C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_BreakWindow_ObjSetVar;                               // 0x06D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EnterCabin_ObjVar;                                   // 0x06D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_BreakWindow_INV_ObjVar;                              // 0x06E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_OpenCabinDoor_ObjSetVar;                             // 0x06E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_BreakDoor_INV_ObjVar;                                // 0x06F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_OpenCabinDoor_ObjVar;                                // 0x06F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ClayWalksInsideCabin_ObjVar;                         // 0x0700(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MoveBookshelf_INV_ObjVar;                            // 0x0708(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FinishedECHO1_ObjVar;                                // 0x0710(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FinishedECHO2_ObjVar;                                // 0x0718(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FinishedECHO3_ObjVar;                                // 0x0720(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FinishedECHO4_INV_ObjVar;                            // 0x0728(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CabinSideDoor_INV_ObjVar;                            // 0x0730(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Combat2_Jabbers_ObjVar;                              // 0x0738(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_OpenGate1_INV_ObjVar;                                // 0x0740(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Moment_DoorCloses_ObjVar;                            // 0x0748(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CorpseRevealDoor_INV_ObjVar;                         // 0x0750(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_BreakWindow2_INV_ObjVar;                             // 0x0758(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindPath3_ObjVar;                                    // 0x0760(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_HuskVO_ObjVar;                                       // 0x0768(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_AvaPodcastIntro_INV_ObjVar;                          // 0x0770(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Moment_GunshotFinished_ObjVar;                       // 0x0778(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Combat2_BC_ObjVar;                                   // 0x0780(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindPath_ObjSetVar;                                  // 0x0788(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CombatZone1BC_ObjVar;                                // 0x0790(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_CombatZone3_ObjSetVar;                               // 0x0798(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CombatZone3BC_ObjVar;                                // 0x07A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Mudslide_ObjVar;                                     // 0x07A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnDialogSequenceFinished_49();
		void OnDialogSequenceFinished_48();
		void OnDialogSequenceFinished_47();
		void OnDialogSequenceFinished_46();
		void OnDialogSequenceFinished_45();
		void OnDialogSequenceFinished_44();
		void OnDialogSequenceFinished_43();
		void OnDialogSequenceFinished_42();
		void OnDialogSequenceFinished_41();
		void OnDialogSequenceFinished_40();
		void OnDialogSequenceFinished_39();
		void OnDialogSequenceFinished_38();
		void OnDialogSequenceFinished_37();
		void OnDialogSequenceFinished_36();
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
		void Set_TakeECHOFromClay(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_Update_CombatZone1(class UObject* Context);
		void Obj_TakeECHOFromClay(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_TakeECHOFromClay(class UObject* Context);
		void MCE_Advance_CrypticMessage1(class UObject* Context);
		void Set_FollowClay1(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FollowClay1_Inv(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_ClearPath1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_ClearPath1(class UObject* Context);
		void Set_ClearPath1(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_CombatZone1(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_FollowClay2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FollowClay2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_FollowClay2(class UObject* Context);
		void Obj_CabinReveal(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_CabinReveal(class UObject* Context);
		void Set_EnterCabinFAKE(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_EnterCabinFAKE(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_EnterCabinFAKE(class UObject* Context);
		void Set_InvestigateClues(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_InvestigateClues(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_Clue_SideDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_CombatZone1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_GoToMap(class UObject* Context);
		void MissionKickoff();
		void Obj_GoToMap(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GoToMap(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_Clue_Blood(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_Clue_BookshelfDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_Clue_SideDoor(class UObject* Context);
		void MCE_Update_Clue_Blood(class UObject* Context);
		void MCE_Update_Clue_BookshelfDoor(class UObject* Context);
		void Set_ReviewWithClay(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ReviewWithClay(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_ReviewWithClay(class UObject* Context);
		void Set_Combat2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_ClearPath3(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ClearPath3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_ClearPath3(class UObject* Context);
		void Set_ClearPath2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ClearPath2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_CabinReveal_Objective_PROXY();
		void Set_OpenGate1(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_CombatZone3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_OpenGate2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_OpenGate2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_Moment_Gunshot_INV(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_RunToBody(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_RunToBody(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ExamineCorpse(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ExamineCorpse(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_PickupKeys(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_PickupKeys(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_InvestigateLockedRoom(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_InvestigateLockedRoom(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ListenToFinalECHO(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ListenToFinalEcho(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_TurnIn(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TurnIn(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_MeetClay(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_MeetClay(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_MeetClay(class UObject* Context);
		void Obj_FindTony(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_FindTony_Objective_PROXY_1();
		void Obj_FindTony_Objective_PROXY_2();
		void Obj_FindTony_Objective_PROXY_3();
		void Obj_FindTony_Objective_PROXY_4();
		void Obj_CabinReveal_Objective_PROXY_5();
		void Obj_CabinReveal_Objective_PROXY_6();
		void Obj_CabinReveal_Objective_PROXY_7();
		void Obj_DummyClue1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_DummyClue2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_KidnappingECHO(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_KidnappingECHO(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Advance_CrypticMessage2(class UObject* Context);
		void Set_FollowClayToTrailECHO(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FollowClayToTrailECHO(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_TrailECHO(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TrailECHO(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_FindTony_Objective_PROXY_8();
		void Obj_FindTony_Objective_PROXY_9();
		void MCE_Advance_CrypticMessage4(class UObject* Context);
		void Set_BreakWindow(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_EnterCabin_Objective_PROXY_10();
		void Obj_EnterCabin(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_BreakWindow_INV(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_EnterCabin(class UObject* Context);
		void MCE_Update_BreakWindow_INV(class UObject* Context);
		void Set_OpenCabinDoor(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_BreakDoor_INV(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_OpenCabinDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_OpenCabinDoor(class UObject* Context);
		void MCE_Update_BreakDoor_INV(class UObject* Context);
		void MCE_Update_TurnIn(class UObject* Context);
		void MCE_Update_DummyClue1(class UObject* Context);
		void MCE_Update_DummyClue2(class UObject* Context);
		void Obj_ClayWalksInsideCabin(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_ClayWalksInsideCabin(class UObject* Context);
		void Obj_MoveBookshelf_INV(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_MoveBookshelf(class UObject* Context);
		void MCE_Advance_CrypticMessage3(class UObject* Context);
		void Obj_FinishedECHO1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_FinishedECHO2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_KidnappingECHO(class UObject* Context);
		void Obj_FinishedECHO3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_TrailECHO(class UObject* Context);
		void MCE_Update_ListenToFinalEcho(class UObject* Context);
		void Obj_FinishedECHO4_INV(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_FollowClay1(class UObject* Context);
		void MCE_Update_ClearPath2(class UObject* Context);
		void MCE_Update_InvestigateClues(class UObject* Context);
		void MCE_Update_FollowClayToTrailECHO(class UObject* Context);
		void MCE_Update_CombatZone3(class UObject* Context);
		void MCE_Update_OpenGate2(class UObject* Context);
		void MCE_Update_Moment_Gunshot_INV(class UObject* Context);
		void MCE_Update_FindTony(class UObject* Context);
		void MCE_Update_RunToBody(class UObject* Context);
		void MCE_Update_ExamineCorpse(class UObject* Context);
		void MCE_Update_PickupKeys(class UObject* Context);
		void MCE_Update_InvestigateLockedRoom(class UObject* Context);
		void Obj_CabinSideDoor_INV(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_CabinSideDoor_INV(class UObject* Context);
		void Obj_Combat2_Jabbers(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_Combat2_Jabbers(class UObject* Context);
		void Obj_OpenGate1_INV(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_OpenGate1(class UObject* Context);
		void Obj_Moment_DoorCloses(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_Moment_DoorCloses(class UObject* Context);
		void Obj_CorpseRevealDoor_INV(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_BreakWindow2_INV(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_BreakWindow2_INV(class UObject* Context);
		void MCE_ClaySeesShack(class UObject* Context);
		void MCE_Update_CorpseRevealDoor(class UObject* Context);
		void Obj_FindPath3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_FindPath3(class UObject* Context);
		void Obj_HuskVO(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_HuskVO(class UObject* Context);
		void Obj_AvaPodcastIntro_INV(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_AvaPodcastIntro_INV(class UObject* Context);
		void Obj_Moment_GunshotFinished(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_Moment_GunshotFinished(class UObject* Context);
		void MCE_ClayDetourVO(class UObject* Context);
		void Obj_Combat2_BC(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_Combat2_BC(class UObject* Context);
		void MCE_ClayJabberVO(class UObject* Context);
		void Set_FindPath(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindTony_Objective_PROXY_11();
		void Obj_CombatZone1BC(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_CombatZone1BC(class UObject* Context);
		void Set_CombatZone3(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindTony_Objective_PROXY_12();
		void Obj_CombatZone3BC(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_CombatZone3BC(class UObject* Context);
		void Obj_Mudslide(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_Mudslide(class UObject* Context);
		void MCE_BridgeFastForward(class UObject* Context);
		void ExecuteUbergraph_Mission_Ixora_Main02(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
