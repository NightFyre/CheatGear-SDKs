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
	 * BlueprintGeneratedClass Mission_Ep01_ChildrenOfTheVault.Mission_Ep01_ChildrenOfTheVault_C
	 * Size -> 0x0268 (FullSize[0x0778] - InheritedSize[0x0510])
	 */
	class UMission_Ep01_ChildrenOfTheVault_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjective*                                   Obj_GetEchoFromClaptrap_ObjVar;                          // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FollowClaptrapToQuickChange_ObjSetVar;               // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToQuickChangeWithClaptrap_ObjVar;                  // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ClaptrapRemovingSpam_ObjSetVar;                      // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CloseFakeEULA_ObjVar;                                // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FollowClaptrapToFirstGate_ObjSetVar;                 // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FollowClaptrapToCarGate_ObjVar;                      // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ReviveClaptrap_ObjSetVar;                            // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_LilithArrivalAndTurnIn_ObjSetVar;                    // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_InteractWithLilith_ObjVar;                           // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GetEchoFromClaptrap_ObjSetVar;                       // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FollowClaptrap_UseQuickChange_ObjSetVar;             // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_UseQuickChange_ObjVar;                               // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_CrouchUnderGate_ObjSetVar;                           // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CrouchUnderDoor_ObjVar;                              // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ClaptrapCrossesBridge_ObjVar;                        // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetAcrossBridgeGap_ObjVar;                           // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FollowClaptrapToScenicOverlook_ObjSetVar;            // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlayeAndClaptrapAtScenicOverlook_ObjVar;             // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GetAGun_ObjSetVar;                                   // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetFirstGun_ObjVar;                                  // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_OpenFirstGunChest_ObjVar;                            // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillCoVInsideRecruitmentCenter_ObjSetVar;            // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillCoVInsideFirstSectionRecruitmentCenter_ObjVar;   // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_EnterShivs_ObjSetVar;                                // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillShiv_ObjVar;                                     // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FreeClaptrapFromMagnet_ObjSetVar;                    // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FreeClaptrapFromMagnet_ObjVar;                       // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_reviveClaptrap_ObjVar;                               // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Cinematic_BusIntro_ObjSetVar;                        // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Cinematic_LilithTitleCard_ObjSetVar;                 // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Cinematic_LilithTitleCard_ObjVar;                    // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PullLeverForFirstGate_ObjSetVar;                     // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PullLeverForCarGate_ObjVar;                          // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToGatekeeper_ObjSetVar;                            // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToGatekeeper_ObjVar;                               // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GainEntryIntoRecruitmentCenter_ObjSetVar;            // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GainEntryIntoRecruitmentCenter_ObjVar;               // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_WaitForDoorandMagnetSequence_ObjVar;                 // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillCovInsideRecruitmentCenterTwo_ObjSetVar;         // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillCoVInsideSecondSectionRecruitmentCenter_ObjVar;  // 0x0658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_WaitForCarGateToOpen_ObjVar;                         // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EnterShivsLair_ObjVar;                               // 0x0668(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillShiv_ObjSetVar;                                  // 0x0670(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ClaptrapBlowsItUp_ObjSetVar;                         // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ClaptrapBlowsUpCache_ObjVar;                         // 0x0680(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ViewShivTitleCard_ObjSetVar;                         // 0x0688(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Cinematic_ShivTitleCard_ObjVar;                      // 0x0690(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_WatchShivAtControls_ObjVar;                          // 0x0698(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_EnterSecondAreaRecruitmentCenter_ObjSetVar;          // 0x06A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SecondAreaRecruitmentCenterFollowClaptrap_ObjVar;    // 0x06A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_BeginMagnetDoorSequence_ObjSetVar;                   // 0x06B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GetPlayerShield_ObjSetVar;                           // 0x06B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetShield_ObjVar;                                    // 0x06C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlayerIsAtWeaponsCache_ObjVar;                       // 0x06C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FollowClaptrap_ObjVar;                               // 0x06D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ClaptrapMonologueAtScenicOverlook_ObjVar;            // 0x06D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 Conversation;                                            // 0x06E0(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_V4X1[0x4];                                   // 0x06EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjectiveSet*                                Set_LilithArrivesAndClaptrapJoins_ObjSetVar;             // 0x06F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_LilithArrivalAndClaptrapFollow_ObjVar;               // 0x06F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_NewStart_ObjVar;                                     // 0x0700(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Cinematic_BusDrivesOff_ObjVar;                       // 0x0708(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlayerAtGatekeeper_ObjVar;                           // 0x0710(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_LookAroundForAShield_ObjSetVar;                      // 0x0718(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_LookAroundForAShield_ObjVar;                         // 0x0720(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ClaptrapComesToPlayer_ObjVar;                        // 0x0728(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MoveToShootBeam_ObjVar;                              // 0x0730(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ClaptrapCallsLilith_ObjVar;                          // 0x0738(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       WatchingGatekeeper;                                      // 0x0740(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8LLK[0x7];                                   // 0x0741(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjective*                                   Obj_ClaptrapBeginsTalking_ObjVar;                        // 0x0748(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FreeClaptrapFromMagnet_Breadcrumb_1_ObjVar;          // 0x0750(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FreeClaptrapFromMagnet_Breadcrumb_2_ObjVar;          // 0x0758(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FreeClaptrapFromMagnet_Breadcrumb_3_ObjVar;          // 0x0760(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FreeClaptrapFromMagnet_Breadcrumb_4_ObjVar;          // 0x0768(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ClaptrapChatteringAboutEcho_ObjVar;                  // 0x0770(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

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
		void Obj_GetEchoFromClaptrap(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_GetEchoFromClaptrap(class UObject* Context);
		void Set_FollowClaptrapToQuickChange(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GoToQuickChangeWithClaptrap(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ClaptrapRemovingSpam(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_CloseFakeEULA(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_FollowClaptrapToFirstGate(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FollowClaptrapToCarGate(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ReviveClaptrap(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_LilithArrivalAndTurnIn(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_InteractWithLilith(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_WelcomeLilith(class UObject* Context);
		void Set_GetEchoFromClaptrap(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_FollowClaptrap_UseQuickChange(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_UseQuickChange(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_CrouchUnderGate(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_CrouchUnderDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_ClaptrapCrossesBridge(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_GetAcrossBridgeGap(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_FollowClaptrapToScenicOverlook(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_PlayeAndClaptrapAtScenicOverlook(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GetAGun(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GetFirstGun(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_OpenFirstGunChest(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_KillCoVInsideRecruitmentCenter(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_KillCoVInsideFirstSectionRecruitmentCenter(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_EnterShivs(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_KillShiv(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_FreeClaptrapFromMagnet(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FreeClaptrapFromMagnet(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_ReviveClaptrap(class UObject* Context);
		void Obj_ReviveClaptrap(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_Cinematic_BusIntro(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_CinematicBusIntro(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_Cinematic_LilithTitleCard(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_Cinematic_LilithTitleCard(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_PullLeverForFirstGate(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_PullLeverForCarGate(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GoToGatekeeper(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GoToGatekeeper(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_GainEntryIntoRecruitmentCenter(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GainEntryIntoRecruitmentCenter(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_WaitForDoorandMagnetSequence(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_KillCovInsideRecruitmentCenterTwo(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_KillCoVInsideSecondSectionRecruitmentCenter(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_KillCoVInsideSecondSectionRecruitmentCenter(class UObject* Context);
		void Update_KillCoVInsideFirstSectionRecruitmentCenter(class UObject* Context);
		void Obj_WaitForCarGateToOpen(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_EnterShivsLair(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_KillShiv(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_ClaptrapBlowsItUp(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ClaptrapBlowsUpCache(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_Cinematic_ShivTitleCard(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ViewShivTitleCard(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_WatchShivAtControls(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_EnterSecondAreaRecruitmentCenter(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_SecondAreaRecruitmentCenterFollowClaptrap(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_BeginMagnetDoorSequence(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_GetPlayerShield(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GetShield(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_FollowClaptrap_Objective_PROXY();
		void Obj_PlayerIsAtWeaponsCache(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Advance_ClaptrapMonologueAtScenicOverlook(class UObject* Context);
		void Update_UseQuickChange(class UObject* Context);
		void Advance_CloseFakeEULA(class UObject* Context);
		void Update_FollowClaptrapToCarGate(class UObject* Context);
		void Advance_PullLeverForCarGate(class UObject* Context);
		void Update_CrouchUnderDoor(class UObject* Context);
		void Update_ClaptrapCrossesBridge(class UObject* Context);
		void Update_OpenFirstGunChest(class UObject* Context);
		void Update_GetFirstGun(class UObject* Context);
		void Advance_GoToGatekeeper(class UObject* Context);
		void Update_GainEntryIntoRecruitmentCenter(class UObject* Context);
		void Advance_FreeClaptrapFromMagnet(class UObject* Context);
		void Update_WaitForDoorandMagnetSequence(class UObject* Context);
		void Advance_WaitForCarGateToOpen(class UObject* Context);
		void Update_EnterShivsLair(class UObject* Context);
		void Update_ClaptrapBlowsUpCache(class UObject* Context);
		void Update_SecondAreaRecruitmentCenterFollowClaptrap(class UObject* Context);
		void Update_PlayerAndClaptrapAtScenicOverlook(class UObject* Context);
		void Update_GetShield(class UObject* Context);
		void Update_GetAcrossBridgeGap(class UObject* Context);
		void Update_PlayerIsAtWeaponsCache(class UObject* Context);
		void Update_PlayerIsNearQuickChange(class UObject* Context);
		void Obj_FollowClaptrap(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_FollowClaptrap_Objective_PROXY_1();
		void Obj_FollowClaptrap_Objective_PROXY_2();
		void Obj_FollowClaptrap_Objective_PROXY_3();
		void Obj_FollowClaptrap_Objective_PROXY_4();
		void Obj_FollowClaptrap_Objective_PROXY_5();
		void Obj_FollowClaptrap_Objective_PROXY_6();
		void Obj_ClaptrapMonologueAtScenicOverlook(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_FollowClaptrap_Objective_PROXY_7();
		void Obj_FollowClaptrap_Objective_PROXY_8();
		void Obj_FollowClaptrap_Objective_PROXY_9();
		void Update_FollowClaptrap(class UObject* Context);
		void CE_ClaptrapChatter_Overhere();
		void CE_ClaptrapStopChatter_Overhere();
		void Update_ClaptrapBeginsChatterHoldingEcho(class UObject* Context);
		void Set_LilithArrivesAndClaptrapJoins(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_LilithArrivalAndClaptrapFollow(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayClaptrapAndLilithBanter(class UObject* Context);
		void Update_PlayerChangedOutfit(class UObject* Context);
		void Obj_NewStart(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayBusDriveByCoV(class UObject* Context);
		void Obj_Cinematic_BusDrivesOff(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_PlayerAtGatekeeper(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_PlayerAtGatekeeper(class UObject* Context);
		void CE_AdvancetoClaptrapToOverlook();
		void Set_LookAroundForAShield(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_LookAroundForAShield(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_GetShield_Objective_PROXY_10();
		void CE_SearchAroundTimerExpired();
		void Obj_ClaptrapComesToPlayer(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Advance_ClaptrapComesToPlayer(class UObject* Context);
		void Obj_MoveToShootBeam(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_ClaptrapCallsLilith(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_ClaptrapCallsLilith(class UObject* Context);
		void CE_StartClaptrapAndGatekeeperBanter();
		void Obj_ClaptrapBeginsTalking(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void CE_ClaptrapTimerSpeaking();
		void Obj_FreeClaptrapFromMagnet_Breadcrumb_2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_FreeClaptrapFromMagnet_Breadcrumb_3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_FreeClaptrapFromMagnet_Breadcrumb_4(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_FreeClaptrapFromMagnet_Breadcrumb_5(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_FreeClaptrapFromMagnet_Breadcrumb_2(class UObject* Context);
		void Update_FreeClaptrapFromMagnet_Breadcrumb_3(class UObject* Context);
		void Update_FreeClaptrapFromMagnet_Breadcrumb_4(class UObject* Context);
		void Update_FreeClaptrapFromMagnet_Breadcrumb_5(class UObject* Context);
		void Obj_ClaptrapChatteringAboutEcho(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_ClaptrapChatters(class UObject* Context);
		void Update_LookAroundForAShield(class UObject* Context);
		void ExecuteUbergraph_Mission_Ep01_ChildrenOfTheVault(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
