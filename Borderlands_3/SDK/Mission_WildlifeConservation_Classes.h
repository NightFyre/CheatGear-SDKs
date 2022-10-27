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
	 * BlueprintGeneratedClass Mission_WildlifeConservation.Mission_WildlifeConservation_C
	 * Size -> 0x0169 (FullSize[0x0679] - InheritedSize[0x0510])
	 */
	class UMission_WildlifeConservation_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_GoToMines_ObjSetVar;                                 // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToMines_ObjVar;                                    // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_InvestigateBody_ObjSetVar;                           // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   obj_InvestigateBody_ObjVar;                              // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_EnterCavern1_ObjSetVar;                              // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FollowBlood_ObjVar;                                  // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_OpenDoor_ObjSetVar;                                  // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_CollectExplosives_ObjSetVar;                         // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CollectExplosives_ObjVar;                            // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_LoadMinecart_ObjSetVar;                              // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_LoadMinecart_ObjVar;                                 // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PushMinecart_ObjSetVar;                              // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PushMinecart_ObjVar;                                 // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FollowTalon1_ObjSetVar;                              // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FollowTalon_ObjVar;                                  // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillGoliath_ObjSetVar;                               // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillGoliath_ObjVar;                                  // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FollowTalonAgain_ObjSetVar;                          // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FollowTalonAgain_ObjVar;                             // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_SpeakToBrick_ObjSetVar;                              // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SpeakToBrick_ObjVar;                                 // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FollowBrick_ObjSetVar;                               // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FollowBrick_ObjVar;                                  // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TurnIn_ObjSetVar;                                    // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TurnIn_ObjVar;                                       // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_PullSwitch_ObjVar;                                   // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_WalkThroughOpening_ObjSetVar;                        // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_WalkThroughOpening_ObjVar;                           // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_OpenMinecartDoor_ObjVar;                             // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ApproachBody_ObjSetVar;                              // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ApproachBody_INVS_ObjVar;                            // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_LookForTalon_ObjVar;                                 // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EnterCavern1_INVS_ObjVar;                            // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FollowTalon1_ObjVar;                                 // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FollowTalon2_ObjSetVar;                              // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FollowTalon2_ObjVar;                                 // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_VO_DistractMordi2_ObjVar;                            // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   BC_EnterCavern1_ObjVar;                                  // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   BC_EnterCavern2_ObjVar;                                  // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalonMoveToDesert_INVS_ObjVar;                       // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToDesertEarly_INVS_ObjVar;                         // 0x0658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToDesert_ObjSetVar;                                // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToDesert_ObjVar;                                   // 0x0668(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalonGrabsGibs_ObjVar;                               // 0x0670(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CompleteLoad_WalkThruOpening;                            // 0x0678(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
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
		void OnDialogSequenceFinished_46();
		void OnDialogSequenceFinished_45();
		void OnDialogSequenceFinished_44();
		void OnDialogSequenceFinished_43();
		void OnDialogSequenceFinished_42();
		void OnDialogSequenceFinished_41();
		void OnDialogSequenceFinished_40();
		void Obj_KillGoliath(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_KillGoliath(class UObject* Context);
		void Set_FollowTalonAgain(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FollowTalonAgain(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_SpeakToBrick(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_SpeakToBrick(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_SpeakToBrick(class UObject* Context);
		void Set_FollowBrick(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FollowBrick(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_FollowBrick(class UObject* Context);
		void Set_TurnIn(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TurnIn(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_TurnIn(class UObject* Context);
		void Set_KillGoliath(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void UPDATE_FollowedTalon1(class UObject* Context);
		void Obj_FollowTalon(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_FollowTalon1(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void UPDATE_PushMinecart(class UObject* Context);
		void OBJ_PullSwitch(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_PullSwitch(class UObject* Context);
		void SET_WalkThroughOpening(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_WalkThroughOpening(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_OpenMinecartDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_OpenMinecartDoor(class UObject* Context);
		void UPDATE_WalkThroughOpening(class UObject* Context);
		void Obj_CollectExplosives(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_CollectExplosives(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_OpenDoor(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_ApproachBody(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ApproachBody_INVS(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_ApproachBody(class UObject* Context);
		void Obj_LookForTalon(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_LookForTalon_Objective_PROXY();
		void Obj_LookForTalon_Objective_PROXY_1();
		void Obj_LookForTalon_Objective_PROXY_2();
		void Obj_LookForTalon_Objective_PROXY_3();
		void Obj_LookForTalon_Objective_PROXY_4();
		void Obj_LookForTalon_Objective_PROXY_5();
		void Obj_LookForTalon_Objective_PROXY_6();
		void Obj_EnterCavern1_INVS(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_EnterCavern1(class UObject* Context);
		void Obj_FollowBlood_Objective_PROXY_7();
		void Obj_FollowBlood_Objective_PROXY_8();
		void Obj_FollowBlood_Objective_PROXY_9();
		void Obj_FollowBlood_Objective_PROXY_10();
		void Obj_FollowBlood_Objective_PROXY_11();
		void Obj_FollowTalon1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_FollowTalon2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FollowTalon_Objective_PROXY_12();
		void Obj_FollowTalon2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_FollowTalon2(class UObject* Context);
		void Obj_FollowBlood(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_VO_DistractMordi2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_VO_DistractMordi2(class UObject* Context);
		void Set_EnterCavern1(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void UPDATE_InvestigateBody(class UObject* Context);
		void BC_EnterCavern1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void BC_EnterCavern2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_BC_EnterCavern1(class UObject* Context);
		void UPDATE_BC_EnterCavern2(class UObject* Context);
		void Obj_TalonMoveToDesert_INVS(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_TalonMoveToDesert(class UObject* Context);
		void Obj_GoToDesertEarly_INVS(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_GoToDesertEarly(class UObject* Context);
		void Obj_PushMinecart(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GoToDesert(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GoToDesert(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_GoToDesert(class UObject* Context);
		void Obj_TalonGrabsGibs(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_TalonGrabsGibs(class UObject* Context);
		void Set_PushMinecart(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void UPDATE_LoadMinecart(class UObject* Context);
		void obj_InvestigateBody(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_LoadMinecart(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_LoadMinecart(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_InvestigateBody(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void UPDATE_GoToMInes(class UObject* Context);
		void Set_GoToMines(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GoToMines(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ExecuteUbergraph_Mission_WildlifeConservation(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
