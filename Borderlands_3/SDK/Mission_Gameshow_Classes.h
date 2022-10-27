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
	 * BlueprintGeneratedClass Mission_Gameshow.Mission_Gameshow_C
	 * Size -> 0x00C8 (FullSize[0x05D8] - InheritedSize[0x0510])
	 */
	class UMission_Gameshow_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		int32_t                                                    RoundNumber;                                             // 0x0518(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bAnswerVOFinished;                                       // 0x051C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bAtPodium;                                               // 0x051D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bBoardCleared;                                           // 0x051E(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bQuestionQueued;                                         // 0x051F(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bPlayerAnswered;                                         // 0x0520(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bEnemyAnswered;                                          // 0x0521(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bRoundActive;                                            // 0x0522(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4OX8[0x5];                                   // 0x0523(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjectiveSet*                                Set_ReadyUp_ObjSetVar;                                   // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReadyUp_ObjVar;                                      // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Trivia_ObjSetVar;                                    // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CompleteRound_ObjVar;                                // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TalkToHostess_ObjSetVar;                             // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToHostess_ObjVar;                                // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToPodium_ObjSetVar;                                // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ExplainRules_ObjSetVar;                              // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ExplainRules_ObjVar;                                 // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillOpposition_ObjSetVar;                            // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillOpposition_ObjVar;                               // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_DecipherWords_ObjSetVar;                             // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FollowHostess_ObjVar;                                // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EnemyAnswer_INVS_ObjVar;                             // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Timer_INVS_ObjVar;                                   // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ListenToQuestion_ObjVar;                             // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_AnswerA_ObjVar;                                      // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_AnswerB_ObjVar;                                      // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_AskQuestion_INVS_ObjVar;                             // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_StandAtPodium_ObjVar;                                // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToPodium_ObjVar;                                   // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CompleteTrivia_ObjVar;                               // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

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
		void Set_DecipherWords(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FollowHostess(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_AnsweredA(class UObject* Context);
		void MCE_AnsweredB(class UObject* Context);
		void Obj_EnemyAnswer_INVS(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_EnemiesAnswered(class UObject* Context);
		void MCE_TimerFinished(class UObject* Context);
		void Obj_Timer_INVS(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_ListenToQuestion(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_AnswerA(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_AnswerB(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_AskQuestion_INVS(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_KilledOpposition(class UObject* Context);
		void Obj_KillOpposition(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void CE_ShowAnswer();
		void CE_ClearedBoard();
		void CE_AnswerVOFinished();
		void Set_KillOpposition(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_Ready(class UObject* Context);
		void MCE_TalkedToHostess(class UObject* Context);
		void Obj_TalkToHostess(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_TalkToHostess(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_CompletedRound(class UObject* Context);
		void Obj_CompleteRound(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_Trivia(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_ReadyUp(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ReadyUp(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void CE_PlayerWinsRound();
		void CE_PlayerLosesRound();
		void CE_BothLostRound();
		void OnLoad_ExplainRules(class UObject* Context);
		void Obj_StandAtPodium(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerAtPodium(class UObject* Context);
		void MCE_PlayerLeftPodium(class UObject* Context);
		void Obj_StandAtPodium_Objective_PROXY();
		void Obj_GoToPodium(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_StandAtPodium_Objective_PROXY_1();
		void Obj_ExplainRules(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void CE_AskQuestion();
		void CE_AtPodium();
		void Obj_StandAtPodium_Objective_PROXY_2();
		void OnLoad_ReadyUp(class UObject* Context);
		void UPDATE_FollowHostess(class UObject* Context);
		void CE_PlayerAnswersWrong();
		void CE_ClearBoard();
		void Set_ExplainRules(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void CE_PlayerAnswered();
		void PlayerIsAlreadyAtPodium(class UObject* Context);
		void Obj_CompleteTrivia(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GoToPodium(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MissionKickoff();
		void Obj_StandAtPodium_Objective_PROXY_3();
		void ExecuteUbergraph_Mission_Gameshow(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
