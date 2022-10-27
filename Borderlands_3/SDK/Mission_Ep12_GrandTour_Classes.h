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
	 * BlueprintGeneratedClass Mission_Ep12_GrandTour.Mission_Ep12_GrandTour_C
	 * Size -> 0x0218 (FullSize[0x0728] - InheritedSize[0x0510])
	 */
	class UMission_Ep12_GrandTour_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_MeetWainwright_ObjSetVar;                            // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_AwaitAurelia_ObjSetVar;                              // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_AwaitAurelia_ObjVar;                                 // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_HeadToTheater_ObjSetVar;                             // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_HeadToTheater_ObjVar;                                // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_HeadToBooth_ObjSetVar;                               // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_HeadToBooth_ObjVar;                                  // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_OpenTrapDoor_ObjSetVar;                              // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_OpenTrapDoor_ObjVar;                                 // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_EnterSecretRoom_ObjSetVar;                           // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EnterSecretRoom_ObjVar;                              // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindItem_ObjSetVar;                                  // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindItem_ObjVar;                                     // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TroyTitleCard_ObjSetVar;                             // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MeetWainwright_ObjVar;                               // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_BCHeadToEstate_ObjSetVar;                            // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillBoss_ObjSetVar;                                  // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillBoss_ObjVar;                                     // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_RingDoorbell_ObjSetVar;                              // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_RingDoorbell_ObjVar;                                 // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TakeItem_ObjSetVar;                                  // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TakeItem_ObjVar;                                     // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_AureliaTalk_ObjVar;                                  // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_BCStairs_ObjVar;                                     // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_BCCornerHallway_ObjVar;                              // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ExitThroughCellar_ObjSetVar;                         // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ExitThroughSecretCellar_ObjVar;                      // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TroyMonologue_ObjVar;                                // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ReturnToWainWright_ObjSetVar;                        // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReturnToWainwright_ObjVar;                           // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_AddDiscToRecorder_ObjSetVar;                         // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlaceDiscIntoRecorder_ObjVar;                        // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ReturnToWetlands_ObjSetVar;                          // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReturnToWetlands_ObjVar;                             // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_BCBridge_ObjVar;                                     // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_BCElevator_ObjVar;                                   // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_HeadToEstate_ObjVar;                                 // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_HeadToEstate_ObjSetVar;                              // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_RideLift_ObjSetVar;                                  // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_RideLift_ObjVar;                                     // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_SurviveAmbush_ObjSetVar;                             // 0x0658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SurviveAmbush_ObjVar;                                // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ExitLodgeArea_ObjVar;                                // 0x0668(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ArriveAtMansion_ObjVar;                              // 0x0670(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EnterCOVVillage_ObjVar;                              // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EnterTreeUnderpass_ObjVar;                           // 0x0680(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_AureliaShout_ObjVar;                                 // 0x0688(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_AlmostAtTheater_ObjVar;                              // 0x0690(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ActivatePuzzle_ObjVar;                               // 0x0698(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_WainTalkElevator_ObjVar;                             // 0x06A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_BTeamShout1_ObjVar;                                  // 0x06A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_BTeamTalk2_ObjVar;                                   // 0x06B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_AnnointedTC_ObjSetVar;                               // 0x06B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_AnnointedTC_ObjVar;                                  // 0x06C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_BCBooth_ObjVar;                                      // 0x06C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_BoothSpawnEnemy_ObjSetVar;                           // 0x06D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SpawnAnnointed_ObjVar;                               // 0x06D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_BCCellar_ObjVar;                                     // 0x06E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ExitCellar_ObjVar;                                   // 0x06E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CallDownElevator_ObjVar;                             // 0x06F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FakeObjective_ObjVar;                                // 0x06F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 AureliaRichTaunt;                                        // 0x0700(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2SV1[0x4];                                   // 0x070C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjective*                                   Obj_LiftUp_ObjVar;                                       // 0x0710(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SpawnGoliath_ObjVar;                                 // 0x0718(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SpeedRunStrate_ObjVar;                               // 0x0720(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
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
		void OnDialogSequenceFinished_20();
		void MCE_Player_buzzes_in_at_the_estate(class UObject* Context);
		void Update_PlayersInParlor(class UObject* Context);
		void MCE_Player_arrives_in_the_theater(class UObject* Context);
		void MCE_Player_arrives_in_the_theater_control_booth(class UObject* Context);
		void MCE_Player_opens_the_trap_door(class UObject* Context);
		void MCE_Player_has_entered_the_secret_room(class UObject* Context);
		void MCE_Player_has_found_the_secret_item(class UObject* Context);
		void Set_TroyTitleCard(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_Trigger_Head_to_theater_objective(class UObject* Context);
		void Obj_MeetWainwright(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_BCHeadToEstate(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_TalksToWainwright(class UObject* Context);
		void Set_KillBoss(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_KillBoss(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_RingDoorbell(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_RingDoorbell(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_TakeItem(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TakeItem(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_AureliaTalk(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_AureliaHoloDespawned(class UObject* Context);
		void Obj_BCStairs(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_BCStairs(class UObject* Context);
		void MCE_BCCornerHallway(class UObject* Context);
		void Obj_BCCornerHallway(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ExitThroughCellar(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ExitThroughSecretCellar(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_FoundSecretCellar(class UObject* Context);
		void Obj_TroyMonologue(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ReturnToWainWright(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ReturnToWainwright(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_ReturnedToWainwright(class UObject* Context);
		void Set_AddDiscToRecorder(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_PlaceDiscIntoRecorder(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_AddedDisc(class UObject* Context);
		void Update_PickUpDisc(class UObject* Context);
		void Set_ReturnToWetlands(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ReturnToWetlands(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_ArrivedAtWetlands(class UObject* Context);
		void Obj_BCBridge(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_BCBridge(class UObject* Context);
		void Obj_BCElevator(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_BCElevator(class UObject* Context);
		void Set_HeadToEstate(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_HeadToEstate(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerArrivesAtEstate(class UObject* Context);
		void Obj_HeadToEstate_Objective_PROXY();
		void Set_RideLift(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_TookLift(class UObject* Context);
		void Obj_RideLift(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_HeadToEstate_Objective_PROXY_1();
		void Set_SurviveAmbush(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_SurviveAmbush(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_SurvivedAmbush(class UObject* Context);
		void Obj_ExitLodgeArea(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_ExitedLodgeArea(class UObject* Context);
		void Set_MeetWainwright(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ArriveAtMansion(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_ArrivedAtMansion(class UObject* Context);
		void Obj_EnterCOVVillage(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_EnteredCOVVillage(class UObject* Context);
		void Obj_EnterTreeUnderpass(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_EnteredTreeUnderpass(class UObject* Context);
		void Obj_AureliaShout(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void AureliaShout(class UObject* Context);
		void Obj_FindItem(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_FindItem(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_AlmostAtTheater(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void AlmostAtTheater(class UObject* Context);
		void Obj_ActivatePuzzle(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_ActivatePuzzle(class UObject* Context);
		void Obj_WainTalkElevator(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void WainElevatorArrivalChat(class UObject* Context);
		void Obj_BTeamShout1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void BteamShout1(class UObject* Context);
		void Obj_EnterSecretRoom(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_EnterSecretRoom(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_OpenTrapDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_BTeamTalk2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void BteamTalk2(class UObject* Context);
		void Set_AnnointedTC(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_AnnointedTC(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_AnnointedTitleCard(class UObject* Context);
		void Set_OpenTrapDoor(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_BCBooth(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_BCBooth(class UObject* Context);
		void Obj_SpawnAnnointed(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_EnteredSpawnArea(class UObject* Context);
		void Set_BoothSpawnEnemy(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_HeadToBooth(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_BCCellar(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_BCCellar(class UObject* Context);
		void Set_HeadToBooth(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ExitCellar(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_ExitCellar(class UObject* Context);
		void Obj_HeadToTheater(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_HeadToTheater(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_CallDownElevator(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_CalledElevator(class UObject* Context);
		void Obj_AwaitAurelia(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_AwaitAurelia(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindItem_Objective_PROXY_2();
		void Obj_FindItem_Objective_PROXY_3();
		void Obj_FindItem_Objective_PROXY_4();
		void Obj_FindItem_Objective_PROXY_5();
		void Obj_FindItem_Objective_PROXY_6();
		void Obj_FindItem_Objective_PROXY_7();
		void Obj_FindItem_Objective_PROXY_8();
		void Obj_FindItem_Objective_PROXY_9();
		void Obj_FindItem_Objective_PROXY_10();
		void Obj_FindItem_Objective_PROXY_11();
		void Obj_FindItem_Objective_PROXY_12();
		void Obj_FindItem_Objective_PROXY_13();
		void Obj_FindItem_Objective_PROXY_14();
		void Obj_FindItem_Objective_PROXY_15();
		void Update_KilledAnnointed(class UObject* Context);
		void Obj_FakeObjective(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_LiftUp(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_LiftUp(class UObject* Context);
		void Obj_SpawnGoliath(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SpawnGoliath(class UObject* Context);
		void Obj_SpeedRunStrate(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_SpeedrunStrate(class UObject* Context);
		void ExecuteUbergraph_Mission_Ep12_GrandTour(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
