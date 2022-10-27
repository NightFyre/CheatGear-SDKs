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
	 * BlueprintGeneratedClass Mission_RumbleJungle.Mission_RumbleJungle_C
	 * Size -> 0x02C8 (FullSize[0x07D8] - InheritedSize[0x0510])
	 */
	class UMission_RumbleJungle_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_ClearJabberInfestation_ObjSetVar;                    // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ClearJabberInfestation_ObjVar;                       // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FreeFailurebot_ObjSetVar;                            // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FreeFailurebot_ObjVar;                               // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                ObjSet_TalkToKing_ObjSetVar;                             // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToKing_ObjVar;                                   // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                ObjSet_ArenaFight_KillQueen_ObjSetVar;                   // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ArenaFight_KillKing_ObjVar;                          // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TalkToRobot_ObjSetVar;                               // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToRobot_ObjVar;                                  // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_SearchClues_ObjSetVar;                               // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SearchClues_ObjVar;                                  // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindLab_ObjSetVar;                                   // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindLab_ObjVar;                                      // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillDinos_ObjSetVar;                                 // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillDinos_ObjVar;                                    // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                ObjSet_QuestionApes_ObjSetVar;                           // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_QuestionApes_ObjVar;                                 // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TalkToSaurian_ObjSetVar;                             // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToSaurian_ObjVar;                                // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillDinos2_ObjSetVar;                                // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillDinos2_ObjVar;                                   // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                ObjSet_ReturnToOutpost_ObjSetVar;                        // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToArena_ObjVar;                                    // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                ObjSet_CompleteTrials_ObjSetVar;                         // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindScientists_GrabECHO_ObjSetVar;                   // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindScientists_GrabECHO_ObjVar;                      // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_CollectEchoApes2_ObjSetVar;                          // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CollectEchoApes2_ObjVar;                             // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_CollecEchoLab1_ObjSetVar;                            // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CollectEchoLab1_ObjVar;                              // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_EnterLab_ObjSetVar;                                  // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EnterLab_ObjVar;                                     // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_BreakLock_ObjSetVar;                                 // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_BreakLock_ObjVar;                                    // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UObject*                                             PlayerContextVar;                                        // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FollowFailurebot_ExitDoor_ObjVar;                    // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 Dialog_FailBotWaterWheel;                                // 0x0640(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5KAY[0x4];                                   // 0x064C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjective*                                   Obj_INV_EnterLab_SpawnSaurian_ObjVar;                    // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ArenaFight_KillQueen_ObjVar;                         // 0x0658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_MoveSaurianBack_ObjVar;                          // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_EnterLab_Door_ObjVar;                            // 0x0668(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_CollectEchoLab_Cage_ObjVar;                          // 0x0670(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CheckOutpost_ObjVar;                                 // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_CheckOutpost_ObjSetVar;                              // 0x0680(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DoorBustOpen_Invis_ObjVar;                           // 0x0688(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_JabberInfestation_1_Invis_ObjVar;                    // 0x0690(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_JabberInfestation_2_Invis_ObjVar;                    // 0x0698(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_JabberInfestation_3_Invis__ObjVar;                   // 0x06A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FollowFailurebot_ObjSetVar;                          // 0x06A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FollowFailurebot_ObjVar;                             // 0x06B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FollowFailurebot_Invis_ObjVar;                       // 0x06B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FailurebotSpawned_Invis_ObjVar;                      // 0x06C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FollowFailurebot_ExitDoor_ObjSetVar;                 // 0x06C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindScientists_ObjSetVar;                            // 0x06D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindDeadScientists_ObjVar;                           // 0x06D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CompleteTrials_Global_ObjVar;                        // 0x06E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                ObjSet_CompleteTrials_Trial1_ObjSetVar;                  // 0x06E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CompleteTrials_Trial1_ObjVar;                        // 0x06F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                ObjSet_CompleteTrials_Trial2_ObjSetVar;                  // 0x06F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                ObjSet_CompleteTrials_Trial3_ObjSetVar;                  // 0x0700(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CompleteTrials_Trial2_ObjVar;                        // 0x0708(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CompleteTrials_Trial3_ObjVar;                        // 0x0710(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CompleteTrials_Trial3_BranchA_Invis_ObjVar;          // 0x0718(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CompleteTrials_Trial3_BranchB_Invis_ObjVar;          // 0x0720(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CompleteTrials_Trial3_ReachedJumpArea_ObjVar;        // 0x0728(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                ObjSet_CompleteTrials_Trial3_JumpIn_ObjSetVar;           // 0x0730(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CompleteTrials_Trial3_JumpIn_ObjVar;                 // 0x0738(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CompleteTrials_Trial2_Area2_Invis_ObjVar;            // 0x0740(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CompleteTrials_Trial2_Area1_Invis_ObjVar;            // 0x0748(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CompleteTrials_Trial2_Tracker_Invis_ObjVar;          // 0x0750(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SearchClues_HouseDoor_Invis_ObjVar;                  // 0x0758(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                ObjSet_IssueChallengeToQueen_ObjSetVar;                  // 0x0760(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_IssueChallengeToQueen_ObjVar;                        // 0x0768(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToArena_Breadcrumb_1_ObjVar;                       // 0x0770(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToArena_Breadcrumb_2_ObjVar;                       // 0x0778(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReturnToScienceOutpost_ObjVar;                       // 0x0780(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToArena_Tracker_INvis_ObjVar;                      // 0x0788(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                ObjSet_ArenaFight_KillKing_ObjSetVar;                    // 0x0790(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ArenaFight_OnLoad_Invis_ObjVar;                      // 0x0798(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ArenaFight_King_OnLoad_Invis_ObjVar;                 // 0x07A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ArenaFight_ObjectiveTracker_Invis_ObjVar;            // 0x07A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_VisitBoboAreaForEcho_Invis_ObjVar;                   // 0x07B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                ObjSet_EnterArena_ObjSetVar;                             // 0x07B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_OpenQueenBackDoor_Invis_ObjVar;                      // 0x07C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                ObjSet_CompleteTrials_Trial3_ReachPlatform_ObjSetVar;    // 0x07C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CompleteTrials_Trial3_GoToPlatform_ObjVar;           // 0x07D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnDialogSequenceFinished_63();
		void OnDialogSequenceFinished_62();
		void OnDialogSequenceFinished_61();
		void OnDialogSequenceFinished_60();
		void OnDialogSequenceFinished_59();
		void OnDialogSequenceFinished_58();
		void OnDialogSequenceFinished_57();
		void OnDialogSequenceFinished_56();
		void OnDialogSequenceFinished_55();
		void OnDialogSequenceFinished_54();
		void OnDialogSequenceFinished_53();
		void OnDialogSequenceFinished_52();
		void OnDialogSequenceFinished_51();
		void OnDialogSequenceFinished_50();
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
		void Set_ClearJabberInfestation(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_ClearJabberInfestation(class UObject* Context);
		void Obj_ClearJabberInfestation(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_FreeFailurebot(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_FreeFailurebot(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_FreeFailurebot(class UObject* Context);
		void Set_FindScientists(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_MeetRobot_OpenCage(class UObject* Context);
		void Obj_FindDeadScientists(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_TalkToKing(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ObjSet_TalkToKing(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void UpdateTalkToKing(class UObject* Context);
		void ObjSet_ArenaFight_KillQueen(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ArenaFight_KillKing(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_TalkToRobot(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void UpdateTalkToRobot(class UObject* Context);
		void Obj_TalkToRobot(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_SearchClues(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_SearchClues(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindLab(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_FindLab(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void UpdateFindLab(class UObject* Context);
		void Obj_KillDinos(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_KillDinos(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void UpdateKillDinos(class UObject* Context);
		void Obj_QuestionApes(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ObjSet_QuestionApes(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_QuestionApes(class UObject* Context);
		void Obj_TalkToSaurian(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_TalkToSaurian(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void UpdateTalkToSaurian(class UObject* Context);
		void Obj_KillDinos2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_KillDinos2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void UpdateKillDinos2(class UObject* Context);
		void Obj_GoToArena(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ObjSet_ReturnToOutpost(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_GoToArena(class UObject* Context);
		void ObjSet_CompleteTrials(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_FindScientists_GrabECHO(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void UpdateCollectEchoApes1(class UObject* Context);
		void Obj_FindScientists_GrabECHO(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_CollectEchoApes2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_CollectEchoApes2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void UpdateColectEchoApes2(class UObject* Context);
		void Obj_CollectEchoLab1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_CollecEchoLab1(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void UpdateCollectEchoLab1(class UObject* Context);
		void Set_EnterLab(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_EnterLab(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UpdateEnterLab(class UObject* Context);
		void Obj_BreakLock(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_BreakLock(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void UpdateBreakLock(class UObject* Context);
		void Obj_FollowFailurebot_ExitDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_MeetRobot_ExitDoor(class UObject* Context);
		void Obj_INV_EnterLab_SpawnSaurian(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UpdateINVEnterLab_SpawnSaurian(class UObject* Context);
		void Obj_ArenaFight_KillQueen(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UpdateINVMoveSaurianBack(class UObject* Context);
		void Obj_INV_MoveSaurianBack(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_EnterLab_Door(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UpdateINV_EnterLabDoor(class UObject* Context);
		void Update_EchoLabCage(class UObject* Context);
		void INV_CollectEchoLab_Cage(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_CheckOutpost(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_CheckOutpost(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_CheckOutpost(class UObject* Context);
		void Obj_DoorBustOpen_Invis(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_DoorBustOpen(class UObject* Context);
		void JabberInfestationCleared();
		void Obj_JabberInfestation_1_Invis(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_JabberInfestation_2_Invis(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_JabberInfestation_3_Invis_(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_JabberInfest_2(class UObject* Context);
		void Update_JabberInfest_4(class UObject* Context);
		void Update_JabberInfest_3(class UObject* Context);
		void Obj_ClearJabberInfestation_Objective_PROXY();
		void Obj_JabberInfestation_1_Invis_Objective_PROXY_1();
		void Obj_JabberInfestation_2_Invis_Objective_PROXY_2();
		void Obj_JabberInfestation_3_Invis__Objective_PROXY_3();
		void Set_FollowFailurebot(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FollowFailurebot(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_FollowFailurebot_Invis(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_FailurebotSpawned_Invis(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_FailurebotSpawned(class UObject* Context);
		void Set_FollowFailurebot_ExitDoor(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FollowFailurebot_Objective_PROXY_4();
		void Obj_FollowFailurebot_Invis_Objective_PROXY_5();
		void Update_FollowFailurebot(class UObject* Context);
		void Obj_FindDeadScientists_Objective_PROXY_6();
		void Obj_CompleteTrials_Global(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ObjSet_CompleteTrials_Trial1(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_CompleteTrials_Global_Objective_PROXY_7();
		void Obj_CompleteTrials_Trial1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ObjSet_CompleteTrials_Trial2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void ObjSet_CompleteTrials_Trial3(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_CompleteTrials_Trial2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_CompleteTrials_Trial3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_CompleteTrials_Global_Objective_PROXY_8();
		void Obj_CompleteTrials_Global_Objective_PROXY_9();
		void Update_CompleteTrial_2(class UObject* Context);
		void Obj_CompleteTrials_Trial3_BranchA_Invis(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_CompleteTrials_Trial3_BranchB_Invis(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_CompleteTrial_3(class UObject* Context);
		void Obj_CompleteTrials_Trial3_ReachedJumpArea(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_CompleteTrial3_JumpPointReached(class UObject* Context);
		void ObjSet_CompleteTrials_Trial3_JumpIn(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_CompleteTrials_Global_Objective_PROXY_10();
		void Obj_CompleteTrials_Trial3_Objective_PROXY_11();
		void Obj_CompleteTrials_Trial3_JumpIn(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_CompleteTrial3_PlayerJumped(class UObject* Context);
		void Timer_Trial3Jump();
		void Obj_CompleteTrials_Trial2_Area1_Invis(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_CompleteTrials_Trial2_Area2_Invis(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_CompleteTrial_2_Area1(class UObject* Context);
		void Update_CompleteTrial_2_Area2(class UObject* Context);
		void Obj_CompleteTrials_Trial2_Tracker_Invis(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_OnActiveLoadBoboSpitTrigger(class UObject* Context);
		void Obj_SearchClues_HouseDoor_Invis(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_SearchClues_HouseDoor(class UObject* Context);
		void ObjSet_IssueChallengeToQueen(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_IssueChallengeToQueen(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_IssueChallengeToQueen(class UObject* Context);
		void Obj_GoToArena_Breadcrumb_2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_GoToArena_Breadcrumb_2(class UObject* Context);
		void Obj_GoToArena_Breadcrumb_3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_GoToArena_Breadcrumb_3(class UObject* Context);
		void Obj_ReturnToScienceOutpost(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_GoToArena_SpokeToFailureBot(class UObject* Context);
		void Obj_GoToArena_Tracker_Invis(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_FailurebotReachedArena(class UObject* Context);
		void Update_PickedUpCageECHO(class UObject* Context);
		void Update_ReachedJumpPoint(class UObject* Context);
		void Update_CompleteTrials_StartJumpTimer(class UObject* Context);
		void ObjSet_ArenaFight_KillKing(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ArenaFight_KillQueen_Objective_PROXY_12();
		void Update_ArenaFight_QueenSpawned(class UObject* Context);
		void Update_ArenaFight_KingSpawned(class UObject* Context);
		void Update_ArenaFight_OnLoad(class UObject* Context);
		void Obj_ArenaFight_OnLoad_Invis(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_ArenaFight_King_OnLoad_Invis(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_ArenaFight_King_OnLoad(class UObject* Context);
		void Obj_ArenaFight_ObjectiveTracker_Invis(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_VisitBoboAreaForEcho_Invis(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_PickedUpBoboECHO(class UObject* Context);
		void Update_PickedUpLabECHO(class UObject* Context);
		void ObjSet_EnterArena(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_OpenQueenBackDoor_Invis(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ObjSet_CompleteTrials_Trial3_ReachPlatform(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_CompleteTrials_Global_Objective_PROXY_13();
		void Obj_CompleteTrials_Trial3_Objective_PROXY_14();
		void Obj_CompleteTrials_Trial3_GoToPlatform(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ExecuteUbergraph_Mission_RumbleJungle(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
