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
	 * BlueprintGeneratedClass Mission_BetterTimes.Mission_BetterTimes_C
	 * Size -> 0x0140 (FullSize[0x0650] - InheritedSize[0x0510])
	 */
	class UMission_BetterTimes_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_LaunchRocket_ObjSetVar;                              // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_LaunchRocket_ObjVar;                                 // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GetRocketParts_ObjSetVar;                            // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetRocketParts_ObjVar;                               // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToOldBase_1_ObjSetVar;                             // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToOldBase_ObjVar;                                  // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillCreature_ObjVar;                                 // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ClearOldBase_ObjVar;                                 // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_AssembleRocket_1_ObjSetVar;                          // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_AssembleRocket_ObjVar;                               // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PlaceEchoLogs_ObjSetVar;                             // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlaceEchoLogs_ObjVar;                                // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetEchoLogs_ObjVar;                                  // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GetEchoLogs_1_ObjSetVar;                             // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillCreature_ObjSetVar;                              // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GetEchoLogs_3_ObjSetVar;                             // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_GetEchoLog_Second_ObjVar;                        // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ShootEchoLog_Second_ObjVar;                          // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ShootEchoLog_Second_ObjSetVar;                       // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_PlaceDetonator_ObjSetVar;                            // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlaceDetonator_ObjVar;                               // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GetDetonator_ObjSetVar;                              // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetDetonator_ObjVar;                                 // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    OldBaseSpawnerClearedNum;                                // 0x05D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_1G31[0x4];                                   // 0x05D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjectiveSet*                                Set_GetEchoLog_Second_ObjSetVar;                         // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_GetEchoLog_First_ObjVar;                         // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_AssembleRocket_Piece1_ObjVar;                    // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_AssembleRocket_2_ObjSetVar;                          // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_AssembleRocket_3_ObjSetVar;                          // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_AssembleRocket_Piece2_ObjVar;                    // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_AssembleRocket_Piece3_ObjVar;                    // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_GetEchoLog_Third_ObjVar;                         // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ClearOldBase_ObjSetVar;                              // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_ClearOldBase_BC1_ObjVar;                         // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_ClearOldBase_BC2_ObjVar;                         // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToBeach_ObjVar;                                    // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_WhereIsThirdEchoLog_ObjVar;                      // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TalkToSparrow_ObjSetVar;                             // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToSparrow_ObjVar;                                // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

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
		void Set_GetEchoLogs_2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_KillCreature(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_GetEchoLogs_4(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_OnSpawnCreature(class UObject* Context);
		void MCE_PlacedEcho(class UObject* Context);
		void Set_PlaceEchoLogs(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_GotEchoLog(class UObject* Context);
		void MCE_AssembledAnyRocketPart(class UObject* Context);
		void Obj_INV_GetEchoLog_Second(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_GotEchoLog_Second(class UObject* Context);
		void MCE_OnCreatureKilled(class UObject* Context);
		void Obj_ShootEchoLog_Second(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_GetEchoLogs_Objective_PROXY();
		void Obj_GetEchoLogs_Objective_PROXY_1();
		void Obj_GetEchoLogs_Objective_PROXY_2();
		void Set_ShootEchoLog_Second(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_ShootedEchoLog_Second(class UObject* Context);
		void SET_PlaceDetonator(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_PlaceDetonator(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlacedDetonator(class UObject* Context);
		void Obj_GetEchoLogs(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_PlaceEchoLogs(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GetDetonator(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GetDetonator(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ClearedOldBase(class UObject* Context);
		void Set_GetEchoLog_Second(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GetEchoLogs_Objective_PROXY_3();
		void Obj_INV_GetEchoLog_First(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_GotEchoLog_First(class UObject* Context);
		void Set_AssembleRocket_3(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_AssembleRocket_4(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_INV_AssembleRocket_Piece1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_AssembleRocket_Piece2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_AssembleRocket_Objective_PROXY_4();
		void Obj_INV_AssembleRocket_Piece3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_AssembleRocket_Objective_PROXY_5();
		void MCE_AssembledRocketPart_2(class UObject* Context);
		void MCE_AssembledRocketPart_3(class UObject* Context);
		void MCE_AssembledRocketPart_4(class UObject* Context);
		void Obj_INV_GetEchoLog_Third(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ClearOldBase(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_AssembleRocket(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_ClearOldBase_BC1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_ClearOldBase_BC2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ClearedOldBase_BC1(class UObject* Context);
		void MCE_ClearedOldBase_BC2(class UObject* Context);
		void MissionKickoff();
		void Set_AssembleRocket_2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ClearOldBase(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_GoToBeach(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_KillCreature(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_WentToOldBase(class UObject* Context);
		void MCE_WentToBeach(class UObject* Context);
		void Obj_INV_WhereIsThirdEchoLog(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_WhereIsThirdEchoLog(class UObject* Context);
		void Set_TalkToSparrow(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TalkToSparrow(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_GoToOldBase(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_TalkedToSparrow(class UObject* Context);
		void MCE_MissionComplete(class UObject* Context);
		void MCE_RocketExploded1(class UObject* Context);
		void Set_GoToOldBase_2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void CustomEvent_OnThirdEchoLog_Finished();
		void CustomEvent_OnSecondEchoLog_Finished();
		void CustomEvent_OnFirstEchoLog_Finished();
		void Obj_GetRocketParts(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GetRocketParts(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_LaunchedRocket(class UObject* Context);
		void Set_LaunchRocket(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_LaunchRocket(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ExecuteUbergraph_Mission_BetterTimes(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
