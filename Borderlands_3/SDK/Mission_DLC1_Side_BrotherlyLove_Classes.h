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
	 * BlueprintGeneratedClass Mission_DLC1_Side_BrotherlyLove.Mission_DLC1_Side_BrotherlyLove_C
	 * Size -> 0x00D0 (FullSize[0x05E0] - InheritedSize[0x0510])
	 */
	class UMission_DLC1_Side_BrotherlyLove_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_KillFishInPool_ObjSetVar;                            // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillFishInPool_ObjVar;                               // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GetFish_ObjSetVar;                                   // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetFish_ObjVar;                                      // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PlaceFish_ObjSetVar;                                 // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlaceFish_ObjVar;                                    // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GetAlgorithm_ObjSetVar;                              // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetAlgorithm_ObjVar;                                 // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_AccessMainframe_ObjSetVar;                           // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_AccesMainframe_ObjVar;                               // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_EnterPassword_ObjSetVar;                             // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EnterPassword_ObjVar;                                // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_EnterPasswordFail_ObjVar;                        // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EnterPasswordAgain_ObjVar;                           // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_InstallAlgorithm_ObjSetVar;                          // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_InstallAlgorithm_ObjVar;                             // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillDebtCollector_ObjSetVar;                         // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillDebtCollector_ObjVar;                            // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_ReachedShadyGuy_ObjVar;                          // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_WaitForFishToRaise_ObjVar;                       // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoFishing_ObjSetVar;                                 // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoFishing_ObjVar;                                    // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_WitnessHeartfeltReconciliation_ObjSetVar;            // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_WitnessHeartfeltReconciliation_ObjVar;               // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_PeopleMoveToSandyCasino_ObjVar;                  // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnDialogSequenceFinished_27();
		void OnDialogSequenceFinished_26();
		void OnDialogSequenceFinished_25();
		void OnDialogSequenceFinished_24();
		void OnDialogSequenceFinished_23();
		void OnDialogSequenceFinished_22();
		void OnDialogSequenceFinished_21();
		void OnDialogSequenceFinished_20();
		void OnDialogSequenceFinished_19();
		void OnDialogSequenceFinished_18();
		void OnDialogSequenceFinished_17();
		void OnDialogSequenceFinished_16();
		void OnDialogSequenceFinished_15();
		void Set_KillFishInPool(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_KillFishInPool(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GetFish(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GetFish(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_PlaceFish(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_PlaceFish(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GetAlgorithm(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GetAlgorithm(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_AccessMainframe(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_AccesMainframe(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_EnterPassword(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_EnterPassword(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_EnterPasswordAgain(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_EnterPasswordFail(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_InstallAlgorithm(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_InstallAlgorithm(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_KillDebtCollector(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_KillDebtCollector(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_KilledFishInPool(class UObject* Context);
		void MCE_GotFish(class UObject* Context);
		void MCE_PlacedFish(class UObject* Context);
		void MCE_GotAlgorithm(class UObject* Context);
		void MCE_AccessedMainframe(class UObject* Context);
		void MCE_EnteredPassword(class UObject* Context);
		void MCE_EnteredPasswordAgain(class UObject* Context);
		void MCE_InstalledAlgorithm(class UObject* Context);
		void MCE_KilledDebtCollector(class UObject* Context);
		void Obj_INV_ReachedShadyGuy(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ReachedShadyGuy(class UObject* Context);
		void MCE_FishRaisedInPool(class UObject* Context);
		void Obj_INV_WaitForFishToRaise(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MissionKickoff();
		void Set_GoFishing(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GoFishing(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_CancelFishing(class UObject* Context);
		void Set_WitnessHeartfeltReconciliation(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_WitnessHeartfeltReconciliation(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_PeopleMoveToSandyCasino(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ExecuteUbergraph_Mission_DLC1_Side_BrotherlyLove(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
