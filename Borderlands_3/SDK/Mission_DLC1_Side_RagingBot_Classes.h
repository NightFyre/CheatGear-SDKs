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
	 * BlueprintGeneratedClass Mission_DLC1_Side_RagingBot.Mission_DLC1_Side_RagingBot_C
	 * Size -> 0x0160 (FullSize[0x0670] - InheritedSize[0x0510])
	 */
	class UMission_DLC1_Side_RagingBot_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_EnterPit_ObjSetVar;                                  // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EnterPit_ObjVar;                                     // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KnockOnDoor_ObjSetVar;                               // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KnockOnDoor_ObjVar;                                  // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_BetOnMatches_ObjSetVar;                              // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_BetOnMatches_ObjVar;                                 // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Register_ObjSetVar;                                  // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Register_ObjVar;                                     // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_ReachFrontDoor_ObjVar;                           // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillFighters_ObjSetVar;                              // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillFighter_1_ObjVar;                                // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillFighter_2_ObjVar;                                // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillFighter_3_ObjVar;                                // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToLockerRoom_ObjSetVar;                            // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToLockerRoom_ObjVar;                               // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Round1_ObjSetVar;                                    // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_WaitForFight_ObjVar;                                 // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_SurviveRoundOne_ObjVar;                          // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Inv_SurviveRoundTwo_ObjVar;                          // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoDownRoundThree_ObjVar;                             // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ReturnToYvan_ObjSetVar;                              // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReturnToYvan_ObjVar;                                 // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillYvan_ObjSetVar;                                  // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillYvan_ObjVar;                                     // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Match2_ObjVar;                                       // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Match1_ObjVar;                                       // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_WaitForMatch1_ObjVar;                            // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_WaitForMatch2_ObjVar;                            // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_WaitRoundOne_ObjVar;                             // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_WaitRoundTwo_ObjVar;                             // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_WaitRoundThree_ObjVar;                           // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SurviveRound1_ObjVar;                                // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_MissionComplete_ObjVar;                          // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_MissionComplete_ObjSetVar;                           // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Round2_ObjSetVar;                                    // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SurviveRound2_ObjVar;                                // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Round3_ObjSetVar;                                    // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_WaitFight_ObjSetVar;                                 // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_WaitFight_ObjVar;                                    // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_SurviveRoundThree_ObjVar;                        // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindAccess_ObjVar;                                   // 0x0658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindAccessToPit_ObjSetVar;                           // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_IN_KillFighters_ObjVar;                              // 0x0668(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

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
		void MCE_BetOnMatches(class UObject* Context);
		void Set_Register(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_Register(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Registered(class UObject* Context);
		void Obj_INV_ReachFrontDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_ReachedFrontDoor(class UObject* Context);
		void Set_KillFighters(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_KillFighter_2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_KilledFighter_2(class UObject* Context);
		void Obj_KillFighter_3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_KilledFighter_3(class UObject* Context);
		void Obj_KillFighter_4(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_KilledFighter_4(class UObject* Context);
		void Obj_BetOnMatches(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GoToLockerRoom(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GoToLockerRoom(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_WentToLockerRoom(class UObject* Context);
		void Set_Round1(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_WaitForFight(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_WentToWaitForFight(class UObject* Context);
		void Obj_INV_SurviveRoundOne(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_SurvivedRoundOne(class UObject* Context);
		void Set_BetOnMatches(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_INV_SurviveRoundTwo(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_SurvivedRoundTwo(class UObject* Context);
		void Obj_GoDownRoundThree(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ReturnToYvan(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ReturnToYvan(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ReturnedToYvan(class UObject* Context);
		void Set_KillYvan(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_KillYvan(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_KilledYvan(class UObject* Context);
		void Obj_EnterPit_Objective_PROXY();
		void Obj_Match2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_Match1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_WaitForMatch1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_WaitForMatch2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_KnockedOnDoor(class UObject* Context);
		void MCE_MatchEnd_Win(class UObject* Context);
		void MCE_MatchEnd_Lose(class UObject* Context);
		void MCE_MatchEnd_FighterOut(class UObject* Context);
		void Obj_INV_WaitRoundOne(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_WaitRoundTwo(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_WaitRoundThree(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerDiedInArena(class UObject* Context);
		void Obj_SurviveRound1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_MissionComplete(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_MissionComplete(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MissionKickoff();
		void Obj_KnockOnDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_EnterPit(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_KnockOnDoor(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_EnterPit(class UObject* Context);
		void Obj_SurviveRound2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_Round2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_Round3(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_WaitFight(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_WaitFight(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_SurviveRoundThree(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_SurvivedRoundThree(class UObject* Context);
		void Obj_FindAccess(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_FoundToiletAccess(class UObject* Context);
		void Set_FindAccessToPit(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_EnterPit_Objective_PROXY_1();
		void Obj_IN_KillFighters(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_EnterPit(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void ExecuteUbergraph_Mission_DLC1_Side_RagingBot(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
