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
	 * BlueprintGeneratedClass Mission_BridgeInTheDark.Mission_BridgeInTheDark_C
	 * Size -> 0x0179 (FullSize[0x0689] - InheritedSize[0x0510])
	 */
	class UMission_BridgeInTheDark_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                SET_FindBeeping_ObjSetVar;                               // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_FindBeeping_ObjVar;                                  // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_HitPoop_ObjSetVar;                                   // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_HitPoop_ObjVar;                                      // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_DeactivateAlarm_ObjSetVar;                           // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_DeactivateAlarm_ObjVar;                              // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_GotoCamp_ObjSetVar;                                  // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_GotoCamp_ObjVar;                                     // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_AlignRunes_ObjSetVar;                                // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   AlignLeftRune_ObjVar;                                    // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_FollowTunnel_ObjSetVar;                              // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_FollowTunnel_ObjVar;                                 // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_LocateBot03_ObjSetVar;                               // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_LocateBot03_ObjVar;                                  // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_DefeatDemonTink_ObjSetVar;                           // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_DefeatDemonTink_ObjVar;                              // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_InvestigateBotReading_ObjSetVar;                     // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_InvestigateBotReading_ObjVar;                        // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   AlignCenterRune_ObjVar;                                  // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   AlignRightRune_ObjVar;                                   // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_ReturnToBot01_ObjSetVar;                             // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_ReturnToBot01_ObjVar;                                // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_FindPullEntranceSwitch_ObjSetVar;                    // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_FindPullEntranceSwitch_ObjVar;                       // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_PickUpBotHead_ObjSetVar;                             // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_PickUpBotHead_ObjVar;                                // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_ReattachHead_ObjSetVar;                              // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_ReattachHead_ObjVar;                                 // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_FollowBot1_ObjVar;                                   // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_FindBeeping_Bot02_ObjSetVar;                         // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_FindBeeping_Bot02_ObjVar;                            // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_RetrieveBot03Arm_ObjSetVar;                          // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_RetrieveBot03Arm_ObjVar;                             // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_FindAncestorBot_ObjSetVar;                           // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_FindAncestorBot_ObjVar;                              // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_RetrieveBot04Head_ObjSetVar;                         // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_RetrieveBot04Head_ObjVar;                            // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_InvestigateDisturbance_ObjSetVar;                    // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_InvestigateDisturbance_ObjVar;                       // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_SkullWellSequence_ObjVar;                            // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_FollowBot1_ObjSetVar;                                // 0x0658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_OpenInnerDoor1_ObjVar;                               // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_OpenEridianDoor_ObjVar;                              // 0x0668(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_ListenFirstSignal_ObjVar;                            // 0x0670(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_SpawnVarkids_ObjVar;                                 // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_ListenLostAlkonostLog_ObjVar;                        // 0x0680(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CompleteLoad_ReattachHead;                               // 0x0688(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
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
		void OnDialogSequenceFinished_33();
		void OnDialogSequenceFinished_32();
		void OnDialogSequenceFinished_31();
		void OnDialogSequenceFinished_30();
		void OnDialogSequenceFinished_29();
		void OnDialogSequenceFinished_28();
		void OnDialogSequenceFinished_27();
		void OnDialogSequenceFinished_26();
		void OnDialogSequenceFinished_25();
		void MCE_FindBeeping(class UObject* Context);
		void OBJ_FindBeeping(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_FindBeeping(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_HitPoop(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_HitPoop(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_DeactivateAlarm(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_DeactivateAlarm(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_HitPoop(class UObject* Context);
		void MCE_DeactivateAlarm(class UObject* Context);
		void SET_GotoCamp(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_GotoCamp(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_GotoCamp(class UObject* Context);
		void SET_AlignRunes(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void AlignLeftRune(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_LeftRuneAligned(class UObject* Context);
		void SET_FollowTunnel(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_FollowTunnel(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_FollowTunnel(class UObject* Context);
		void SET_LocateBot03(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_LocateBot03(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_DefeatDemonTink(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_DefeatDemonTink(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_InvestigateBotReading(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_InvestigateBotReading(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_InvestigateBotReading(class UObject* Context);
		void AlignCenterRune(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void AlignRightRune(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_CenterRuneAligned(class UObject* Context);
		void MCE_RightRuneAligned(class UObject* Context);
		void SET_ReturnToBot01(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_ReturnToBot01(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ReturnToBot01(class UObject* Context);
		void OBJ_FindPullEntranceSwitch(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_FindPullEntranceSwitch(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_FindPullEntranceSwitch(class UObject* Context);
		void SET_PickUpBotHead(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_PickUpBotHead(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_ReattachHead(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_ReattachHead(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ReattachHead(class UObject* Context);
		void OBJ_FollowBot1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_FollowBot1(class UObject* Context);
		void SET_FindBeeping_Bot02(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_FindBeeping_Bot02(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_FindBeeping_Bot02(class UObject* Context);
		void SET_RetrieveBot03Arm(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_RetrieveBot03Arm(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_FindAncestorBot(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_FindAncestorBot(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_FindAncestorBot(class UObject* Context);
		void SET_RetrieveBot04Head(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_RetrieveBot04Head(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_InvestigateDisturbance(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_InvestigateDisturbance(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_InvestigateDisturbance(class UObject* Context);
		void MCE_DefeatDemonTink(class UObject* Context);
		void OBJ_SkullWellSequence(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_SkullWellSequence(class UObject* Context);
		void MissionKickoff();
		void SET_FollowBot1(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_OpenInnerDoor1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_OpenInnerDoor1(class UObject* Context);
		void OBJ_OpenEridianDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_OpenEridianDoor(class UObject* Context);
		void OBJ_ListenFirstSignal(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ListenFirstSignal(class UObject* Context);
		void OBJ_SpawnVarkids(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_SpawnVarkids(class UObject* Context);
		void OBJ_ListenLostAlkonostLog(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_ListenLostAlkonostLog_Objective_PROXY();
		void OBJ_ListenLostAlkonostLog_Objective_PROXY_1();
		void OBJ_ListenLostAlkonostLog_Objective_PROXY_2();
		void OBJ_ListenLostAlkonostLog_Objective_PROXY_3();
		void OBJ_ListenLostAlkonostLog_Objective_PROXY_4();
		void OBJ_ListenLostAlkonostLog_Objective_PROXY_5();
		void OBJ_ListenLostAlkonostLog_Objective_PROXY_6();
		void OBJ_ListenLostAlkonostLog_Objective_PROXY_7();
		void OBJ_ListenLostAlkonostLog_Objective_PROXY_8();
		void OBJ_ListenLostAlkonostLog_Objective_PROXY_9();
		void OBJ_ListenLostAlkonostLog_Objective_PROXY_10();
		void OBJ_ListenLostAlkonostLog_Objective_PROXY_11();
		void OBJ_ListenLostAlkonostLog_Objective_PROXY_12();
		void ExecuteUbergraph_Mission_BridgeInTheDark(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
