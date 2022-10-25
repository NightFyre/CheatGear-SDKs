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
	 * BlueprintGeneratedClass Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C
	 * Size -> 0x0108 (FullSize[0x0618] - InheritedSize[0x0510])
	 */
	class UMission_RaidOnMaliwan_C : public UOakMissionRaid
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_Area1_ObjSetVar;                                     // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Area1_KillMiniboss_ObjVar;                           // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ProceedToArea2_ObjVar;                               // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Area2_ObjSetVar;                                     // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Area2_KillMiniboss_ObjVar;                           // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ProceedToArea3_ObjVar;                               // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Area3_ObjSetVar;                                     // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Area3_KillMiniboss_ObjVar;                           // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ProceedToArea4_ObjVar;                               // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Area4_ObjSetVar;                                     // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Area4_KillBoss_ObjVar;                               // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Area0_ObjSetVar;                                     // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GearUp_ObjVar;                                       // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ProceedToArea1_ObjVar;                               // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PostMission_ObjSetVar;                               // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PostMission_ObjVar;                                  // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Area1BC_Inv_ObjVar;                                  // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Area1Boss_ObjSetVar;                                 // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Area2Boss_ObjSetVar;                                 // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Area2BC_Inv_ObjVar;                                  // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Area3BC_Inv_ObjVar;                                  // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Area3Boss_ObjSetVar;                                 // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Area4Boss_ObjSetVar;                                 // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Area4BC_ObjVar;                                      // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Area1_SpecialMaliwanDoor_Inv_ObjVar;                 // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Area1BC2_Inv_ObjVar;                                 // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Area2BC2_Inv_ObjVar;                                 // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Area2BC3_Inv_ObjVar;                                 // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Area2BossDelay_ObjSetVar;                            // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Area2BossDelay_ObjVar;                               // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_RaidCountdown_Inv_ObjVar;                            // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Area4BC2_ObjVar;                                     // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Set_Area4(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_Area4_KillBoss(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_Area4_KillBoss(class UObject* Context);
		void MCE_Dialog_Area4_KilledBoss(class UObject* Context);
		void MCE_Dialog_ProceededToArea4(class UObject* Context);
		void MCE_Dialog_Area3_KilledMiniboss(class UObject* Context);
		void MCE_Update_ProceedToArea4(class UObject* Context);
		void Obj_ProceedToArea4(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_Area0(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GearUp(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_ProceedToArea1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_GearUp(class UObject* Context);
		void MCE_Update_ProceedToArea1(class UObject* Context);
		void MCE_Dialog_StartingDialog(class UObject* Context);
		void MCE_Dialog_ProceededToArea1(class UObject* Context);
		void MCE_Update_Area3_KillMiniboss(class UObject* Context);
		void Set_Area3(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_Area3_KillMiniboss(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_PostMission(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_PostMission(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_PostMission(class UObject* Context);
		void MCE_ClearArea3(class UObject* Context);
		void MCE_ClearArea4(class UObject* Context);
		void MCE_Elevator1(class UObject* Context);
		void Obj_ProceedToArea1_Objective_PROXY();
		void Obj_Area1BC_Inv(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_Area1BC(class UObject* Context);
		void MCE_Dialog_ProceededToArea2(class UObject* Context);
		void MCE_Dialog_ProceededToArea3(class UObject* Context);
		void Set_Area1Boss(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_Dialog_Area2_KilledMiniboss(class UObject* Context);
		void MCE_Update_ProceedToArea3(class UObject* Context);
		void Obj_ProceedToArea3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_Area2Boss(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_Update_Area2BC(class UObject* Context);
		void Obj_Area2BC_Inv(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_Area3BC_Inv(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_Area3BC(class UObject* Context);
		void MCE_Update_Area2_KillMiniboss(class UObject* Context);
		void Set_Area2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_Area2_KillMiniboss(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_Area3Boss(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_Dialog_Area1_KilledMiniboss(class UObject* Context);
		void MCE_Update_ProceedToArea2(class UObject* Context);
		void Obj_ProceedToArea2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_Area4Boss(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_Area4BC(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_Area4BC(class UObject* Context);
		void Obj_Area1_SpecialMaliwanDoor_Inv(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_Area1_SpecialMaliwanDoor(class UObject* Context);
		void Obj_Area1BC2_Inv(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_Area1BC2(class UObject* Context);
		void Obj_Area2BC2_Inv(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_Area2BC2(class UObject* Context);
		void Obj_Area2BC3_Inv(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_Area2BC3(class UObject* Context);
		void Set_Area2BossDelay(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_Area2BossDelay(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_Area2BossDelay(class UObject* Context);
		void MCE_FailMission_Area1(class UObject* Context);
		void MCE_Update_Area1_KillMiniboss(class UObject* Context);
		void Obj_RaidCountdown_Inv(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_RaidCountdown(class UObject* Context);
		void MCE_FailMission_Area2(class UObject* Context);
		void Set_Area1(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_Area1_KillMiniboss(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_FailMission_Area3(class UObject* Context);
		void MCE_FailMission_Area4(class UObject* Context);
		void MCE_Area2DoorOpened(class UObject* Context);
		void Obj_Area4BC2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_Area4BC2(class UObject* Context);
		void ExecuteUbergraph_Mission_RaidOnMaliwan(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
