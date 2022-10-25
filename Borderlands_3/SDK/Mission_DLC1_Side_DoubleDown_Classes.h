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
	 * BlueprintGeneratedClass Mission_DLC1_Side_DoubleDown.Mission_DLC1_Side_DoubleDown_C
	 * Size -> 0x01A8 (FullSize[0x06B8] - InheritedSize[0x0510])
	 */
	class UMission_DLC1_Side_DoubleDown_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_WatchTheTrick_ObjSetVar;                             // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindKingOfHeart_ObjVar;                              // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ShootCards_ObjSetVar;                                // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ShootKingOfSpades_ObjVar;                            // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ShootKingOfClubs_ObjVar;                             // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ShootKingOfDiamonds_ObjVar;                          // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Jump100meters_1_ObjSetVar;                           // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Jump100meters_ObjVar;                                // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Jump100meters_2_ObjSetVar;                           // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToImpound_ObjVar;                                  // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Jump100meters_3_ObjSetVar;                           // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_FailJump_ObjVar;                                 // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Jump100meters_4_ObjSetVar;                           // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_BreakPipe_Visible_ObjVar;                            // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_DefaceStatue_ObjSetVar;                              // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToSpa_ObjVar;                                      // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DefaceStatue_ObjVar;                                 // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindReplacement_ObjSetVar;                           // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindReplacement_ObjVar;                              // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_MeleeJackStatue_ObjSetVar;                           // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MeleeJackStatue_ObjVar;                              // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ReplaceHead_ObjSetVar;                               // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReplaceHead_ObjVar;                                  // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ReturntoDDD_ObjSetVar;                               // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReturnToDDD_ObjVar;                                  // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillDDD_ObjSetVar;                                   // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillDDD_ObjVar;                                      // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillShark_ObjSetVar;                                 // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillShark_ObjVar;                                    // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToShredder_ObjSetVar;                              // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToShredder_ObjVar;                                 // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindShark_ObjSetVar;                                 // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindShark_ObjVar;                                    // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillShark_2_ObjSetVar;                               // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillShark_2_ObjVar;                                  // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_ReachJump_ObjVar;                                // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_PickUpECHO_ObjSetVar;                                // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PickUpECHO_ObjVar;                                   // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PickupEcho_2_ObjSetVar;                              // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PickupEcho_2_ObjVar;                                 // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_SurviveOnslaught_ObjSetVar;                          // 0x0658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SurviveOnslaught_ObjVar;                             // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToSpa_ObjSetVar;                                   // 0x0668(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CardShootedNum;                                          // 0x0670(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsAnyCardShooted;                                        // 0x0674(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2CG5[0x3];                                   // 0x0675(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjective*                                   Obj_INV_CardsInvestigation_ObjVar;                       // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_WatchTheTrick_ObjVar;                                // 0x0680(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindKingOfHeart_ObjSetVar;                           // 0x0688(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_FindKingOfHeart_Investigation_ObjVar;            // 0x0690(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_FindKingOfHeart_DoubleDown_ObjVar;               // 0x0698(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_ShootKings_FORDOUBLEDOWN_ObjVar;                 // 0x06A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_ReturnToDDD_DoubleDown_ObjVar;                   // 0x06A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_BreakPipe_Real_ObjVar;                           // 0x06B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
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
		void OnDialogSequenceFinished_24();
		void OnDialogSequenceFinished_23();
		void Set_WatchTheTrick(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindKingOfHeart(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ShootCards(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ShootKingOfSpades(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_ShootKingOfClubs(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_ShootKingOfDiamonds(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_Jump100meters_2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_Jump100meters(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_GoToImpound(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_Jump100meters_3(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_Jump100meters_Objective_PROXY();
		void Set_Jump100meters_4(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_INV_FailJump(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_Jump100meters_5(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_BreakPipe_Visible(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_Jump100meters_Objective_PROXY_1();
		void Set_DefaceStatue(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GoToSpa(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_DefaceStatue(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_FindReplacement(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindReplacement(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_DefaceStatue_Objective_PROXY_2();
		void Set_MeleeJackStatue(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_MeleeJackStatue(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_DefaceStatue_Objective_PROXY_3();
		void Set_ReplaceHead(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ReplaceHead(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_DefaceStatue_Objective_PROXY_4();
		void Obj_ReturnToDDD(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ReturnToDDD(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_KillDDD(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_KillDDD(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_KillShark(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_KillShark(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GoToShredder(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GoToShredder(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_KillShark_Objective_PROXY_5();
		void Obj_FindShark(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_FindShark(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_KillShark_Objective_PROXY_6();
		void Obj_KillShark_3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_KillShark_3(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_Jump100meters_Objective_PROXY_7();
		void MCE_ShotKingOfClubs(class UObject* Context);
		void MCE_ShotKingOfSpades(class UObject* Context);
		void MCE_ShotKingOfDiamonds(class UObject* Context);
		void MCE_WentToImpound(class UObject* Context);
		void MCE_INV_FailedJump(class UObject* Context);
		void MCE_BrokePipe(class UObject* Context);
		void MCE_WentToSpa(class UObject* Context);
		void MCE_FoundReplacement(class UObject* Context);
		void MCE_MeleedJackStatue(class UObject* Context);
		void MCE_ReplacedHead(class UObject* Context);
		void MCE_ReturnedToDDD(class UObject* Context);
		void MCE_KilledDDD(class UObject* Context);
		void MCE_WentToShredder(class UObject* Context);
		void MCE_FoundShark(class UObject* Context);
		void MCE_KilledShark(class UObject* Context);
		void Obj_INV_ReachJump(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_ReachedJump(class UObject* Context);
		void MCE_Jumped100meters(class UObject* Context);
		void Obj_PickUpECHO(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_PickUpECHO(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_PickUpECHO(class UObject* Context);
		void CustomEvent_OnEchoLog_Finished();
		void Obj_PickUpECHO_3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_PickUpECHO_3(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_PickUpECHO_3(class UObject* Context);
		void CustomEvent_OnEchoLog_2_Finished();
		void Set_SurviveOnslaught(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_OnslaughtSurvived(class UObject* Context);
		void Obj_SurviveOnslaught(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MissionKickoff();
		void Obj_DefaceStatue_Objective_PROXY_8();
		void Set_GoToSpa(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void CustomEvent_CardShootedVO();
		void Obj_INV_CardsInvestigation(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_WatchTheTrick(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_WatchedTheTrick(class UObject* Context);
		void Set_FindKingOfHeart(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_INV_FindKingOfHeart_Investigation(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_FindKingOfHeart_DoubleDown(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_ShootKings_ForDoubleDown(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_ReturnToDDD_DoubleDown(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_Obj_BreakPipe_Real(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ExecuteUbergraph_Mission_DLC1_Side_DoubleDown(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
