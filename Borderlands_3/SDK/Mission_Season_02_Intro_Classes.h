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
	 * BlueprintGeneratedClass Mission_Season_02_Intro.Mission_Season_02_Intro_C
	 * Size -> 0x01E8 (FullSize[0x06F8] - InheritedSize[0x0510])
	 */
	class UMission_Season_02_Intro_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		int32_t                                                    LeagueObjectivesComplete;                                // 0x0518(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_75C7[0x4];                                   // 0x051C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjectiveSet*                                Set_FindMaurice_ObjSetVar;                               // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindMaurice_ObjVar;                                  // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_CollectCoordinates_Actual_ObjSetVar;                 // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillAssassin_ObjVar;                                 // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TalkToMauriceAgain_ObjSetVar;                        // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToMauriceAgain_ObjVar;                           // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToLeagueMap_ObjSetVar;                             // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToLeagueMap_ObjVar;                                // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PortalOpen_INV_ObjVar;                               // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ReachFrontGate_ObjSetVar;                            // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindBoss_ObjVar;                                     // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReachFrontGate_Inv_ObjVar;                           // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_CollectKey_ObjSetVar;                                // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_LocateKey_ObjVar;                                    // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindBoss_ObjSetVar;                                  // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TITLECARD_Boss_ObjSetVar;                            // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TITLECARD_Boss_ObjVar;                               // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillBoss_ObjSetVar;                                  // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillBoss_ObjVar;                                     // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_LeaveLeagueMap_ObjSetVar;                            // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_LeaveLeagueMap_ObjVar;                               // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TurnIn_ObjSetVar;                                    // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TurnIn_ObjVar;                                       // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindFirstInformant_ObjSetVar;                        // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindFirstInformant_ObjVar;                           // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_InvestigateScene_ObjVar;                             // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CollectCoordinates_ObjVar;                           // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CollectKey_ObjVar;                                   // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_AdvanceToAssassin_INV_ObjVar;                        // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CheckAssassinSpawned_ObjVar;                         // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_InvestigateStatue_ObjSetVar;                         // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_InvestigateStatue_ObjVar;                            // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_BringKeyToStatue_ObjSetVar;                          // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_BringKeyToStatue_ObjVar;                             // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_UseUberBoss_INV_ObjVar;                              // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_EnterMansion_ObjSetVar;                              // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EnterMansion_INV_ObjVar;                             // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CourtyardUnlock1_ObjVar;                             // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CourtyardUnlock2_ObjVar;                             // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CourtyardUnlock3_ObjVar;                             // 0x0658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_LockerWaypoint_INV_ObjVar;                           // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SpawnFirstInformant_ObjVar;                          // 0x0668(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EnterBallroom_INV_ObjVar;                            // 0x0670(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReturnToFountain_INV_ObjVar;                         // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_VO_Gate1_ObjVar;                                     // 0x0680(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_VO_Gate2_ObjVar;                                     // 0x0688(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ActivateStairSlide_ObjVar;                           // 0x0690(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindBoss_Waypoint_INV_ObjVar;                        // 0x0698(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_LocateKey_BC1_ObjVar;                                // 0x06A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ClearArea_ObjVar;                                    // 0x06A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_CollectKey_Initial_ObjSetVar;                        // 0x06B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ClearArea_ObjSetVar;                                 // 0x06B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SkipEnterBallroomObjSet_INV_ObjVar;                  // 0x06C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_LocateKey_BC2_ObjVar;                                // 0x06C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ClearArea_FrontDoor_ObjSetVar;                       // 0x06D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ClearArea_FrontDoor_ObjVar;                          // 0x06D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_EnterMansion_Actual_ObjSetVar;                       // 0x06E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EnterMansion_Actual_ObjVar;                          // 0x06E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PortalWaypoint_INV_ObjVar;                           // 0x06F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnDialogSequenceFinished_23();
		void OnDialogSequenceFinished_22();
		void OnDialogSequenceFinished_21();
		void OnDialogSequenceFinished_20();
		void OnDialogSequenceFinished_19();
		void OnDialogSequenceFinished_18();
		void OnDialogSequenceFinished_17();
		void OnDialogSequenceFinished_16();
		void OnDialogSequenceFinished_15();
		void OnDialogSequenceFinished_14();
		void OnDialogSequenceFinished_13();
		void MissionKickoff();
		void Set_FindMaurice(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindMaurice(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_FindMaurice(class UObject* Context);
		void MCE_Update_KillFirstInformant(class UObject* Context);
		void Set_CollectCoordinates_Actual(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_KillAssassin(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_KillAssassin(class UObject* Context);
		void Set_TalkToMauriceAgain(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TalkToMauriceAgain(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_TalkToMauriceAgain(class UObject* Context);
		void Set_GoToLeagueMap(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GoToLeagueMap(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_GoToLeagueMap(class UObject* Context);
		void Obj_LocateKey(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_LocateKey(class UObject* Context);
		void Set_KillBoss(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_KillBoss(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_KillBoss(class UObject* Context);
		void Set_TITLECARD_Boss(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TITLECARD_Boss(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_LeaveLeagueMap(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_LeaveLeagueMap(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_LeaveLeagueMap(class UObject* Context);
		void Set_TurnIn(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TurnIn(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_TurnIn(class UObject* Context);
		void Set_ReachFrontGate(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindBoss(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_FindBoss(class UObject* Context);
		void Set_CollectKey(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindBoss_Objective_PROXY();
		void Obj_ReachFrontGate_Inv(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_ReachFrontGate(class UObject* Context);
		void Obj_PortalOpen_INV(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_PortalOpen_INV(class UObject* Context);
		void Obj_PortalOpen_INV_Objective_PROXY_1();
		void Set_FindBoss(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_FindFirstInformant(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindFirstInformant(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_InvestigateScene(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_InvestigateScene(class UObject* Context);
		void Obj_CollectCoordinates(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_CollectCoordinates(class UObject* Context);
		void Obj_CollectKey(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_CollectKey(class UObject* Context);
		void Obj_AdvanceToAssassin_INV(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_AdvanceToAssassin_INV(class UObject* Context);
		void Obj_CheckAssassinSpawned(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_CheckAssassinSpawned(class UObject* Context);
		void Set_InvestigateStatue(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindBoss_Objective_PROXY_2();
		void MCE_Update_InvestigateStatue(class UObject* Context);
		void Obj_InvestigateStatue(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_SkipStatue(class UObject* Context);
		void Set_BringKeyToStatue(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_BringKeyToStatue(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_BringKeyToStatue(class UObject* Context);
		void Obj_PortalOpen_INV_Objective_PROXY_3();
		void Obj_PortalOpen_INV_Objective_PROXY_4();
		void Obj_PortalOpen_INV_Objective_PROXY_5();
		void Obj_PortalOpen_INV_Objective_PROXY_6();
		void Obj_PortalOpen_INV_Objective_PROXY_7();
		void Obj_PortalOpen_INV_Objective_PROXY_8();
		void Obj_PortalOpen_INV_Objective_PROXY_9();
		void Obj_UseUberBoss_INV(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_UseUberBoss_INV(class UObject* Context);
		void Set_EnterMansion(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindBoss_Objective_PROXY_10();
		void Obj_EnterMansion_INV(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_EnterMansion_INV(class UObject* Context);
		void Obj_CourtyardUnlock1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_CourtyardUnlock2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_CourtyardUnlock1(class UObject* Context);
		void MCE_Update_CourtyardUnlock2(class UObject* Context);
		void Obj_CourtyardUnlock3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_CourtyardUnlock3(class UObject* Context);
		void Obj_LockerWaypoint_INV(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_LockerWaypoint_INV(class UObject* Context);
		void Obj_SpawnFirstInformant(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_SpawnFirstInformant(class UObject* Context);
		void Obj_EnterBallroom_INV(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_EnterBallroom_INV(class UObject* Context);
		void Obj_ReturnToFountain_INV(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_ReturnToFountain_INV(class UObject* Context);
		void Obj_VO_Gate1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_VO_Gate1(class UObject* Context);
		void Obj_VO_Gate2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_VO_Gate2(class UObject* Context);
		void Obj_ActivateStairSlide(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_ActivateStairSlide(class UObject* Context);
		void Obj_FindBoss_Waypoint_INV(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_FindBoss_Waypoint_INV(class UObject* Context);
		void Obj_PortalOpen_INV_Objective_PROXY_11();
		void Obj_LocateKey_BC1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_LocateKey_BC1(class UObject* Context);
		void Obj_ClearArea(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_ClearArea(class UObject* Context);
		void Set_ClearArea(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_CollectKey_Initial(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_CollectKey_Objective_PROXY_12();
		void Obj_SkipEnterBallroomObjSet_INV(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_SkipEnterBallroomObjSet_INV(class UObject* Context);
		void Obj_LocateKey_BC1_Objective_PROXY_13();
		void Obj_LocateKey_BC2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_LocateKey_BC2(class UObject* Context);
		void Obj_PortalOpen_INV_Objective_PROXY_14();
		void Obj_PortalOpen_INV_Objective_PROXY_15();
		void MCE_MauriceGiveTake_Cartels(class UObject* Context);
		void Obj_ClearArea_FrontDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_ClearArea_FrontDoor(class UObject* Context);
		void Obj_EnterMansion_Actual(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_EnterMansion_Actual(class UObject* Context);
		void Set_ClearArea_FrontDoor(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_EnterMansion_Actual(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindBoss_Objective_PROXY_16();
		void Obj_PortalOpen_INV_Objective_PROXY_17();
		void Obj_PortalOpen_INV_Objective_PROXY_18();
		void Obj_PortalWaypoint_INV(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_PortalWaypoint_INV(class UObject* Context);
		void ExecuteUbergraph_Mission_Season_02_Intro(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
