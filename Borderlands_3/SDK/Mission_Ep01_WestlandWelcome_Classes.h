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
	 * BlueprintGeneratedClass Mission_Ep01_WestlandWelcome.Mission_Ep01_WestlandWelcome_C
	 * Size -> 0x0248 (FullSize[0x0740] - InheritedSize[0x04F8])
	 */
	class UMission_Ep01_WestlandWelcome_C : public UOakMission
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04F8(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                SET_EnterWestTown_EncounterRose_ObjSetVar;               // 0x0500(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_TalkToStrangerRose_ObjSetVar;                        // 0x0508(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_TalkToStrangerROse_ObjVar;                           // 0x0510(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FollowRose_ObjSetVar;                                // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_FollowRose_ObjVar;                                   // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_BreakUpStandOff_ObjSetVar;                           // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_BreakUpStandOff_ObjVar;                              // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_GoToSaloon_ObjSetVar;                                // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_GoToSaloon_ObjVar;                                   // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_PunchBackTalker_ObjSetVar;                           // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_PunchBackTalker_ObjVar;                              // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_WinBarFight_ObjSetVar;                               // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_WinBarFight_ObjVar;                                  // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_StopSlagtooths_ObjSetVar;                            // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_StopSlagtooths_ObjVar;                               // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_TitleCard_Rose_ObjSetVar;                            // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_TitleCard_Rose_ObjVar;                               // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_TalkToSheriff_ObjSetVar;                             // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_TalkToSheriff_ObjVar;                                // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_TakeSheriffBadge_ObjSetVar;                          // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_TakeSheriffBadge_ObjVar;                             // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_EnterTown_EnterTown_ObjSetVar;                       // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_FindSinger_ObjSetVar;                                // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_FindSinger_ObjVar;                                   // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_EnterWestTown_ObjVar;                                // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_KillStampede_ObjSetVar;                              // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_KillStampede_ObjVar;                                 // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_FollowRose2_ObjSetVar;                               // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_FollowRose2_ObjVar;                                  // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_AskBartenderAboutRose_ObjSetVar;                     // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_ShootPiano_ObjVar;                                   // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_AskBartenderAboutRose_ObjVar;                        // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_FollowSheriffToStone_ObjSetVar;                      // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_TalkedToBartender_ObjSetVar;                         // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_ShotPiano_ObjSetVar;                                 // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_FollowSheriffToBullies_ObjSetVar;                    // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_FollowSheriffToBullies_ObjVar;                       // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_FollowSheriff_ObjVar;                                // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_MeetSheriff_ObjVar;                                  // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_TalkToTitus_ObjSetVar;                               // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_TalkToTitus_ObjVar;                                  // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_MeetSheriff_ObjSetVar;                               // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_DefendMarket_ObjSetVar;                              // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_DefendMarket_ObjVar;                                 // 0x0658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_ReturnToSheriff_ObjSetVar;                           // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_ReturnToSheriff_ObjVar;                              // 0x0668(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_KillSaurians2_ObjSetVar;                             // 0x0670(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_KillSaurians2_ObjVar;                                // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_FollowRose3_ObjSetVar;                               // 0x0680(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_FollowRose3_ObjVar;                                  // 0x0688(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJINVIS_OpenMineGate_ObjVar;                            // 0x0690(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_CheckOnToge_ObjSetVar;                               // 0x0698(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_CheckOnToge_ObjVar;                                  // 0x06A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_KillSaurians3_ObjSetVar;                             // 0x06A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_KillSaurians3_ObjVar;                                // 0x06B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_RoseKillsToge_ObjSetVar;                             // 0x06B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_RoseKillsToge_ObjVar;                                // 0x06C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INVISOBJ_HearWhistling_ObjVar;                           // 0x06C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Navigate_DLC3Planet_ObjSetVar;                       // 0x06D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Navigate_DLC3Planet_ObjVar;                          // 0x06D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_UseDropPod_ObjSetVar;                                // 0x06E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReNavigate_DLC3Planet_ObjVar;                        // 0x06E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_UseDropPod_ObjVar;                                   // 0x06F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 ConversationBarArgument;                                 // 0x06F8(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_3ZO8[0x4];                                   // 0x0704(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjectiveSet*                                SET_DLC3PlanetTC_ObjSetVar;                              // 0x0708(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJINVIS_DLC3PlanetTC_ObjVar;                            // 0x0710(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Invs_EndBarFight_ObjVar;                                 // 0x0718(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 PreBrawlDialog;                                          // 0x0720(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_AJ1L[0x4];                                   // 0x072C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjective*                                   OBJ_OptionalPunchPatrons_ObjVar;                         // 0x0730(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJInvis_RingBell_ObjVar;                                // 0x0738(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
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
		void OnDialogSequenceFinished_32();
		void OnDialogSequenceFinished_31();
		void OnDialogSequenceFinished_30();
		void OnDialogSequenceFinished_29();
		void SET_StopSlagtooths(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_TitleCard_Rose(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_TitleCard_Rose(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_TalkToSheriff(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_TalkToSheriff(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_TakeSheriffBadge(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_TakeSheriffBadge(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_EnterTown_EnterTown(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_TalkToStrangerRose(class UObject* Context);
		void Update_FollowRose(class UObject* Context);
		void Update_EnterTown(class UObject* Context);
		void Update_BreakUpStandOff(class UObject* Context);
		void Update_GoToSaloon(class UObject* Context);
		void Update_WinBarFight(class UObject* Context);
		void Update_StopSlagtooths(class UObject* Context);
		void Update_TitleCard_Rose(class UObject* Context);
		void Update_TalkToSheriff(class UObject* Context);
		void Update_TakeSheriffBadge(class UObject* Context);
		void OBJ_StopSlagtooths(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_WinBarFight(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_WinBarFight(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_PunchBackTalker(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_FindSinger(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_FindSinger(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Advance_FindSinger(class UObject* Context);
		void OBJ_EnterWestTown(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_EnterWestTown_Objective_PROXY();
		void OBJ_EnterWestTown_Objective_PROXY_1();
		void OBJ_EnterWestTown_Objective_PROXY_2();
		void OBJ_EnterWestTown_Objective_PROXY_3();
		void Update_FindSinger(class UObject* Context);
		void OBJ_KillStampede(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_KillStampede(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_KillStampede(class UObject* Context);
		void SET_FollowRose2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_FollowRose2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_EnterWestTown_Objective_PROXY_4();
		void Update_FollowRose2(class UObject* Context);
		void OBJ_EnterWestTown_Objective_PROXY_5();
		void OBJ_PunchBackTalker(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_GoToSaloon(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_AskBartenderAboutRose(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_ShootPiano(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_AskBartenderAboutRose(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_AskBartenderAboutRose(class UObject* Context);
		void Update_ShootPiano(class UObject* Context);
		void SET_FollowSheriffToStone(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_PunchBackTalker(class UObject* Context);
		void AdvanceTo_BreakUpStandOff(class UObject* Context);
		void SET_TalkedToBartender(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_ShotPiano(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_AskBartenderAboutRose_Objective_PROXY_6();
		void OBJ_ShootPiano_Objective_PROXY_7();
		void SET_FollowSheriffToBullies(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_FollowSheriffToBullies(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_FollowSheriff(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_FollowSheriffToBullies(class UObject* Context);
		void OBJ_MeetSheriff(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_MeetSheriff(class UObject* Context);
		void Update_FollowSheriff(class UObject* Context);
		void Advance_GoToSaloon(class UObject* Context);
		void SET_TalkToTitus(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_TalkToTitus(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_TalkToTitus(class UObject* Context);
		void Set_FollowRose(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_MeetSheriff(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_DefendMarket(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_DefendMarket(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_DefendMarket(class UObject* Context);
		void SET_ReturnToSheriff(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_ReturnToSheriff(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void AdvanceTo_TitleCard_Rose(class UObject* Context);
		void SET_KillSaurians2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_KillSaurians2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_KillSaurians2(class UObject* Context);
		void OBJ_EnterWestTown_Objective_PROXY_8();
		void SET_FollowRose3(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_FollowRose3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_FollowRose3(class UObject* Context);
		void OBJ_EnterWestTown_Objective_PROXY_9();
		void AdvanceTo_StopSlagtooths(class UObject* Context);
		void Advance_FollowRose3(class UObject* Context);
		void Advance_EnterTown(class UObject* Context);
		void OBJINVIS_OpenMineGate(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_OpenMineGate(class UObject* Context);
		void SET_CheckOnToge(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_CheckOnToge(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_CheckOnToge(class UObject* Context);
		void AdvanceTo_KillBadassSaurian(class UObject* Context);
		void SET_KillSaurians3(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_KillSaurians3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_KillSaurians3(class UObject* Context);
		void OBJ_EnterWestTown_Objective_PROXY_10();
		void OBJ_EnterWestTown_Objective_PROXY_11();
		void Advance_CheckOnToge(class UObject* Context);
		void SET_RoseKillsToge(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_RoseKillsToge(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_RoseKillsToge(class UObject* Context);
		void OBJ_EnterWestTown_Objective_PROXY_12();
		void Advance_RoseKillsToge(class UObject* Context);
		void INVISOBJ_HearWhistling(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_INVISHearWhistling(class UObject* Context);
		void Set_Navigate_DLC3Planet(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_Navigate_DLC3Planet(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_Navigate_DLC3Planet(class UObject* Context);
		void Set_UseDropPod(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_GoToSaloon(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_BreakUpStandOff(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_ReNavigate_DLC3Planet(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_ReNavigate_DLC3Planet(class UObject* Context);
		void Obj_UseDropPod(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ADVANCE_Navigate_DLC3Planet(class UObject* Context);
		void SET_BreakUpStandOff(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_TalkToStrangerRose(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void AdvanceTo_DefendMarket(class UObject* Context);
		void AdvanceTo_FollowSheriffToStone(class UObject* Context);
		void SET_DLC3PlanetTC(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJINVIS_DLC3PlanetTC(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Advance_DLC3PlanetTC(class UObject* Context);
		void OBJ_TalkToStrangerRose(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void AdvanceTo_TalkToStranger(class UObject* Context);
		void SET_EnterWestTown_EncounterRose(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_FollowRose(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Advance_PunchBackTalker(class UObject* Context);
		void Invs_EndBarFight(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_EndBarFight(class UObject* Context);
		void NarratorVO_ApproachingSaloon(class UObject* Context);
		void OBJ_OptionalPunchPatrons(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_punchPatrons(class UObject* Context);
		void OBJInvis_RingBell(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void StartRingingBell(class UObject* Context);
		void ExecuteUbergraph_Mission_Ep01_WestlandWelcome(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
