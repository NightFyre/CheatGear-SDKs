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
	 * BlueprintGeneratedClass Mission_BloodAndBeans.Mission_BloodAndBeans_C
	 * Size -> 0x0148 (FullSize[0x0658] - InheritedSize[0x0510])
	 */
	class UMission_BloodAndBeans_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_SearchForClues_ObjSetVar;                            // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SearchForClues_ObjVar;                               // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_InspectCan_ObjSetVar;                                // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_InspectCan_ObjVar;                                   // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_FollowTrail_ObjSetVar;                               // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_FollowTrail_ObjVar;                                  // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindBeans_ObjSetVar;                                 // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindBeans_ObjVar;                                    // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillFirstAssBlaster_ObjSetVar;                       // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillFirstAssBlaster_ObjVar;                          // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_DefeatAmbush_ObjSetVar;                              // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_DefeatAmbush_ObjVar;                                 // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ReturnToCowboys_ObjSetVar;                           // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReturnToCowboys_ObjVar;                              // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ResolveDispute_ObjSetVar;                            // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillCowboyA_ObjVar;                                  // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillCowboyB_ObjVar;                                  // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DestroyBeans_ObjVar;                                 // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillCowboyA_ObjSetVar;                               // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillCowboyB_ObjSetVar;                               // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GiveBeansToCowboyA_ObjVar;                           // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GiveBeansToCowboyB_ObjVar;                           // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EnterClearing_ObjVar;                                // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_MissionComplete_ObjSetVar;                           // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CowboyAComplete_ObjVar;                              // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillBothCowboys_ObjSetVar;                           // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillBothCowboys_ObjVar;                              // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GaveBeanstoCowboyA_ObjSetVar;                        // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GaveBeansToCowboyB_ObjSetVar;                        // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_DestroyedBeans_ObjSetVar;                            // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 CurrentConversation;                                     // 0x0608(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VYEA[0x4];                                   // 0x0614(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjectiveSet*                                Set_GaveBeansToCowboyA2_ObjSetVar;                       // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GaveBeansToCowboyB2_ObjSetVar;                       // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_DestroyedBeans2_ObjSetVar;                           // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToCowboys_ObjVar;                                // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Invs_GiveBeansToCowboyA_ObjVar;                          // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Invs_GiveBeansToCowboyB_ObjVar;                          // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Invs_TrailWaypoints_ObjVar;                              // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Invs_Clues_ObjVar;                                       // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
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
		void OnDialogSequenceFinished_21();
		void OnDialogSequenceFinished_20();
		void OnDialogSequenceFinished_19();
		void Obj_GiveBeansToCowboyB(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Advance_GiveBeansToCowboyA(class UObject* Context);
		void Advance_GiveBeansToCowboyB(class UObject* Context);
		void Obj_EnterClearing(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Advance_EnterClearing(class UObject* Context);
		void MissionKickoff();
		void Obj_GiveBeansToCowboyA(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_KillCowboyB(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_KillCowboyA(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Advance_DestroyBeans(class UObject* Context);
		void Update_KillCowboyB(class UObject* Context);
		void Set_MissionComplete(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_CowboyAComplete(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Advance_CowboyAComplete(class UObject* Context);
		void Update_KillBothCowboys(class UObject* Context);
		void Obj_KillBothCowboys(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_DestroyBeans(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_KillCowboyB(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_KillCowboyA(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_KillCowboyA(class UObject* Context);
		void Set_KillBothCowboys(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void JumpTo_MissionComplete(class UObject* Context);
		void Set_ResolveDispute(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_ReturnToCowboys(class UObject* Context);
		void Obj_ReturnToCowboys(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ReturnToCowboys(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_GaveBeanstoCowboyA(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GiveBeansToCowboyA_Objective_PROXY();
		void Advance_DefeatAmbush(class UObject* Context);
		void OBJ_DefeatAmbush(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_DefeatAmbush(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Advance_KillFirstAssBlaster(class UObject* Context);
		void Set_GaveBeansToCowboyB(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_KillFirstAssBlaster(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_KillFirstAssBlaster(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Advance_FindBeans(class UObject* Context);
		void Obj_FindBeans(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_DestroyedBeans(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GiveBeansToCowboyA_Objective_PROXY_1();
		void Obj_DestroyBeans_Objective_PROXY_2();
		void Set_GaveBeansToCowboyA2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GiveBeansToCowboyB_Objective_PROXY_3();
		void Set_GaveBeansToCowboyB2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GiveBeansToCowboyB_Objective_PROXY_4();
		void Set_DestroyedBeans2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GiveBeansToCowboyB_Objective_PROXY_5();
		void Obj_GiveBeansToCowboyA_Objective_PROXY_6();
		void Obj_GiveBeansToCowboyB_Objective_PROXY_7();
		void Obj_DestroyBeans_Objective_PROXY_8();
		void Set_FindBeans(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Advance_FollowTrail(class UObject* Context);
		void OBJ_FollowTrail(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_TalkToCowboys(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_TalkToCowboys(class UObject* Context);
		void Obj_GiveBeansToCowboyA_Objective_PROXY_9();
		void Obj_GiveBeansToCowboyB_Objective_PROXY_10();
		void Obj_GiveBeansToCowboyA_Objective_PROXY_11();
		void Invs_GiveBeansToCowboyA(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Invs_GiveBeansToCowboyB(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Invs_TrailWaypoints(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_TrailWaypoints(class UObject* Context);
		void SET_FollowTrail(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_ReturnConversation(class UObject* Context);
		void Obj_SearchForClues(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Advance_InspectCan(class UObject* Context);
		void Obj_InspectCan(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ResolveDisputeConversation(class UObject* Context);
		void Set_InspectCan(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_BeckonConversation(class UObject* Context);
		void Invs_Clues(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Invs_Clues_Objective_PROXY_12();
		void Advance_SearchForClues(class UObject* Context);
		void Set_SearchForClues(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void ExecuteUbergraph_Mission_BloodAndBeans(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
