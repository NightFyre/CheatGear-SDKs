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
	 * BlueprintGeneratedClass Mission_Ep08_OrbitalPlatform.Mission_Ep08_OrbitalPlatform_C
	 * Size -> 0x0451 (FullSize[0x0961] - InheritedSize[0x0510])
	 */
	class UMission_Ep08_OrbitalPlatform_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_EnterBase_ObjSetVar;                                 // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillBoss_ObjSetVar;                                  // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EnterPoopChute_ObjVar;                               // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillBoss_ObjVar;                                     // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             SpawnKatagawa;                                           // 0x0538(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             ME_UpdateMeetContact1;                                   // 0x0548(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UMissionObjectiveSet*                                Set_DefendYourself2_ObjSetVar;                           // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DefendYourself2_ObjVar;                              // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FireLaser_ObjSetVar;                                 // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FireLaser_ObjVar;                                    // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_CollectFragment_ObjSetVar;                           // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CollectFragment_ObjVar;                              // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_HackSphere_ObjSetVar;                                // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_HackSphere_ObjVar;                                   // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_InspectSpheres_ObjSetVar;                            // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_InspectSpheres_ObjVar;                               // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_UseViperDrive_ObjVar;                                // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PlanetTitleCard_ObjSetVar;                           // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlanetTitleCard_ObjVar;                              // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToOrbital_ObjSetVar;                               // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToOrbital_ObjVar;                                  // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_RhysTitleCard_ObjSetVar;                             // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_RhysTitleCard_ObjVar;                                // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_LocateElevator_ObjSetVar;                            // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindElevator_ObjVar;                                 // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_HackElevator_ObjSetVar;                              // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_HackElevator_ObjVar;                                 // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_AltRoute_ObjSetVar;                                  // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindNewRoute_ObjVar;                                 // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Thruster_ObjSetVar;                                  // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MesswithThrusters_ObjVar;                            // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_OpenPoopChute_ObjSetVar;                             // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_OpenPoopChute_ObjVar;                                // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ClearSecurity_ObjVar;                                // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_BREADCRUMB_JumpOverChasm_ObjVar;                     // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UObject*                                             FatSphere;                                               // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UObject*                                             RatchSphere;                                             // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToPromethea_ObjSetVar;                             // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToCityPromethea_ObjVar;                            // 0x0658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_MeetWithRhys_ObjSetVar;                              // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToRhysLaunchPad_ObjVar;                            // 0x0668(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ViperDriveInitial_ObjSetVar;                         // 0x0670(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TakeViperDrive_ObjVar;                               // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ViperDriveHangar_ObjSetVar;                          // 0x0680(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ViperDriveOnHangarDoor_ObjVar;                       // 0x0688(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INVIS_SeeLaserInCity_ObjVar;                         // 0x0690(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KatBall_TITLECARD_ObjVar;                            // 0x0698(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindNetwork_ObjVar;                                  // 0x06A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_HackNetwork_ObjSetVar;                               // 0x06A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_BREADCRUMB_InfoOnElevator_ObjVar;                    // 0x06B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_InfiltrateBase_ObjVar;                               // 0x06B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindNetwork_ObjSetVar;                               // 0x06C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_BREADCRUMB_CoVMaintenance_ObjVar;                    // 0x06C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_OPTIONAL_FightEnemiesSentToElevator_ObjVar;          // 0x06D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindThruster_ObjSetVar;                              // 0x06D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindThruster_ObjVar;                                 // 0x06E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_BREADCRUMB_LaserFired_ObjVar;                        // 0x06E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INVIS_DiscoverChute_ObjVar;                          // 0x06F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ClearWayToCommandCenter_ObjSetVar;                   // 0x06F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ClearMaliwanToCommand_ObjVar;                        // 0x0700(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_RhysBallHack2_ObjSetVar;                             // 0x0708(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Firewall_ObjSetVar;                                  // 0x0710(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TurnOffFirewall_ObjVar;                              // 0x0718(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_InfiltrateCommand_ObjSetVar;                         // 0x0720(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_InfiltrateCommand_ObjVar;                            // 0x0728(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_RhysBallHack2_ObjVar;                                // 0x0730(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FollowRhysBall_ObjVar;                               // 0x0738(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_BREADCRUMB_HeadTowardsGate_ObjVar;                   // 0x0740(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_DefeatSecurity_ObjSetVar;                            // 0x0748(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SecurityNearElevator_ObjVar;                         // 0x0750(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INVIS_SecurityWave1_ObjVar;                          // 0x0758(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_SecurityWave2_ObjSetVar;                             // 0x0760(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INVIS_SecurityWave2_ObjVar;                          // 0x0768(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INVIS_KatagawaIntro_ObjVar;                          // 0x0770(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_EnterChute_ObjSetVar;                                // 0x0778(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ViperDriveFail_ObjSetVar;                            // 0x0780(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_AttemptViperDriveButFail_ObjVar;                     // 0x0788(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_RhysBallHack1_ObjSetVar;                             // 0x0790(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_RB_GoToHack1_ObjVar;                                 // 0x0798(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_RhysBallCower_ObjSetVar;                             // 0x07A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_RB_RhysBallToCower_ObjVar;                           // 0x07A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_RhysBallFirewall_ObjSetVar;                          // 0x07B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_RhysBallFirewall_ObjVar;                             // 0x07B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_RhysBallToBrokenDoor_ObjSetVar;                      // 0x07C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_RhysToBrokenDoor_ObjVar;                             // 0x07C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INVIS_MeetRhysBackAtDoor_ObjVar;                     // 0x07D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_BREADCRUMB_ElevatorSwitch_ObjVar;                    // 0x07D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INVIS_BigDoorOpen_ObjVar;                            // 0x07E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_SecureControlRoom_ObjSetVar;                         // 0x07E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SecureControlRoom_ObjVar;                            // 0x07F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_RhysTalks_ObjVar;                                    // 0x07F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 Conversation_Laser;                                      // 0x0800(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ENHV[0x4];                                   // 0x080C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjectiveSet*                                Set_ReturnToSanctuary_ObjSetVar;                         // 0x0810(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TurnIn_ObjSetVar;                                    // 0x0818(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReturnToSanc3_ObjVar;                                // 0x0820(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TurnIn_ObjVar;                                       // 0x0828(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 KatagawaTauntConversation;                               // 0x0830(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 K_ElevatorConversation;                                  // 0x083C(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 K_AttentionVIPConversation;                              // 0x0848(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2N3Y[0x4];                                   // 0x0854(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjectiveSet*                                Set_KataBall_TitleCard_ObjSetVar;                        // 0x0858(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KatagawaInterrupts_ObjSetVar;                        // 0x0860(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KatagawaContinuesVideo_ObjSetVar;                    // 0x0868(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INVIS_KatagawaContinuesVideo_ObjVar;                 // 0x0870(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 OrbitalInitialConversation;                              // 0x0878(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_YBMI[0x4];                                   // 0x0884(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjectiveSet*                                Set_RhysTalkingOverHologram_ObjSetVar;                   // 0x0888(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FakeSpawnSphere_ObjVar;                              // 0x0890(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TannisFragment_ObjSetVar;                            // 0x0898(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GiveFragmentToTannis_ObjVar;                         // 0x08A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_WavesOfControlRoom_ObjVar;                           // 0x08A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DestroyServers_ObjVar;                               // 0x08B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_DefeatExteriorEnemies_ObjSetVar;                     // 0x08B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SecurityOutsideGate_ObjVar;                          // 0x08C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_DestroyZanara_ObjVar;                            // 0x08C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 K_LaserDONTDOTHIS;                                       // 0x08D0(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 MayaAfterWardsChat;                                      // 0x08DC(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 VORhysLineBeforeGoingToOrbital;                          // 0x08E8(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 OptionalVOAboutcombatFromRhys;                           // 0x08F4(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 ViperDriveFailConvo;                                     // 0x0900(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 LaserFireInMaintenance;                                  // 0x090C(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 VOLaser3;                                                // 0x0918(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 VOChuteOpen;                                             // 0x0924(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 VORhysFransYogurtDismay;                                 // 0x0930(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 VODigbyVermouth;                                         // 0x093C(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 VO_ViperDriveInfo;                                       // 0x0948(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_JMUP[0x4];                                   // 0x0954(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjective*                                   Obj_INVIS_ListenToLaser3_ObjVar;                         // 0x0958(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       LaserChatOver;                                           // 0x0960(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnDialogSequenceFinished_187();
		void OnDialogSequenceFinished_186();
		void OnDialogSequenceFinished_185();
		void OnDialogSequenceFinished_184();
		void OnDialogSequenceFinished_183();
		void OnDialogSequenceFinished_182();
		void OnDialogSequenceFinished_181();
		void OnDialogSequenceFinished_180();
		void OnDialogSequenceFinished_179();
		void OnDialogSequenceFinished_178();
		void OnDialogSequenceFinished_177();
		void OnDialogSequenceFinished_176();
		void OnDialogSequenceFinished_175();
		void OnDialogSequenceFinished_174();
		void OnDialogSequenceFinished_173();
		void OnDialogSequenceFinished_172();
		void OnDialogSequenceFinished_171();
		void OnDialogSequenceFinished_170();
		void OnDialogSequenceFinished_169();
		void OnDialogSequenceFinished_168();
		void OnDialogSequenceFinished_167();
		void OnDialogSequenceFinished_166();
		void OnDialogSequenceFinished_165();
		void OnDialogSequenceFinished_164();
		void OnDialogSequenceFinished_163();
		void OnDialogSequenceFinished_162();
		void OnDialogSequenceFinished_161();
		void OnDialogSequenceFinished_160();
		void OnDialogSequenceFinished_159();
		void OnDialogSequenceFinished_158();
		void OnDialogSequenceFinished_157();
		void OnDialogSequenceFinished_156();
		void OnDialogSequenceFinished_155();
		void OnDialogSequenceFinished_154();
		void OnDialogSequenceFinished_153();
		void OnDialogSequenceFinished_152();
		void OnDialogSequenceFinished_151();
		void OnDialogSequenceFinished_150();
		void OnDialogSequenceFinished_149();
		void OnDialogSequenceFinished_148();
		void OnDialogSequenceFinished_147();
		void OnDialogSequenceFinished_146();
		void OnDialogSequenceFinished_145();
		void OnDialogSequenceFinished_144();
		void OnDialogSequenceFinished_143();
		void OnDialogSequenceFinished_142();
		void OnDialogSequenceFinished_141();
		void OnDialogSequenceFinished_140();
		void OnDialogSequenceFinished_139();
		void OnDialogSequenceFinished_138();
		void OnDialogSequenceFinished_137();
		void OnDialogSequenceFinished_136();
		void OnDialogSequenceFinished_135();
		void OnDialogSequenceFinished_134();
		void OnDialogSequenceFinished_133();
		void OnDialogSequenceFinished_132();
		void OnDialogSequenceFinished_131();
		void OnDialogSequenceFinished_130();
		void OnDialogSequenceFinished_129();
		void OnDialogSequenceFinished_128();
		void OnDialogSequenceFinished_127();
		void OnDialogSequenceFinished_126();
		void OnDialogSequenceFinished_125();
		void OnDialogSequenceFinished_124();
		void OnDialogSequenceFinished_123();
		void OnDialogSequenceFinished_122();
		void OnDialogSequenceFinished_121();
		void OnDialogSequenceFinished_120();
		void OnDialogSequenceFinished_119();
		void OnDialogSequenceFinished_118();
		void OnDialogSequenceFinished_117();
		void OnDialogSequenceFinished_116();
		void OnDialogSequenceFinished_115();
		void OnDialogSequenceFinished_114();
		void OnDialogSequenceFinished_113();
		void OnDialogSequenceFinished_112();
		void OnDialogSequenceFinished_111();
		void OnDialogSequenceFinished_110();
		void OnDialogSequenceFinished_109();
		void OnDialogSequenceFinished_108();
		void OnDialogSequenceFinished_107();
		void OnDialogSequenceFinished_106();
		void OnDialogSequenceFinished_105();
		void OnDialogSequenceFinished_104();
		void OnDialogSequenceFinished_103();
		void OnDialogSequenceFinished_102();
		void OnDialogSequenceFinished_101();
		void OnDialogSequenceFinished_100();
		void OnDialogSequenceFinished_99();
		void OnDialogSequenceFinished_98();
		void OnDialogSequenceFinished_97();
		void OnDialogSequenceFinished_96();
		void OnDialogSequenceFinished_95();
		void Set_RhysTitleCard(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_RhysTitleCard(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_UPDATE_GoToOrbital(class UObject* Context);
		void Set_LocateElevator(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindElevator(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_FoundElevator(class UObject* Context);
		void Set_HackElevator(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_HackElevator(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_HackedElevator(class UObject* Context);
		void Set_AltRoute(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindNewRoute(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_LaserFired(class UObject* Context);
		void Set_Thruster(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_MesswithThrusters(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_ThrustersDisabled(class UObject* Context);
		void Set_OpenPoopChute(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_OpenPoopChute(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_BC_OpenedChute(class UObject* Context);
		void Obj_ClearSecurity(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_ClearedSecurity(class UObject* Context);
		void Obj_BREADCRUMB_JumpOverChasm(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_JumpedChasm(class UObject* Context);
		void MCE_Update_DiscoveredSecurity(class UObject* Context);
		void MCE_Update_InspectedSphere(class UObject* Context);
		void Set_KataBall_TitleCard(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_KatBall_TITLECARD(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GoToPromethea(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GoToCityPromethea(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_GoToPromethea(class UObject* Context);
		void Set_MeetWithRhys(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GoToRhysLaunchPad(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_JumpTo_TitleCard(class UObject* Context);
		void Set_ViperDriveInitial(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TakeViperDrive(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_ViperDriveTaken(class UObject* Context);
		void Set_ViperDriveHangar(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ViperDriveOnHangarDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_HangarDoorOpened(class UObject* Context);
		void Set_GoToOrbital(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_INVIS_SeeLaserInCity(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_LaserFiredAtCity(class UObject* Context);
		void Obj_GoToRhysLaunchPad_Objective_PROXY();
		void Obj_FindNetwork(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_FoundTerminals(class UObject* Context);
		void Set_HackNetwork(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_BREADCRUMB_InfoOnElevator(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_GotCloserToElevator(class UObject* Context);
		void MCE_Update_FoundVents(class UObject* Context);
		void Obj_InfiltrateBase(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_FindNetwork(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_BREADCRUMB_CoVMaintenance(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_BC_CoVMaint(class UObject* Context);
		void Obj_OPTIONAL_FightEnemiesSentToElevator(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_EnemyCounter(class UObject* Context);
		void Obj_GoToOrbital(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_FindThruster(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_BREADCRUMB_LaserFired(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_FoundThruster(class UObject* Context);
		void Set_FindThruster(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_RhysTV(class UObject* Context);
		void MCE_KTV(class UObject* Context);
		void Obj_PlanetTitleCard(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INVIS_DiscoverChute(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_SawChute(class UObject* Context);
		void Set_ClearWayToCommandCenter(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ClearMaliwanToCommand(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_RhysBallHack2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_Firewall(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TurnOffFirewall(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_FirewallTurnedOff(class UObject* Context);
		void Set_InfiltrateCommand(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_InfiltrateCommand(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_InfiltratedCommand(class UObject* Context);
		void MCE_CowerScriptDone(class UObject* Context);
		void Obj_RhysBallHack2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_FollowRhysBall(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_BothAtHack2(class UObject* Context);
		void Obj_BREADCRUMB_HeadTowardsGate(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_LowGravMessage(class UObject* Context);
		void Set_DefeatSecurity(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_SecurityNearElevator(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INVIS_SecurityWave1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_SecurityWave1Complete(class UObject* Context);
		void Obj_INVIS_SecurityWave2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_SecurityWave2Complete(class UObject* Context);
		void Obj_SecurityNearElevator_Objective_PROXY_1();
		void Set_SecurityWave2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_INVIS_KatagawaIntro(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_KatagawaInterrupted(class UObject* Context);
		void Set_EnterChute(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_ViperDriveFail(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_AttemptViperDriveButFail(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_ViperDriveFailed(class UObject* Context);
		void Obj_RB_GoToHack1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_FollowRhysBall_Objective_PROXY_2();
		void Set_RhysBallHack1(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_RhysBallCower(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_Update_BothAtHack1(class UObject* Context);
		void MCE_Hack1ScriptDone(class UObject* Context);
		void Obj_FollowRhysBall_Objective_PROXY_3();
		void Obj_RB_RhysBallToCower(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_BothAtCower(class UObject* Context);
		void Obj_FollowRhysBall_Objective_PROXY_4();
		void MCE_Hack2ScriptDone(class UObject* Context);
		void Set_RhysBallFirewall(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_RhysBallFirewall(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_BothAtFirewall(class UObject* Context);
		void Obj_FollowRhysBall_Objective_PROXY_5();
		void Set_RhysBallToBrokenDoor(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_BothAtBrokenDoor(class UObject* Context);
		void MCE_Hack3ScriptDone(class UObject* Context);
		void Obj_RhysToBrokenDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_FinishedFollowingRhysBall(class UObject* Context);
		void Obj_INVIS_MeetRhysBackAtDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_BREADCRUMB_ElevatorSwitch(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_BC_HitElevatorSwitch(class UObject* Context);
		void MCE_Update_WentBackToRhysBall(class UObject* Context);
		void Obj_INVIS_BigDoorOpen(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_BigDoorOpen(class UObject* Context);
		void Set_SecureControlRoom(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_SecureControlRoom(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_SecuredControlRoom(class UObject* Context);
		void MCE_Advance_DefendRhysBall(class UObject* Context);
		void Update_RhysTalks(class UObject* Context);
		void Obj_RhysTalks(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_PlanetTitleCard(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_ReturnToSanctuary(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_TurnIn(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ReturnToSanc3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_TurnIn(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_TurnedIn(class UObject* Context);
		void MCE_Update_ReturnedtoSanc3(class UObject* Context);
		void MCE_FinishRhysLineAboutHackingElevator(class UObject* Context);
		void MCE_ViperDriveFinishVOMainGate(class UObject* Context);
		void MCE_ViperDriveSetup(class UObject* Context);
		void MCE_Update_ClearedTheWayToFireWall(class UObject* Context);
		void Set_KatagawaInterrupts(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_KatagawaContinuesVideo(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_INVIS_KatagawaContinuesVideo(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_KatagawaFinishedSecondVideo(class UObject* Context);
		void MCE_Advance_HangarDoorToOrbital(class UObject* Context);
		void Set_RhysTalkingOverHologram(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FakeSpawnSphere(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_GiveFragmentToTannis(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_TannisFragment(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_Update_GaveFragmentToTannis(class UObject* Context);
		void MissionKickoff();
		void Obj_WavesOfControlRoom(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_GiveFragmentToTannis_Objective_PROXY_6();
		void Obj_DestroyServers(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_DestroyedServers(class UObject* Context);
		void Set_DefeatExteriorEnemies(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_SecurityOutsideGate(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_DefeatedExteriorEnemies(class UObject* Context);
		void Obj_INV_DestroyZanara(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_UseViperDrive(class UObject* Context);
		void Obj_UseViperDrive(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_InspectSpheres(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_InspectSpheres(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_HackSphere(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_VO_CoVCombatClear_2(class UObject* Context);
		void Set_HackSphere(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_BCAdvanceTo_JumpedChasm(class UObject* Context);
		void MCE_Update_HackedSphere(class UObject* Context);
		void MCE_RhysBallContinueVOStart(class UObject* Context);
		void Set_EnterBase(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_CollectFragment(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_CollectFragment(class UObject* Context);
		void Set_CollectFragment(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_Update_PlayerFiredLaser(class UObject* Context);
		void Obj_FireLaser(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_FireLaser(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_Update_DefendYourself2(class UObject* Context);
		void MCE_ViperDriveProximity(class UObject* Context);
		void MCE_InterruptViperDriveInfo(class UObject* Context);
		void Obj_INVIS_ListenToLaser3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_DefendYourself2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void CE_RhysIsUpsetAboutLaser3();
		void Set_DefendYourself2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_Update_EnterPoopChute(class UObject* Context);
		void Obj_KillBoss(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_EnterPoopChute(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_KillBoss(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void ExecuteUbergraph_Mission_Ep08_OrbitalPlatform(int32_t EntryPoint);
		void ME_UpdateMeetContact1__DelegateSignature();
		void SpawnKatagawa__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
