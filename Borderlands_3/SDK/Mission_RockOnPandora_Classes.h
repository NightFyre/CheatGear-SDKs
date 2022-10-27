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
	 * BlueprintGeneratedClass Mission_RockOnPandora.Mission_RockOnPandora_C
	 * Size -> 0x012C (FullSize[0x063C] - InheritedSize[0x0510])
	 */
	class UMission_RockOnPandora_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                SET_TrackThief_ObjSetVar;                                // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_TrackThief_ObjVar;                                   // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_FollowTrail_ObjSetVar;                               // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_FollowTrail_ObjVar;                                  // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_TakeBrownrockSpecimen_ObjSetVar;                     // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_KillJabbermon_ObjSetVar;                             // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_KillJabbermon_ObjVar;                                // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_CollectBrownrockSpecimens_ObjSetVar;                 // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_CollectBrownrockSpecimens_ObjVar;                    // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_KillKingChewy_ObjSetVar;                             // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_ReturnToMilesBrown_ObjSetVar;                        // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_ReturnToMilesBrown_ObjVar;                           // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_KillKingChewy_ObjVar;                                // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EggTrail17_ObjVar;                                   // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_CollectGrogEggs_Inv_ObjVar;                          // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_TakeSpecialBrownrock_ObjVar;                         // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_PickUpBrownRock_ObjSetVar;                           // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_TalkToMilesBrown_ObjSetVar;                          // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToMilesBrown_ObjVar;                             // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EggTrail1_ObjVar;                                    // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EggTrail3_ObjVar;                                    // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EggTrail4_ObjVar;                                    // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EggTrail5_ObjVar;                                    // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EggTrail6_ObjVar;                                    // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EggTrail7_ObjVar;                                    // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EggTrail8_ObjVar;                                    // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EggTrail9_ObjVar;                                    // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EggTrail10_ObjVar;                                   // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EggTrail11_ObjVar;                                   // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EggTrail12_ObjVar;                                   // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EggTrail13_ObjVar;                                   // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EggTrail14_ObjVar;                                   // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EggTrail15_ObjVar;                                   // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EggTrail16_ObjVar;                                   // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EggTrail2_ObjVar;                                    // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 Conv_ActiveConversation;                                 // 0x0630(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void OnDialogSequenceFinished_15();
		void OnDialogSequenceFinished_14();
		void OnDialogSequenceFinished_13();
		void OnDialogSequenceFinished_12();
		void OnDialogSequenceFinished_11();
		void OnDialogSequenceFinished_10();
		void OnDialogSequenceFinished_9();
		void Obj_TalkToMilesBrown(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_TalkToMilesBrown(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_EggTrail1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_EggTrail2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_EggTrail3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_EggTrail4(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_EggTrail5(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_EggTrail6(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_EggTrail7(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_EggTrail8(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_EggTrail9(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_EggTrail10(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_EggTrail11(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_EggTrail12(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_EggTrail13(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_EggTrail14(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_EggTrail15(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_EggTrail16(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_EggTrail1(class UObject* Context);
		void MCE_Update_EggTrail2(class UObject* Context);
		void MCE_Update_EggTrail3(class UObject* Context);
		void MCE_Update_EggTrail4(class UObject* Context);
		void MCE_Update_EggTrail5(class UObject* Context);
		void MCE_Update_EggTrail6(class UObject* Context);
		void MCE_Update_EggTrail7(class UObject* Context);
		void MCE_Update_EggTrail8(class UObject* Context);
		void MCE_Update_EggTrail9(class UObject* Context);
		void MCE_Update_EggTrail10(class UObject* Context);
		void MCE_Update_EggTrail11(class UObject* Context);
		void MCE_Update_EggTrail12(class UObject* Context);
		void MCE_Update_EggTrail13(class UObject* Context);
		void MCE_Update_EggTrail14(class UObject* Context);
		void MCE_Update_EggTrail15(class UObject* Context);
		void MCE_Update_EggTrail16(class UObject* Context);
		void MCE_Update_TalkToMilesBrown(class UObject* Context);
		void MCE_Update_EggTrail17(class UObject* Context);
		void SET_PickUpBrownRock(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_Update_CollectGrogEggs_Hidden(class UObject* Context);
		void OBJ_TakeSpecialBrownrock(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_TakeSpecialBrownRock(class UObject* Context);
		void Set_an_Objective_in_the_Details();
		void Set_an_Objective_in_the_Details();
		void Set_an_Objective_in_the_Details();
		void Set_an_Objective_in_the_Details();
		void Set_an_Objective_in_the_Details();
		void Set_an_Objective_in_the_Details();
		void MCE_Update_KillJabbermons(class UObject* Context);
		void OBJ_CollectGrogEggs_Inv(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MissionKickoff();
		void MCE_Update_TrackThief(class UObject* Context);
		void Obj_EggTrail17(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_ReturnToMilesBrown(class UObject* Context);
		void MCE_Update_KillKingChewy(class UObject* Context);
		void MCE_Update_CollectBrownrockSpecimens(class UObject* Context);
		void OBJ_KillKingChewy(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_ReturnToMilesBrown(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_ReturnToMilesBrown(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_KillKingChewy(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_CollectBrownrockSpecimens(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_CollectBrownrockSpecimens(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_KillJabbermon(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_KillJabbermon(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_TakeBrownrockSpecimen(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_FollowTrail(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_Update_FollowTrail(class UObject* Context);
		void OBJ_FollowTrail(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_TrackThief(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_TrackThief(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ExecuteUbergraph_Mission_RockOnPandora(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
