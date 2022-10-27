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
	 * BlueprintGeneratedClass Mission_OppResearch.Mission_OppResearch_C
	 * Size -> 0x0184 (FullSize[0x0694] - InheritedSize[0x0510])
	 */
	class UMission_OppResearch_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_InvestigateDetention_ObjSetVar;                      // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_UsePassCode_ObjSetVar;                               // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_UseTerminal_ObjVar;                                  // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_DefendYourself_ObjSetVar;                            // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_DefendYourself_ObjVar;                               // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_UploadData_ObjSetVar;                                // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_UploadData_ObjVar;                                   // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_UploadToAtlas_ObjSetVar;                             // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_UploadEnding_ObjVar;                                 // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_OpenDoorIntoArea_ObjVar;                             // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 Conversation_ECHO_2;                                     // 0x0568(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 Conversation_ECHO_3;                                     // 0x0574(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 Conversation_ECHO_4;                                     // 0x0580(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_6RN4[0x4];                                   // 0x058C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjectiveSet*                                Set_GetDirt_ObjSetVar;                                   // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetKDirt_ObjVar;                                     // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_AtlasToiletGuy_ObjSetVar;                            // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SearchBody_ObjVar;                                   // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FollowBlood_ObjVar;                                  // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SearchToilet_ObjVar;                                 // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TakeTapeToilet_ObjVar;                               // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_InterrogationGuy_ObjSetVar;                          // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SearchBodyInterrogation_ObjVar;                      // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_OpenLockerFail_ObjVar;                               // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillInterrogator_ObjVar;                             // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TakeTapeLocker_ObjVar;                               // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_LiveSpy_ObjSetVar;                                   // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillMaliwan_ObjVar;                                  // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TakeTapeLiveSpy_ObjVar;                              // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindBody_ObjVar;                                     // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindInterrogatorGuy_ObjSetVar;                       // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindInterrogatorGuy_ObjVar;                          // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_TakeKey_ObjVar;                                      // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindLiveSpy_ObjSetVar;                               // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindLiveSpy_ObjVar;                                  // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillCoV_ObjSetVar;                                   // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ClearRoom_ObjSetVar;                                 // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KIllCoVAndMaliwan_ObjVar;                            // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillCoV_ObjVar;                                      // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PassWordSuccess_ObjSetVar;                           // 0x0658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EnterPassCode_ObjVar;                                // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INVIS_KillMaliwanAgain_ObjVar;                       // 0x0668(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 Soldier2YellOuts;                                        // 0x0670(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_86DS[0x4];                                   // 0x067C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjective*                                   Obj_EnterPassCodeAgain_ObjVar;                           // 0x0680(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 LiveTapeConvo;                                           // 0x0688(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

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
		void Set_UploadToAtlas(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void ME_Update_SendDataToAtlas(class UObject* Context);
		void Obj_UploadEnding(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_OpenDoorIntoArea(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_OpenDoorToCenter(class UObject* Context);
		void Obj_UploadData(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_UploadData(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_GetDirt(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GetKDirt(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_AtlasToiletGuy(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_SearchBody(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_FollowBlood(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_SearchToilet(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_TakeTapeToilet(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_GetKDirt_Objective_PROXY();
		void Set_InterrogationGuy(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GetKDirt_Objective_PROXY_1();
		void Obj_SearchBodyInterrogation(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_OpenLockerFail(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_KillInterrogator(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_TakeTapeLocker(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_LiveSpy(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GetKDirt_Objective_PROXY_2();
		void Obj_KillMaliwan(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_TakeTapeLiveSpy(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_UpdateTapes(class UObject* Context);
		void Obj_FindBody(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_FoundToiletGuy(class UObject* Context);
		void MCE_Update_SearchedBody(class UObject* Context);
		void MCE_Update_FollowedBlood(class UObject* Context);
		void MCE_Update_SearchedToilet(class UObject* Context);
		void MCE_Update_TookTape1(class UObject* Context);
		void Set_FindInterrogatorGuy(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GetKDirt_Objective_PROXY_3();
		void Obj_FindInterrogatorGuy(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_FoundIntGuy(class UObject* Context);
		void MCE_Update_SearchedIntGuy(class UObject* Context);
		void MCE_Update_LockerFailed(class UObject* Context);
		void OBJ_TakeKey(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_Tookkey(class UObject* Context);
		void MCE_Update_TookTapeIntGuy(class UObject* Context);
		void Set_FindLiveSpy(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindLiveSpy(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_GetKDirt_Objective_PROXY_4();
		void MCE_Update_FoundLiveSpy(class UObject* Context);
		void MCE_Update_KilledMaliwan(class UObject* Context);
		void MCE_Update_TakeTapeLiveSpy(class UObject* Context);
		void Set_ClearRoom(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_KIllCoVAndMaliwan(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_KillCoV(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_KillCoV(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_KilledCoV(class UObject* Context);
		void ME_UPdateDefendYourself(class UObject* Context);
		void ME_Update_TerminalDownload(class UObject* Context);
		void SET_DefendYourself(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_EnterPassCode(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_PassWordSuccess(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_INVIS_KillMaliwanAgain(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_KilledTypeOfEnemy(class UObject* Context);
		void OBJ_DefendYourself(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_EnterPassCodeAgain(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_LoudspeakerActivated(class UObject* Context);
		void MCE_ListenedToToiletTape(class UObject* Context);
		void Obj_UseTerminal(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_UsePassCode(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_ListenedToIntTape(class UObject* Context);
		void Set_InvestigateDetention(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_ListenedToEchoLogLiveSpy(class UObject* Context);
		void MissionKickoff();
		void ExecuteUbergraph_Mission_OppResearch(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
