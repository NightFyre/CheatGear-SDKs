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
	 * BlueprintGeneratedClass Mission_TheLegendOfMcSmugger.Mission_TheLegendOfMcSmugger_C
	 * Size -> 0x0190 (FullSize[0x06A0] - InheritedSize[0x0510])
	 */
	class UMission_TheLegendOfMcSmugger_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                SET_KillSaurians_ObjSetVar;                              // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_CollectSaurianMeat_ObjVar;                           // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_PlaceMeat_ObjSetVar;                                 // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_PlaceMeat_ObjVar;                                    // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_ReturnToMcSmugger_ObjSetVar;                         // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_ReturnToMcSmugger_ObjVar;                            // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_MoveForward_ObjVar;                                  // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TurnIn_ObjSetVar;                                    // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TurnIn_ObjVar;                                       // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_KillDactyl_ObjSetVar;                                // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_KillDactyl_ObjVar;                                   // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_CollectFeather_ObjSetVar;                            // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_CollectFeather_ObjVar;                               // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_ClimbTheMountain_ObjSetVar;                          // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_ClimbTheMountain_ObjVar;                             // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_InitialMountainClimb_ObjSetVar;                      // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReachMcRidge_ObjVar;                                 // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_KillSaurians_ObjVar;                                 // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_KillSaurianForward_ObjVar;                           // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PathingComplete_ObjVar;                              // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 Diag_NarratorStart;                                      // 0x05B8(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4F5N[0x4];                                   // 0x05C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjective*                                   Obj_INVIS_PassThruGate_ObjVar;                           // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INVIS_SlideBackDown_ObjVar;                          // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 Diag_RefusalToReturn;                                    // 0x05D8(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LKYJ[0x4];                                   // 0x05E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjectiveSet*                                Set_ClimbToGoddess_ObjSetVar;                            // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INVIS_ContinueTowardsGoddess_ObjVar;                 // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INVIS_ContinueToCaveCheckpoint_ObjVar;               // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INVIS_MadeItAcrossPuzzle_ObjVar;                     // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Goddess_ObjSetVar;                                   // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_InteractGoddess_ObjVar;                              // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TakeGift_ObjVar;                                     // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_BC_WaterfallToFinal_ObjVar;                          // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_OPTIONAL_ChestMoment_ObjVar;                         // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 VO_PlayerTalksofPrize;                                   // 0x0630(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_HDKN[0x4];                                   // 0x063C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjective*                                   Obj_AcceptTheCall_ObjVar;                                // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ListenToTheCall_ObjSetVar;                           // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ReallyAccept_ObjSetVar;                              // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_NoReallyAccept_ObjVar;                               // 0x0658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 OfferingDialogue;                                        // 0x0660(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_T0G2[0x4];                                   // 0x066C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjective*                                   Obj_McSmuggerTransition_ObjVar;                          // 0x0670(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 BadassLine1;                                             // 0x0678(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 Badass_Line;                                             // 0x0684(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_BC_GateAtEnd_ObjVar;                                 // 0x0690(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INVIS_GetCloseToPeak_ObjVar;                         // 0x0698(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
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
		void OnDialogSequenceFinished_39();
		void OnDialogSequenceFinished_38();
		void OnDialogSequenceFinished_37();
		void OnDialogSequenceFinished_36();
		void OnDialogSequenceFinished_35();
		void OnDialogSequenceFinished_34();
		void OnDialogSequenceFinished_33();
		void OnDialogSequenceFinished_32();
		void Update_TurnedInMission(class UObject* Context);
		void Update_KilledPodactyl(class UObject* Context);
		void OBJ_KillDactyl(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_KillDactyl(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_CollectFeather(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_CollectFeather(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_CollectedFeather(class UObject* Context);
		void Obj_TurnIn(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_ClimbTheMountain(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_ClimbTheMountain(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_ClimbedMountain(class UObject* Context);
		void Obj_ReachMcRidge(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_InitialMountainClimb(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_ReachedMcRidge(class UObject* Context);
		void OBJ_ClimbTheMountain_Objective_PROXY();
		void OBJ_KillSaurians(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_ClearedSaurians(class UObject* Context);
		void OBJ_KillSaurianForward(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_PathingComplete(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_PathingComplete(class UObject* Context);
		void Set_TurnIn(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_PreAcceptDialog_2(class UObject* Context);
		void CompletedMoment(class UObject* Context);
		void MCE_PreAcceptDialog_3(class UObject* Context);
		void OBJ_MoveForward(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INVIS_PassThruGate(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_WentThruGate(class UObject* Context);
		void Update_ReturnedToMcSmugger(class UObject* Context);
		void Update_PlacedMeat(class UObject* Context);
		void Obj_INVIS_SlideBackDown(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_PlayerSlid(class UObject* Context);
		void Set_Goddess(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_ClimbTheMountain_Objective_PROXY_1();
		void Obj_INVIS_ContinueTowardsGoddess(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ClimbToGoddess(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_ClimbTheMountain_Objective_PROXY_2();
		void MCE_Update_PlayerFoundGoddess(class UObject* Context);
		void Obj_INVIS_ContinueToCaveCheckpoint(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_BC_UpdateCaveCheckpointFound(class UObject* Context);
		void MCE_BC_UpdatePuzzleToGoddess(class UObject* Context);
		void Obj_INVIS_MadeItAcrossPuzzle(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_InteractGoddess(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_TakeGift(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_FoundHeart(class UObject* Context);
		void OBJ_ReturnToMcSmugger(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_InvestigatedGoddess(class UObject* Context);
		void MCE_Update_GiftTaken(class UObject* Context);
		void Obj_BC_WaterfallToFinal(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_BC_WaterfallMadeThru(class UObject* Context);
		void SET_ReturnToMcSmugger(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_OPTIONAL_ChestMoment(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_OPTIONAL_FoundChest(class UObject* Context);
		void SET_PlaceMeat(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_PlaceMeat(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_CollectSaurianMeat(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_KillSaurians(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MissionKickoff();
		void Obj_AcceptTheCall(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ListenToTheCall(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_NoReallyAccept(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ReallyAccept(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_PlayerAcceptsAnyway(class UObject* Context);
		void MCE_RefuseCall(class UObject* Context);
		void MCE_OfferingVO(class UObject* Context);
		void Obj_McSmuggerTransition(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_BC_GateAtEnd(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_BC_Gate(class UObject* Context);
		void Obj_INVIS_GetCloseToPeak(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_CloseToPeak(class UObject* Context);
		void ExecuteUbergraph_Mission_TheLegendOfMcSmugger(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
