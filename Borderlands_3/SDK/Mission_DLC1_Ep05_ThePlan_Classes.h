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
	 * BlueprintGeneratedClass Mission_DLC1_Ep05_ThePlan.Mission_DLC1_Ep05_ThePlan_C
	 * Size -> 0x01C0 (FullSize[0x06D0] - InheritedSize[0x0510])
	 */
	class UMission_DLC1_Ep05_ThePlan_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_TalkToTimothy_ObjSetVar;                             // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToTimothy_Intro_ObjVar;                          // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PlanningCinematic_Blueprint_ObjSetVar;               // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Cinematic_Blueprint_ObjVar;                          // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GetBlueprint_ObjSetVar;                              // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetBluePrint_ObjVar;                                 // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PlanningCinematic_Suit_ObjSetVar;                    // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Cinematic_Planning_Suit_ObjVar;                      // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetSuit_Pants_ObjVar;                                // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PlanningCinematic_Comp24_ObjSetVar;                  // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Cinematic_PlanningComp24_ObjVar;                     // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GetCompound24_ObjSetVar;                             // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetCompound24_ObjVar;                                // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Trap_ObjSetVar;                                      // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EnterCompound_ObjVar;                                // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillTricksy_ObjSetVar;                               // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillTricksy_ObjVar;                                  // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Diplomacy_ObjSetVar;                                 // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToTricksy_ObjVar;                                // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetSuit_Coat_ObjVar;                                 // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindSuit_ObjSetVar;                                  // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_ExploredShop_ObjVar;                             // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindSuit_Fake_ObjVar;                                // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillEnemies_ObjSetVar;                               // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillPantsGuy_ObjVar;                                 // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KllCoatGuy_ObjVar;                                   // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindCompound24_ObjSetVar;                            // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindCompound24_ObjVar;                               // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ShieldSwitches_ObjSetVar;                            // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_OverloadForcefield_ObjVar;                           // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Inv_Switch_1_ObjVar;                                     // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Inv_Switch_2_ObjVar;                                     // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Inv_Switch_3_ObjVar;                                     // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ShootForcefield_ObjSetVar;                           // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ShootForcefield_ObjVar;                              // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Inv_SwitchesStarted_ObjVar;                              // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ReturnToHideout_ObjSetVar;                           // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReturnToHideout_ObjVar;                              // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_WrapUpSequence_ObjVar;                           // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Planning_WrapUp_ObjSetVar;                           // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_ReadyToKillTricksy_ObjVar;                       // 0x0658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_KillTricksy_PreCheck_ObjVar;                     // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_ReadyToTeleportPlayer_ObjVar;                    // 0x0668(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_ReadyForWrapUpSeq_ObjVar;                        // 0x0670(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Inv_BreakGlass_Switch1_ObjVar;                           // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Inv_BreakGlass_Switch2_ObjVar;                           // 0x0680(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Inv_BreakGlass_Switch3_ObjVar;                           // 0x0688(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 Convo;                                                   // 0x0690(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XF4I[0x4];                                   // 0x069C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjective*                                   Inv_Switch_2_Feedback_ObjVar;                            // 0x06A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Inv_Switch_3_Feedback_ObjVar;                            // 0x06A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Inv_OpenSwitch2Door_ObjVar;                              // 0x06B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        GreetingNag;                                             // 0x06B8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		class UMissionObjective*                                   INV_Obj_GoToTricksyDoor_ObjVar;                          // 0x06C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_ReadyToTeleportPlayerToHideout_ObjVar;           // 0x06C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
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
		void OnDialogSequenceFinished_22();
		void Obj_Cinematic_Planning_Suit(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_PlanningCinematic_Suit(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GetSuit_Pants(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerGotPants(class UObject* Context);
		void Obj_Cinematic_PlanningComp24(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_PlanningCinematic_Comp24(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GetCompound24(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GetCompound24(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_Planning_WrapUp(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_GetBlueprint(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GetBluePrint(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_PlanningCinematic_Blueprint(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_Cinematic_Blueprint(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_EnterCompound(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_Trap(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_PlayerEnteredCompound(class UObject* Context);
		void Obj_KillTricksy(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_KillTricksy(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_PlayerKilledTricksy(class UObject* Context);
		void Set_Diplomacy(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TalkToTricksy(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerTalkedToTricksy(class UObject* Context);
		void Obj_GetSuit_Coat(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerGotCoat(class UObject* Context);
		void Set_FindSuit(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void INV_Obj_ExploredShop(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_TalkToTimothy_Intro(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_FindSuit_Fake(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_KillPantsGuy(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_KillEnemies(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_KllCoatGuy(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerExploredShop(class UObject* Context);
		void MCE_PlayerKilledCoatGuy(class UObject* Context);
		void MCE_PlayerKilledPantsGuy(class UObject* Context);
		void Obj_FindCompound24(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_FindCompound24(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_OverloadForcefield(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ShieldSwitches(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Inv_Switch_2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Inv_Switch_3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Inv_Switch_4(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerUsedSwitch_2(class UObject* Context);
		void MCE_PlayerUsedSwitch_3(class UObject* Context);
		void MCE_PlayerUsedSwitch_4(class UObject* Context);
		void MCE_ResetSwitches(class UObject* Context);
		void MCE_ResetSwitch_2(class UObject* Context);
		void MCE_ResetSwitch_3(class UObject* Context);
		void MCE_ResetSwitch_4(class UObject* Context);
		void Obj_ShootForcefield(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ShootForcefield(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_PlayerShotForcefield(class UObject* Context);
		void MCE_PlayerFoundCompound24(class UObject* Context);
		void Inv_SwitchesStarted(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_SwitchesStarted(class UObject* Context);
		void MissionKickoff();
		void Obj_ReturnToHideout(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ReturnToHideout(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_PlayerReturnedToHideout(class UObject* Context);
		void INV_Obj_WrapUpSequence(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_Obj_KillTricksy_PreCheck(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_Obj_ReadyToKillTricksy(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ReadyToKillTricksy(class UObject* Context);
		void INV_Obj_ReadyToTeleportPlayer(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ReadyToTeleport(class UObject* Context);
		void WrapUpComplete(class UObject* Context);
		void INV_Obj_ReadyForWrapUpSeq(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Inv_BreakGlass_Switch1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerBrokeGlass_2(class UObject* Context);
		void Inv_BreakGlass_Switch2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerBrokeGlass_3(class UObject* Context);
		void Inv_BreakGlass_Switch3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerBrokeGlass_4(class UObject* Context);
		void MCE_PlayerTalkedToTimothy(class UObject* Context);
		void Inv_Switch_2_Feedback(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_SendFeedback_Switch2(class UObject* Context);
		void Inv_Switch_3_Feedback(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_SendFeedback_Switch3(class UObject* Context);
		void MCE_ResetVisibleProgress(class UObject* Context);
		void Inv_OpenSwitch2Door(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerOpenedSwitch2Door(class UObject* Context);
		void Inv_BreakGlass_Switch1_Objective_PROXY();
		void Inv_BreakGlass_Switch2_Objective_PROXY_1();
		void Inv_BreakGlass_Switch3_Objective_PROXY_2();
		void MCE_ResetGlass(class UObject* Context);
		void Nag();
		void INV_Obj_GoToTricksyDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Inv_OpenSwitch2Door_Objective_PROXY_3();
		void INV_Obj_ReadyToTeleportPlayerToHideout(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ReadyForWrapUpSequence(class UObject* Context);
		void Set_TalkToTimothy(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void ExecuteUbergraph_Mission_DLC1_Ep05_ThePlan(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
