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
	 * BlueprintGeneratedClass Mission_Dueling.Mission_Dueling_C
	 * Size -> 0x0138 (FullSize[0x0648] - InheritedSize[0x0510])
	 */
	class UMission_Dueling_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                SET_FollowDueler_ObjSetVar;                              // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_FollowDueler_ObjVar;                                 // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_ShootingRange_ObjSetVar;                             // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_ShootingRange_ObjVar;                                // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_FindArmor_ObjSetVar;                                 // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_FindArmor_ObjVar;                                    // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_AttachArmor_ObjSetVar;                               // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_AttachArmor_ObjVar;                                  // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_CallOutOpponent_ObjSetVar;                           // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_CallOutOpponent_ObjVar;                              // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_GivePrepTalk_ObjSetVar;                              // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_GivePrepTalk_ObjVar;                                 // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_PickupBucket_ObjSetVar;                              // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_PickupBucket_ObjVar;                                 // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_PlaceBucket_ObjSetVar;                               // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_PlaceBucket_ObjVar;                                  // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_RingBell_ObjSetVar;                                  // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_RingBell_ObjVar;                                     // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_ReviveDueler_ObjSetVar;                              // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_ReviveDueler_ObjVar;                                 // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJINVIS_Destructible01_ObjVar;                          // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJINVIS_Destructible02_ObjVar;                          // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJINVIS_Destructible03_ObjVar;                          // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJINVIS_Destructible04_ObjVar;                          // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJINVIS_Destructible05_ObjVar;                          // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_InvestigateFight_ObjSetVar;                          // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_InvestigateFight_ObjVar;                             // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_HelpUpNPC_ObjSetVar;                                 // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_HelpUpNPC_ObjVar;                                    // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_BreakTable_ObjVar;                                   // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TurnIn_ObjSetVar;                                    // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TurnIn_ObjVar;                                       // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_EncourageDueler_ObjSetVar;                           // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_EncourageDueler_ObjVar;                              // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_FindSign_ObjVar;                                     // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_FindManholeCover_ObjVar;                             // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_FindDartboard_ObjVar;                                // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_INV_WilliamDead_ObjVar;                              // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
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
		void OnDialogSequenceFinished_39();
		void OnDialogSequenceFinished_38();
		void OnDialogSequenceFinished_37();
		void OnDialogSequenceFinished_36();
		void OnDialogSequenceFinished_35();
		void OnDialogSequenceFinished_34();
		void SET_FollowDueler(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_FollowDueler(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_ShootingRange(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_ShootingRange(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_FindArmor(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_FindArmor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_AttachArmor(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_AttachArmor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_CallOutOpponent(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_CallOutOpponent(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_GivePrepTalk(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_GivePrepTalk(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_PickupBucket(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_PickupBucket(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_PlaceBucket(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_PlaceBucket(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_RingBell(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_RingBell(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_ReviveDueler(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_ReviveDueler(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_FollowDueler(class UObject* Context);
		void Update_ShootingRange(class UObject* Context);
		void OBJINVIS_Destructible01(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_Destructible01(class UObject* Context);
		void OBJINVIS_Destructible02(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_Destructible02(class UObject* Context);
		void OBJINVIS_Destructible03(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_Destructible03(class UObject* Context);
		void OBJINVIS_Destructible04(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_Destructible04(class UObject* Context);
		void OBJINVIS_Destructible05(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_Destructible05(class UObject* Context);
		void Update_PlaceBucket(class UObject* Context);
		void Update_AttachArmor(class UObject* Context);
		void Update_CallOutOpponent(class UObject* Context);
		void Update_GivePrepTalk(class UObject* Context);
		void Update_RingBell(class UObject* Context);
		void AdvanceTo_ReviveDueler(class UObject* Context);
		void Update_ReviveDueler(class UObject* Context);
		void SET_InvestigateFight(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_InvestigateFight(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_HelpUpNPC(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_HelpUpNPC(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_InvestigateFight(class UObject* Context);
		void OBJ_BreakTable(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_BreakTable(class UObject* Context);
		void Update_HelpUpNPC(class UObject* Context);
		void Set_TurnIn(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TurnIn(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_TurnIn(class UObject* Context);
		void Advance_EncourageDueler(class UObject* Context);
		void OBJ_EncourageDueler(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_EncourageDueler(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_EncourageDueler(class UObject* Context);
		void OBJ_FindSign(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_FindManholeCover(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_FindDartboard(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void TriggerDrunkWilliamLiveVO(class UObject* Context);
		void HelpSlimUpNags(class UObject* Context);
		void PlayDuelersShitTalking(class UObject* Context);
		void OBJ_INV_WilliamDead(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ExecuteUbergraph_Mission_Dueling(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
