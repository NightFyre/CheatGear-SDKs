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
	 * BlueprintGeneratedClass EP02_DLC2.EP02_DLC2_C
	 * Size -> 0x01D8 (FullSize[0x06E8] - InheritedSize[0x0510])
	 */
	class UEP02_DLC2_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                SET_TalkToWainwright_ObjSetVar;                          // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToWainwright_ObjVar;                             // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_FollowWainwrightToComputer_ObjSetVar;                // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Inv_FollowWainwrightComputer_ObjVar;                     // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_ReachHeartsDesire_ObjSetVar;                         // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReachHeartsDesire_ObjVar;                            // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Inv_FollowWainwrightSacrificialPit_ObjVar;               // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_StopTheRenewal_ObjSetVar;                            // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_StopTheRenewal_ObjVar;                               // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillEleanor_ObjSetVar;                               // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillVincent_ObjVar;                                  // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TitleCardWainwrightCursed_ObjSetVar;                 // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TitleCardWainwrightCursed_ObjVar;                    // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FollowDeathtrapToPlaza_ObjSetVar;                    // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FollowDeathtrapToPlaza_ObjVar;                       // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_SecurePlaza_ObjSetVar;                               // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SecurePlaza_ObjVar;                                  // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ReturnToHammerlock_ObjSetVar;                        // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReturnToHammerlock_ObjVar;                           // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_GiveExcuse_ObjSetVar;                                // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GiveExcuse_ObjVar;                                   // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Inv_Obj_MancubusOpensDoorToVillage_ObjVar;               // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_EnterVenue_ObjSetVar;                                // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EnterVenue_ObjVar;                                   // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   BC_TalkToWainwright_01_ObjVar;                           // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   BC_TalkToWainwright_02_ObjVar;                           // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   BC_TalkToWainwright_03_ObjVar;                           // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_ReturnToLodge_ObjSetVar;                             // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReturnToLodge_ObjVar;                                // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_PlaceDecorations_ObjSetVar;                          // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlaceDecoration_ObjVar;                              // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Inv_PlaceDecoration_ObjVar;                          // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Inv_Obj_LodgeDoorOpens_ObjVar;                           // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_WainwrightDazeLodge_ObjSetVar;                       // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TakeWainwrightShotgun_ObjVar;                        // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Inv_FollowWainwrightToCivilian_ObjVar;                   // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FollowWainwrightToCivillianDoor_ObjSetVar;           // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_KillKrichesCellar_ObjSetVar;                         // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Inv_KillKrichesCellar_ObjVar;                            // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FollowWainwrightToComputer2_ObjSetVar;               // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Inv_Obj_FollowWainwrightComputer2_ObjVar;                // 0x0658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ShootComputer_ObjSetVar;                             // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ShootComputer_ObjVar;                                // 0x0668(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FollowWainwrightToCeillar_ObjSetVar;                 // 0x0670(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FollowWainwrightCeillar_ObjVar;                      // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Inv_SCR_2100_DazePart1_Completed_ObjVar;                 // 0x0680(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Inv_SCR_2100_DazePart2_Completed_ObjVar;                 // 0x0688(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Inv_SCR_2100_DazePart3_Completed_ObjVar;                 // 0x0690(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Inv_SCR_2100_DazePart2_ReadyToPlay_ObjVar;               // 0x0698(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PlayShotGunDazePart3Sequence_ObjSetVar;              // 0x06A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Inv_Obj_RitualPart2_ObjVar;                              // 0x06A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Inv_Obj_RitualPart3_ObjVar;                              // 0x06B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Inv_Obj_RitualPart4_ObjVar;                              // 0x06B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Inv_Obj_RitualPart1_ObjVar;                              // 0x06C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Inv_SCR_2100_WainwrightInPositionPart3_ObjVar;           // 0x06C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Inv_Obj_WainwrightVoOutsideLodge_ObjVar;                 // 0x06D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToVillage_ObjSetVar;                               // 0x06D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Inv_Obj_GoToVillage_ObjVar;                              // 0x06E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
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
		void OnDialogSequenceFinished_19();
		void OnDialogSequenceFinished_18();
		void OnDialogSequenceFinished_17();
		void OnDialogSequenceFinished_16();
		void MCE_TalkedToHammerlockBar(class UObject* Context);
		void Obj_ReturnToHammerlock(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ReturnToHammerlock(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_PlazaCleared(class UObject* Context);
		void Obj_SecurePlaza(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_SecurePlaza(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_DeathtrapArrivedAtPlaza(class UObject* Context);
		void Obj_FollowDeathtrapToPlaza(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_FollowDeathtrapToPlaza(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_UpdateTitleCardCursedWainwright(class UObject* Context);
		void SET_GiveExcuse(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GiveExcuse(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Inv_Obj_MancubusOpensDoorToVillage(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_MancubusOpensDoorToVillage(class UObject* Context);
		void MCE_GiveExcuse(class UObject* Context);
		void SET_EnterVenue(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_EnterVenue(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_ReachHeartsDesire_Objective_PROXY_1();
		void Obj_TitleCardWainwrightCursed(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_TitleCardWainwrightCursed(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_CannotEnterVenue(class UObject* Context);
		void BC_TalkToWainwright_01(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void BC_TalkToWainwright_02(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void BC_TalkToWainwright_03(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_SkipWainwrightBC_03(class UObject* Context);
		void MCE_SkipWainwrightBC_02(class UObject* Context);
		void MCE_SkipWainwrightBC_01(class UObject* Context);
		void Obj_ReturnToLodge(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_ReturnToLodge(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_ReturnedToLodge(class UObject* Context);
		void SET_FollowWainwrightToComputer(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_PlaceDecorations(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_PlaceDecoration(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_BalloonPlaced(class UObject* Context);
		void MCE_EleanorKilled(class UObject* Context);
		void Obj_Inv_PlaceDecoration(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Inv_Obj_LodgeDoorOpens(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_LodgeDoorOpened(class UObject* Context);
		void MCE_TalkedToWainwrightPlaza(class UObject* Context);
		void SET_WainwrightDazeLodge(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TakeWainwrightShotgun(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ShotgunTaken(class UObject* Context);
		void Obj_KillVincent(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_KillEleanor(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Inv_FollowWainwrightToCivilian(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ArrivedAtTownfolkDoor(class UObject* Context);
		void Set_FollowWainwrightToCivillianDoor(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ReachHeartsDesire_Objective_PROXY_2();
		void SET_KillKrichesCellar(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ReachHeartsDesire_Objective_PROXY_3();
		void Inv_KillKrichesCellar(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_CellarKrichesDead(class UObject* Context);
		void MCE_RenewalStopped(class UObject* Context);
		void Obj_StopTheRenewal(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_StopTheRenewal(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ReachHeartsDesire_Objective_PROXY();
		void Set_FollowWainwrightToComputer2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Inv_FollowWainwrightSacrificialPit(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Inv_Obj_FollowWainwrightComputer2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_ReachHeartsDesire_Objective_PROXY_4();
		void MCE_WainwrightAtComputer2(class UObject* Context);
		void Set_ShootComputer(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_SacrificialPitReached(class UObject* Context);
		void Obj_ShootComputer(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ComputerShooted(class UObject* Context);
		void Set_FollowWainwrightToCeillar(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ReachHeartsDesire(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_ReachHeartsDesire(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ReachHeartsDesire_Objective_PROXY_5();
		void Obj_FollowWainwrightCeillar(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ArrivedAtCeillar(class UObject* Context);
		void Inv_SCR_2100_DazePart1_Completed(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Inv_SCR_2100_DazePart2_Completed(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Daze1Completed(class UObject* Context);
		void MCE_Daze2Completed(class UObject* Context);
		void Inv_SCR_2100_DazePart3_Completed(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Daze3Completed(class UObject* Context);
		void Inv_SCR_2100_DazePart2_ReadyToPlay(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_PlayShotGunDazePart3Sequence(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Inv_Obj_RitualPart2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Inv_Obj_RitualPart3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Inv_Obj_RitualPart4(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_RitualPart2(class UObject* Context);
		void MCE_RitualPart4(class UObject* Context);
		void Inv_Obj_RitualPart1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_RitualPart1(class UObject* Context);
		void Inv_SCR_2100_WainwrightInPositionPart3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_WainwrightInPosition(class UObject* Context);
		void Inv_Obj_WainwrightVoOutsideLodge(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_WainwrightVoOutside(class UObject* Context);
		void MissionKickoff();
		void MCE_DEBUG_EP02_JumpToEndMission(class UObject* Context);
		void Set_GoToVillage(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Inv_Obj_GoToVillage(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_TalkToWainwright_Objective_PROXY_6();
		void MCE_WentToVillage(class UObject* Context);
		void MCE_WainwrightAtComputer(class UObject* Context);
		void Inv_FollowWainwrightComputer(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_TalkToWainwright(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_TalkToWainwright(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void ExecuteUbergraph_EP02_DLC2(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
