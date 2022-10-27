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
	 * BlueprintGeneratedClass Mission_WizardOfNogs.Mission_WizardOfNogs_C
	 * Size -> 0x01C0 (FullSize[0x06D0] - InheritedSize[0x0510])
	 */
	class UMission_WizardOfNogs_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_InvestigateCompound_ObjSetVar;                       // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_InvestigateCompound_ObjVar;                          // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ObtainTechnical_ObjVar;                              // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_CollectNOGs_ObjSetVar;                               // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ClearCompound_ObjSetVar;                             // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FollowQuinn_ObjSetVar;                               // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ClearCompound_ObjVar;                                // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FollowQuinn_ObjVar;                                  // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CaptureNog_ObjVar;                                   // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_TalkToQuinn_CompleteMission_ObjSetVar;               // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_TalkToQuinn_CompleteMission_ObjVar;                  // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_DefendQuinn_ObjSetVar;                               // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_DefendQuinn_ObjVar;                                  // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_KnockOnSafeRoomDoor_ObjSetVar;                       // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_KnockOnSafeRoomDoor_ObjVar;                          // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_QuinnEscapesRoom_ObjVar;                             // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_SaferoomDoorOpened_ObjVar;                           // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_SummonNogs_ObjSetVar;                                // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SummonNogs_ObjVar;                                   // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_AlarmSequence_ObjVar;                                // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TrooperFightLine_ObjVar;                             // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_OpenSaferooom_ObjVar;                                // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_RendevousWithScientist_ObjSetVar;                    // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_QuinnRendevous_ObjVar;                               // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MoveOn_ObjVar;                                       // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_DefendQuinnWave4_ObjSetVar;                          // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_DefendQuinnWave4_ObjVar;                             // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 TrooperSearchConvo;                                      // 0x05F0(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_69J0[0x4];                                   // 0x05FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjective*                                   OBJ_MoveToNext_ObjVar;                                   // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ObserveUpgrade_ObjSetVar;                            // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ObserveUpgrade_ObjVar;                               // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_SummonNog2_ObjSetVar;                                // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SummonNog2_ObjVar;                                   // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ObserveUpgrade2_ObjSetVar;                           // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ObserveUpgrade2_ObjVar;                              // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_SummonNog3_ObjSetVar;                                // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SummonNog3_ObjVar;                                   // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ObserveUpgrade3_ObjSetVar;                           // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ObserveUpgrade3_ObjVar;                              // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_CheckIfQuinnDowned2_ObjVar;                          // 0x0658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_QuinnDown2_ObjVar;                                   // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_QuinnUp2_ObjVar;                                     // 0x0668(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_ReviveQuinn2_ObjSetVar;                              // 0x0670(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_ReviveQuinn2_ObjVar;                                 // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_QuinnRevived2_ObjVar;                                // 0x0680(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_ReviveQuinn_ObjSetVar;                               // 0x0688(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_ReviveQuinn_ObjVar;                                  // 0x0690(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_QuinnRevived_ObjVar;                                 // 0x0698(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_CheckIfQuinnDowned_ObjVar;                           // 0x06A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_QuinnDown_ObjVar;                                    // 0x06A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_QuinnUp_ObjVar;                                      // 0x06B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlayerInArea_ObjVar;                                 // 0x06B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_MissionRewardSkin_ObjVar;                            // 0x06C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_RespawnTechnical_ObjVar;                             // 0x06C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void CatchARideVehicleSpawn(class ACatchARide* CatchARide, class AOakVehicle* Vehicle);
		void OnDialogSequenceFinished_37();
		void OnDialogSequenceFinished_36();
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
		void Set_FollowQuinn(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FollowQuinn(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ClearCompound(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_LedPlayer(class UObject* Context);
		void Obj_CaptureNog(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_InvestigateCompound(class UObject* Context);
		void Update_TurnInToQuinn_CompleteMission(class UObject* Context);
		void SET_TalkToQuinn_CompleteMission(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_TalkToQuinn_CompleteMission(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_DefendQuinn(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_DefendQuinn(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_ClearCompound(class UObject* Context);
		void Update_QuinnDefended(class UObject* Context);
		void Obj_ClearCompound(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_KnockOnSafeRoomDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_KnockOnSafeRoomDoor(class UObject* Context);
		void SET_KnockOnSafeRoomDoor(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_CollectNOGs(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_QuinnEscapesRoom(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_QuinnFinishedDialogue(class UObject* Context);
		void OBJ_SaferoomDoorOpened(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_SaferoomDoorOpened(class UObject* Context);
		void Set_SummonNogs(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_SummonNogs(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_SummonedNogs(class UObject* Context);
		void Obj_AlarmSequence(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_AlarmsStop(class UObject* Context);
		void Obj_TrooperFightLine(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_DenThreatened(class UObject* Context);
		void OBJ_OpenSaferooom(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_OpenSaferoom(class UObject* Context);
		void Set_RendevousWithScientist(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_QuinnRendevous(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_QuinnRendevous(class UObject* Context);
		void Update_NogCaptured(class UObject* Context);
		void Obj_MoveOn(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_MoveOn(class UObject* Context);
		void SET_DefendQuinnWave4(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_DefendQuinnWave4(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_QuinnDefended4(class UObject* Context);
		void OBJ_MoveToNext(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_MoveToNext(class UObject* Context);
		void Set_ObserveUpgrade(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ObserveUpgrade(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_NOGUpgraded(class UObject* Context);
		void Set_SummonNog2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_SummonNog2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_SummonedNog2(class UObject* Context);
		void Set_ObserveUpgrade2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ObserveUpgrade2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_NOGUpgraded2(class UObject* Context);
		void Set_SummonNog3(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_SummonNog3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_SummonedNog3(class UObject* Context);
		void Set_ObserveUpgrade3(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ObserveUpgrade3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_NOGUpgraded3(class UObject* Context);
		void Obj_ObtainTechnical(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_CheckIfQuinnDowned2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_CheckIfQuinnDowned2(class UObject* Context);
		void OBJ_QuinnDown2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_QuinnDown2(class UObject* Context);
		void OBJ_QuinnUp2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_QuinnUp2(class UObject* Context);
		void Update_ReviveQuinn2(class UObject* Context);
		void SET_ReviveQuinn2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_ReviveQuinn2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_InvestigateCompound(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_InvestigateCompound(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_QuinnRevived2(class UObject* Context);
		void OBJ_QuinnRevived2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_ReviveQuinn(class UObject* Context);
		void SET_ReviveQuinn(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_ReviveQuinn(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_QuinnRevived(class UObject* Context);
		void OBJ_QuinnRevived(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_CheckIfQuinnDowned(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_CheckIfQuinnDowned(class UObject* Context);
		void OBJ_QuinnDown(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_QuinnDown(class UObject* Context);
		void OBJ_QuinnUp(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_QuinnUp(class UObject* Context);
		void Obj_PlayerInArea(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_PlayerInArea(class UObject* Context);
		void MCE_QuinnDialogOnReturn(class UObject* Context);
		void OBJ_MissionRewardSkin(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_RespawnTechnical(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ExecuteUbergraph_Mission_WizardOfNogs(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
