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
	 * BlueprintGeneratedClass Mission_FreeHugs.Mission_FreeHugs_C
	 * Size -> 0x01E8 (FullSize[0x06F8] - InheritedSize[0x0510])
	 */
	class UMission_FreeHugs_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class FScriptMulticastDelegate                             ED_TalkedToHolder;                                       // 0x0518(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             ED_MoveToPrison;                                         // 0x0528(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             ED_DistractionCreated;                                   // 0x0538(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             ED_ToiletButtonPressed;                                  // 0x0548(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             ED_DoorOpened;                                           // 0x0558(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             ED_WeHaveDisguises;                                      // 0x0568(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UMissionObjectiveSet*                                SET_UnlockPrisonGate_ObjSetVar;                          // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_UnlockPrisonGate_ObjVar;                             // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_LootKeys_ObjSetVar;                                  // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_WakeHugs_ObjSetVar;                                  // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_WakeHugs_ObjVar;                                     // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_OpenCells_ObjSetVar;                                 // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_OpenCells_ObjVar;                                    // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_InvestigateCell_ObjVar;                              // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_FollowTunnel_ObjSetVar;                              // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_FollowTunnel_ObjVar;                                 // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SearchforKey_ObjVar;                                 // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_TakeKey_ObjSetVar;                                   // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_KeyCard_ObjVar;                                      // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ClearCombatRoom_ObjVar;                              // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_KillingPit_ObjSetVar;                                // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_FightGang_ObjVar;                                    // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_TalkwithHugs_ObjSetVar;                              // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_TalkwithHugs_ObjVar;                                 // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_KillHugs_ObjSetVar;                                  // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_KillHugs_ObjVar;                                     // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_KillGangLeader_ObjVar;                               // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_TurnInToNPC_ObjSetVar;                               // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_TalkWithLeftoverNPC_ObjVar;                          // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_SideWithGangLeader_ObjVar;                           // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_KillGangLeader_ObjSetVar;                            // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_OpenDoor_ObjVar;                                     // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_TalkwithVictim_ObjSetVar;                            // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ChatwithVictim_ObjVar;                               // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_TurnIntoVillain_ObjSetVar;                           // 0x0658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_VillainTurnIn_ObjVar;                                // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 NewVar_1;                                                // 0x0668(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_IUTB[0x4];                                   // 0x0674(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjective*                                   INVIS_Obj_FindDeadBodies_ObjVar;                         // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 VO_Ramsden_Start;                                        // 0x0680(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 VO_Ramsden_FaceToFace;                                   // 0x068C(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 VO_Ramsden_CheckOnHolder;                                // 0x0698(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 VO_Ramsden_FollowTunnel;                                 // 0x06A4(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 RamsdenConversationToOpenGate;                           // 0x06B0(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8LEO[0x4];                                   // 0x06BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjective*                                   Obj_FindCell_ObjVar;                                     // 0x06C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INVIS_Obj_GetToShankLand_ObjVar;                         // 0x06C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindHolder_ObjVar;                                   // 0x06D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 ChoiceChat;                                              // 0x06D8(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_RIKP[0x4];                                   // 0x06E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjective*                                   Obj_KillFingerBiters_ObjVar;                             // 0x06E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillShanks_ObjVar;                                   // 0x06F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
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
		void OnDialogSequenceFinished_34();
		void OnDialogSequenceFinished_33();
		void OnDialogSequenceFinished_32();
		void OnDialogSequenceFinished_31();
		void OnDialogSequenceFinished_30();
		void OnDialogSequenceFinished_29();
		void OnDialogSequenceFinished_28();
		void OnDialogSequenceFinished_27();
		void MCE_UsedKey(class UObject* Context);
		void SET_WakeHugs(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_WakeHugs(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_OpenCells(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_OpenCells(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MRE_CellDoorsOpened(class UObject* Context);
		void MRE_FoundFakeHugs(class UObject* Context);
		void OBJ_InvestigateCell(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MRE_SecretHoleFound(class UObject* Context);
		void SET_FollowTunnel(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_FollowTunnel(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MRE_TunnelExplored(class UObject* Context);
		void SET_LootKeys(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_UnlockPrisonGate(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_SearchforKey(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_TakeKey(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_KeyCard(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_ClearCombatRoom(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_KilledGuards(class UObject* Context);
		void SET_KillingPit(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_FightGang(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_GangDied(class UObject* Context);
		void SET_TalkwithHugs(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_TalkwithHugs(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_SideWithVictim(class UObject* Context);
		void SET_KillHugs(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_KillHugs(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_KillGangLeader(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_TurnInToNPC(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_TalkWithLeftoverNPC(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerKilledHugs(class UObject* Context);
		void MCE_PlayerKilledStanley(class UObject* Context);
		void MCE_TalkedWithAliveNPC(class UObject* Context);
		void OBJ_SideWithGangLeader(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_SidedWithGangLeader(class UObject* Context);
		void SET_KillGangLeader(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_OpenDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_GuardStationSwitch(class UObject* Context);
		void SET_UnlockPrisonGate(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_TalkwithVictim(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ChatwithVictim(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_VictimGivesSituation(class UObject* Context);
		void SET_TurnIntoVillain(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_VillainTurnIn(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerTurnedIntoVillain(class UObject* Context);
		void INVIS_Obj_GetToShankLand(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ShankLandFound_INVIS(class UObject* Context);
		void INVIS_Obj_FindDeadBodies(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_FoundDeadBodies(class UObject* Context);
		void Obj_FindCell(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_FoundCells(class UObject* Context);
		void Obj_FindHolder(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_FindHolder_Objective_PROXY();
		void Obj_FindHolder_Objective_PROXY_1();
		void Obj_FindHolder_Objective_PROXY_2();
		void MCE_SearchedForKey(class UObject* Context);
		void Obj_KillFingerBiters(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_FingerbitersDead(class UObject* Context);
		void Obj_KillShanks(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_FinalShanksDead(class UObject* Context);
		void MissionKickoff();
		void ExecuteUbergraph_Mission_FreeHugs(int32_t EntryPoint);
		void ED_WeHaveDisguises__DelegateSignature();
		void ED_DoorOpened__DelegateSignature();
		void ED_ToiletButtonPressed__DelegateSignature();
		void ED_DistractionCreated__DelegateSignature();
		void ED_MoveToPrison__DelegateSignature();
		void ED_TalkedToHolder__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
