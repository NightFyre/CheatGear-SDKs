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
	 * BlueprintGeneratedClass Mission_Raid1.Mission_Raid1_C
	 * Size -> 0x0188 (FullSize[0x0698] - InheritedSize[0x0510])
	 */
	class UMission_Raid1_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_Section1_ObjSetVar;                                  // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Section1_Explore_ObjVar;                             // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Area1Boss_ObjSetVar;                                 // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Section1_Boss_ObjVar;                                // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Start_ObjVar;                                        // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Start_ObjSetVar;                                     // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Section2_ObjSetVar;                                  // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Section2Boss_ObjSetVar;                              // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Section2Boss_ObjVar;                                 // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Section2_Explore_ObjVar;                             // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_RaidCountdown_Inv_ObjVar;                            // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Area2_Door_Inv_ObjVar;                               // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GateDoor_Inv_ObjVar;                                 // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FacilityDoor_Inv_ObjVar;                             // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Sec1_Trigger_Hive_ObjVar;                            // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Sec1_Trigger_RatchSwitch_ObjVar;                     // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Sec1_Trigger_GateCheck_ObjVar;                       // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Sec1_Trigger_InsideFrontGate_ObjVar;                 // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Sec1_Trigger_InsideFrontGate2_ObjVar;                // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Sec2_Trigger_Rooftop1_ObjVar;                        // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Sec2_Trigger_Rooftop2_ObjVar;                        // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Sec2_Trigger_Rooftop3_ObjVar;                        // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Sec2_Trigger_Rooftop4_ObjVar;                        // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Sec2_Trigger_Rooftop5_ObjVar;                        // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Elevator_Inv_ObjVar;                                 // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Sec2_Trigger_Rooftop6_ObjVar;                        // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Sec2_Trigger_Rooftop7_ObjVar;                        // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Sec1_Trigger_MaliwanGateFailsafe_ObjVar;             // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Dropship1_Inv_ObjVar;                                // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Sec2_ForcefieldDoor1_ObjVar;                         // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Area2_ForcefieldExit_Inv_ObjVar;                     // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_LastRooftopCombat_ObjVar;                            // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_AlarmOn_ObjVar;                                      // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_AlarmOff_ObjVar;                                     // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_BridgeSeparates_ObjVar;                              // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FacilityDoorPrereq_ObjVar;                           // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TITLECARD_Behemoth_ObjVar;                           // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TITLECARD_Behemoth_ObjSetVar;                        // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_BehemothForcefield_ObjVar;                           // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_LastHeavies_ObjVar;                                  // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Speak_PushRatchBack_ObjVar;                          // 0x0658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Speak_VHSeen_ObjVar;                                 // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Speak_Overrun_ObjVar;                                // 0x0668(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Speak_ReleaseBabyBehemoth_ObjVar;                    // 0x0670(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Speak_ReleaseHounds_ObjVar;                          // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Bool_GunwolfSpawned;                                     // 0x0680(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DW0H[0x7];                                   // 0x0681(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjective*                                   Obj_Boss_Head_ObjVar;                                    // 0x0688(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Boss_Body_ObjVar;                                    // 0x0690(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnDialogSequenceFinished_3();
		void MCE_Update_Elevator(class UObject* Context);
		void MCE_FailMission_Section1(class UObject* Context);
		void MCE_FailMission_Section2(class UObject* Context);
		void MCE_Update_Start(class UObject* Context);
		void MCE_Update_Section1Explore(class UObject* Context);
		void MCE_Update_Section2Explore(class UObject* Context);
		void Obj_Area2_Door_Inv(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_Area2Door(class UObject* Context);
		void MCE_Update_GateDoor(class UObject* Context);
		void Obj_GateDoor_Inv(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_FacilityDoor_Inv(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_FacilityDoor(class UObject* Context);
		void Obj_Sec1_Trigger_Hive(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_Sec1_Trigger_Hive(class UObject* Context);
		void MCE_Update_Sec1_Trigger_RatchSwitch(class UObject* Context);
		void Obj_Sec1_Trigger_RatchSwitch(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_Sec1_Trigger_GateCheck(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_Sec1_Trigger_GateCheck(class UObject* Context);
		void Obj_Sec1_Trigger_InsideFrontGate(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_Sec1_Trigger_InsideFrontGate(class UObject* Context);
		void Obj_Sec1_Trigger_InsideFrontGate2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_Sec1_Trigger_InsideFrontGate2(class UObject* Context);
		void Obj_Sec2_Trigger_Rooftop1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_Sec2_Trigger_Rooftop1(class UObject* Context);
		void Obj_Sec2_Trigger_Rooftop2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_Sec2_Trigger_Rooftop2(class UObject* Context);
		void Obj_Sec2_Trigger_Rooftop3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_Sec2_Trigger_Rooftop3(class UObject* Context);
		void Obj_Sec2_Trigger_Rooftop4(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_Sec2_Trigger_Rooftop4(class UObject* Context);
		void Obj_Sec2_Trigger_Rooftop5(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_Sec2_Trigger_Rooftop5(class UObject* Context);
		void Obj_Elevator_Inv(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_Sec2_Trigger_Rooftop6(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_Sec2_Trigger_Rooftop7(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_Sec2_Trigger_Rooftop6(class UObject* Context);
		void MCE_Update_Sec2_Trigger_Rooftop7(class UObject* Context);
		void Obj_Sec1_Trigger_MaliwanGateFailsafe(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_Sec1_Trigger_MaliwanGateFailsafe(class UObject* Context);
		void Obj_Dropship1_Inv(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_Dropship1(class UObject* Context);
		void Obj_Sec2_ForcefieldDoor1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_Sec2_ForcefieldDoor1(class UObject* Context);
		void Obj_Area2_ForcefieldExit_Inv(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_Area2_ForcefieldExit(class UObject* Context);
		void Obj_LastRooftopCombat(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_LastRooftopCombat(class UObject* Context);
		void Obj_AlarmOn(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_AlarmOn(class UObject* Context);
		void Obj_AlarmOff(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_AlarmOff(class UObject* Context);
		void Obj_BridgeSeparates(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_BridgeSeparates(class UObject* Context);
		void Obj_FacilityDoorPrereq(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_FacilityDoorPrereq(class UObject* Context);
		void CE_ClearDoorPrereq();
		void MCE_Update_RaidCountdown(class UObject* Context);
		void Obj_RaidCountdown_Inv(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_Section2_Explore(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_Section2Boss(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_Section2Boss(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_Section2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_TITLECARD_Behemoth(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TITLECARD_Behemoth(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_BehemothForcefield(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_BehemothForcefield(class UObject* Context);
		void Obj_LastHeavies(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_LastHeavies(class UObject* Context);
		void MCE_RespawnPlayers(class UObject* Context);
		void MCE_ResetMission(class UObject* Context);
		void MCE_Speak_PushRatchBack(class UObject* Context);
		void Obj_Start(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_Start(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_Speak_VHSeen(class UObject* Context);
		void MCE_Speak_Overrun(class UObject* Context);
		void MCE_Speak_ReleaseBabyBehemoth(class UObject* Context);
		void MCE_Speak_ReleaseHounds(class UObject* Context);
		void Obj_Speak_PushRatchBack(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_Speak_VHSeen(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_Speak_Overrun(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_Speak_ReleaseBabyBehemoth(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_Speak_ReleaseHounds(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_Section1_Boss(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_Area1Boss(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_Boss_Head(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_Boss_Body(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_BossHead(class UObject* Context);
		void MCE_Update_BossBody(class UObject* Context);
		void MCE_Update_Section2Boss(class UObject* Context);
		void Obj_Section1_Explore(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_Section1(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void ExecuteUbergraph_Mission_Raid1(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
