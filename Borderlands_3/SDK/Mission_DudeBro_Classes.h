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
	 * BlueprintGeneratedClass Mission_DudeBro.Mission_DudeBro_C
	 * Size -> 0x0163 (FullSize[0x0673] - InheritedSize[0x0510])
	 */
	class UMission_DudeBro_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_KillSaurianChaddFight_ObjSetVar;                     // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillSaurianChaddFight_ObjVar;                        // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ReviveChaddFight_ObjSetVar;                          // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReviveChaddFight_ObjVar;                             // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FollowChaddBaseJump_ObjSetVar;                       // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FollowChaddBaseJump_ObjVar;                          // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ReviveChaddJump_ObjSetVar;                           // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReviveChaddJump_ObjVar;                              // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GetRocketParts_ObjSetVar;                            // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetRocketParts_ObjVar;                               // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_UseRocketParts_ObjSetVar;                            // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_UseRocketPart1_ObjVar;                               // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ShootTheIgniter_ObjSetVar;                           // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ShootTheIgniter_ObjVar;                              // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GetChaddLoot_ObjSetVar;                              // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetChaddLoot_ObjVar;                                 // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FollowChaddGrogFight_ObjSetVar;                      // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FollowChaddGrogFight_ObjVar;                         // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillGrog_ObjSetVar;                                  // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillGrog_ObjVar;                                     // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetGrogGuts_ObjVar;                                  // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GiveGutsToChadd_ObjSetVar;                           // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FollowChaddSaurianFight_ObjSetVar;                   // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GiveGutsToChadd_ObjVar;                              // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FollowChaddSaurianFight_ObjVar;                      // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_AnswerCallTalkToChadd_ObjSetVar;                     // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_AnswerCallTalkToChadd_ObjVar;                        // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlayerBaseJumpPrep_ObjVar;                           // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FollowChaddRocketLift_ObjSetVar;                     // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FollowChaddRocketLift_ObjVar;                        // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlayerBaseJump_ObjVar;                               // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ChaddUsesLift_ObjSetVar;                             // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ChaddUsesLift_ObjVar;                                // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ChaddIsJumping_ObjVar;                               // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ChaddArrivedAtPreJump_ObjSetVar;                     // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ChaddArrivedAtPreJump_ObjVar;                        // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ChaddGetsIntoPositionToJump_ObjSetVar;               // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ChaddGetsIntoPositionToJump_ObjVar;                  // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_UseRocketPart2_ObjVar;                               // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_UseRocketPart3_ObjVar;                               // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FuelCanCounter_ObjVar;                               // 0x0658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_BaseJumpPrepCounter_ObjVar;                          // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_BaseJumpCounter_ObjVar;                              // 0x0668(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EMissionObjectiveEvent                                     ObjStatus_ChaddUsesLift;                                 // 0x0670(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EMissionObjectiveStatus                                    NewVar_1;                                                // 0x0671(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ChadAlreadyInPosition;                                   // 0x0672(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

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
		void MCE_FollowChaddRocketLift(class UObject* Context);
		void Obj_PlayerBaseJump(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Player_Has_Completed_Jump(class UObject* Context);
		void Set_ChaddUsesLift(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ChaddUsesLift(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_ChaddIsJumping(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ChaddArrivedAtPreJump(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ChaddArrivedAtPreJump(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ChaddGetsIntoPositionToJump(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ChaddGetsIntoPositionToJump(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ChaddSaysRandomJumpLine(class UObject* Context);
		void MCE_Kill_Grog(class UObject* Context);
		void MCE_Chadd_Read_To_Jump(class UObject* Context);
		void Obj_UseRocketPart2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_UseRocketPart3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Use_Rocket_Part(class UObject* Context);
		void MCE_Use_Rocket_Part(class UObject* Context);
		void Obj_FuelCanCounter(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_FuelCanCounter(class UObject* Context);
		void Obj_FollowChaddRocketLift(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_FollowChaddRocketLift(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_Watch_Chadd_Base_Jump(class UObject* Context);
		void Obj_PlayerBaseJumpPrep(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Answer_Call_Talk_To_Chadd(class UObject* Context);
		void Obj_AnswerCallTalkToChadd(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_AnswerCallTalkToChadd(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_Give_Guts_To_Chadd(class UObject* Context);
		void MCE_Follow_Chadd_Saurian_Fight(class UObject* Context);
		void Obj_FollowChaddSaurianFight(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_GiveGutsToChadd(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_FollowChaddSaurianFight(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GetGrogGuts(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_KillGrog(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GiveGutsToChadd(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_KillGrog(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_Revive_Chadd_Jump(class UObject* Context);
		void MCE_Follow_Chadd_Base_Jump(class UObject* Context);
		void MCE_Follow_Chadd_Grog_Fight(class UObject* Context);
		void Obj_FollowChaddGrogFight(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_FollowChaddGrogFight(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_Revive_Chadd_Fight(class UObject* Context);
		void MCE_GotChaddLootMissionComplete(class UObject* Context);
		void Obj_GetChaddLoot(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GetChaddLoot(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_Shoot_The_Igniter(class UObject* Context);
		void MCE_Use_Rocket_Part(class UObject* Context);
		void Obj_ShootTheIgniter(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ShootTheIgniter(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_UseRocketPart1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_UseRocketParts(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GetRocketParts(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GetRocketParts(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ReviveChaddJump(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ReviveChaddJump(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FollowChaddBaseJump(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_FollowChaddBaseJump(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ReviveChaddFight(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ReviveChaddFight(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_KillSaurianChaddFight(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_KillSaurianChaddFight(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_BaseJumpPrepCounter(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_ChaddIsJumping(class UObject* Context);
		void MCE_Update_BaseJumpPrepCounter(class UObject* Context);
		void Obj_BaseJumpCounter(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_BaseJumpCounter(class UObject* Context);
		void Obj_ReviveChaddJump_Objective_PROXY();
		void Obj_FuelCanCounter_Objective_PROXY_1();
		void MissionKickoff();
		void ExecuteUbergraph_Mission_DudeBro(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
