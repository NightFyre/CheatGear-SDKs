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
	 * BlueprintGeneratedClass Mission_Ep15_MarshFields.Mission_Ep15_MarshFields_C
	 * Size -> 0x03A0 (FullSize[0x08B0] - InheritedSize[0x0510])
	 */
	class UMission_Ep15_MarshFields_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                SET_GoToMarshfields_OpenHatchDoor_ObjSetVar;             // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_GoToMarshFieldsGate_ObjVar;                          // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_TakeTheDecoder_ObjSetVar;                            // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_TakeTheDecoder_ObjVar;                               // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_FindHiddenDoorSwitch_ObjSetVar;                      // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_FindHiddenDoorSwitch_ObjVar;                         // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_GoToMarshFields_Real_ObjSetVar;                      // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_LocateMainSpyBase_ObjSetVar;                         // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_LocateMainSpyBase_ObjVar;                            // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_InvestigateCrimeScene_ObjVar;                        // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_Spy1_ObjSetVar;                                      // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_GetTheVaultKey_ObjSetVar;                            // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_GetTheVaultKey_ObjVar;                               // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_ActivateLootTrackr_Fail_ObjSetVar;                   // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_ActivateLootTrackr_Fail_ObjVar;                      // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_ReturnToMainBase_ObjSetVar;                          // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_ActivateLootTracker_Success_ObjSetVar;               // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_FollowLootTrackerJabber_ObjSetVar;                   // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_ReturnToMainBase_ObjVar;                             // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_ActivateLootTracker_Success_ObjVar;                  // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_FollowLootTrackerJabber_ObjVar;                      // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_DefeatBoss_ObjSetVar;                                // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DefeatBoss_ObjVar;                                   // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_ContinueFollowingJabber_ObjSetVar;                   // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_TurnInMission_ObjSetVar;                             // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_TurnInMission_ObjVar;                                // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_TalkToClay_ObjSetVar;                                // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_TalkToClay_ObjVar;                                   // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_FindSpyContact_ObjSetVar;                            // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_FindSpyContact_ObjVar;                               // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_FindSpyContact_Investigate_ObjSetVar;                // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_ActivateTag1_ObjVar;                                 // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_LootMonkeySpawned_ObjVar;                            // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_CatchUpWithJabber_ObjSetVar;                         // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_CatchUpWithJabber_ObjVar;                            // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ShootTagMainBase_ObjVar;                             // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_ShootTagMainBase_ObjSetVar;                          // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindSpy2_ObjSetVar;                                  // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ClearDocksSpy2_ObjSetVar;                            // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SecureDocks_ObjVar;                                  // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindSpy2_ObjVar;                                     // 0x0658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_DropShipWave2_ObjSetVar;                             // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DropShipWave2_ObjVar;                                // 0x0668(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_MoveScannerIntoPlace_ObjSetVar;                      // 0x0670(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MoveScannerIntoPlace_ObjVar;                         // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GetToScanner_ObjSetVar;                              // 0x0680(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetToScanner_ObjVar;                                 // 0x0688(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ScannerDocks_ObjSetVar;                              // 0x0690(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_UseScannerToken_ObjVar;                              // 0x0698(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindSpy1_ObjVar;                                     // 0x06A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ProtectSpy1_ObjVar;                                  // 0x06A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindSpy1_ObjSetVar;                                  // 0x06B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_CollectIntel1_ObjSetVar;                             // 0x06B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CollectIntel1_ObjVar;                                // 0x06C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_DefendYourself_ObjSetVar;                            // 0x06C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_DefendYourself_ObjVar;                               // 0x06D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GatherIntelDeadDrop_ObjSetVar;                       // 0x06D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GatherIntelDeadDrop_ObjVar;                          // 0x06E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GatherIntelDocks_ObjSetVar;                          // 0x06E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GatherIntelDocks_ObjVar;                             // 0x06F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_CheckOffice_ObjSetVar;                               // 0x06F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CheckOFfice_ObjVar;                                  // 0x0700(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_BaseDoors_ObjVar;                                // 0x0708(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_WaitForScanner_ObjSetVar;                            // 0x0710(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_WaitForScanner_ObjVar;                               // 0x0718(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_SpawnBoss_ObjVar;                                // 0x0720(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ShootDownCage_ObjSetVar;                             // 0x0728(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ShootDownCage_ObjVar;                                // 0x0730(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_SpyCage_ObjVar;                                  // 0x0738(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ActivateTotalRecall_ObjSetVar;                       // 0x0740(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TotalRecall_ObjVar;                                  // 0x0748(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_CheckDeadDrop2_ObjSetVar;                            // 0x0750(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CheckDeadDrop2_ObjVar;                               // 0x0758(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_CheckDeadDrop2_Transform_ObjSetVar;                  // 0x0760(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TransformDeadDrop2_ObjVar;                           // 0x0768(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindSpy3_ObjSetVar;                                  // 0x0770(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindSpy3_ObjVar;                                     // 0x0778(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToMarshField_ObjVar;                               // 0x0780(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ShootSpyCrates_ObjVar;                               // 0x0788(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_WetlandsSpyCrate3_ObjVar;                        // 0x0790(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_WetlandsSpyCrate2_ObjVar;                        // 0x0798(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_WetlandsSpyCrate1_ObjVar;                        // 0x07A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_KeyFragVIZ_ObjVar;                               // 0x07A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TotalRecallKeyViz_ObjSetVar;                         // 0x07B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_Elevator_ObjVar;                                 // 0x07B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_LootTrackerFX_ObjVar;                            // 0x07C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToSanc_ObjVar;                                     // 0x07C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FollowLootTracker2_ObjVar;                           // 0x07D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_OpenBaseDoorEntry_ObjSetVar;                         // 0x07D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_OpenBaseEntryDoor_ObjVar;                            // 0x07E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_RestorePower_ObjSetVar;                              // 0x07E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_RestorePower_ObjVar;                                 // 0x07F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Spy1Protect_ObjSetVar;                               // 0x07F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SpyCageBombs_ObjVar;                                 // 0x0800(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 DeeSong;                                                 // 0x0808(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 DeeEndTalk;                                              // 0x0814(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindArchBody_ObjSetVar;                              // 0x0820(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindArchBody_ObjVar;                                 // 0x0828(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_TurnOffPower_ObjVar;                             // 0x0830(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_CollectIDBase_ObjSetVar;                             // 0x0838(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CollectIDBase_ObjVar;                                // 0x0840(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_LootTrackVizFAIL_ObjVar;                         // 0x0848(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_INV_LootTrackVizFAIL_ObjSetVar;                      // 0x0850(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_CheckDeadDrop1_ObjSetVar;                            // 0x0858(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CheckDeadDrop1_ObjVar;                               // 0x0860(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TransformDeadDrop1_ObjSetVar;                        // 0x0868(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TransformDeadDrop1_ObjVar;                           // 0x0870(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SecondToComplete_VAR;                                    // 0x0878(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_47Z7[0x4];                                   // 0x087C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjective*                                   Obj_TotalRecallSpawns_ObjVar;                            // 0x0880(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ScanID_ObjSetVar;                                    // 0x0888(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ScanID_ObjVar;                                       // 0x0890(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 Dialog_BanditCheers;                                     // 0x0898(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_I6CE[0x4];                                   // 0x08A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjective*                                   Obj_INV_CraneSEQ_ObjVar;                                 // 0x08A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnDialogSequenceFinished_81();
		void OnDialogSequenceFinished_80();
		void OnDialogSequenceFinished_79();
		void OnDialogSequenceFinished_78();
		void OnDialogSequenceFinished_77();
		void OnDialogSequenceFinished_76();
		void OnDialogSequenceFinished_75();
		void OnDialogSequenceFinished_74();
		void OnDialogSequenceFinished_73();
		void OnDialogSequenceFinished_72();
		void OnDialogSequenceFinished_71();
		void OnDialogSequenceFinished_70();
		void OnDialogSequenceFinished_69();
		void OnDialogSequenceFinished_68();
		void OnDialogSequenceFinished_67();
		void OnDialogSequenceFinished_66();
		void OnDialogSequenceFinished_65();
		void OnDialogSequenceFinished_64();
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
		void SET_GoToMarshfields_OpenHatchDoor(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_GoToMarshFieldsGate(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_TakeTheDecoder(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_TakeTheDecoder(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_FindHiddenDoorSwitch(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_FindHiddenDoorSwitch(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_GoToMarshFields_Real(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_LocateMainSpyBase(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_LocateMainSpyBase(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_InvestigateCrimeScene(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_Spy1(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_GetTheVaultKey(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_GetTheVaultKey(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_GoToMarshFieldsGate(class UObject* Context);
		void Update_TakeTheDecoder(class UObject* Context);
		void Update_FindHiddenDoorSwitch(class UObject* Context);
		void Update_GetTheVaultKey(class UObject* Context);
		void SET_ActivateLootTrackr_Fail(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_ActivateLootTrackr_Fail(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_ActivateLootTracker_Fail(class UObject* Context);
		void SET_ReturnToMainBase(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_ActivateLootTracker_Success(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_FollowLootTrackerJabber(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_ReturnToMainBase(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_ActivateLootTracker_Success(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_ActivateLootTracker_Success(class UObject* Context);
		void Update_ReturnToMainBase(class UObject* Context);
		void OBJ_FollowLootTrackerJabber(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_DefeatBoss(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_DefeatBoss(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_AdvanceTo_ContinueFollowingJabber(class UObject* Context);
		void SET_ContinueFollowingJabber(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_FollowLootTrackerJabber(class UObject* Context);
		void SET_TurnInMission(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_TurnInMission(class UObject* Context);
		void OBJ_TurnInMission(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_TalkToClay(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_TalkToClay(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_TalkToClay(class UObject* Context);
		void SET_FindSpyContact(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_FindSpyContact(class UObject* Context);
		void OBJ_FindSpyContact(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_LocateMainBase(class UObject* Context);
		void SET_FindSpyContact_Investigate(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_InvestigateCrimeScene(class UObject* Context);
		void OBJ_ActivateTag1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_ActivateTagSpy1(class UObject* Context);
		void Update_LootMonkeySpawned(class UObject* Context);
		void OBJ_LootMonkeySpawned(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_CatchUpWithJabber(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_CatchUpWithJabber(class UObject* Context);
		void SET_CatchUpWithJabber(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Adv2_CatchUpToJabber(class UObject* Context);
		void Obj_ShootTagMainBase(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_ShootTagMainBase(class UObject* Context);
		void Set_ShootTagMainBase(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Adv2ShootTargetMainBase(class UObject* Context);
		void Obj_SecureDocks(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ClearDocksSpy2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_SecureDocks(class UObject* Context);
		void Obj_FindSpy2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_FindSpy2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_FindSpy2(class UObject* Context);
		void Set_DropShipWave2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_DropShipWave2(class UObject* Context);
		void Obj_DropShipWave2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_MoveScannerIntoPlace(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_MoveScannerIntoPlace(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_MoveScannerIntoPlace(class UObject* Context);
		void Obj_GetToScanner(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GetToScanner(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_GetToScanner(class UObject* Context);
		void Obj_UseScannerToken(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ScannerDocks(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_ScanDropship(class UObject* Context);
		void Obj_FindSpy1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_ProtectSpy1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_FindSpy1(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_CollectIntel1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_CollectIntel1(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_CollectIntel1(class UObject* Context);
		void Update_FindSpy1(class UObject* Context);
		void Update_ProttectSpy1(class UObject* Context);
		void OBJ_DefendYourself(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_DefendYourself(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_DefendYourself(class UObject* Context);
		void Obj_GatherIntelDeadDrop(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GatherIntelDeadDrop(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_GatherIntelDeadDrop(class UObject* Context);
		void Obj_GatherIntelDocks(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GatherIntelDocks(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_GatherIntelDocks(class UObject* Context);
		void Obj_CheckOFfice(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_CheckOffice(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_CheckOffice(class UObject* Context);
		void Obj_INV_BaseDoors(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void KeyboardUsed(class UObject* Context);
		void Set_WaitForScanner(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_WaitForScanner(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_SpawnBoss(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_ShootDownCage(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ShootDownCage(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_ShootDownCage(class UObject* Context);
		void Update_SpyCage(class UObject* Context);
		void Obj_INV_SpyCage(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_TotalRecall(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ActivateTotalRecall(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_ActivateTotalRecall(class UObject* Context);
		void Dialog_PostTotalRecall(class UObject* Context);
		void Obj_CheckDeadDrop2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_CheckDeadDrop2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_CheckDeadDrop2(class UObject* Context);
		void Update_TransformDeadDrop2(class UObject* Context);
		void Obj_TransformDeadDrop2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_CheckDeadDrop2_Transform(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Adv_TransformDeadDrop2(class UObject* Context);
		void Obj_FindSpy3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_FindSpy3(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_FindSpy3(class UObject* Context);
		void AdvToFindHiddenDoor(class UObject* Context);
		void Obj_GoToMarshField(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_GoToMarshfields(class UObject* Context);
		void Obj_ShootSpyCrates(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_WetlandsSpyCrate1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_WetlandsSpyCrate2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_WetlandsSpyCrate3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_WetlandsSpyCrate1(class UObject* Context);
		void Update_WetlandsSpyCrate2(class UObject* Context);
		void Update_WetlandsSpyCrate3(class UObject* Context);
		void Update_ShootSpyCrates(class UObject* Context);
		void Obj_ShootSpyCrates_Objective_PROXY();
		void Obj_INV_WetlandsSpyCrate1_Objective_PROXY_1();
		void Obj_INV_WetlandsSpyCrate2_Objective_PROXY_2();
		void Obj_INV_WetlandsSpyCrate3_Objective_PROXY_3();
		void Obj_ShootSpyCrates_Objective_PROXY_4();
		void Obj_INV_WetlandsSpyCrate1_Objective_PROXY_5();
		void Obj_INV_WetlandsSpyCrate2_Objective_PROXY_6();
		void Obj_INV_WetlandsSpyCrate3_Objective_PROXY_7();
		void Obj_INV_KeyFragVIZ(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_TotalRecallKeyViz(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_INV_Elevator(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_LootTrackerFX(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_INV_LootTrackerFX(class UObject* Context);
		void Update_GoToSanc(class UObject* Context);
		void Obj_GoToSanc(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_FollowLootTracker2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_FollowLootTracker2(class UObject* Context);
		void Dialog_DeadDropMuffled(class UObject* Context);
		void Dialog_TyTroyTalk(class UObject* Context);
		void Obj_OpenBaseEntryDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_OpenBaseDoorEntry(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_OpenBaseEntryDoor(class UObject* Context);
		void Adv_OpenBaseEnterDoor(class UObject* Context);
		void Obj_RestorePower(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_RestorePower(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_RestorePower(class UObject* Context);
		void Adv_RestorePower(class UObject* Context);
		void Set_Spy1Protect(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Dialog_FindQuietFoot(class UObject* Context);
		void CloseDeeSongGate(class UObject* Context);
		void Obj_SpyCageBombs(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_SpyCageBombs(class UObject* Context);
		void Dialog_GotYouCovered(class UObject* Context);
		void Dialog_SeeYouComing(class UObject* Context);
		void Update_DefeatBoss(class UObject* Context);
		void Obj_FindArchBody(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_FindArchBody(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_FindArchBody(class UObject* Context);
		void Obj_INV_TurnOffPower(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_CollectIDBase(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_CollectIDBase(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_CollectIDBase(class UObject* Context);
		void Obj_INV_LootTrackVizFAIL(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_INV_LootTrackVizFAIL(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_INV_LootTrackVizFAIL(class UObject* Context);
		void Dialog_CrapYourself(class UObject* Context);
		void Obj_CheckDeadDrop1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_CheckDeadDrop1(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_CkeckDeadDrop1(class UObject* Context);
		void Obj_TransformDeadDrop1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_TransformDeadDrop1(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_TransformDeadDrop1(class UObject* Context);
		void Adv_TransformDeadDrop1(class UObject* Context);
		void Adv_CheckDeadDrop2(class UObject* Context);
		void Update_TotalRecallSpawns(class UObject* Context);
		void Obj_TotalRecallSpawns(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_INV_KeyFragVIZ(class UObject* Context);
		void Obj_ScanID(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ScanID(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_ScanID(class UObject* Context);
		void StopChatter(class UObject* Context);
		void Dialog_Crate2TagHelp(class UObject* Context);
		void Dialog_Crate3TagHelp(class UObject* Context);
		void Dialog_StartBanditWalla(class UObject* Context);
		void Dialog_StartDeeSong(class UObject* Context);
		void Update_INV_SpawnBoss(class UObject* Context);
		void Obj_INV_CraneSEQ(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ExecuteUbergraph_Mission_Ep15_MarshFields(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
