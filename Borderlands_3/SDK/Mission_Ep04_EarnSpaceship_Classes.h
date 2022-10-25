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
	 * BlueprintGeneratedClass Mission_Ep04_EarnSpaceship.Mission_Ep04_EarnSpaceship_C
	 * Size -> 0x01C8 (FullSize[0x06D8] - InheritedSize[0x0510])
	 */
	class UMission_Ep04_EarnSpaceship_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_GoToTannisCamp_ObjSetVar;                            // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_DefendTheMap_ObjSetVar;                              // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToTannisCamp_ObjVar;                               // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DefendTheMapWave1_ObjVar;                            // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToShip_ObjSetVar;                                  // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToShip_ObjVar;                                     // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GetInVehicle_ObjSetVar;                              // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetInVehicle_ObjVar;                                 // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_GetFuel_ObjSetVar;                                   // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetFuel_ObjVar;                                      // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToShipEntrance_ObjSetVar;                          // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToShipEntrance_ObjVar;                             // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillCoV_ObjSetVar;                                   // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillCoV_ObjVar;                                      // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReviveLilith_ObjVar;                                 // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetNavChip_ObjVar;                                   // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GetNavChip_ObjSetVar;                                // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_DeliverPartsToEllie_ObjSetVar;                       // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DeliverPartsToEllie_ObjVar;                          // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GiveMapToTannis_ObjSetVar;                           // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GiveMapToTannis_ObjVar;                              // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_WaitForTannis_ObjVar;                                // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_WaitForTannis_ObjSetVar;                             // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Cinematic_LilithTannisBattle_ObjSetVar;              // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Cinematic_LilithTannisBattle_ObjVar;                 // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TakeMapFromLilith_ObjSetVar;                         // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TakeMapFromLilith_ObjVar;                            // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_DefendTheMap2_ObjSetVar;                             // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DefendTheMapWave2_ObjVar;                            // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TannisAndLilithExamineMap_ObjVar;                    // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Ep04TurnIn_ObjSetVar;                                // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Ep04TurnIn_ObjVar;                                   // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GatherParty_ObjSetVar;                               // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GatherParty_ObjVar;                                  // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToCatwalks_ObjSetVar;                              // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToCatwalks_ObjVar;                                 // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToShipyard_ObjSetVar;                              // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FightToShipyard_ObjVar;                              // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_DecideIfAllPlayersNeeded_ObjSetVar;                  // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DecideIfAllPlayersNeeded_ObjVar;                     // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TannisExaminesMap_ObjSetVar;                         // 0x0658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ReviveLilith_ObjSetVar;                              // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CloseDoor_Hidden_ObjVar;                             // 0x0668(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TyreenDialogue_ObjVar;                               // 0x0670(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EllieOrTyreenDialogue_ObjVar;                        // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetNavChip_LilDialogue_ObjVar;                       // 0x0680(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetNavChip_EllieDialogue_ObjVar;                     // 0x0688(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DeliverParts_LilClaptrapDialogue_ObjVar;             // 0x0690(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DeliverParts_EllieParkDialogue_ObjVar;               // 0x0698(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GiveLilithTheMap_ObjSetVar;                          // 0x06A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GiveLilithTheMap_ObjVar;                             // 0x06A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GotInVehicleFirstTime_ObjVar;                        // 0x06B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_RespawnVehicle_ObjVar;                               // 0x06B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GetFuelFromRig_ObjSetVar;                            // 0x06C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TransferFuel_ObjVar;                                 // 0x06C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INVIS_TannisIsFullyOutOfTentAndFinishedSpeaking_ObjVar; // 0x06D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnDialogSequenceFinished_91();
		void OnDialogSequenceFinished_90();
		void OnDialogSequenceFinished_89();
		void OnDialogSequenceFinished_88();
		void OnDialogSequenceFinished_87();
		void OnDialogSequenceFinished_86();
		void OnDialogSequenceFinished_85();
		void OnDialogSequenceFinished_84();
		void OnDialogSequenceFinished_83();
		void OnDialogSequenceFinished_82();
		void OnDialogSequenceFinished_81();
		void OnDialogSequenceFinished_80();
		void OnDialogSequenceFinished_79();
		void OnDialogSequenceFinished_78();
		void OnDialogSequenceFinished_77();
		void OnDialogSequenceFinished_76();
		void OnDialogSequenceFinished_75();
		void OnDialogSequenceFinished_74();
		void OnDialogSequenceFinished_73();
		void OnDialogSequenceFinished_72();
		void OnDialogSequenceFinished_71();
		void OnDialogSequenceFinished_70();
		void OnDialogSequenceFinished_69();
		void OnDialogSequenceFinished_68();
		void OnDialogSequenceFinished_67();
		void OnDialogSequenceFinished_66();
		void OnDialogSequenceFinished_65();
		void OnDialogSequenceFinished_64();
		void OnDialogSequenceFinished_63();
		void OnDialogSequenceFinished_62();
		void OnDialogSequenceFinished_61();
		void OnDialogSequenceFinished_60();
		void OnDialogSequenceFinished_59();
		void OnDialogSequenceFinished_58();
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
		void MCE_GoToShipComplete(class UObject* Context);
		void Obj_ReviveLilith(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_03ReviveLilith(class UObject* Context);
		void MCE_03KillCoV(class UObject* Context);
		void Obj_GetNavChip(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GetNavChip(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_DeliverPartsToEllie(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_DeliverPartsToEllie(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_DeliverPartsToEllie(class UObject* Context);
		void Set_GiveMapToTannis(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GiveMapToTannis(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_WaitForTannis(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_WaitForTannis(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_Cinematic_LilithTannisBattle(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_Cinematic_LilithTannisBattle(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Advance_GiveMapToTannis(class UObject* Context);
		void Set_TakeMapFromLilith(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TakeMapFromLilith(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Advance_TakeMapFromLilith(class UObject* Context);
		void MCE_LilithDefendDialogue0(class UObject* Context);
		void Set_DefendTheMap2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Advance_DefendTheMapWave1(class UObject* Context);
		void Obj_DefendTheMapWave2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Advance_DefendTheMapWave2(class UObject* Context);
		void Obj_TannisAndLilithExamineMap(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Advance_TannisAndLilithExamineMap(class UObject* Context);
		void Advance_Ep04TurnIn(class UObject* Context);
		void MCE_GettingFuel(class UObject* Context);
		void Update_GotInVehicleFirstTime(class UObject* Context);
		void Advance_GoToTannisCamp(class UObject* Context);
		void MCE_GetNavChip(class UObject* Context);
		void MCE_GoToShipEntrance(class UObject* Context);
		void Set_Ep04TurnIn(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_Ep04TurnIn(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GatherParty(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GatherParty(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GoToCatwalks(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GoToCatwalks(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GoToShipyard(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FightToShipyard(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_HeadingToCatwalks(class UObject* Context);
		void Advance_FightToShipyard(class UObject* Context);
		void Set_DecideIfAllPlayersNeeded(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_DecideIfAllPlayersNeeded(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void AdvanceTo_GatherParty(class UObject* Context);
		void JumpTo_GoToShipEntrance(class UObject* Context);
		void Update_GatherParty(class UObject* Context);
		void Set_TannisExaminesMap(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_KillCoV(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_KillCoV(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GoToShipEntrance(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GoToShipEntrance(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GetFuel(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_GetFuel(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void LilithTannisTalkingAboutKey1(class UObject* Context);
		void Set_ReviveLilith(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GetInVehicle(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Advance_WaitForTannis(class UObject* Context);
		void Set_GetInVehicle(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GoToShip(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_LilithDialogueNearNavChip(class UObject* Context);
		void MCE_EllieDialogueNearNavChip(class UObject* Context);
		void Set_GoToShip(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_EllieParkDialogue(class UObject* Context);
		void Obj_DefendTheMapWave1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_GoToTannisCamp(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_DefendTheMap(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_GoToTannisCamp(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_ArrivedAtCatwalksTop(class UObject* Context);
		void MCE_EllieShipDialogue(class UObject* Context);
		void MCE_LilithDefendDialogue1(class UObject* Context);
		void MCE_LilithDefendDialogue2(class UObject* Context);
		void Update_LilClaptrapDialogue(class UObject* Context);
		void Advance_CoutyardDoorCheesed(class UObject* Context);
		void MissionKickoff();
		void Obj_CloseDoor_Hidden(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_CloseShipDoor(class UObject* Context);
		void Obj_TyreenDialogue(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_TyreenSuperfanDialogue(class UObject* Context);
		void Obj_EllieOrTyreenDialogue(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_GetNavChip_LilDialogue(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_GetNavChip_EllieDialogue(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_DeliverParts_LilClaptrapDialogue(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_DeliverParts_EllieParkDialogue(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GiveLilithTheMap(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GiveLilithTheMap(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_GiveLilithTheMap(class UObject* Context);
		void Obj_GotInVehicleFirstTime(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_RespawnVehicle(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_GetInVehicle_Objective_PROXY();
		void Obj_RespawnVehicle_Objective_PROXY_1();
		void Obj_RespawnVehicle_Objective_PROXY_2();
		void Set_GetFuelFromRig(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void AdvanceTo_DecideIfAllPlayersNeeded(class UObject* Context);
		void MoveEllieToHerOffice();
		void MCE_EllieGetDownThereDialogue(class UObject* Context);
		void Obj_TransferFuel(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_TannisOutOfTent(class UObject* Context);
		void Obj_INVIS_TannisIsFullyOutOfTentAndFinishedSpeaking(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ExecuteUbergraph_Mission_Ep04_EarnSpaceship(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
