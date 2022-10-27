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
	 * BlueprintGeneratedClass Mission_Takedown2.Mission_Takedown2_C
	 * Size -> 0x01F8 (FullSize[0x0708] - InheritedSize[0x0510])
	 */
	class UMission_Takedown2_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_Start_Takedown2_ObjSetVar;                           // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Start_Takedown2_ObjVar;                              // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TakedownTwoCountdown_Inv_ObjVar;                     // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Section1Start_ObjSetVar;                             // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Section1_Explore_ObjVar;                             // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_StartCrystal_ObjSetVar;                              // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_StartCrystal_ObjVar;                                 // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_CrystalChallengeTwo_ObjSetVar;                       // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ChargeCrystals_ObjVar;                               // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Ruins_ObjSetVar;                                     // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ExploreRuins_ObjVar;                                 // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_CrystalChallengeOne_ObjSetVar;                       // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_MiniBoss_ObjSetVar;                                  // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ChargeCrystalTutorial_ObjVar;                        // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DefeatMiniBoss_ObjVar;                               // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ButtSlam_ObjVar;                                     // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PortalSurprise_ObjVar;                               // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Platforming_ObjVar;                                  // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PortalDoor_ObjVar;                                   // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PortalSurprise_Badass_ObjVar;                        // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MiddlePad_ObjVar;                                    // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_LeftPad_ObjVar;                                      // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_RightPad_ObjVar;                                     // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ChargeCrystalLeft_ObjVar;                            // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ChargeCrystalMiddle_ObjVar;                          // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ChargeCrystalRight_ObjVar;                           // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ClearGuardians_ObjSetVar;                            // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DefeatGuardians_ObjVar;                              // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_StartCrystalTutorial_ObjSetVar;                      // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_UseLever_ObjVar;                                     // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ChargeRightCrystalTutorial_ObjVar;                   // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ChargeLeftCrystalTutorial_ObjVar;                    // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_LocateTemple_ObjSetVar;                              // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_LocateTemple_ObjVar;                                 // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_CrystalChallengeThree_ObjSetVar;                     // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ChargeCrystalsSec2_ObjVar;                           // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ChargeCrystalRightSec2_ObjVar;                       // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ChargeCrystalMiddleSec2_ObjVar;                      // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ChargeCrystalLeftSec2_ObjVar;                        // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_StartCrystalSec2_ObjSetVar;                          // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_StartCrystalSec2_ObjVar;                             // 0x0658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Section2Start_ObjSetVar;                             // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Section2_Explore_ObjVar;                             // 0x0668(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_LastLeg_ObjSetVar;                                   // 0x0670(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_LastLeg_ObjVar;                                      // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Section2_Door_ObjVar;                                // 0x0680(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_BossTitleCard_ObjSetVar;                             // 0x0688(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_BossTitleCard_ObjVar;                                // 0x0690(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_DefeatBoss_ObjSetVar;                                // 0x0698(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DefeatBoss_ObjVar;                                   // 0x06A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MiddlePad_Sec2_ObjVar;                               // 0x06A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_LeftPad_Sec2_ObjVar;                                 // 0x06B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_RightPad_Sec2_ObjVar;                                // 0x06B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TempleReveal_ObjVar;                                 // 0x06C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Playthrough_Number;                                      // 0x06C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bPlaythroughGreatorEq1;                                  // 0x06CC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KLOE[0x3];                                   // 0x06CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjective*                                   Obj_Portal1Boss_ObjVar;                                  // 0x06D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Portal2Boss_ObjVar;                                  // 0x06D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Portal3Boss_ObjVar;                                  // 0x06E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Portal4Boss_ObjVar;                                  // 0x06E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PortalMainBoss_ObjVar;                               // 0x06F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_EnterPortal_ObjSetVar;                               // 0x06F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EnterPortal_ObjVar;                                  // 0x0700(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnDialogSequenceFinished_5();
		void OnDialogSequenceFinished_4();
		void MCE_Update_Start(class UObject* Context);
		void Obj_Start_Takedown2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_TakedownTwoCountdown_Inv(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_Takedown2Countdown(class UObject* Context);
		void Set_Section1Start(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_Start_Takedown2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_Section1_Explore(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_StartCrystal(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_StartCrystal(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_CrystalChallengeTwo(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ChargeCrystals(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_StartCrystal(class UObject* Context);
		void MCE_Update_CrystalChargeLeft(class UObject* Context);
		void Set_Ruins(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ExploreRuins(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_CrystalChallengeOne(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ChargeCrystalTutorial(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_MiniBoss(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_DefeatMiniBoss(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_RuinsExplored(class UObject* Context);
		void MCE_Update_MiniBossKilled(class UObject* Context);
		void MCE_Update_BugsDead(class UObject* Context);
		void Obj_ButtSlam(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_ButtSlamed(class UObject* Context);
		void MCE_FailMission_Section1(class UObject* Context);
		void MCE_ResetMission(class UObject* Context);
		void MCE_RespawnPlayers(class UObject* Context);
		void Obj_PortalSurprise(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_PortalSurprise(class UObject* Context);
		void Obj_Platforming(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_Platforming(class UObject* Context);
		void Obj_PortalDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_Door(class UObject* Context);
		void Obj_PortalSurprise_Badass(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_PortalSurprise_Badass(class UObject* Context);
		void Obj_MiddlePad(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_SpawnMiddle(class UObject* Context);
		void Obj_LeftPad(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_SpawnLeft(class UObject* Context);
		void Obj_RightPad(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_SpawnRight(class UObject* Context);
		void MCE_Update_CrystalChargeRight(class UObject* Context);
		void MCE_Update_CrystalChargeMiddle(class UObject* Context);
		void Obj_ChargeCrystalLeft(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_ChargeCrystalMiddle(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_ChargeCrystalRight(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ClearGuardians(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_DefeatGuardians(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_GuardiansDefeated(class UObject* Context);
		void Set_StartCrystalTutorial(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_UseLever(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_TutorialSwitchUsed(class UObject* Context);
		void Obj_ChargeRightCrystalTutorial(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_RightTutorialCrystal(class UObject* Context);
		void Obj_ChargeLeftCrystalTutorial(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_LeftTutorialCrystal(class UObject* Context);
		void Set_LocateTemple(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_LocateTemple(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_TempleLocated(class UObject* Context);
		void Set_CrystalChallengeThree(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ChargeCrystalsSec2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_CrystalChargeLeftSec2(class UObject* Context);
		void MCE_Update_CrystalChargeMiddleSec2(class UObject* Context);
		void MCE_Update_CrystalChargeRightSec2(class UObject* Context);
		void Obj_ChargeCrystalRightSec2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_ChargeCrystalMiddleSec2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_ChargeCrystalLeftSec2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_StartCrystalSec2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_StartCrystalSec2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_StartCrystalSec2(class UObject* Context);
		void MCE_FailMission_Section2(class UObject* Context);
		void Set_Section2Start(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_Section2_Explore(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_Sec2Explored(class UObject* Context);
		void Set_LastLeg(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_LastLeg(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_Section2_Door(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_Sec2Door(class UObject* Context);
		void Set_BossTitleCard(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_BossTitleCard(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_TitleCardFinished(class UObject* Context);
		void Set_DefeatBoss(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_DefeatBoss(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_BossDefeated(class UObject* Context);
		void MCE_BossReached(class UObject* Context);
		void Obj_MiddlePad_Sec2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_SpawnMiddle_4(class UObject* Context);
		void Obj_LeftPad_Sec2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_SpawnLeft_4(class UObject* Context);
		void Obj_RightPad_Sec2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_SpawnRight_4(class UObject* Context);
		void Obj_TempleReveal(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_TempleRevealed(class UObject* Context);
		void Obj_Portal1Boss(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_IslandPortal_2(class UObject* Context);
		void Obj_Portal2Boss(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_IslandPortal_3(class UObject* Context);
		void Obj_Portal3Boss(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_IslandPortal_4(class UObject* Context);
		void Obj_Portal4Boss(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_IslandPortal_5(class UObject* Context);
		void Obj_PortalMainBoss(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_IslandMainPortal(class UObject* Context);
		void Obj_EnterPortal(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_EnterPortal(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_EnergyReached(class UObject* Context);
		void MCE_CrystalDeath(class UObject* Context);
		void ExecuteUbergraph_Mission_Takedown2(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
