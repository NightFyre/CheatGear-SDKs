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
	 * BlueprintGeneratedClass EP01_DLC2.EP01_DLC2_C
	 * Size -> 0x01C0 (FullSize[0x06B8] - InheritedSize[0x04F8])
	 */
	class UEP01_DLC2_C : public UOakMission
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04F8(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_ReachHammerlockInitial_ObjSetVar;                    // 0x0500(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FollowHiddenPath_ObjVar;                             // 0x0508(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_MeetWeddingPlanner_ObjSetVar;                        // 0x0510(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MeetWeddingPlanner_ObjVar;                           // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_DefeatFrostBiters_ObjSetVar;                         // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DefeatFrostBiters_ObjVar;                            // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TalkGaige_ObjSetVar;                                 // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToGaige_ObjVar;                                  // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FollowGaige_ObjSetVar;                               // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FollowGaige_ObjVar;                                  // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_UseGondolaButton_ObjSetVar;                          // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CallGondolaFail_ObjVar;                              // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FollowWires_ObjSetVar;                               // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FollowWire_ObjVar;                                   // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PowerUpGondola_ObjSetVar;                            // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PowerUpGondola_ObjVar;                               // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Inv_obj_ActivateElectricityPuzzle_ObjVar;                // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReachHammerlock_ObjVar;                              // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ReachHammerlock_ObjSetVar;                           // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_MeetGuests_ObjSetVar;                                // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MeetGuests_ObjVar;                                   // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GaigeTitleCard_ObjSetVar;                            // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GaigeTitleCard_ObjVar;                               // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ReturnToGaige_ObjSetVar;                             // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReturnToGaige_ObjVar;                                // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_CallGondolaForReal_ObjSetVar;                        // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CallGondolaForReal_ObjVar;                           // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   BC_MeetWeddingPlanner_02_ObjVar;                         // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReachBar_ObjVar;                                     // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_RebootGenerator_ObjVar;                              // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReroutePower_ObjVar;                                 // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillMamaRockslug_ObjSetVar;                          // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillRockslugMama_ObjVar;                             // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_MancubusTC_ObjSetVar;                                // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MancubusTitlecard_ObjVar;                            // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Navigate_DLC2Planet_ObjSetVar;                       // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Navigate_DLC2Planet_ObjVar;                          // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_UseDropPod_ObjSetVar;                                // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Renavigate_DLC2Planet_ObjVar;                        // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_UseDropPod_ObjVar;                                   // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_IntroCinematic_ObjSetVar;                            // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Inv_Obj_IntroCinematic_ObjVar;                           // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DestroyNests_ObjVar;                                 // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Inv_Obj_DestroyNest1_ObjVar;                             // 0x0658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Inv_Obj_DestroyNest2_ObjVar;                             // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Inv_Obj_DestroyNest3_ObjVar;                             // 0x0668(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GaigeFixGondola_ObjVar;                              // 0x0670(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_ElectricSwitch_On_1_ObjVar;                      // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_ElectricSwitch_On_2_ObjVar;                      // 0x0680(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_ElectricSwitch_On_3_ObjVar;                      // 0x0688(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Inv_Obj_CrashPodCompleted_ObjVar;                        // 0x0690(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_TalkToMancubusIntro_ObjSetVar;                       // 0x0698(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToMancubusIntro_ObjVar;                          // 0x06A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Inv_Obj_GoToBar_ObjVar;                                  // 0x06A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToBar_ObjSetVar;                                   // 0x06B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
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
		void OnDialogSequenceFinished_15();
		void OnDialogSequenceFinished_14();
		void MCE_PlayerArrivedAtEndWire(class UObject* Context);
		void MCE_ElectrityHasReachedGondola(class UObject* Context);
		void Inv_obj_ActivateElectricityPuzzle(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ReachHammerlock(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_DEBUB_EP01_JumpToEndMission(class UObject* Context);
		void Obj_PowerUpGondola_Objective_PROXY();
		void Set_GaigeTitleCard(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GaigeTitleCard(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_UpdateGaigeTitleCard(class UObject* Context);
		void Obj_FollowWire(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_FollowWires(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_PowerUpGondola(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_PowerUpGondola(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_CallGondolaEngineFails(class UObject* Context);
		void Obj_CallGondolaFail(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_UseGondolaButton(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_ReturnToGaige(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ReturnToGaige(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_FollowGaige(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_CallGondolaForReal(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_CallGondolaForReal(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_GaigeIsAtGondola(class UObject* Context);
		void MCE_ReturnedToGaige(class UObject* Context);
		void MCE_GondolaCalled(class UObject* Context);
		void Set_FollowGaige(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_PlayerTalkedToGaige(class UObject* Context);
		void Obj_TalkToGaige(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_TalkGaige(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_FrostBitersAllDead(class UObject* Context);
		void Obj_DefeatFrostBiters(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_DefeatFrostBiters(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void BC_MeetWeddingPlanner_02(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Skip_WeddingPlanner_BC02(class UObject* Context);
		void Obj_ReachBar(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_RebootGenerator(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_ReroutePower(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_RebootGenerator(class UObject* Context);
		void MCE_WeddingPlannerMet(class UObject* Context);
		void Set_KillMamaRockslug(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_KillRockslugMama(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_MancubusTC(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_MancubusTitlecard(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_MeetWeddingPlanner(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_MeetWeddingPlanner(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_Navigate_DLC2Planet(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_Navigate_DLC2Planet(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_NavigatedToDLC2Planet(class UObject* Context);
		void Set_UseDropPod(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_Renavigate_DLC2Planet(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_UseDropPod(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerMetGuests(class UObject* Context);
		void MCE_Renavigated_DLC2Planet(class UObject* Context);
		void Set_IntroCinematic(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Inv_Obj_IntroCinematic(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_MeetGuests(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_MeetGuests(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_UsedDropPod(class UObject* Context);
		void MCE_AdvanceToDroppod(class UObject* Context);
		void MCE_PlayerReachedHammerlock(class UObject* Context);
		void Obj_PowerUpGondola_Objective_PROXY_1();
		void Inv_Obj_DestroyNest1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Inv_Obj_DestroyNest2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Inv_Obj_DestroyNest3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_DestroyNest1(class UObject* Context);
		void MCE_Update_DestroyNest2(class UObject* Context);
		void MCE_Update_DestroyNest3(class UObject* Context);
		void Obj_DestroyNests(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_GaigeFixGondola(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_GaigeFixedGondola(class UObject* Context);
		void Obj_INV_ElectricSwitch_On_2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_ElectricSwitch_On_3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_ElectricSwitch_On_4(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_ElectricSwitch_On_2(class UObject* Context);
		void MCE_INV_ElectricSwitch_Off_2(class UObject* Context);
		void MCE_INV_ElectricSwitch_On_3(class UObject* Context);
		void MCE_INV_ElectricSwitch_Off_3(class UObject* Context);
		void MCE_INV_ElectricSwitch_On_4(class UObject* Context);
		void MCE_INV_ElectricSwitch_Off_4(class UObject* Context);
		void Inv_Obj_CrashPodCompleted(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_MonsterISight(class UObject* Context);
		void MCE_WeddingPlanerPODCrashed(class UObject* Context);
		void Obj_FollowHiddenPath(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_TalkToMancubusIntro(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TalkToMancubusIntro(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_MancubusTalkedTo(class UObject* Context);
		void Inv_Obj_GoToBar(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_WentToBar(class UObject* Context);
		void Obj_ReachHammerlock(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ReachHammerlockInitial(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_GoToBar(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ReachHammerlock_Objective_PROXY_2();
		void ExecuteUbergraph_EP01_DLC2(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
