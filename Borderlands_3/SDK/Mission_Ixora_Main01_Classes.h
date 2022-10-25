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
	 * BlueprintGeneratedClass Mission_Ixora_Main01.Mission_Ixora_Main01_C
	 * Size -> 0x01B8 (FullSize[0x06C8] - InheritedSize[0x0510])
	 */
	class UMission_Ixora_Main01_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_GoToMap_ObjSetVar;                                   // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToMap_ObjVar;                                      // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_InvestigateCrimeScene_ObjSetVar;                     // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ExamineBody_ObjVar;                                  // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_RecapWithLorelei_ObjSetVar;                          // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_RecapWithLorelei_ObjVar;                             // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TalkToWitnesses1_ObjSetVar;                          // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToWitnesses_ObjVar;                              // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TurnIn_ObjSetVar;                                    // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TurnIn_ObjVar;                                       // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindClues_ObjVar;                                    // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Clue1_ObjVar;                                        // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Clue2_ObjVar;                                        // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Witness1_Inv_ObjVar;                                 // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Witness2_Inv_ObjVar;                                 // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_WalkToAptComplex_ObjSetVar;                          // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_WalkToAptComplex_ObjVar;                             // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Clue3_ObjVar;                                        // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DummyClue1_ObjVar;                                   // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DummyClue2_ObjVar;                                   // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TrackDownBackpack_ObjSetVar;                         // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TrackDownBackpack_ObjVar;                            // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_HandLorelaiBackpack_ObjSetVar;                       // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_HandLorelaiBackpack_ObjVar;                          // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TrackDownKiller_ObjSetVar;                           // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TrackDownKiller_ObjVar;                              // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_CatchKiller_ObjSetVar;                               // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CatchKiller_ObjVar;                                  // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillerHitByTrain_ObjVar;                             // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PickUpBackpack_ObjSetVar;                            // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PickUpBackpack_ObjVar;                               // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CombatZone1_ObjVar;                                  // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Combat1Gate2_ObjVar;                                 // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_BetweenCombat_ObjVar;                                // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CombatZone2_ObjVar;                                  // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FinalGate_ObjVar;                                    // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_MeetLorelai_ObjSetVar;                               // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MeetLorelai_ObjVar;                                  // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_RealClueCounter_ObjVar;                              // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TalkToWitnesses2_ObjSetVar;                          // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DoorToCombat1_ObjVar;                                // 0x0658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ApartmentTrainSEQ_INV_ObjVar;                        // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_AvaPodcastIntro_INV_ObjVar;                          // 0x0668(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ExamineBody_Hidden_ObjVar;                           // 0x0670(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TrackDownKiller2_ChinatownDoor_ObjSetVar;            // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TrackDownKiller3_ChinatownCombat_ObjSetVar;          // 0x0680(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TrackDownKiller4_ChinatownCombat_ObjSetVar;          // 0x0688(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TrackDownKiller5_FinalGate_ObjSetVar;                // 0x0690(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Waypoint1_ObjVar;                                    // 0x0698(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Waypoint2_ObjVar;                                    // 0x06A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Waypoint3_ObjVar;                                    // 0x06A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_DoorToSlums_ObjSetVar;                               // 0x06B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Barrier1_INV_ObjVar;                                 // 0x06B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Barrier2_INV_ObjVar;                                 // 0x06C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
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
		void OnDialogSequenceFinished_25();
		void OnDialogSequenceFinished_24();
		void OnDialogSequenceFinished_23();
		void OnDialogSequenceFinished_22();
		void OnDialogSequenceFinished_21();
		void Set_TrackDownKiller(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TrackDownKiller(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_TrackDownKiller(class UObject* Context);
		void MCE_Update_HandLorelaiBackpack(class UObject* Context);
		void Set_CatchKiller(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_CatchKiller(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_HandLorelaiBackpack(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_HandLorelaiBackpack(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_KillerHitByTrain(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_KillerHitByTrain(class UObject* Context);
		void MCE_Update_TrackDownBackpack(class UObject* Context);
		void Obj_TrackDownBackpack(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_TrackDownBackpack(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_PickUpBackpack(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_PickUpBackpack(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_PickUpBackpack(class UObject* Context);
		void Obj_CombatZone1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_Combat1Gate2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_BetweenCombat(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_CombatZone2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_FinalGate(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_CombatZone1(class UObject* Context);
		void MCE_Update_Combat1Gate2(class UObject* Context);
		void MCE_Update_BetweenCombat(class UObject* Context);
		void MCE_Update_CombatZone2(class UObject* Context);
		void MCE_Update_FinalGate(class UObject* Context);
		void MCE_Update_DummyClue2(class UObject* Context);
		void Obj_DummyClue2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_MeetLorelai(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_MeetLorelai(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_MeetLorelai(class UObject* Context);
		void MCE_Update_Clue3(class UObject* Context);
		void MCE_Update_DummyClue1(class UObject* Context);
		void Obj_DummyClue1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_Clue3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_RealClueCounter(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_RealClueCounter(class UObject* Context);
		void MCE_Update_WalkToAptComplex(class UObject* Context);
		void Obj_WalkToAptComplex(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_WalkToAptComplex(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_Update_Witness2(class UObject* Context);
		void MCE_Update_Witness1(class UObject* Context);
		void Obj_Witness2_Inv(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_TalkToWitnesses2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TalkToWitnesses_Objective_PROXY();
		void Obj_DoorToCombat1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_DoorToCombat1(class UObject* Context);
		void Obj_ApartmentTrainSEQ_INV(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_ApartmentTrainSEQ_INV(class UObject* Context);
		void Obj_AvaPodcastIntro_INV(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_AvaPodcastIntro_INV(class UObject* Context);
		void Obj_ExamineBody_Hidden(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_ExamineBodyHidden(class UObject* Context);
		void Obj_Witness1_Inv(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_TrainSplat(class UObject* Context);
		void Obj_TrackDownKiller_Objective_PROXY_1();
		void Set_TrackDownKiller2_ChinatownDoor(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_Update_TurnIn(class UObject* Context);
		void MCE_Update_TalkToWitnesses(class UObject* Context);
		void Set_TrackDownKiller3_ChinatownCombat(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_Update_RecapWithLorelei(class UObject* Context);
		void MCE_Update_Clue2(class UObject* Context);
		void Set_TrackDownKiller4_ChinatownCombat(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_Update_Clue1(class UObject* Context);
		void MCE_Update_ExamineBody(class UObject* Context);
		void MCE_Update_FindClues(class UObject* Context);
		void Set_TrackDownKiller5_FinalGate(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TrackDownKiller_Objective_PROXY_2();
		void Obj_TrackDownKiller_Objective_PROXY_3();
		void Obj_TrackDownKiller_Objective_PROXY_4();
		void MCE_TrainStationTrigger(class UObject* Context);
		void Obj_Waypoint1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_Waypoint2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_Waypoint3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_Waypoint1(class UObject* Context);
		void MCE_Update_Waypoint2(class UObject* Context);
		void MCE_Update_Waypoint3(class UObject* Context);
		void Obj_Waypoint1_Objective_PROXY_5();
		void Obj_Waypoint3_Objective_PROXY_6();
		void Obj_Waypoint2_Objective_PROXY_7();
		void Obj_Waypoint1_Objective_PROXY_8();
		void Obj_Waypoint3_Objective_PROXY_9();
		void Obj_Waypoint2_Objective_PROXY_10();
		void Obj_Waypoint1_Objective_PROXY_11();
		void Obj_Waypoint3_Objective_PROXY_12();
		void Obj_Waypoint2_Objective_PROXY_13();
		void Obj_Waypoint1_Objective_PROXY_14();
		void Obj_Waypoint3_Objective_PROXY_15();
		void Obj_Waypoint2_Objective_PROXY_16();
		void Obj_Clue2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_Clue1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_FindClues(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_TurnIn(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_DoorToSlums(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_Waypoint1_Objective_PROXY_17();
		void Obj_Waypoint3_Objective_PROXY_18();
		void Obj_Waypoint2_Objective_PROXY_19();
		void Obj_TrackDownKiller_Objective_PROXY_20();
		void Obj_Barrier1_INV(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_Barrier2_INV(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_Barrier1(class UObject* Context);
		void MCE_Update_Barrier2(class UObject* Context);
		void Set_TurnIn(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TalkToWitnesses(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_TalkToWitnesses1(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_RecapWithLorelei(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_RecapWithLorelei(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ExamineBody(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_InvestigateCrimeScene(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_Update_GoToMap(class UObject* Context);
		void MissionKickoff();
		void Obj_GoToMap(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GoToMap(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void ExecuteUbergraph_Mission_Ixora_Main01(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
