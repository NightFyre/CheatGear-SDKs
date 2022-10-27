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
	 * BlueprintGeneratedClass Mission_GearUp.Mission_GearUp_C
	 * Size -> 0x0068 (FullSize[0x0578] - InheritedSize[0x0510])
	 */
	class UMission_GearUp_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_RunStart_ObjSetVar;                                  // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_RunStart_ObjVar;                                     // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillBoss_ObjSetVar;                                  // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillBoss_ObjVar;                                     // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_CircleMoveStop_ObjSetVar;                            // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_StartCountdown_INV_ObjVar;                           // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_OpenAllWindows_ObjVar;                               // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_CircleMoveStop_AndBoss_ObjSetVar;                    // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CircleMove_2_ObjVar;                                 // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CircleStop_2_ObjVar;                                 // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillBoss_BC_ObjVar;                                  // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_BossFightStart_ObjVar;                               // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Obj_OpenAllWindows(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_OpenAllWindows(class UObject* Context);
		void MCE_VO_EnterMap(class UObject* Context);
		void MCE_VO_RunStart(class UObject* Context);
		void MCE_VO_CircleMoving(class UObject* Context);
		void MCE_VO_CircleStopping(class UObject* Context);
		void MCE_ResetMission(class UObject* Context);
		void Set_RunStart(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_RespawnPlayers(class UObject* Context);
		void MCE_VO_KilledBoss(class UObject* Context);
		void MCE_VO_APlayerDied(class UObject* Context);
		void MCE_VO_FinalCircleStop(class UObject* Context);
		void MCE_Update_StartCountdown_INV(class UObject* Context);
		void MCE_VO_EarlyBanter(class UObject* Context);
		void Obj_StartCountdown_INV(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_VO_SponsorBanter(class UObject* Context);
		void MCE_VO_Airdrop(class UObject* Context);
		void MCE_InterruptBanter(class UObject* Context);
		void MCE_VO_OutsideCircle(class UObject* Context);
		void MCE_AdvanceToMixedSet(class UObject* Context);
		void MCE_VO_LootTrap(class UObject* Context);
		void MCE_VO_RevenantAmbush(class UObject* Context);
		void MCE_FailGearUpRun(class UObject* Context);
		void MCE_RespawnStationUsed(class UObject* Context);
		void MCE_InterruptWelcomeBack(class UObject* Context);
		void MCE_PrizeDoorOpen(class UObject* Context);
		void Set_CircleMoveStop_AndBoss(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_CircleMove_3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_CircleStop_3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_CircleMove_3(class UObject* Context);
		void MCE_Update_CircleStop_3(class UObject* Context);
		void MCE_CompleteMission(class UObject* Context);
		void AdvanceToKillBossSet();
		void Obj_KillBoss_BC(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_KillBoss_BC(class UObject* Context);
		void Set_CircleMoveStop(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_BossFightStart_Objective_PROXY();
		void Obj_BossFightStart(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_BossFightStart(class UObject* Context);
		void Obj_BossFightStart_Objective_PROXY_1();
		void MCE_Audio_RevenantSpawn(class UObject* Context);
		void Obj_KillBoss_Objective_PROXY_2();
		void MCE_Update_KillBoss(class UObject* Context);
		void Obj_KillBoss(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_KillBoss(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_Update_RunStart(class UObject* Context);
		void MCE_ActivateMission_Remote(class UObject* Context);
		void MCE_AdvanceToKillBossSet(class UObject* Context);
		void Obj_RunStart(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_CircleMove_2_Objective_PROXY_3();
		void Obj_CircleStop_2_Objective_PROXY_4();
		void ExecuteUbergraph_Mission_GearUp(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
