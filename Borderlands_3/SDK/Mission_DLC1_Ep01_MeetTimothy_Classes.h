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
	 * BlueprintGeneratedClass Mission_DLC1_Ep01_MeetTimothy.Mission_DLC1_Ep01_MeetTimothy_C
	 * Size -> 0x03A0 (FullSize[0x08B0] - InheritedSize[0x0510])
	 */
	class UMission_DLC1_Ep01_MeetTimothy_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjective*                                   Obj_MeetTimothyAtHideout_ObjVar;                         // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_RescueStranger_ObjSetVar;                            // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_RescueStranger_ObjVar;                               // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_TitleCard_TimothyLawrence_ObjVar;                // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TitleCard_TimothyLawrence_ObjSetVar;                 // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ClearArea_ObjSetVar;                                 // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ClearArea_ObjVar;                                    // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_PlayerInArea_ObjVar;                             // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TimothyIntro_ObjSetVar;                              // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToTimothy_ObjVar;                                // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TimothysHideout_ObjSetVar;                           // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PlayShotMachineDoor_ObjSetVar;                       // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EnterCasino_ObjVar;                                  // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToTower_ObjSetVar;                                 // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToTower_ObjVar;                                    // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_ReadyForTimothySOS_ObjVar;                       // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlaySlotMachineDoor_ObjVar;                          // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillLoaders_ObjSetVar;                               // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_KillAmbushLoaders_ObjVar;                        // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_EnterCasino_ObjSetVar;                               // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GetTeleporterPart_ObjSetVar;                         // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetTeleporterPart_ObjVar;                            // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PlaceTeleporterPart_ObjSetVar;                       // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlaceTeleporterPart_ObjVar;                          // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_OpenLootDoor_ObjVar;                             // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_TimothyOnTeleport_ObjVar;                            // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_TimothyReadyToTeleport_ObjVar;                       // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_CasinoEntrance_ObjSetVar;                            // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_StartJackHologram_ObjVar;                        // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToSubway_ObjSetVar;                                // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_ReadyForSubwayDialog_ObjVar;                     // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_EnterSubway_ObjSetVar;                               // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EnterSubway_ObjVar;                                  // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToEndOfSubway_ObjSetVar;                           // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_ReadyForSubwayBoss_ObjVar;                       // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   obj_KillNamedBadass_ObjVar;                              // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_KilledLoadersAmbushCasinoFloor_ObjVar;           // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_TimWentToSquareExitDoor_ObjVar;                  // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FollowTimothyToSquareExitDoor_ObjSetVar;             // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FollowTimothy_ObjVar;                                // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_TimothyAtBridgeStart_ObjVar;                     // 0x0658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_MoxxiVO_1_ObjVar;                                // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_TimothyWentToBrokenTeleporter_ObjVar;            // 0x0668(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_SquareExitDoorOpen_ObjVar;                       // 0x0670(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_PlayerAtSquareDoor_ObjVar;                       // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FollowTimothyToBridgeStart_ObjSetVar;                // 0x0680(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FollowTimothyToBrokenTeleporter_ObjSetVar;           // 0x0688(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_OpenLootRoom_ObjSetVar;                              // 0x0690(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_ReadyToOpenSquareExitDoor_ObjVar;                // 0x0698(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_TimReadyGoToHologramSeqSpot_ObjVar;              // 0x06A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MeetTimothyAtHideout_BC1_ObjVar;                     // 0x06A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_IntroCinematic_ObjSetVar;                            // 0x06B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_IntroCinematic_ObjVar;                           // 0x06B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_EnteredCasinoFloor_VO_ObjVar;                    // 0x06C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_StartedFightAgainstLooters_ObjVar;               // 0x06C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_OpenCasinoDoor_ObjVar;                           // 0x06D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_ExitMetroStation_ObjVar;                         // 0x06D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_GetBackAtTeleporter_ObjVar;                      // 0x06E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_HitTeleport_ObjSetVar;                               // 0x06E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_HitTeleporter_ObjVar;                                // 0x06F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_UseHolostructer_ObjSetVar;                           // 0x06F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_ReadyForHologram_ObjVar;                         // 0x0700(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_MoxxiHologramDone_ObjVar;                            // 0x0708(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_UseHolostructor_ObjVar;                              // 0x0710(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_ReadyForDeathTowerIntro_ObjVar;                  // 0x0718(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_OpenedAirlockDoor_ObjVar;                            // 0x0720(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_OpenedAirlockDoor_2_ObjVar;                      // 0x0728(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TryVIPExperience_ObjVar;                             // 0x0730(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_EnterLobby_ObjVar;                               // 0x0738(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillAmbushLoaders_ObjVar;                            // 0x0740(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_StartedBeating_ObjVar;                           // 0x0748(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_HologramJack_EndTeasing_ObjVar;                  // 0x0750(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TakeGunFromTimothy_ObjSetVar;                        // 0x0758(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TakeGun_ObjVar;                                      // 0x0760(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_TimothyReadyToGoToPartDoor_ObjVar;               // 0x0768(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_TimothyArrivedAtPartDoor_ObjVar;                 // 0x0770(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_TimothyWinningHand_PartDoor_ObjVar;              // 0x0778(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsAmbushCompleteLoad;                                    // 0x0780(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_G41Y[0x7];                                   // 0x0781(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjective*                                   Obj_INV_ReadyToSpawnLoaders_ObjVar;                      // 0x0788(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReadyToSpawnPrettyBoyGang_ObjVar;                    // 0x0790(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_HologramJack_StartTeasing_ObjVar;                // 0x0798(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_WinnerVO_Ended_ObjVar;                           // 0x07A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PlaySeq_Hologram_ObjSetVar;                          // 0x07A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_ArrivedAtHologramSeqSpot_ObjVar;                 // 0x07B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_JumpOnTracks_ObjVar;                             // 0x07B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_ArrivedAtStrip_ObjVar;                           // 0x07C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_PlayingPrettyBoyVidscreen_1_ObjVar;              // 0x07C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_DonePlayingPrettyBoyScreenVid_1B_ObjVar;         // 0x07D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   IINV_Obj_DonePlayingPrettyBoyScreenVid_1C_ObjVar;        // 0x07D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_DonePlayingPrettyBoyScreenVid_2_ObjVar;          // 0x07E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_ReadyToStartPlayingRescueScreenVids_ObjVar;      // 0x07E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_DonePlayingPrettyBoyScreenVid_3_ObjVar;          // 0x07F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_KillEveryoneSubway_ObjVar;                       // 0x07F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_DonePlayingPrettyBoyVidScreen_4_ObjVar;          // 0x0800(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_WelcomeVOEnd_ObjVar;                             // 0x0808(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_PlayerOpenedReChest_ObjVar;                      // 0x0810(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_ReadyForWinningHand_ObjVar;                      // 0x0818(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_TimothyReadyToTalkAboutTeleport_ObjVar;              // 0x0820(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_CasinoDoor_ClosedReady_ObjVar;                   // 0x0828(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillThirdRailAndGang_ObjSetVar;                      // 0x0830(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillBadassGang_ObjVar;                               // 0x0838(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_TimothyAnswersVH_ObjVar;                             // 0x0840(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_TimothyReadyToFaceTeleporter_ObjVar;                 // 0x0848(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Navigate_DLC1Planet_ObjSetVar;                       // 0x0850(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Navigate_DLC1Planet_ObjVar;                          // 0x0858(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_UseDropPod_ObjSetVar;                                // 0x0860(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReNavigate_DLC1Planet_ObjVar;                        // 0x0868(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_UseDropPod_ObjVar;                                   // 0x0870(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_PlayerInArea_Precheck_ObjVar;                    // 0x0878(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_ClearArea_Precheck_ObjVar;                       // 0x0880(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_SpawnedAmbushLoaders_ObjVar;                     // 0x0888(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_PlayerArrivedForLead_ObjVar;                     // 0x0890(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_TeleporterPartGlassBroken_ObjVar;                // 0x0898(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_TimArrivedAtHideout_ObjVar;                      // 0x08A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_TimothyLookBackAtPlayer_ObjVar;                  // 0x08A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
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
		void OnDialogSequenceFinished_32();
		void OnDialogSequenceFinished_31();
		void OnDialogSequenceFinished_30();
		void Obj_RescueStranger(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerEnteredTerminal(class UObject* Context);
		void MCE_ReadyForTimSOS(class UObject* Context);
		void Obj_PlaySlotMachineDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerPlayedSlotMachineDoor(class UObject* Context);
		void Obj_EnterCasino_Objective_PROXY();
		void Set_KillLoaders(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_EnterCasino_Objective_PROXY_1();
		void Obj_INV_KillAmbushLoaders(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerKilledAmbushLoaders(class UObject* Context);
		void Set_EnterCasino(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_GetTeleporterPart(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GetTeleporterPart(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_Obj_ReadyForTimothySOS(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GoToTower(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_PlaceTeleporterPart(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_PlaceTeleporterPart(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerPlacedPowerCoupling(class UObject* Context);
		void INV_Obj_OpenLootDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_TimothyOpenedLootDoor(class UObject* Context);
		void INV_TimothyOnTeleport(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_TimothyOnTeleport(class UObject* Context);
		void INV_TimothyReadyToTeleport(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_TimothyReadyToTeleport(class UObject* Context);
		void Set_CasinoEntrance(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void INV_Obj_StartJackHologram(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_StartJackHologram(class UObject* Context);
		void Obj_EnterCasino_Objective_PROXY_2();
		void INV_Obj_MoxxiVO_2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_MoxxiVO_2(class UObject* Context);
		void MCE_PlayerFollowedTimothyToHideout(class UObject* Context);
		void Obj_GoToTower(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_Obj_ReadyForSubwayDialog(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_MeetTimothyAtHideout(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GoToSubway(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GoToTower_Objective_PROXY_3();
		void Obj_EnterSubway(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerEnteredSubway(class UObject* Context);
		void Set_EnterSubway(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GoToTower_Objective_PROXY_4();
		void INV_Obj_ReadyForSubwayBoss(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ReadyForSubwayBoss(class UObject* Context);
		void Set_GoToEndOfSubway(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GoToTower_Objective_PROXY_5();
		void Set_PlayShotMachineDoor(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_KillNamedBadass(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerKilledSubwayBadass(class UObject* Context);
		void Obj_EnterCasino(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_RescueStranger(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_TimothysHideout(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_INV_KilledLoadersAmbushCasinoFloor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerKilledLoadersCasinoFloor(class UObject* Context);
		void INV_Obj_TimWentToSquareExitDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_TimothyAtSquareExitDoor(class UObject* Context);
		void Obj_RescueStranger_Objective_PROXY_6();
		void Set_FollowTimothyToSquareExitDoor(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FollowTimothy(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerFollowedTimothy(class UObject* Context);
		void INV_Obj_TimothyAtBridgeStart(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_TimothyAtBridgeStart(class UObject* Context);
		void INV_Obj_TimothyWentToBrokenTeleporter(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_TimothyAtBrokenTeleporter(class UObject* Context);
		void INV_Obj_SquareExitDoorOpen(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_SquareExitDoorOpen(class UObject* Context);
		void MCE_PlayerAtSquareDoor(class UObject* Context);
		void INV_Obj_PlayerAtSquareDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_TalkToTimothy(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_TimothyIntro(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_PlayerEnteredRescueArea(class UObject* Context);
		void Set_FollowTimothyToBridgeStart(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_FollowTimothyToBrokenTeleporter(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FollowTimothy_Objective_PROXY_7();
		void Obj_FollowTimothy_Objective_PROXY_8();
		void Set_OpenLootRoom(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void INV_Obj_PlayerInArea(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_Obj_ReadyToOpenSquareExitDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_FollowTimothy_Objective_PROXY_9();
		void MCE_PlayerTalkedToTimothy(class UObject* Context);
		void INV_Obj_TimReadyGoToHologramSeqSpot(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_Obj_ArrivedAtHologramSeqSpot(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ArrivedAtHologramSeqSpot(class UObject* Context);
		void Obj_MeetTimothyAtHideout_BC1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerArrived_TimothyHideout_BC1(class UObject* Context);
		void Obj_INV_IntroCinematic(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_IntroCinematic(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_INV_EnteredCasinoFloor_VO(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_EnteredCasinoFloor_VO(class UObject* Context);
		void MCE_INV_StartedFightAgainstLooters(class UObject* Context);
		void Obj_INV_StartedFightAgainstLooters(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_OpenCasinoDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_SpawnedAmbushLoaders(class UObject* Context);
		void INV_Obj_ExitMetroStation(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_ExitMetroStation(class UObject* Context);
		void Obj_INV_GetBackAtTeleporter(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_HitTeleporter(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_HitTeleport(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_HitTeleport(class UObject* Context);
		void MCE_INV_GetBackAtTeleporter(class UObject* Context);
		void Set_UseHolostructer(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_TEMP_TitleCardCompletion(class UObject* Context);
		void MCE_UsedHolostructer(class UObject* Context);
		void INV_Obj_ReadyForHologram(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_MoxxiHologramDone(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_MoxxiHologramDone(class UObject* Context);
		void Obj_UseHolostructor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_Obj_ReadyForDeathTowerIntro(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ReadyForDeathTowerIntro(class UObject* Context);
		void Obj_OpenedAirlockDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_OpenedAirlockDoor(class UObject* Context);
		void INV_Obj_OpenedAirlockDoor_3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_TryVIPExperience(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_TriedVIPExperience(class UObject* Context);
		void INV_Obj_EnterLobby(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_EnteredLobby(class UObject* Context);
		void Obj_KillAmbushLoaders(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_StartedBeating(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_StartedBeating(class UObject* Context);
		void Obj_INV_HologramJack_EndTeasing(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerRescuedStranger(class UObject* Context);
		void Obj_TakeGun(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerTookGunFromTimothy(class UObject* Context);
		void Set_TakeGunFromTimothy(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void INV_Obj_TimothyReadyToGoToPartDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_Obj_TimothyArrivedAtPartDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_TimothyArrivedAtPartDoor(class UObject* Context);
		void INV_Obj_TimothyWinningHand_PartDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_TimothyWinningHand_PartDoor(class UObject* Context);
		void Obj_ClearArea(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_ReadyToSpawnLoaders(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_ReadyToSpawnLoaders(class UObject* Context);
		void Obj_ReadyToSpawnPrettyBoyGang(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ReadyToSpawnPrettyBoyGang(class UObject* Context);
		void Obj_INV_HologramJack_StartTeasing(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_WinnerVO_Ended(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_PlaySeq_Hologram(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void INV_Obj_JumpOnTracks(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_JumpedOnTracks(class UObject* Context);
		void INV_Obj_ArrivedAtStrip(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_ArrivedAtStrip(class UObject* Context);
		void INV_Obj_PlayingPrettyBoyVidscreen_2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_DoneWithPrettyBoyVidscreen_2(class UObject* Context);
		void INV_Obj_DonePlayingPrettyBoyScreenVid_1B(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ClearArea(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void IINV_Obj_DonePlayingPrettyBoyScreenVid_1C(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_DoneWithPrettyBoyVidscreen_1B(class UObject* Context);
		void MCE_DoneWithPrettyBoyVidscreen_1C(class UObject* Context);
		void INV_Obj_DonePlayingPrettyBoyScreenVid_3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_DoneWithPrettyBoyVidscreen_3(class UObject* Context);
		void INV_Obj_ReadyToStartPlayingRescueScreenVids(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_Obj_DonePlayingPrettyBoyScreenVid_4(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_DoneWithPrettyBoyVidscreen_4(class UObject* Context);
		void Obj_INV_KillEveryoneSubway(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_PlayerKilledBadassGang(class UObject* Context);
		void INV_Obj_DonePlayingPrettyBoyVidScreen_5(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_DoneWithPrettyBoyVidscreen_5(class UObject* Context);
		void INV_Obj_WelcomeVOEnd(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_WelcomeVOEnd(class UObject* Context);
		void MCE_INV_WinnerVOEnd(class UObject* Context);
		void MCE_INV_FightEndVOEnd(class UObject* Context);
		void MCE_INV_TeasingVOEnd(class UObject* Context);
		void MCE_JackHologram_Winner_StartKillLoaders(class UObject* Context);
		void INV_Obj_PlayerOpenedReChest(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerOpenedRedChest(class UObject* Context);
		void INV_Obj_PlayerOpenedReChest_Objective_PROXY_10();
		void INV_Obj_PlayerOpenedReChest_Objective_PROXY_11();
		void INV_Obj_PlayerOpenedReChest_Objective_PROXY_12();
		void INV_Obj_PlayerOpenedReChest_Objective_PROXY_13();
		void INV_Obj_PlayerOpenedReChest_Objective_PROXY_14();
		void INV_Obj_PlayerOpenedReChest_Objective_PROXY_15();
		void INV_Obj_PlayerOpenedReChest_Objective_PROXY_16();
		void INV_Obj_PlayerOpenedReChest_Objective_PROXY_17();
		void INV_Obj_PlayerOpenedReChest_Objective_PROXY_18();
		void INV_Obj_PlayerOpenedReChest_Objective_PROXY_19();
		void INV_Obj_ReadyForWinningHand(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_TimothyReadyToTalkAboutTeleport(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_Obj_CasinoDoor_ClosedReady(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_CasinoDoor_ClosedReady(class UObject* Context);
		void Obj_KillBadassGang(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_KillThirdRailAndGang(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void INV_TimothyAnswersVH(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_RescueStranger_Objective_PROXY_20();
		void UPDATE_INV_TeasingVOStart(class UObject* Context);
		void INV_TimothyReadyToFaceTeleporter(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_Navigate_DLC1Planet(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_Navigate_DLC1Planet(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_Navigate_DLC1Planet(class UObject* Context);
		void Set_UseDropPod(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ReNavigate_DLC1Planet(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_ReNavigate_DLC1Planet(class UObject* Context);
		void Obj_UseDropPod(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MissionKickoff();
		void ADVANCE_Navigate_DLC1Planet(class UObject* Context);
		void Set_TitleCard_TimothyLawrence(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_UsedDropPod(class UObject* Context);
		void INV_Obj_PlayerInArea_Precheck(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_Obj_ClearArea_Precheck(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_SpawnedAmbushLoaders(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_Obj_PlayerArrivedForLead(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerArrivedForLead(class UObject* Context);
		void INV_Obj_TeleporterPartGlassBroken(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_TeleporterPartGlassBroken(class UObject* Context);
		void INV_Obj_TimArrivedAtHideout(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_TimArrivedAtHideout(class UObject* Context);
		void INV_Obj_TimothyLookBackAtPlayer(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_TimothyLookBackAtPlayer(class UObject* Context);
		void INV_Obj_TitleCard_TimothyLawrence(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerClearedArea(class UObject* Context);
		void ExecuteUbergraph_Mission_DLC1_Ep01_MeetTimothy(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
