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
	 * BlueprintGeneratedClass SideMission_DLC2_IntoTheDeep.SideMission_DLC2_IntoTheDeep_C
	 * Size -> 0x0158 (FullSize[0x0668] - InheritedSize[0x0510])
	 */
	class USideMission_DLC2_IntoTheDeep_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_PickupDynamite_ObjSetVar;                            // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PickupDynamite_ObjVar;                               // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PlaceDynamite_ObjSetVar;                             // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlaceDynamite_ObjVar;                                // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PickupAIChip_ObjSetVar;                              // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PickupAIChip_ObjVar;                                 // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Discover_ObjSetVar;                                  // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Discover_ObjVar;                                     // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillRoamingShotGoths_ObjSetVar;                      // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillRoamingShotGoths_ObjVar;                         // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PickupEcho_1_ObjSetVar;                              // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PickupEcho_1_ObjVar;                                 // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ButtstompWoodplanks_ObjSetVar;                       // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ButtstompWoodplanks_ObjVar;                          // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillAmbushingShotGoths_ObjSetVar;                    // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PickupEcho_2_ObjSetVar;                              // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PickupEcho_2_ObjVar;                                 // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_BreakPlanks_ObjSetVar;                               // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_BreakPlanks_ObjVar;                                  // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillRoamingShotGoths_LastRoom_ObjSetVar;             // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillRoamingShotGoths_LastRoom_ObjVar;                // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PickupEcho_3_ObjSetVar;                              // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PickupEcho_3_ObjVar;                                 // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PlaceAIChip_ObjSetVar;                               // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlaceAIChip_ObjVar;                                  // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillDyer_ObjSetVar;                                  // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillDyer_ObjVar;                                     // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ShootDynamite_ObjVar;                                // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_SawShotGoths_ObjVar;                             // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DestroyCrystal_ObjVar;                               // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SealEntrance_ObjVar;                                 // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_DestroyFrozenCorpses_ObjSetVar;                      // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_DestroyFrozenCorpses_Approach_ObjVar;            // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DestroyFrozenCorpses_ObjVar;                         // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ShootDynamite_ObjSetVar;                             // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_AmbushFromBehind_ObjVar;                         // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Precheck_KillRoamingShotGoths_ObjVar;                // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Precheck_KillRoamingShotGoths_LastRoom_ObjVar;       // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_BreakPlanks_After_ObjSetVar;                         // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Overdrive_ObjVar;                                    // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_Earthquake_ObjVar;                               // 0x0658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_AIChip_Reply_ObjVar;                             // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
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
		void OnDialogSequenceFinished_21();
		void OnDialogSequenceFinished_20();
		void OnDialogSequenceFinished_19();
		void OnDialogSequenceFinished_18();
		void OnDialogSequenceFinished_17();
		void Obj_PlaceDynamite(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_PlaceDynamite(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_PlaceDynamite(class UObject* Context);
		void Obj_PickupAIChip(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_PickupAIChip(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_PickupAIChip(class UObject* Context);
		void Obj_Discover(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_Discover(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_Discover(class UObject* Context);
		void Obj_KillRoamingShotGoths(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_KillRoamingShotGoths(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_KillRoamingShotGoths(class UObject* Context);
		void Obj_Discover_Objective_PROXY();
		void Obj_PickUpECHO_2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_PickUpECHO_2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_PickUpECHO_2(class UObject* Context);
		void Obj_Discover_Objective_PROXY_1();
		void Obj_ButtstompWoodplanks(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ButtstompWoodplanks(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_ButtstompWoodplanks(class UObject* Context);
		void Obj_Discover_Objective_PROXY_2();
		void Set_KillAmbushingShotGoths(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_Discover_Objective_PROXY_3();
		void Obj_PickUpECHO_3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_PickUpECHO_3(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_PickUpECHO_3(class UObject* Context);
		void Obj_Discover_Objective_PROXY_4();
		void Obj_BreakPlanks(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_BreakPlanks(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_BreakPlanks(class UObject* Context);
		void Obj_Discover_Objective_PROXY_5();
		void MCE_PickupDynamite(class UObject* Context);
		void Obj_INV_SawShotGoths(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_SawShotGoths(class UObject* Context);
		void Obj_KillRoamingShotGoths_LastRoom(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_KillRoamingShotGoths_LastRoom(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_KillRoamingShotGoths_LastRoom(class UObject* Context);
		void Obj_PickUpECHO_4(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_PickUpECHO_4(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_PickUpECHO_4(class UObject* Context);
		void Obj_PlaceAIChip(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_PlaceAIChip(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_PlaceAIChip(class UObject* Context);
		void Obj_KillDyer(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_KillDyer(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_KillDyer(class UObject* Context);
		void Obj_ShootDynamite(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ShootDynamite(class UObject* Context);
		void Obj_DestroyCrystal(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void CustomEvent_OnEchoLog_1_Finished();
		void CustomEvent_OnEchoLog_2_Finished();
		void CustomEvent_OnEchoLog_3_Finished();
		void Obj_PickupDynamite(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_SealEntrance(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_DestroyCrystal_Objective_PROXY_6();
		void Obj_DestroyFrozenCorpses(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_DestroyFrozenCorpses(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_DestroyFrozenCorpses(class UObject* Context);
		void Obj_Discover_Objective_PROXY_7();
		void Obj_INV_DestroyFrozenCorpses_Approach(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_DestroyFrozenCorpses_Approach(class UObject* Context);
		void Set_an_Objective_in_the_Details();
		void Set_an_Objective_in_the_Details();
		void Obj_Precheck_KillRoamingShotGoths_LastRoom_Objective_PROXY_10();
		void MissionKickoff();
		void Set_PickupDynamite(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_ShootDynamite(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_SealEntrance_Objective_PROXY_11();
		void Obj_INV_AmbushFromBehind(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_AmbushFromBehind(class UObject* Context);
		void Obj_Precheck_KillRoamingShotGoths(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_Precheck_KillRoamingShotGoths_Objective_PROXY_12();
		void Obj_Precheck_KillRoamingShotGoths_Objective_PROXY_13();
		void Obj_Precheck_KillRoamingShotGoths_LastRoom(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_BreakPlanks_After(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_Discover_Objective_PROXY_14();
		void Obj_Precheck_KillRoamingShotGoths_LastRoom_Objective_PROXY_15();
		void Obj_Overdrive(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Overdrive(class UObject* Context);
		void Obj_INV_Earthquake(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_AIChip_Reply(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ExecuteUbergraph_SideMission_DLC2_IntoTheDeep(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
