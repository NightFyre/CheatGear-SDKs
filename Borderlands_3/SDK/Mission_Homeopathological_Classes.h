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
	 * BlueprintGeneratedClass Mission_Homeopathological.Mission_Homeopathological_C
	 * Size -> 0x0130 (FullSize[0x0640] - InheritedSize[0x0510])
	 */
	class UMission_Homeopathological_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_GoToPeaceRetreat_ObjSetVar;                          // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToPeaceRetreat_ObjVar;                             // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_OpenBox_ObjSetVar;                                   // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_OpenBox_ObjVar;                                      // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillBot_ObjSetVar;                                   // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillBot_ObjVar;                                      // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GetMemoryCore_DeadBot_ObjSetVar;                     // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetMemoryCore_ObjVar;                                // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GiveMemoryCore_ObjVar;                               // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_DoNotAttack_ObjSetVar;                               // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DoNotAttackBot_ObjVar;                               // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToPeaceRetreat_Breadcrumb_ObjVar;                  // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_UseIntercom_ObjSetVar;                               // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_AlignYourEnergy_ObjSetVar;                           // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_UseIntercom_ObjVar;                                  // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_AlignYourEnergy_ObjVar;                              // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GetMemoryCore_AliveBot_ObjSetVar;                    // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GiveCore_ObjSetVar;                                  // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_PlayerCompletedDownState_ObjVar;                 // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_PlayerStartedDwnState_ObjVar;                    // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToPeaceRetreat_Breadcrumb2_ObjVar;                 // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_LayDown_ObjSetVar;                                   // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_LayDown_ObjVar;                                      // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ArtTherapy_ObjSetVar;                                // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MeleePaintBucket_ObjVar;                             // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MeleePaintCanvas_ObjVar;                             // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ArtTherapy2_ObjSetVar;                               // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToBot_ObjVar;                                    // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_EnterCabinet_ObjSetVar;                              // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EnterCabinet_ObjVar;                                 // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_LayDownTentative_ObjVar;                         // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_ReturnToResearchCenter_ObjVar;                   // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_GoToPeaceRetreat_Breadcrumb3_ObjVar;             // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DoAttackBot_ObjVar;                                  // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 Convo_DownLine1;                                         // 0x0628(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 Convo_DownLine2;                                         // 0x0634(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
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
		void OnDialogSequenceFinished_39();
		void OnDialogSequenceFinished_38();
		void OnDialogSequenceFinished_37();
		void OnDialogSequenceFinished_36();
		void OnDialogSequenceFinished_35();
		void MCE_PlayerOpenedBox(class UObject* Context);
		void Obj_KillBot(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_KillBot(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_PlayerKilledbot(class UObject* Context);
		void Set_OpenBox(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GetMemoryCore(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GetMemoryCore_DeadBot(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_PlayerGotMemoryCore(class UObject* Context);
		void Obj_GiveMemoryCore(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerGaveMemoryCore(class UObject* Context);
		void Set_DoNotAttack(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_DoNotAttackBot(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerRemainedPeaceful(class UObject* Context);
		void MCE_PlayerDid_NOT_RemainPeaceful(class UObject* Context);
		void SkipKillBotObjective(class UObject* Context);
		void Obj_GoToPeaceRetreat_Breadcrumb(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_UseIntercom(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_AlignYourEnergy(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_OpenBox(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_UseIntercom(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_AlignYourEnergy(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_UsedIntercom(class UObject* Context);
		void MCE_AlignedYourEnergy(class UObject* Context);
		void MCE_PlayerWentToPeaceRetreat_BC(class UObject* Context);
		void Set_GetMemoryCore_AliveBot(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_GiveCore(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void INV_Obj_PlayerCompletedDownState(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerReadyForRevive(class UObject* Context);
		void MCE_PlayerStartedDownState(class UObject* Context);
		void INV_Obj_PlayerStartedDwnState(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ResetPlayerStartedDownState(class UObject* Context);
		void Obj_GoToPeaceRetreat_Breadcrumb2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerWentToPeaceRetreat_BC2(class UObject* Context);
		void Set_LayDown(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_LayDown(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ArtTherapy(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_MeleePaintBucket(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_MeleePaintCanvas(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_TriedLayDown(class UObject* Context);
		void MCE_MeleePaintBucket(class UObject* Context);
		void MCE_MeleePaintCanvas(class UObject* Context);
		void Set_ArtTherapy2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TalkToBot(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_TalkedToBot(class UObject* Context);
		void MCE_PlayerWentToPeaceRetreat(class UObject* Context);
		void Set_EnterCabinet(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_EnterCabinet(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_EnteredCabinet(class UObject* Context);
		void Obj_INV_LayDownTentative(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GoToPeaceRetreat(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GoToPeaceRetreat(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_Obj_ReturnToResearchCenter(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_ReturnToResearchCenter(class UObject* Context);
		void Obj_INV_GoToPeaceRetreat_Breadcrumb3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_PlayerWentToPeaceRetreat_BC3(class UObject* Context);
		void Obj_DoAttackBot(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ExecuteUbergraph_Mission_Homeopathological(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
