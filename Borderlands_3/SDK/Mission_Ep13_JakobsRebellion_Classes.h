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
	 * BlueprintGeneratedClass Mission_Ep13_JakobsRebellion.Mission_Ep13_JakobsRebellion_C
	 * Size -> 0x02C8 (FullSize[0x07D8] - InheritedSize[0x0510])
	 */
	class UMission_Ep13_JakobsRebellion_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_TalkToClayRelianceEntrance_ObjSetVar;                // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FollowClayRelianceEntrance_ObjSetVar;                // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FollowClayToRooftop_ObjSetVar;                       // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FollowClayToRooftop_ObjVar;                          // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ShootTheTechPanel_ObjSetVar;                         // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ShootTheTechPanel_ObjVar;                            // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FreeTheRebels_ObjSetVar;                             // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FollowClayRelianceEntrance_ObjVar;                   // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_CoVFinalFightWave1_ObjSetVar;                        // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillLongArm_ObjVar;                                  // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_StuffActivates_ObjSetVar;                            // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MainEntranceGatesOpen_ObjVar;                        // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CatchARide_ObjVar;                                   // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_BountyBoardActive_ObjVar;                            // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_VendingMachineActive_ObjVar;                         // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_UseTownSwitch_ObjSetVar;                             // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_UseTownSwitch_ObjVar;                                // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToClayRelianceEntrance_ObjVar;                   // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_RebelsFreedTalkToClay_ObjSetVar;                     // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_RebelsFreedTalkToClay_ObjVar;                        // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CoVFinalFightWave1_ObjVar;                           // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillCoVCageProtection_ObjVar;                        // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TalkToClayAfterFight_ObjSetVar;                      // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToClayAfterFight_ObjVar;                         // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FollowClayToWeaponShed_ObjSetVar;                    // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FollowClayToWeaponShed_ObjVar;                       // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ClayTitleCard_ObjSetVar;                             // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ClayTitleCard_ObjVar;                                // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_CoVAtEntrance_ObjSetVar;                             // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CoVAtEntrance_ObjVar;                                // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_MeetClayAtReliance_ObjSetVar;                        // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MeetClayAtReliance_ObjVar;                           // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FreeRebel2_ObjVar;                                   // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FreeRebel1_ObjVar;                                   // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TechPannelShot_ObjSetVar;                            // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TechPanelShot_ObjVar;                                // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_CoVFinalFightWave2_ObjSetVar;                        // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CoVFinalFightWave2_ObjVar;                           // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_CoVFinalFightWave3_ObjSetVar;                        // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CoVFinalFightWave3_ObjVar;                           // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillLongArm_ObjSetVar;                               // 0x0658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Wave1CompleteFallBack_ObjSetVar;                     // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Wave1CompleteFallBack_ObjVar;                        // 0x0668(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Wave2CompleteFallBack_ObjSetVar;                     // 0x0670(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Wave2CompleteFallBack_ObjVar;                        // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Wave3CompleteFallBack_ObjSetVar;                     // 0x0680(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Wave3CompleteFallBack_ObjVar;                        // 0x0688(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FollowClayRelianceSecretEntrance_ObjVar;             // 0x0690(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillLongArm_Adds_ObjVar;                             // 0x0698(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToFortSunshine_ObjSetVar;                          // 0x06A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToFortSunshine_ObjVar;                             // 0x06A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToHistoricalLookout_ObjSetVar;                     // 0x06B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToHistoricalLookout_ObjVar;                        // 0x06B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToLumberyard_ObjSetVar;                            // 0x06C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoLumberyard_ObjVar;                                 // 0x06C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToLoadingDock_ObjSetVar;                           // 0x06D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToLoadingDock_ObjVar;                              // 0x06D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_CatchARail_ObjSetVar;                                // 0x06E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CatchARail_ObjVar;                                   // 0x06E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_RideTheRail_1_ObjSetVar;                             // 0x06F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_RideToFortSunshine_1_ObjVar;                         // 0x06F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ClearFortSunshine_ObjSetVar;                         // 0x0700(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ClearFortSunshine_ObjVar;                            // 0x0708(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FreeDaltonFromCell_ObjSetVar;                        // 0x0710(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FreeDaltonFromCell_ObjVar;                           // 0x0718(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TakeKeyFromDalton_ObjSetVar;                         // 0x0720(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TakeKeyFromDalton_ObjVar;                            // 0x0728(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_OpenDaltonsLootCrate_ObjSetVar;                      // 0x0730(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_OpenDaltonsLootCrate_ObjVar;                         // 0x0738(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TalkToClayMissionComplete_ObjSetVar;                 // 0x0740(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToClayMissionComplete_ObjVar;                    // 0x0748(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GetBackOnContainer_ObjSetVar;                        // 0x0750(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetBackOnContainer_ObjVar;                           // 0x0758(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_RideTheRail_2_ObjSetVar;                             // 0x0760(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_RideToFortSunshine_2_ObjVar;                         // 0x0768(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ClearFortSunshineCounter_ObjVar;                     // 0x0770(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillTheAnointed_ObjSetVar;                           // 0x0778(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillTheAnointed_ObjVar;                              // 0x0780(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_RebelsGrabGuns_ObjSetVar;                            // 0x0788(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Rebel_A_GrabGun_ObjVar;                              // 0x0790(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Rebel_B_GrabGun_ObjVar;                              // 0x0798(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_CoVFirehawkWave_ObjSetVar;                           // 0x07A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CoVFirehawkWave_ObjVar;                              // 0x07A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FollowClayRelianceHackDoor_ObjVar;                   // 0x07B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FirehawkAttackFortEntrance_ObjVar;                   // 0x07B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FirehawkAttackFortEntrance_ObjSetVar;                // 0x07C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FallowClayToPlatform_ObjSetVar;                      // 0x07C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FollowClayToSecret_ObjSetVar;                        // 0x07D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
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
		void OnDialogSequenceFinished_26();
		void OnDialogSequenceFinished_25();
		void Set_TalkToClayRelianceEntrance(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_FollowClayRelianceEntrance(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_FollowClayToRooftop(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FollowClayToRooftop(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ShootTheTechPanel(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ShootTheTechPanel(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_FreeTheRebels(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FollowClayRelianceEntrance(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_CoVFinalFightWave1(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_KillLongArm(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_StuffActivates(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_MainEntranceGatesOpen(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_CatchARide(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_BountyBoardActive(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_VendingMachineActive(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_UseTownSwitch(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_UseTownSwitch(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_TalkToClayRelianceEntrance(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ClayArrivedAtEntrance(class UObject* Context);
		void Set_RebelsFreedTalkToClay(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_RebelsFreedTalkToClay(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_RebelsFreedTalkToClay(class UObject* Context);
		void MCE_WeaponShedShot(class UObject* Context);
		void Obj_CoVFinalFightWave1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_KillCoVCageProtection(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_CoVCageProtectionDead(class UObject* Context);
		void MCE_LongArmIsDead(class UObject* Context);
		void Obj_TalkToClayAfterFight(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_TalkToClayAfterFight(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_TalkToClayAfterFight(class UObject* Context);
		void MCE_TownSwitchUsed(class UObject* Context);
		void MCE_Town_MainGatesOpened(class UObject* Context);
		void MCE_Town_CatchARideActivated(class UObject* Context);
		void MCE_Town_BountyBoardActivated(class UObject* Context);
		void MCE_Town_VendingMachineActivated(class UObject* Context);
		void Set_FollowClayToWeaponShed(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FollowClayToWeaponShed(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ClayArrivedAtWeaponShed(class UObject* Context);
		void Set_ClayTitleCard(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ClayTitleCard(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_TalkToClayRelianceEntrance(class UObject* Context);
		void Set_CoVAtEntrance(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_CoVAtEntrance(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_CoVAtEntranceDead(class UObject* Context);
		void Set_MeetClayAtReliance(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_MeetClayAtReliance(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ShowTitleCard(class UObject* Context);
		void Obj_FreeRebel1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_FreeRebel2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Rebel1Freed(class UObject* Context);
		void MCE_Rebel2Freed(class UObject* Context);
		void Set_TechPannelShot(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TechPanelShot(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_CoVFinalFightWave2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_CoVFinalFightWave2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_CoVFinalFightWave3(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_CoVFinalFightWave3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_KillLongArm(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_Wave1CoVDead(class UObject* Context);
		void MCE_Wave2CoVDead(class UObject* Context);
		void MCE_Wave3CoVDead(class UObject* Context);
		void MCE_ClayAtWeaponShedEntrance(class UObject* Context);
		void Set_Wave1CompleteFallBack(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_Wave1CompleteFallBack(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Wave1CompleteFallBack(class UObject* Context);
		void Set_Wave2CompleteFallBack(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_Wave2CompleteFallBack(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Wave2CompleteFallBack(class UObject* Context);
		void Set_Wave3CompleteFallBack(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_Wave3CompleteFallBack(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Wave3CompleteFallBack(class UObject* Context);
		void Obj_FollowClayRelianceSecretEntrance(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ClayArrivedAtSecretEntrance(class UObject* Context);
		void Obj_KillLongArm_Adds(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_LongArmAddsAreDead(class UObject* Context);
		void Set_GoToFortSunshine(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GoToFortSunshine(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_Go_To_Fort_Sunshine(class UObject* Context);
		void Set_GoToHistoricalLookout(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GoToHistoricalLookout(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_Go_To_Historical_Lookout(class UObject* Context);
		void Set_GoToLumberyard(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GoLumberyard(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_Go_To_Lumberyard(class UObject* Context);
		void Set_GoToLoadingDock(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GoToLoadingDock(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_Go_To_Loading_Dock(class UObject* Context);
		void Set_CatchARail(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_CatchARail(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_Catch_A_Rail(class UObject* Context);
		void Set_RideTheRail_2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_Update_Ride_To_Fort_Sunshine(class UObject* Context);
		void MCE_Update_Dialog_EndPoint(class UObject* Context);
		void Obj_RideToFortSunshine_2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ClearFortSunshine(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ClearFortSunshine(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_Clear_Fort_Sunshine(class UObject* Context);
		void Set_FreeDaltonFromCell(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FreeDaltonFromCell(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_Free_Dalton_From_Cell(class UObject* Context);
		void Set_TakeKeyFromDalton(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TakeKeyFromDalton(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_Take_Key_From_Dalton(class UObject* Context);
		void Set_OpenDaltonsLootCrate(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_OpenDaltonsLootCrate(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_Open_Daltons_Loot_Crate(class UObject* Context);
		void Set_TalkToClayMissionComplete(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TalkToClayMissionComplete(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_Talk_To_Clay_Mission_Complete(class UObject* Context);
		void MCE_Update_Get_Back_On_Container(class UObject* Context);
		void Obj_GetBackOnContainer(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GetBackOnContainer(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_Update_Ride_To_Fort_Sunshine(class UObject* Context);
		void Set_RideTheRail_3(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_RideToFortSunshine_3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_ClearFortSunshineCounter(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_Clear_Fort_Sunshine_Counter(class UObject* Context);
		void Set_KillTheAnointed(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_Update_Kill_The_Anointed(class UObject* Context);
		void Obj_KillTheAnointed(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_RebelsGrabGuns(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_Rebel_A_GrabGun(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_Rebel_B_GrabGun(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_HeadingToReliance_WainwrightVO(class UObject* Context);
		void MCE_HeadingToReliance_TyreenVO(class UObject* Context);
		void Set_CoVFirehawkWave(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_CoVFirehawkWave(class UObject* Context);
		void Obj_CoVFirehawkWave(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_FollowClayRelianceHackDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ClayArrivedAtHackDoor(class UObject* Context);
		void Obj_FirehawkAttackFortEntrance(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_Firehawk_Attack_Fort_Entrance(class UObject* Context);
		void Set_FirehawkAttackFortEntrance(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_FallowClayToPlatform(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_FollowClayToSecret(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FollowClayRelianceSecretEntrance_Objective_PROXY();
		void Obj_FollowClayRelianceSecretEntrance_Objective_PROXY_1();
		void ExecuteUbergraph_Mission_Ep13_JakobsRebellion(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
