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
	 * BlueprintGeneratedClass Mission_Ep21_Beachhead.Mission_Ep21_Beachhead_C
	 * Size -> 0x02E8 (FullSize[0x07F8] - InheritedSize[0x0510])
	 */
	class UMission_Ep21_Beachhead_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                SET_GoToBeach_ObjSetVar;                                 // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_OBJ_GoToBeach_ObjVar;                                // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToVault_TempleEntrance_ObjSetVar;                  // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_OverArching_GoToVault_ObjVar;                        // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_GoToTemple_ObjVar;                               // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PickUpFirstCrystal_ObjSetVar;                        // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ActivateTeleporterNode_ObjVar;                       // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FixTeleporter_ObjSetVar;                             // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FollowTyphon_ObjVar;                                 // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FollowTyphonToSecretPassage_ObjSetVar;               // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindVaultKey_ObjVar;                                 // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindVaultKey_ObjSetVar;                              // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_EnterVault_ObjSetVar;                                // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TakeElevator_GoToVault_ObjSetVar;                    // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ClearVaultRoom_ObjSetVar;                            // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ClearVaultRoom_ObjVar;                               // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GetVaultReward_ObjSetVar;                            // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ClearTempleEnemies_ObjSetVar;                        // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ClearAreaEnemies_ObjVar;                             // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_CallElevator_ObjSetVar;                              // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CallElevator_ObjVar;                                 // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_WaitTyphon_ObjSetVar;                                // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_WaitTyphon_ObjVar;                                   // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Inv_TyphonGoesSecretWall_ObjVar;                         // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_DigOutKey_ObjSetVar;                                 // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DigOutKey_ObjVar;                                    // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_GoToMaliwanCamp_ObjVar;                          // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_GoToBadassGate_ObjVar;                           // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_GoToBridge_ObjVar;                               // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_StartBridgeBlowUp_ObjVar;                        // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_BridgeBlowUpDone_ObjVar;                         // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToVault_AlternateRoute_ObjSetVar;                  // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TakeAlternateRoute_ObjVar;                           // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToVault_GoToDoor_ObjSetVar;                        // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillDesolateMaliwanBoss_ObjVar;                      // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToVault_KillBoss_ObjSetVar;                        // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TakeVaultKey_ObjVar;                                 // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TakeVaultKey_ObjSetVar;                              // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TyphonOpensHeadstone_ObjSetVar;                      // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Inv_TyphonOpensHeadstone_ObjVar;                         // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EnterVault_ObjVar;                                   // 0x0658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_OpenVault_ObjSetVar;                                 // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_OpenVault_ObjVar;                                    // 0x0668(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_GoToMaliwanMidCamp_1_ObjVar;                     // 0x0670(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TakeVaultReward_ObjVar;                              // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TakeVaultReward_ObjSetVar;                           // 0x0680(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GetToElevator_ObjSetVar;                             // 0x0688(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetToElevator_ObjVar;                                // 0x0690(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlaceFirstCrystal_ObjVar;                            // 0x0698(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillMaliwanBoss_ObjVar;                              // 0x06A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlaceSecondCrystal_ObjVar;                           // 0x06A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PickUpFirstCrystal_ObjVar;                           // 0x06B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PickUpSecondCrystal_ObjVar;                          // 0x06B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PlaceFirstCrystal_ObjSetVar;                         // 0x06C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillMaliwanBoss_ObjSetVar;                           // 0x06C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PickUpSecondCrystal_ObjSetVar;                       // 0x06D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PlaceSecondCrystal_ObjSetVar;                        // 0x06D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_UseKeyboard_ObjSetVar;                               // 0x06E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TempleEnergyBackOn_ObjVar;                           // 0x06E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Inv_TriggerEridianBridge_ObjVar;                         // 0x06F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_ReadyToCloseDoor_ObjVar;                         // 0x06F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToVault_ClearMaliwanCampByGate_ObjSetVar;          // 0x0700(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ClearMaliwanCampByGate_ObjVar;                       // 0x0708(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToVault_TakeBridge_ObjSetVar;                      // 0x0710(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToVault_GoToMaliwanCamp_ObjSetVar;                 // 0x0718(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillMechs_ObjVar;                                    // 0x0720(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToVault_KillMechs_ObjSetVar;                       // 0x0728(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToVault_DestroyGenerator_ObjSetVar;                // 0x0730(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DestroyGenerator_ObjVar;                             // 0x0738(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindElevatedPosition_ObjVar;                         // 0x0740(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EnterBossPreSpawnArea_BC_ObjVar;                     // 0x0748(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EnterBossArena_BC_ObjVar;                            // 0x0750(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TakeAlternateRoute__BC1_ObjVar;                      // 0x0758(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Inv_ObjClearAllDens_ObjVar;                              // 0x0760(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_UseKeyboard_ObjVar;                                  // 0x0768(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ActivateEnergyTemple_ObjSetVar;                      // 0x0770(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_TyphonDialogue1_ObjVar;                              // 0x0778(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Inv_TyphonDialogue2_ObjVar;                              // 0x0780(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Inv_TyphonDialogue3_ObjVar;                              // 0x0788(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Inv_TyphonDialogue1_2_ObjVar;                            // 0x0790(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Inv_TyreenDialogue_ObjVar;                               // 0x0798(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_KillEnemiesForVO_ObjVar;                         // 0x07A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_TakeAlternateRoute_VOFiller_ObjVar;              // 0x07A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_GoToMaliwanMidCamp_ObjVar;                       // 0x07B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_ConvoTyphonFiller_2_ObjVar;                          // 0x07B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsFailSafe_DesolateMaliwanBoss;                          // 0x07C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XU4K[0x7];                                   // 0x07C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjective*                                   Obj_INV_ClearSpawner_ObjVar;                             // 0x07C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumObjectivesCompleted;                                  // 0x07D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4ELF[0x4];                                   // 0x07D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjective*                                   Obj_TakeAlternateRoute_WaitForSpawnerToBeClear_ObjVar;   // 0x07D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EnterVaultBC_ObjVar;                                 // 0x07E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_LootVaultJustKidding_ObjVar;                         // 0x07E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TrauntTaunt_ObjVar;                                  // 0x07F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Dialogue_KillDesolateMaliwanBoss_Complete(struct FDialogConversation* Conversation);
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
		void Obj_OverArching_GoToVault_Objective_PROXY_22();
		void Obj_FindElevatedPosition(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerKilledMechs(class UObject* Context);
		void MCE_PlayerFoundElevatedPosition(class UObject* Context);
		void MCE_PlayerDestroyedGenerator(class UObject* Context);
		void Obj_EnterBossPreSpawnArea_BC(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_EnterBossArena_BC(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_TakeAlternateRoute__BC1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerArrivedAtAlternateRoute_BC1(class UObject* Context);
		void Obj_TempleEnergyBackOn_Objective_PROXY_23();
		void Obj_TempleEnergyBackOn_Objective_PROXY_24();
		void Obj_TempleEnergyBackOn_Objective_PROXY_25();
		void Obj_TempleEnergyBackOn_Objective_PROXY_26();
		void Obj_TempleEnergyBackOn_Objective_PROXY_27();
		void Inv_ObjClearAllDens(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_UseKeyboard(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerEnergyBackOn(class UObject* Context);
		void Set_ActivateEnergyTemple(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_OverArching_GoToVault_Objective_PROXY_28();
		void Obj_TempleEnergyBackOn_Objective_PROXY_29();
		void INV_TyphonDialogue1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_StartTyphonDialogue1(class UObject* Context);
		void Obj_OverArching_GoToVault_Objective_PROXY();
		void Inv_TyphonDialogue2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_StartTyphonDialogue2(class UObject* Context);
		void Set_FixTeleporter(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Inv_TyphonDialogue3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_StartTyphonDialogue3(class UObject* Context);
		void INV_TyphonDialogue1_3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_StartTyphonDialogue1_3(class UObject* Context);
		void Obj_ActivateTeleporterNode(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Inv_TyreenDialogue(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_StartTyreenDialogue(class UObject* Context);
		void Set_PickUpFirstCrystal(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_GoToVault_TempleEntrance(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_StartTyphonFiller_3(class UObject* Context);
		void INV_Obj_KillEnemiesForVO(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_MaliwanCampKilledEnemyForVO(class UObject* Context);
		void INV_Obj_TakeAlternateRoute_VOFiller(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_AlternateRouteTrauntVOFiller(class UObject* Context);
		void INV_Obj_GoToMaliwanMidCamp(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerReachedMaliwanMidcamp(class UObject* Context);
		void INV_ConvoTyphonFiller_3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MissionKickoff();
		void Obj_OverArching_GoToVault(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_ClearSpawner(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE__ClearedSpawner(class UObject* Context);
		void Obj_DestroyGenerator(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_OverArching_GoToVault_Objective_PROXY_21();
		void ME_DEBUG_PuzzleStart(class UObject* Context);
		void Obj_TakeAlternateRoute_WaitForSpawnerToBeClear(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_EnterVaultBC(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_EnterVaultBC_Objective_PROXY_30();
		void Obj_LootVaultJustKidding(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void PlayersInsideVault(class UObject* Context);
		void PlayersOutsideVault(class UObject* Context);
		void Set_GoToVault_DestroyGenerator(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_GoToVault_KillMechs(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_KillMechs(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_OverArching_GoToVault_Objective_PROXY_20();
		void Set_GoToVault_GoToMaliwanCamp(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_MaliwanCampByGateCleared(class UObject* Context);
		void Obj_ClearMaliwanCampByGate(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_OverArching_GoToVault_Objective_PROXY_19();
		void Obj_OverArching_GoToVault_Objective_PROXY_18();
		void Set_GoToVault_TakeBridge(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_GoToVault_ClearMaliwanCampByGate(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_PlayerArrivedInBossPreArea(class UObject* Context);
		void INV_Obj_ReadyToCloseDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerTriggerEBridge(class UObject* Context);
		void Inv_TriggerEridianBridge(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_TempleEnergyBackOn(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Player_KeyboardUsed(class UObject* Context);
		void Obj_OverArching_GoToVault_Objective_PROXY_17();
		void Obj_OverArching_GoToVault_Objective_PROXY_16();
		void Obj_OverArching_GoToVault_Objective_PROXY_15();
		void Obj_OverArching_GoToVault_Objective_PROXY_14();
		void Obj_OverArching_GoToVault_Objective_PROXY_13();
		void Set_UseKeyboard(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_PlaceSecondCrystal(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_PickUpSecondCrystal(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_KillMaliwanBoss(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_PlaceFirstCrystal(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_Player_SecondCrystalPlaced(class UObject* Context);
		void MCE_PlayerSecondCrystalPickedUp(class UObject* Context);
		void MCE_Player_MaliwanBossKilled(class UObject* Context);
		void MCE_Player_FirstCrystalPlaced(class UObject* Context);
		void MCE_PlayerFirstCrystalPickedUp(class UObject* Context);
		void Obj_PickUpSecondCrystal(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_PickUpFirstCrystal(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_PlaceSecondCrystal(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_KillMaliwanBoss(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_PlaceFirstCrystal(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerNearElevator(class UObject* Context);
		void Obj_OverArching_GoToVault_Objective_PROXY_12();
		void Set_GetToElevator(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GetToElevator(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_TakeVaultReward(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void ME_DEBUG_TyphonHideoutStart(class UObject* Context);
		void MCE_VaultRewardTaken(class UObject* Context);
		void Update_LootVaultJustKidding(class UObject* Context);
		void MCE_PlayerInsideVault(class UObject* Context);
		void MCE_PlayerReachedMaliwanMidcamp_2(class UObject* Context);
		void INV_Obj_GoToMaliwanMidCamp_2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerVaultKeyPlaced(class UObject* Context);
		void OBJ_OpenVault(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_OpenVault(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_EnterVault(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_TyphonOpensHeadstone(class UObject* Context);
		void Obj_FindVaultKey_Objective_PROXY_11();
		void Inv_TyphonOpensHeadstone(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_TyphonOpensHeadstone(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_PlayerFoundVaultKey(class UObject* Context);
		void Obj_TakeVaultKey(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_TakeVaultKey(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindVaultKey_Objective_PROXY_10();
		void Obj_FindVaultKey_Objective_PROXY_9();
		void Obj_FindVaultKey_Objective_PROXY_8();
		void Obj_FindVaultKey_Objective_PROXY_7();
		void Obj_OverArching_GoToVault_Objective_PROXY_6();
		void Set_GoToVault_GoToDoor(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_PlayerReachedBadassGate(class UObject* Context);
		void INV_Obj_GoToBadassGate(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerExitedTheCaveGoingToTheVault(class UObject* Context);
		void MCE_PlayerKilledMaliwanBoss(class UObject* Context);
		void Obj_KillDesolateMaliwanBoss(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GoToVault_KillBoss(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_PlayerArrivedInBossRoom(class UObject* Context);
		void MCE_PlayerArrivedAtAlternateRoute(class UObject* Context);
		void MCE_BridgeBlowUpDone(class UObject* Context);
		void MCE_BridgeBlowUpStarted(class UObject* Context);
		void MCE_PlayerReachedBridgeToBlowUp(class UObject* Context);
		void MCE_PlayerReachedMaliwanCamp(class UObject* Context);
		void Obj_TakeAlternateRoute(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_OverArching_GoToVault_Objective_PROXY_5();
		void INV_Obj_StartBridgeBlowUp(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_Obj_BridgeBlowUpDone(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_Obj_GoToMaliwanCamp(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_Obj_GoToBridge(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GoToVault_AlternateRoute(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_PlayerDugGrave(class UObject* Context);
		void Obj_DigOutKey(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_DigOutKey(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_PlayerAtGraveWithPlayer(class UObject* Context);
		void MCE_TyphonAtSecretWallWithPlayer(class UObject* Context);
		void Inv_TyphonGoesSecretWall(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_TyphonTeleported(class UObject* Context);
		void Obj_WaitTyphon(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_WaitTyphon(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_PlayerElevatorCalled(class UObject* Context);
		void Obj_CallElevator(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_OverArching_GoToVault_Objective_PROXY_4();
		void Set_CallElevator(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_TempleCleared(class UObject* Context);
		void Obj_ClearAreaEnemies(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_OverArching_GoToVault_Objective_PROXY_3();
		void Set_ClearTempleEnemies(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_PlayerActivatedTeleporterNode(class UObject* Context);
		void MCE_PlayerWentToVaultRoom(class UObject* Context);
		void MCE_PlayerClearedVaultRoom(class UObject* Context);
		void Set_GetVaultReward(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TakeVaultReward(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_ClearVaultRoom(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ClearVaultRoom(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_OverArching_GoToVault_Objective_PROXY_2();
		void Set_TakeElevator_GoToVault(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void ME_DEBUG_MissionStartBeach(class UObject* Context);
		void MCE_Update_ReadyToCloseDoor(class UObject* Context);
		void MCE_PlayerArrivedAtBeach(class UObject* Context);
		void MCE_TyphonDialogCont(class UObject* Context);
		void INV_OBJ_GoToBeach(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_TrauntTaunt(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayeArrivedAtTemple(class UObject* Context);
		void SET_GoToBeach(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void INV_Obj_GoToTemple(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_EnterVault(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindVaultKey(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_FindVaultKey(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FollowTyphon(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_FollowTyphonToSecretPassage(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_OverArching_GoToVault_Objective_PROXY_1();
		void ExecuteUbergraph_Mission_Ep21_Beachhead(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
