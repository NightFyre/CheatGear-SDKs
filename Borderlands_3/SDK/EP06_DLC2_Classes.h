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
	 * BlueprintGeneratedClass EP06_DLC2.EP06_DLC2_C
	 * Size -> 0x02F8 (FullSize[0x0808] - InheritedSize[0x0510])
	 */
	class UEP06_DLC2_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_FollowGaige_ObjSetVar;                               // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FollowGaige_ObjVar;                                  // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ActivateDevice_ObjSetVar;                            // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ActivateDevice_ObjVar;                               // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_EnterHeartsDesire_ObjSetVar;                         // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EnterHeartsDesire_ObjVar;                            // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ReachMonstersHeart_Part1_ObjSetVar;                  // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReachMonstersHeart_Part4_ObjVar;                     // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReachHeart_TrophyRoom_ObjVar;                        // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindSecretPassage_ObjVar;                            // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindSecretPassage_ObjSetVar;                         // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindMissingAntler_ObjVar;                            // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindMissingAntler_ObjSetVar;                         // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ReachMonstersHeart_Part2_ObjSetVar;                  // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReachVincentsOffice_ObjVar;                          // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlaceMissingAntler_ObjVar;                           // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PlaceMissingAntler_ObjSetVar;                        // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SearchTheDesk_ObjVar;                                // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_SearchTheDesk_ObjSetVar;                             // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PressTheButton_ObjVar;                               // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PressTheButton_ObjSetVar;                            // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ExploreTheLab_ObjVar;                                // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ExploreTheLab_ObjSetVar;                             // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_OpenMonsterGate_ObjVar;                              // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_OpenMonsterGate_ObjSetVar;                           // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ReachMonstersHeart_Part4_ObjSetVar;                  // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TitleCard_Vincent_INV_ObjVar;                        // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TitleCard_Vincent_ObjSetVar;                         // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FinalBossFight_ObjVar;                               // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FinalBossFight_ObjSetVar;                            // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FinalCinematic_INV_ObjVar;                           // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FinalCinematic_ObjSetVar;                            // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FinalCredits_INV_ObjVar;                             // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FinalCredits_ObjSetVar;                              // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToVillage_ObjSetVar;                               // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToVillage_ObjVar;                                  // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_SearchMissingAntler_ObjVar;                          // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_MeetWithGaige_ObjSetVar;                             // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MeetWithGaige_ObjVar;                                // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_SecureGarden_ObjSetVar;                              // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SecureGarden_ObjVar;                                 // 0x0658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_SpeakToGaige_ObjSetVar;                              // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SpeakToGaige_ObjVar;                                 // 0x0668(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PlacePage_ObjSetVar;                                 // 0x0670(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlacePage_ObjVar;                                    // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToLodge_ObjSetVar;                                 // 0x0680(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToLodge_ObjVar;                                    // 0x0688(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TalkToGaige_ObjSetVar;                               // 0x0690(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToGaige_ObjVar;                                  // 0x0698(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TalkToClaptrap_ObjSetVar;                            // 0x06A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToClaptrap_ObjVar;                               // 0x06A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TakePearl_ObjSetVar;                                 // 0x06B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TakePearl_ObjVar;                                    // 0x06B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_AskWainWright_ObjSetVar;                             // 0x06C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_AskHammerlock_ObjVar;                                // 0x06C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_OfficiateWedding_ObjSetVar;                          // 0x06D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_OfficiateWedding_ObjVar;                             // 0x06D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_AskWainwright_ObjVar;                                // 0x06E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReachHeart_TrophyRoom_Breadcrumb_01_ObjVar;          // 0x06E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReachHeart_TrophyRoom_Breadcrumb_02_ObjVar;          // 0x06F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReachMonstersHeart_Part4_Breadcrumb_01_ObjVar;       // 0x06F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReachMonstersHeart_Part4_Breadcrumb_02_ObjVar;       // 0x0700(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReachMonstersHeart_Part4_Breadcrumb_03_ObjVar;       // 0x0708(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillLostTwos_ObjSetVar;                              // 0x0710(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillLostTwos_ObjVar;                                 // 0x0718(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FollowGaigeTo1stZone_ObjSetVar;                      // 0x0720(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GaigeFollow1stZone_ObjVar;                           // 0x0728(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_Gaige1stCombatZone_Precheck_ObjVar;              // 0x0730(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GaigeSecure1stZone_ObjSetVar;                        // 0x0738(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Gaige1stCombatZone_ObjVar;                           // 0x0740(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GaigeFollowReach2ndZone_ObjSetVar;                   // 0x0748(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GaigeFollow2ndZone_ObjVar;                           // 0x0750(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_Gaige2ndCombatZone_Precheck_ObjVar;              // 0x0758(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GaigeSecure2ndZone_ObjSetVar;                        // 0x0760(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Gaige2ndCombatZone_ObjVar;                           // 0x0768(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GaigeFollowReach3rdZone_ObjSetVar;                   // 0x0770(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Gaige3rdCombatZone_ObjSetVar;                        // 0x0778(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GaigeFollow3rdZone_ObjVar;                           // 0x0780(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_Gaige3rdCombatZone_Precheck_ObjVar;              // 0x0788(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Gaige3rdCombatZone_ObjVar;                           // 0x0790(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GaigeHappyJump_ObjVar;                               // 0x0798(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_GaigeHugsDeathtrap_ObjVar;                       // 0x07A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsPuzzleActive;                                          // 0x07A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0GEV[0x7];                                   // 0x07A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjective*                                   Obj_INV_HammerlockAnswers_ObjVar;                        // 0x07B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_WainwrightAnswers_ObjVar;                        // 0x07B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_OfficiateWeddingAnimation_ObjVar;                // 0x07C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GaigeFollowReachAlleyZone_ObjSetVar;                 // 0x07C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GaigeFollowReachAlleyZone_ObjVar;                    // 0x07D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_GaigeCombatAlleyZone_Precheck_ObjVar;            // 0x07D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GaigeSecureAlleyZone_ObjSetVar;                      // 0x07E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GaigeSecureAlleyZone_ObjVar;                         // 0x07E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_SpeakToGaigeDone_ObjVar;                         // 0x07F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ArrivedAtGates_ObjVar;                               // 0x07F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ArriveAtGates_ObjSetVar;                             // 0x0800(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

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
		void Obj_ExploreTheLab(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ExploreTheLab(class UObject* Context);
		void Set_OpenMonsterGate(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_OpenMonsterGate(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_OpenMonsterGate(class UObject* Context);
		void MCE_ReachMonstersHeart_Part4(class UObject* Context);
		void Set_ExploreTheLab(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_PressTheButton(class UObject* Context);
		void Set_TitleCard_Vincent(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TitleCard_Vincent_INV(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_FinalBossFight(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FinalBossFight(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_FinalBossFight(class UObject* Context);
		void Set_FinalCinematic(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FinalCinematic_INV(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_FinalCinematic(class UObject* Context);
		void Set_FinalCredits(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FinalCredits_INV(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_FinalCredits(class UObject* Context);
		void Obj_ReachMonstersHeart_Part4_Objective_PROXY_1();
		void Obj_ReachMonstersHeart_Part4_Objective_PROXY_2();
		void Obj_ReachMonstersHeart_Part4_Objective_PROXY_3();
		void Obj_ReachMonstersHeart_Part4_Objective_PROXY_4();
		void Obj_ReachMonstersHeart_Part4_Objective_PROXY_5();
		void Obj_ReachMonstersHeart_Part4_Objective_PROXY_6();
		void Obj_ReachMonstersHeart_Part4_Objective_PROXY_7();
		void Obj_PressTheButton(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GoToVillage(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GoToVillage(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_VillageReached(class UObject* Context);
		void Set_PressTheButton(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_EnterHeartsDesire_Objective_PROXY_8();
		void Obj_EnterHeartsDesire_Objective_PROXY_9();
		void INV_SearchMissingAntler(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_SearchMissingAntler(class UObject* Context);
		void Set_MeetWithGaige(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_SearchTheDesk(class UObject* Context);
		void Obj_SearchTheDesk(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_MeetWithGaige(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_MeetWithGaige(class UObject* Context);
		void Set_SecureGarden(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_SecureGarden(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_GardenSecured(class UObject* Context);
		void Obj_EnterHeartsDesire_Objective_PROXY_10();
		void Set_SearchTheDesk(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_PlaceMissingAntler(class UObject* Context);
		void Set_SpeakToGaige(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_SpeakToGaige(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_GaigeTalkedTo(class UObject* Context);
		void Obj_PlaceMissingAntler(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_PlaceMissingAntler(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_EnterHeartsDesire_Objective_PROXY_11();
		void Set_PlacePage(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_PlacePage(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlacedPage(class UObject* Context);
		void MCE_ReachOffice(class UObject* Context);
		void Set_GoToLodge(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GoToLodge(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_WentToLodge(class UObject* Context);
		void Obj_ReachVincentsOffice(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_ReachMonstersHeart_Part4_Objective_PROXY();
		void Set_TalkToGaige(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TalkToGaige(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_TalkedToGaige(class UObject* Context);
		void Set_ReachMonstersHeart_Part2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_FindMissingAntler(class UObject* Context);
		void Set_TalkToClaptrap(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TalkToClaptrap(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_TalkedToClaptrap(class UObject* Context);
		void Obj_FindMissingAntler(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_FindMissingAntler(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_TakePearl(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TakePearl(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_TakenPearl(class UObject* Context);
		void MCE_FindSecretPassage(class UObject* Context);
		void Set_OfficiateWedding(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_OfficiateWedding(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_OfficiatedWedding(class UObject* Context);
		void Obj_FindSecretPassage(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_FindSecretPassage(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_AskWainWright(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_AskHammerlock(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_AskedHammerlock(class UObject* Context);
		void Obj_ReachHeart_TrophyRoom(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ReachMonstersHeart_Part4(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_AskWainwright(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_AskedWainwright(class UObject* Context);
		void Obj_OfficiateWedding_Objective_PROXY_12();
		void Obj_ReachHeart_TrophyRoom_Breadcrumb_01(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ReachHeart_TrophyRoom_Breadcrumb_01(class UObject* Context);
		void Obj_ReachHeart_TrophyRoom_Breadcrumb_02(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ReachHeart_TrophyRoom_Breadcrumb_02(class UObject* Context);
		void Obj_ReachMonstersHeart_Part4_Breadcrumb_01(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ReachMonstersHeart_Part4_Breadcrumb_01(class UObject* Context);
		void Obj_ReachMonstersHeart_Part4_Breadcrumb_02(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ReachMonstersHeart_Part4_Breadcrumb_02(class UObject* Context);
		void Obj_ReachMonstersHeart_Part4_Breadcrumb_03(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ReachMonstersHeart_Part4_Breadcrumb_03(class UObject* Context);
		void Set_KillLostTwos(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_KillLostTwos(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_KilledLostTwos(class UObject* Context);
		void Obj_ReachMonstersHeart_Part4_Objective_PROXY_13();
		void Obj_ReachMonstersHeart_Part4_Objective_PROXY_14();
		void Obj_ActivateDevice(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ActivateDevice(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_ReachHeart_TrophyRoom(class UObject* Context);
		void Set_FollowGaigeTo1stZone(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GaigeFollow1stZone(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_GaigeFollowReach1stZone(class UObject* Context);
		void Obj_INV_Gaige1stCombatZone_Precheck(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_Gaige1stCombatZone(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Gaige1stCombatZone(class UObject* Context);
		void Obj_GaigeFollow2ndZone(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_GaigeFollowReach2ndZone(class UObject* Context);
		void Obj_INV_Gaige2ndCombatZone_Precheck(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_Gaige2ndCombatZone(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Gaige2ndCombatZone(class UObject* Context);
		void Obj_GaigeFollow3rdZone(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_GaigeFollowReach3rdZone(class UObject* Context);
		void Obj_INV_Gaige3rdCombatZone_Precheck(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_Gaige3rdCombatZone(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Gaige3rdCombatZone(class UObject* Context);
		void Obj_FollowGaige_Objective_PROXY_15();
		void Set_GaigeSecure1stZone(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_EnterHeartsDesire_Objective_PROXY_16();
		void Set_GaigeFollowReach2ndZone(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_GaigeSecure2ndZone(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_EnterHeartsDesire_Objective_PROXY_17();
		void Obj_FollowGaige_Objective_PROXY_18();
		void Obj_EnterHeartsDesire_Objective_PROXY_19();
		void Obj_EnterHeartsDesire_Objective_PROXY_20();
		void Set_GaigeFollowReach3rdZone(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_Gaige3rdCombatZone(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FollowGaige_Objective_PROXY_21();
		void Obj_EnterHeartsDesire_Objective_PROXY_22();
		void Obj_EnterHeartsDesire_Objective_PROXY_23();
		void Obj_GaigeHappyJump(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_GaigeHugsDeathtrap(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_GaigeHugsDeathtrap(class UObject* Context);
		void Obj_INV_HammerlockAnswers(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_WainwrightAnswers(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_OfficiateWeddingAnimation(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_OfficiateWeddingAnimation(class UObject* Context);
		void Obj_GaigeSecureAlleyZone(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_GaigeSecureAlleyZone(class UObject* Context);
		void Set_GaigeSecureAlleyZone(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_EnterHeartsDesire_Objective_PROXY_24();
		void Obj_ReachMonstersHeart_Part4(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_GaigeFollowReachAlleyZone(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_GaigeFollowReachAlleyZone(class UObject* Context);
		void Obj_INV_GaigeCombatAlleyZone_Precheck(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_FollowGaige_Objective_PROXY_25();
		void Obj_EnterHeartsDesire_Objective_PROXY_26();
		void Set_GaigeFollowReachAlleyZone(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_INV_SpeakToGaigeDone(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_ArrivedAtGates(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ArrivedAtGates(class UObject* Context);
		void Set_ReachMonstersHeart_Part1(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_EnterHeartsDesire(class UObject* Context);
		void Set_ArriveAtGates(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FollowGaige_Objective_PROXY_27();
		void Obj_EnterHeartsDesire_Objective_PROXY_28();
		void MCE_ActivateDevice(class UObject* Context);
		void MCE_FollowGaige(class UObject* Context);
		void Obj_EnterHeartsDesire(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_EnterHeartsDesire(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FollowGaige(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_FollowGaige(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void ExecuteUbergraph_EP06_DLC2(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
