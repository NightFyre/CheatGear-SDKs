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
	 * BlueprintGeneratedClass Mission_PandorasNextTopMouthpiece.Mission_PandorasNextTopMouthpiece_C
	 * Size -> 0x00B8 (FullSize[0x05C8] - InheritedSize[0x0510])
	 */
	class UMission_PandorasNextTopMouthpiece_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_FindEntryRequirements_ObjSetVar;                     // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindEntryRequirements_ObjVar;                        // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ProveWorthy_ObjSetVar;                               // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_StealBanner_ObjVar;                                  // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_BlowUpWarPigsWarPig_ObjVar;                          // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_LootClan3Treasure_ObjVar;                            // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_BringTrophiesToHBC_ObjSetVar;                        // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_BringTrophiestoHBC_ObjVar;                           // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillMouthpiece_ObjSetVar;                            // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillMouthpiece_ObjVar;                               // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_StopPandorasNextTopMouthpiece_ObjSetVar;             // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_StopPandorasNextTopMouthpiece_ObjVar;                // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_DepositTrophies_ObjSetVar;                           // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DepositTrophies_ObjVar;                              // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PlayOrgan_ObjSetVar;                                 // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlayOrgan_ObjVar;                                    // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TurnInVaughn_ObjSetVar;                              // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TurnInVaughn_ObjVar;                                 // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TrophyLineCount;                                         // 0x05A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_O03C[0x4];                                   // 0x05AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjectiveSet*                                Set_FindSecretStash_ObjSetVar;                           // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindSecretStash_ObjVar;                              // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_LootClan3Treasure_Nag_ObjVar;                        // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnDialogSequenceFinished_101();
		void OnDialogSequenceFinished_100();
		void OnDialogSequenceFinished_99();
		void OnDialogSequenceFinished_98();
		void OnDialogSequenceFinished_97();
		void OnDialogSequenceFinished_96();
		void OnDialogSequenceFinished_95();
		void OnDialogSequenceFinished_94();
		void OnDialogSequenceFinished_93();
		void OnDialogSequenceFinished_92();
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
		void Obj_FindEntryRequirements(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_FindEntryRequirements(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_StealBanner(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ProveWorthy(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_BlowUpWarPigsWarPig(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_LootClan3Treasure(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_BringTrophiestoHBC(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_BringTrophiesToHBC(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_KillMouthpiece(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_KillMouthpiece(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_FindEntryRequirements(class UObject* Context);
		void MCE_BringTrophiesToHBC(class UObject* Context);
		void MCE_StopPandorasNextTopMouthpiece(class UObject* Context);
		void Obj_StopPandorasNextTopMouthpiece(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_StopPandorasNextTopMouthpiece(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_DepositTrophies(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_DepositTrophies(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_DepositTrophies(class UObject* Context);
		void Obj_PlayOrgan(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_PlayOrgan(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_PlayOrgan(class UObject* Context);
		void Obj_TurnInVaughn(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_TurnInVaughn(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_PNTMTurnInToVaughn(class UObject* Context);
		void MCE_ProgressWarPig(class UObject* Context);
		void MCE_WarPigDestroyedDialogue(class UObject* Context);
		void MCE_WarPigHijacked(class UObject* Context);
		void MCE_DialogueOnTheWayToHBC(class UObject* Context);
		void MCE_CloseToEnforcersDialogue(class UObject* Context);
		void Obj_FindSecretStash(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_FindSecretStash(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Advance_FindSecretStash(class UObject* Context);
		void MCE_NearWarBanner1(class UObject* Context);
		void MCE_NearWarBanner2(class UObject* Context);
		void MCE_CloseToWarPig(class UObject* Context);
		void MCE_CloseToPuttergunk(class UObject* Context);
		void MissionKickoff();
		void MCE_EvenCloserToPuttergunk(class UObject* Context);
		void Obj_LootClan3Treasure_Nag(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PuttergunkDoorOpen(class UObject* Context);
		void ExecuteUbergraph_Mission_PandorasNextTopMouthpiece(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
