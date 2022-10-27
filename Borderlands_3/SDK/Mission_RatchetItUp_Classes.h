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
	 * BlueprintGeneratedClass Mission_RatchetItUp.Mission_RatchetItUp_C
	 * Size -> 0x0164 (FullSize[0x0674] - InheritedSize[0x0510])
	 */
	class UMission_RatchetItUp_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_FindTito_ObjSetVar;                                  // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindTito_ObjVar;                                     // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindSecret_ObjSetVar;                                // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindSecretLabs_ObjVar;                               // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TrackTito_ObjSetVar;                                 // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GlennCallsOut_ObjVar;                                // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_InvestigateVoice_ObjSetVar;                          // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_InvestigateVoice_ObjVar;                             // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FreeGlenn_ObjSetVar;                                 // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FreeGlenn_ObjVar;                                    // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_MeetGlenn_ObjSetVar;                                 // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MeetGlenn_ObjVar;                                    // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FollowGlenn_ObjSetVar;                               // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FollowGlenn_ObjVar;                                  // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_EnterPit_ObjSetVar;                                  // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EnterPit_ObjVar;                                     // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillGary_ObjSetVar;                                  // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillGary_ObjVar;                                     // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_SpeakWithGlenn_ObjSetVar;                            // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SpeakWithGlenn_ObjVar;                               // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PickupBrain_ObjSetVar;                               // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PickupBrain_ObjVar;                                  // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PlaceBrain_ObjSetVar;                                // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlaceBrain_ObjVar;                                   // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PullSwitch_ObjSetVar;                                // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SpawnTerry_ObjVar;                                   // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_BreadcrumbSide01_ObjVar;                             // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ClearRoom_ObjSetVar;                                 // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ClearRoom_ObjVar;                                    // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FreeGlennAgain_ObjSetVar;                            // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FreeGlennAgain_ObjVar;                               // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindTitoNow_ObjVar;                                  // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_SpeakToTito_ObjSetVar;                               // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SpeakToTito_ObjVar;                                  // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 AccidentsConversation;                                   // 0x0628(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_I380[0x4];                                   // 0x0634(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjective*                                   Obj_VO_SecretLabs_ObjVar;                                // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PullSwitch_Unlocked_ObjVar;                          // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FreeGlenn_Breadcrumb_ObjVar;                         // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 NewVar_1;                                                // 0x0650(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 CluesConversation;                                       // 0x065C(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 NewVar_2;                                                // 0x0668(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void OnDialogSequenceFinished_19();
		void OnDialogSequenceFinished_18();
		void OnDialogSequenceFinished_17();
		void OnDialogSequenceFinished_16();
		void OnDialogSequenceFinished_15();
		void OnDialogSequenceFinished_14();
		void OnDialogSequenceFinished_13();
		void OnDialogSequenceFinished_12();
		void OnDialogSequenceFinished_11();
		void Obj_FindTito(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_FindTito(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_FindSecret(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindSecretLabs(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MRE_EnteredOffice(class UObject* Context);
		void Set_TrackTito(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GlennCallsOut(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MRE_UsedSecretSwitch(class UObject* Context);
		void Set_InvestigateVoice(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_InvestigateVoice(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MRE_GlennCallsOut(class UObject* Context);
		void Set_FreeGlenn(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FreeGlenn(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MRE_OpenCell(class UObject* Context);
		void MRE_GlennAsksHelp(class UObject* Context);
		void Set_MeetGlenn(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_MeetGlenn(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MRE_MetGlenn(class UObject* Context);
		void Set_FollowGlenn(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FollowGlenn(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MRE_CageDropped(class UObject* Context);
		void Set_EnterPit(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_EnterPit(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MRE_PickupBrain(class UObject* Context);
		void Set_KillGary(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_KillGary(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MRE_GaryDead(class UObject* Context);
		void Set_SpeakWithGlenn(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_SpeakWithGlenn(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MRE_GaryTurnIn(class UObject* Context);
		void Obj_PickupBrain(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MRE_BrainObtained(class UObject* Context);
		void Set_PickupBrain(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_PlaceBrain(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_PlaceBrain(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MRE_BrainPlaced(class UObject* Context);
		void Set_PullSwitch(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_SpawnTerry(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MRE_SwitchPulled(class UObject* Context);
		void Obj_BreadcrumbSide01(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MRE_UPDATE_BreadcrumbSide01(class UObject* Context);
		void Set_ClearRoom(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ClearRoom(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ME_PlayerReachesMainLab(class UObject* Context);
		void MRE_EnemiesDead(class UObject* Context);
		void Set_FreeGlennAgain(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FreeGlennAgain(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_FindTitoNow(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_FindTitoNow_Objective_PROXY();
		void Obj_FindTitoNow_Objective_PROXY_1();
		void Obj_FindTitoNow_Objective_PROXY_2();
		void Obj_FindTitoNow_Objective_PROXY_3();
		void Obj_FindTitoNow_Objective_PROXY_4();
		void Obj_FindTitoNow_Objective_PROXY_5();
		void Advance_FindTitoNow(class UObject* Context);
		void Obj_FindTitoNow_Objective_PROXY_6();
		void Obj_FindTitoNow_Objective_PROXY_7();
		void Obj_FreeGlennAgain_Objective_PROXY_8();
		void Obj_FreeGlennAgain_Objective_PROXY_9();
		void Set_SpeakToTito(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_SpeakToTito(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MRE_TalkedToTito(class UObject* Context);
		void Obj_VO_SecretLabs(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MRE_SecretLabsFound(class UObject* Context);
		void Obj_PullSwitch_Unlocked(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MRE_SwitchPulledLock(class UObject* Context);
		void MissionKickoff();
		void Obj_FreeGlenn_Breadcrumb(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ExecuteUbergraph_Mission_RatchetItUp(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
