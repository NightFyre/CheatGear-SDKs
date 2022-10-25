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
	 * BlueprintGeneratedClass Mission_Ep05_Crater.Mission_Ep05_Crater_C
	 * Size -> 0x0298 (FullSize[0x0790] - InheritedSize[0x04F8])
	 */
	class UMission_Ep05_Crater_C : public UOakMission
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04F8(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                SET_GetToJetBeast_ObjSetVar;                             // 0x0500(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_SpawnJetBeast_ObjVar;                                // 0x0508(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_KillRose_ObjVar;                                     // 0x0510(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_GetToRose_ObjVar;                                    // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_GetToRose_ObjSetVar;                                 // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_RoseTitleCard_ObjVar;                                // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_RuinerTitleCard_ObjVar;                              // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_RoseTitleCard_ObjSetVar;                             // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_KillRose_ObjSetVar;                                  // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_RuinerTitleCard_ObjSetVar;                           // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_KillRuiner_ObjSetVar;                                // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_KillRuiner_ObjVar;                                   // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_CollectBounty_ObjSetVar;                             // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_CollectBounty_ObjVar;                                // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TurnIn_ObjSetVar;                                    // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TurnIn_ObjVar;                                       // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_TakeKey_ObjSetVar;                                   // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_TakeKey_ObjVar;                                      // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_Chest1_ObjVar;                                       // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_Chest2_ObjVar;                                       // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_Chest3_ObjVar;                                       // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_FollowTitus_ObjSetVar;                               // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_FollowTitus_ObjVar;                                  // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_ReturnToTown_ObjSetVar;                              // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_ReturnToTown_ObjVar;                                 // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_DefendTown_ObjSetVar;                                // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_DefendTown_ObjVar;                                   // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_ReviveJuno_ObjSetVar;                                // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_ReturnToJuno_ObjVar;                                 // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_InitialTalkToDakota_ObjSetVar;                       // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_InitialTalkToDakota_ObjVar;                          // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_DefendTown2_ObjSetVar;                               // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_DefendTown2_ObjVar;                                  // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_JunoRevived_ObjVar;                                  // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_StartTitusMove_ObjVar;                               // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_ShootTheBomb_ObjSetVar;                              // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_ShootBomb_ObjVar;                                    // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_TalkToDakota_ObjSetVar;                              // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_TalkToDakota_ObjVar;                                 // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_MoveBountyForward_ObjVar;                            // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_TRexFight_ObjSetVar;                                 // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_TRexFight_ObjVar;                                    // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_SmallCombatFollowJuno_ObjVar;                        // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_GoToFrontier_ObjSetVar;                              // 0x0658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_GetToFrontier_ObjVar;                                // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_GoToCrater_ObjSetVar;                                // 0x0668(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_GetToCrater_ObjVar;                                  // 0x0670(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_DakotaBomb_ObjVar;                                   // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_OpenVault_ObjVar;                                    // 0x0680(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_TakeElevator_ObjVar;                                 // 0x0688(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_PlayerAtTown2_ObjVar;                                // 0x0690(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   LiveJunoTitusChatter_ObjVar;                             // 0x0698(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_FollowJuno_ObjSetVar;                                // 0x06A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_FollowJuno_ObjVar;                                   // 0x06A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_MoveFollowJunoForward_ObjVar;                        // 0x06B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_FarmFight_ObjVar;                                    // 0x06B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_JunoDown_ObjSetVar;                                  // 0x06C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_DownJunoMoment_ObjVar;                               // 0x06C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_PlayerToTown_ObjSetVar;                              // 0x06D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_DakotaTalkMoment_ObjVar;                             // 0x06D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_BombPlacement_ObjSetVar;                             // 0x06E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_BombPlaced_ObjVar;                                   // 0x06E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_JunoAtCamp_ObjVar;                                   // 0x06F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_PlayerAtCamp_ObjVar;                                 // 0x06F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_BothCampObjComp_ObjVar;                              // 0x0700(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_AllPlayersOnElevator_ObjVar;                         // 0x0708(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_KillRoseText_ObjVar;                                 // 0x0710(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_DestroyWall1_ObjVar;                                 // 0x0718(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_DestroyWall2_ObjVar;                                 // 0x0720(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_OpenGate_ObjVar;                                     // 0x0728(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_PlayerToGarden_ObjSetVar;                            // 0x0730(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_PlayerToPlaza_ObjVar;                                // 0x0738(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_EndCredits_ObjSetVar;                                // 0x0740(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_EndCredits_ObjVar;                                   // 0x0748(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_DefendTownEarly_ObjVar;                              // 0x0750(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_SpawnSquareEnemies_ObjVar;                           // 0x0758(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_DinoRiders_ObjVar;                                   // 0x0760(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_TRex_ObjVar;                                         // 0x0768(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_TRexFightForward_ObjVar;                             // 0x0770(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_CashBox_ObjVar;                                      // 0x0778(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_StartWarningBells_ObjVar;                            // 0x0780(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_MeteorSequence_ObjVar;                               // 0x0788(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
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
		void OnDialogSequenceFinished_28();
		void OnDialogSequenceFinished_27();
		void Update_SpawnedJetBeast(class UObject* Context);
		void Update_GotToRose(class UObject* Context);
		void Update_KilledRuiner(class UObject* Context);
		void Update_KilledRose(class UObject* Context);
		void Obj_TurnIn(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_TurnIn(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_TakeKey(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_TakeKey(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_TookKey(class UObject* Context);
		void Update_TurnedIn(class UObject* Context);
		void OpenedChest1(class UObject* Context);
		void OBJ_Chest1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OpenedChest2(class UObject* Context);
		void OBJ_Chest2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OpenedChest3(class UObject* Context);
		void OBJ_Chest3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_BountyCollected(class UObject* Context);
		void SET_CollectBounty(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_CollectBounty(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_KillRuiner(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_KillRuiner(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_KillRoseText_Objective_PROXY_1();
		void OBJ_FollowTitus(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_FollowedTitus(class UObject* Context);
		void SET_FollowTitus(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_ReturnToTown(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_ReturnToTown(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_ReturnToTown(class UObject* Context);
		void SET_DefendTown(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_DefendTown(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_DefendedTown(class UObject* Context);
		void SET_ReviveJuno(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_ReturnToJuno(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_ReachedJuno(class UObject* Context);
		void SET_InitialTalkToDakota(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_InitialTalkToDakota(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_InitialTalkComplete(class UObject* Context);
		void OBJ_DefendTown2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_DefendTown2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_DefendedTown2(class UObject* Context);
		void OBJ_JunoRevived(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_StartTitusMove(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_StartTitusMove(class UObject* Context);
		void SET_ShootTheBomb(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_ShootBomb(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_ShotBomb(class UObject* Context);
		void SET_TalkToDakota(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_TalkToDakota(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_TalkedToDakota(class UObject* Context);
		void OBJ_CollectBounty_Objective_PROXY_2();
		void OBJ_CollectBounty_Objective_PROXY_3();
		void OBJ_MoveBountyForward(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_TRexFight(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_TRexFight(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_SmallCombatFollowJuno(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_SmallCombatFollowJuno(class UObject* Context);
		void SET_GoToFrontier(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_GetToFrontier(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_AtFrontier(class UObject* Context);
		void OBJ_KillRoseText_Objective_PROXY_4();
		void SET_GoToCrater(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_GetToCrater(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_KillRoseText_Objective_PROXY_5();
		void Update_GotToCrater(class UObject* Context);
		void OBJ_DakotaBomb(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_DakotaPlantedBomb(class UObject* Context);
		void OBJ_OpenVault(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_OpenedDoor(class UObject* Context);
		void OBJ_TakeElevator(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_TookElevator(class UObject* Context);
		void OBJ_PlayerAtTown2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_PlayerAtTown2(class UObject* Context);
		void OBJ_GetToRose(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void LiveJunoTitusChatter(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void LiveChatterJunoTitus(class UObject* Context);
		void SET_FollowJuno(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_FollowJuno(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_FollowedJuno(class UObject* Context);
		void OBJ_MoveFollowJunoForward(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_MoveFollowJunoForward(class UObject* Context);
		void OBJ_FarmFight(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_FarmFight(class UObject* Context);
		void Update_JunoRevived(class UObject* Context);
		void SET_GetToRose(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_JunoDown(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_FollowJuno_Objective_PROXY_6();
		void OBJ_JunoRevived_Objective_PROXY_7();
		void OBJ_JunoRevived_Objective_PROXY_8();
		void OBJ_JunoRevived_Objective_PROXY_9();
		void OBJ_DownJunoMoment(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_PlayerToTown(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_CollectBounty_Objective_PROXY_10();
		void OBJ_DakotaTalkMoment(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Speak_DakotaTalk(class UObject* Context);
		void SET_BombPlacement(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_BombPlaced(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_BombPlaced(class UObject* Context);
		void OBJ_JunoAtCamp(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_PlayerAtCamp(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_JunoAtCamp(class UObject* Context);
		void Update_PlayerAtCamp(class UObject* Context);
		void OBJ_BothCampObjComp(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_AllPlayersOnElevator(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void CLEAR_ClearPlayersObjective(class UObject* Context);
		void Update_AllPlayersOnElevator(class UObject* Context);
		void OBJ_KillRoseText(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_KillRoseText_Objective_PROXY_11();
		void OBJ_KillRoseText_Objective_PROXY_12();
		void OBJ_KillRoseText_Objective_PROXY_13();
		void OBJ_DestroyWall1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_DestroyWall2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void DestroyedWall1(class UObject* Context);
		void DestroyedWall2(class UObject* Context);
		void OBJ_OpenGate(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_PlayerToPlaza(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_ReachedPlaza(class UObject* Context);
		void SET_PlayerToGarden(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_CollectBounty_Objective_PROXY_14();
		void OBJ_EndCredits(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_EndCredits(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_DefendTownEarly(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_DefendTownEarly_Objective_PROXY_15();
		void OBJ_SpawnSquareEnemies(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_RuinerTitleCard(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_RuinerTitleCard(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_DinoRiders(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_TRex(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_TRexFightForward(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_DinoRidersKilled(class UObject* Context);
		void Update_TRexKilled(class UObject* Context);
		void OBJ_CashBox(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_CashBoxOpened(class UObject* Context);
		void OBJ_RoseTitleCard(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_MeteorSequence_Objective_PROXY_16();
		void OBJ_MeteorSequence_Objective_PROXY_17();
		void OBJ_MeteorSequence_Objective_PROXY_18();
		void OBJ_MeteorSequence_Objective_PROXY_19();
		void OBJ_MeteorSequence_Objective_PROXY_20();
		void OBJ_MeteorSequence_Objective_PROXY_21();
		void OBJ_StartWarningBells(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_MeteorSequence(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_RoseTitleCard(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_KillRoseText_Objective_PROXY();
		void SET_KillRose(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void PlayPlazaCelebrationVO(class UObject* Context);
		void Update_ShowCredits(class UObject* Context);
		void OBJ_KillRose(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MissionKickoff();
		void OBJ_SpawnJetBeast(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_GetToJetBeast(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void ExecuteUbergraph_Mission_Ep05_Crater(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
