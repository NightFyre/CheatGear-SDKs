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
	 * BlueprintGeneratedClass Mission_Ep10_CityVault.Mission_Ep10_CityVault_C
	 * Size -> 0x0388 (FullSize[0x0898] - InheritedSize[0x0510])
	 */
	class UMission_Ep10_CityVault_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_DefeatBoss_ObjSetVar;                                // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DefeatBoss_ObjVar;                                   // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_UseVaultDoorDevice_ObjSetVar;                        // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_UseVaultDoorDevice_ObjVar;                           // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_EnterAndLootVault_ObjSetVar;                         // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_MeetMaya_ObjSetVar;                                  // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MeetMaya_ObjVar;                                     // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_DriveToStation_ObjVar;                               // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_DefeatAmbush_01_ObjSetVar;                           // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_DefeatAmbush_01_ObjVar;                              // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_BringMayaToBarrier_01_ObjSetVar;                     // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_BringMayaToBarrier_01_ObjVar;                        // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_BringMayaToStation_02_ObjSetVar;                     // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_DefeatAmbush_02_ObjSetVar;                           // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_BringMayaToBarrier_02_ObjSetVar;                     // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_BringMayaToBarrier_02_ObjVar;                        // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_DefeatAmbush_02_ObjVar;                              // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_BossTitleCard_ObjVar;                                // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_EnterStation_ObjSetVar;                              // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_MayaDeathCutscene_ObjVar;                            // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_LootVault_ObjVar;                                    // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_ReturnToMaya_ObjSetVar;                              // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_ReturnToMaya_MayaDeath_ObjSetVar;                    // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_ReturnToMaya_ObjVar;                                 // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_BringBookToLilith_ObjSetVar;                         // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_BringBookToLilith_ObjVar;                            // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_BreakEridiumRock_ObjSetVar;                          // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_BreakEridiumRock_ObjVar;                             // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_BringMayaToStation_Final_ObjSetVar;                  // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_MayaDestroysBarricade_ObjVar;                        // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Hidden_DestroyBarrier01_ObjVar;                      // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_Hidden_DestroyBarrier02_ObjVar;                      // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_VillainThreat_ObjVar;                                // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_TurnInKeyFragment_ObjSetVar;                         // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_BringKeyFragmentToTannis_ObjVar;                     // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TalkToLilith_ObjSetVar;                              // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_ReturnToBridge_ObjVar;                               // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_GoToSkyway_ObjVar;                                   // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_GoToSkyway_MeetZero_ObjSetVar;                       // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_GoToSkyway_Final_ObjSetVar;                          // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_GoToSkyway_MeetZero_ObjVar;                          // 0x0658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_GoToSkyway_ArriveOnPromethea_ObjSetVar;              // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Hidden_ExitSanc_ObjVar;                              // 0x0668(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_DialogAboutEnemyAtRamp_ObjVar;                       // 0x0670(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_Hidden_Dialog_VillianTauntsPlayerWhileAtOnramp_ObjVar; // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_ReachAmbush02_ObjVar;                                // 0x0680(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SeeTrainStation_ObjVar;                              // 0x0688(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_VillainThreat_Station_ObjVar;                        // 0x0690(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_Hidden_FirstEnter_CityBoss_ObjVar;                   // 0x0698(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_ComfortAva_ObjVar;                                   // 0x06A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_ComfortAva_ObjSetVar;                                // 0x06A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_TitleCard_Rampager_ObjSetVar;                        // 0x06B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_Hidden_ZeroCutsOpenSkywayDoor_ObjVar;                // 0x06B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EnterVehicle_ObjVar;                                 // 0x06C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_FindVault_ObjSetVar;                                 // 0x06C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindVault_ObjVar;                                    // 0x06D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToSanctuary_ObjSetVar;                             // 0x06D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToSanctuary_ObjVar;                                // 0x06E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ZeroAtlasBattle_ObjSetVar;                           // 0x06E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FightWithAtlasAndZero_ObjVar;                        // 0x06F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ActivateMayaTeleport_ObjVar;                         // 0x06F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_SpawnMaya_ObjSetVar;                                 // 0x0700(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SpawnVehicle_ObjVar;                                 // 0x0708(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MayaOnVehicle_ObjVar;                                // 0x0710(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_ReachAmbush01_ObjVar;                                // 0x0718(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SpawnMaya_ObjVar;                                    // 0x0720(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_MayaDrive_ReachAmbush01_ObjSetVar;                   // 0x0728(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Ambush01_VillainThreat_ObjSetVar;                    // 0x0730(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_DestroyBarrier01_ObjSetVar;                          // 0x0738(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Ambush02_VillainThreat_ObjSetVar;                    // 0x0740(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_DestroyBarrier02_ObjSetVar;                          // 0x0748(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ReturnToSanctuary_ObjSetVar;                         // 0x0750(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_ReturnToSanctuary_ObjVar;                            // 0x0758(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TalkToAva_ObjSetVar;                                 // 0x0760(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToAva_ObjVar;                                    // 0x0768(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToLilith_ObjVar;                                 // 0x0770(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Station_Courtyard_ObjSetVar;                         // 0x0778(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Station_Barricade_ObjSetVar;                         // 0x0780(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MayaGoesToBarricade_ObjVar;                          // 0x0788(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DropIntoArena_ObjVar;                                // 0x0790(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_AccessLodestar_ObjSetVar;                            // 0x0798(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_AccessLodestar_ObjVar;                               // 0x07A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TannisSeesVaultReward_ObjVar;                        // 0x07A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillZeroAssaultDens_ObjVar;                          // 0x07B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UGbxCondition*                                       NewVar_1;                                                // 0x07B8(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_RhysHologram_ObjVar;                                 // 0x07C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_RestOfDiscussion_ObjVar;                             // 0x07C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_CalypsoTauntVideo_ObjSetVar;                         // 0x07D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CalypsoTauntVideo_ObjVar;                            // 0x07D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EnterStation_ObjVar;                                 // 0x07E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_StationAnnouncement02_ObjSetVar;                     // 0x07E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_StationAnnouncements02_ObjVar;                       // 0x07F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_StationAnnouncement03_ObjSetVar;                     // 0x07F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_StationAnnouncements03_ObjVar;                       // 0x0800(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindGuardianTunnel_ObjVar;                           // 0x0808(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GuardianIntro_ObjVar;                                // 0x0810(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MayaLine_ObjVar;                                     // 0x0818(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GuardianTunnels_ObjSetVar;                           // 0x0820(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_StationAnnouncement01_ObjSetVar;                     // 0x0828(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_StationAnnouncements01_ObjVar;                       // 0x0830(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_EllieSpawnsVehicle_ObjSetVar;                        // 0x0838(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_IncomingTaunt_ObjSetVar;                             // 0x0840(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_RhysHologram_ObjSetVar;                              // 0x0848(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EnterVault_ObjVar;                                   // 0x0850(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_LeaveVault_ObjVar;                                   // 0x0858(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_RespawnVehicle_ObjVar;                               // 0x0860(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_CityVault01_AvaDone_ObjVar;                          // 0x0868(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EnterCityBoss_ObjVar;                                // 0x0870(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_VillainThreatComplete_ObjVar;                        // 0x0878(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ApproachAva_ObjVar;                                  // 0x0880(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SmashSmallPiles_ObjVar;                              // 0x0888(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_OutOfRoadVO_ObjVar;                                  // 0x0890(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
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
		void OnDialogSequenceFinished_41();
		void OnDialogSequenceFinished_40();
		void OnDialogSequenceFinished_39();
		void OnDialogSequenceFinished_38();
		void OnDialogSequenceFinished_37();
		void Obj_LootVault(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_ReturnToMaya(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_BossDefeated(class UObject* Context);
		void SET_ReturnToMaya_MayaDeath(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_ReturnToMaya(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_ReturnToMaya(class UObject* Context);
		void OBJ_MayaDeathCutscene(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_BringBookToLilith(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_BringBookToLilith(class UObject* Context);
		void OBJ_BringBookToLilith(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_EnterStation(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_BreakEridiumRock(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_BreakEridiumRock(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_BreakEridiumRock(class UObject* Context);
		void Obj_BossTitleCard(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_BringMayaToStation_Final(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_MayaDestroysBarricade(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_MayaDestroysBaricade(class UObject* Context);
		void Obj_Hidden_DestroyBarrier01(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_DestroyBarrier01(class UObject* Context);
		void OBJ_Hidden_DestroyBarrier02(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_DestroyBarrier02(class UObject* Context);
		void OBJ_VillainThreat(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_VillainThreat(class UObject* Context);
		void SET_TurnInKeyFragment(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_BringKeyFragmentToTannis(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_TalkToLilith(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_ReturnToBridge(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_ReturnToBridge(class UObject* Context);
		void Update_BringKeyToTannis(class UObject* Context);
		void OBJ_GoToSkyway(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_GoToSkyway(class UObject* Context);
		void SET_GoToSkyway_MeetZero(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_GoToSkyway_Final(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_GoToSkyway_MeetZero(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_GoToSkyway_ArriveOnPromethea(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_Hidden_ExitSanc(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_Hidden_ExitSanc(class UObject* Context);
		void Update_CityVault_MeetZero(class UObject* Context);
		void Update_DialogAboutEnemyAtRamp(class UObject* Context);
		void OBJ_DialogAboutEnemyAtRamp(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_Hidden_Dialog_VillianTauntsPlayerWhileAtOnramp(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_Hidden_Dialog_VillianTauntsPlayerWhileAtOnRamp(class UObject* Context);
		void OBJ_GoToSkyway_Objective_PROXY_1();
		void OBJ_GoToSkyway_Objective_PROXY_2();
		void OBJ_ReachAmbush02(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_ReachAmbush02(class UObject* Context);
		void Update_SeeTrainStation(class UObject* Context);
		void Obj_SeeTrainStation(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_VillainThreat_Station(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_VillainThreat_Station(class UObject* Context);
		void OBJ_Hidden_FirstEnter_CityBoss(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_Hidden_FirstEnter_CityBoss(class UObject* Context);
		void OBJ_ComfortAva(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_ComfortAva(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_ComfortAva(class UObject* Context);
		void SET_TitleCard_Rampager(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_Hidden_ZeroCutsOpenSkywayDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_Hidden_ZeroCutsOpenSkywayDoor(class UObject* Context);
		void Update_DefeatAmbush_01(class UObject* Context);
		void Update_BringMayaToBarrier_01(class UObject* Context);
		void Update_BringMayaToBarrier_02(class UObject* Context);
		void Update_DefeatAmbush_02(class UObject* Context);
		void Obj_EnterVehicle(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_EnterVehicle_Objective_PROXY_3();
		void SET_FindVault(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindVault(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_DefeatAmbush_02(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GoToSanctuary(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GoToSanctuary(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_GoToSanctuary(class UObject* Context);
		void OBJ_BringKeyFragmentToTannis_Objective_PROXY_4();
		void SET_BringMayaToBarrier_02(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_DefeatAmbush_02(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_BringMayaToBarrier_02(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_DriveToStation_Objective_PROXY();
		void Set_ZeroAtlasBattle(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_GoToSkyway_Objective_PROXY_5();
		void Obj_FightWithAtlasAndZero(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_BringMayaToStation_02(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ActivateMayaTeleport(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_SpawnMaya(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_MeetMaya_Objective_PROXY_6();
		void Update_ActivateMayaTeleport(class UObject* Context);
		void Obj_SpawnVehicle(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_MayaOnVehicle(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_MayaOnVehicle(class UObject* Context);
		void Update_SpawnVehicle(class UObject* Context);
		void OBJ_BringMayaToBarrier_01(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_BringMayaToBarrier_01(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_DefeatAmbush_01(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_ReachAmbush01(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_ReachAmbush01(class UObject* Context);
		void Obj_SpawnMaya(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_DefeatAmbush_01(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_MayaDrive_ReachAmbush01(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_EnterVehicle_Objective_PROXY_7();
		void OBJ_DriveToStation_Objective_PROXY_8();
		void Set_Ambush01_VillainThreat(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_EnterVehicle_Objective_PROXY_9();
		void OBJ_DriveToStation_Objective_PROXY_10();
		void OBJ_DefeatAmbush_01_Objective_PROXY_11();
		void Obj_EnterVehicle_Objective_PROXY_12();
		void OBJ_DriveToStation_Objective_PROXY_13();
		void Set_DestroyBarrier01(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_EnterVehicle_Objective_PROXY_14();
		void OBJ_DriveToStation_Objective_PROXY_15();
		void Obj_EnterVehicle_Objective_PROXY_16();
		void OBJ_DriveToStation_Objective_PROXY_17();
		void Set_Ambush02_VillainThreat(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_DriveToStation_Objective_PROXY_18();
		void Obj_EnterVehicle_Objective_PROXY_19();
		void OBJ_DefeatAmbush_02_Objective_PROXY_20();
		void OBJ_DriveToStation_Objective_PROXY_21();
		void Obj_EnterVehicle_Objective_PROXY_22();
		void OBJ_DriveToStation_Objective_PROXY_23();
		void Obj_EnterVehicle_Objective_PROXY_24();
		void Set_DestroyBarrier02(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_DriveToStation_Objective_PROXY_25();
		void Obj_EnterVehicle_Objective_PROXY_26();
		void OBJ_ReturnToSanctuary(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ReturnToSanctuary(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_ReturnToSanctuary(class UObject* Context);
		void AdvanceTo_TalkToAva(class UObject* Context);
		void Set_TalkToAva(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TalkToAva(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void CompleteTheMission(class UObject* Context);
		void Update_DriveToStation(class UObject* Context);
		void Update_TalkToAva(class UObject* Context);
		void Obj_TalkToLilith(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_TalkToLilith(class UObject* Context);
		void OBJ_DriveToStation(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_MeetMaya(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_Station_Courtyard(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_EnterStation_Objective_PROXY_27();
		void Set_Station_Barricade(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_EnterStation_Objective_PROXY_28();
		void Update_UseVaultDoorDevice(class UObject* Context);
		void Obj_MayaGoesToBarricade(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_MayaGoesToBarricade(class UObject* Context);
		void Obj_DropIntoArena(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_DropIntoArena(class UObject* Context);
		void Set_AccessLodestar(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_AccessLodestar(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_AccessLodestar(class UObject* Context);
		void Obj_TannisSeesVaultReward(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_TannisSeesVaultReward(class UObject* Context);
		void Obj_KillZeroAssaultDens(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_KillZeroAssaultDens(class UObject* Context);
		void MissionKickoff();
		void Update_FindVault(class UObject* Context);
		void Obj_RhysHologram(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_RhysHologram(class UObject* Context);
		void Obj_RestOfDiscussion(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_RestOfDiscussion(class UObject* Context);
		void Obj_CalypsoTauntVideo(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_CalypsoTauntVideo(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TalkToLilith_Objective_PROXY_29();
		void AdvanceTo_CalypsoTauntVideo(class UObject* Context);
		void Update_MeetMayaInVaultMap(class UObject* Context);
		void Update_CalypsoTauntVideo(class UObject* Context);
		void Set_MeetMaya(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_EnterStation(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_EnterStation(class UObject* Context);
		void SET_StationAnnouncement02(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_StationAnnouncements02(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_StationAnnouncement02(class UObject* Context);
		void Obj_FindGuardianTunnel_Objective_PROXY_30();
		void SET_StationAnnouncement03(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_StationAnnouncements03(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_StationAnnouncement03(class UObject* Context);
		void SET_EnterAndLootVault(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindGuardianTunnel(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_FindGuardianTunnel(class UObject* Context);
		void Obj_GuardianIntro(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_GuardianIntro(class UObject* Context);
		void Obj_MayaLine(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_MayaLine(class UObject* Context);
		void OBJ_UseVaultDoorDevice(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GuardianTunnels(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindVault_Objective_PROXY_31();
		void Set_StationAnnouncement01(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_StationAnnouncements01(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_FindGuardianTunnel_Objective_PROXY_32();
		void SET_UseVaultDoorDevice(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_EllieSpawnsVehicle(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_MeetMaya_Objective_PROXY_33();
		void AdvanceTo_GoToSkyway_Final(class UObject* Context);
		void Set_IncomingTaunt(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TalkToLilith_Objective_PROXY_34();
		void Obj_DefeatBoss(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_BringBookToLilith_Objective_PROXY_35();
		void Set_RhysHologram(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_ReturnToBridge_Objective_PROXY_36();
		void Set_DefeatBoss(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void AdvanceTo_EnterAndLootVault(class UObject* Context);
		void Obj_EnterVault(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_EnterVault_Objective_PROXY_37();
		void Obj_EnterVault_Objective_PROXY_38();
		void Obj_LeaveVault(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_LeaveVault_Objective_PROXY_39();
		void PlayersInsideVault(class UObject* Context);
		void PlayersOutsideVault(class UObject* Context);
		void Obj_RespawnVehicle(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_CityVault01_AvaDone(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_AvaDoneWithCityVault01NPCScene(class UObject* Context);
		void OBJ_CityVault01_AvaDone_Objective_PROXY_40();
		void Obj_RespawnVehicle_Objective_PROXY_41();
		void Obj_RespawnVehicle_Objective_PROXY_42();
		void Obj_RespawnVehicle_Objective_PROXY_43();
		void Obj_RespawnVehicle_Objective_PROXY_44();
		void Obj_RespawnVehicle_Objective_PROXY_45();
		void Obj_RespawnVehicle_Objective_PROXY_46();
		void Obj_RespawnVehicle_Objective_PROXY_47();
		void Obj_RespawnVehicle_Objective_PROXY_48();
		void Obj_RespawnVehicle_Objective_PROXY_49();
		void Obj_RespawnVehicle_Objective_PROXY_50();
		void Obj_EnterCityBoss(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_EnterCityBoss(class UObject* Context);
		void Obj_VillainThreatComplete(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_ApproachAva(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_ApproachAva(class UObject* Context);
		void Obj_SmashSmallPiles(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_SmashSmallPiles(class UObject* Context);
		void Obj_SmashSmallPiles_Objective_PROXY_51();
		void Obj_SmashSmallPiles_Objective_PROXY_52();
		void Obj_SmashSmallPiles_Objective_PROXY_53();
		void Obj_SmashSmallPiles_Objective_PROXY_54();
		void Obj_SmashSmallPiles_Objective_PROXY_55();
		void Obj_SmashSmallPiles_Objective_PROXY_56();
		void Obj_SmashSmallPiles_Objective_PROXY_57();
		void Obj_SmashSmallPiles_Objective_PROXY_58();
		void Obj_SmashSmallPiles_Objective_PROXY_59();
		void Obj_OutOfRoadVO(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_OutOfRoadVO(class UObject* Context);
		void ExecuteUbergraph_Mission_Ep10_CityVault(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
