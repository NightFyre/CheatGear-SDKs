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
	 * BlueprintGeneratedClass Mission_Season_01_Intro.Mission_Season_01_Intro_C
	 * Size -> 0x00F8 (FullSize[0x0608] - InheritedSize[0x0510])
	 */
	class UMission_Season_01_Intro_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_FindMaurice_ObjSetVar;                               // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindMaurice_ObjVar;                                  // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GetShards_ObjSetVar;                                 // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TalkToMauriceShards_ObjSetVar;                       // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TurnIn_ObjSetVar;                                    // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetShards_ObjVar;                                    // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToMauriceShards_ObjVar;                          // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TurnIn_ObjVar;                                       // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FirstShard_ObjSetVar;                                // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FirstShard_ObjVar;                                   // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToLeagueMap_ObjSetVar;                             // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindLeagueBoss_ObjSetVar;                            // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToLeagueMap_ObjVar;                                // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindLeagueBoss_ObjVar;                               // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PortalOpen_INV_ObjVar;                               // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_LeaveLeagueMap_ObjSetVar;                            // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_LeaveLeagueMap_ObjVar;                               // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Gate1_Inv_ObjVar;                                    // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Gate2_Inv_ObjVar;                                    // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Gate3_Inv_ObjVar;                                    // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_100PercentDropRate_Inv_ObjVar;                       // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_LeaveLeagueMapBC_ObjVar;                             // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TITLECARD_CaptainHaunt_ObjSetVar;                    // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TITLECARD_CaptainHaunt_ObjVar;                       // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillLeagueBoss_ObjSetVar;                            // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillLeagueBoss_ObjVar;                               // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_UseUberBoss_ObjVar;                                  // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Gate2_BC_ObjVar;                                     // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Gate1_BC_ObjVar;                                     // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Gate3_BC_ObjVar;                                     // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnDialogSequenceFinished_15();
		void OnDialogSequenceFinished_14();
		void OnDialogSequenceFinished_13();
		void OnDialogSequenceFinished_12();
		void OnDialogSequenceFinished_11();
		void OnDialogSequenceFinished_10();
		void OnDialogSequenceFinished_9();
		void MCE_Update_GoToLeagueMap(class UObject* Context);
		void MCE_Update_FindLeagueBoss(class UObject* Context);
		void MCE_Update_TurnIn(class UObject* Context);
		void Obj_PortalOpen_INV(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_PortalOpen(class UObject* Context);
		void Obj_PortalOpen_INV_Objective_PROXY();
		void Obj_FindLeagueBoss(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_GoToLeagueMap(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_FindLeagueBoss(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_GoToLeagueMap(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_LeaveLeagueMap(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_LeaveLeagueMap(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_PortalOpen_INV_Objective_PROXY_1();
		void MCE_Update_LeaveLeagueMap(class UObject* Context);
		void Obj_Gate1_Inv(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_Gate2_Inv(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_Gate3_Inv(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_Gate1(class UObject* Context);
		void MCE_Update_Gate2(class UObject* Context);
		void MCE_Update_Gate3(class UObject* Context);
		void Obj_100PercentDropRate_Inv(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_100PercentDropRate(class UObject* Context);
		void Obj_LeaveLeagueMapBC(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_LeaveLeagueMapBC(class UObject* Context);
		void Set_TITLECARD_CaptainHaunt(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TITLECARD_CaptainHaunt(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_GetFirstShard(class UObject* Context);
		void Obj_FirstShard(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_FirstShard(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_KillLeagueBoss(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_KillLeagueBoss(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_KillLeagueBoss(class UObject* Context);
		void Obj_UseUberBoss(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_UseUberBoss(class UObject* Context);
		void Obj_Gate2_BC(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_Gate2_BC(class UObject* Context);
		void MCE_Update_FindMaurice(class UObject* Context);
		void MCE_Update_GetShards(class UObject* Context);
		void MCE_Update_TalkToMauriceShards(class UObject* Context);
		void Obj_TurnIn(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_TalkToMauriceShards(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_MauriceGiveTake(class UObject* Context);
		void MissionKickoff();
		void Obj_GetShards(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_Gate1_BC(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_Gate3_BC(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_Gate3_BC(class UObject* Context);
		void MCE_Update_Gate1_BC(class UObject* Context);
		void Obj_PortalOpen_INV_Objective_PROXY_2();
		void Obj_PortalOpen_INV_Objective_PROXY_3();
		void Obj_FindMaurice(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_TurnIn(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_TalkToMauriceShards(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_GetShards(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_FindMaurice(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void ExecuteUbergraph_Mission_Season_01_Intro(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
