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
	 * BlueprintGeneratedClass SideMission_DLC2_ReturnOfMaxSky.SideMission_DLC2_ReturnOfMaxSky_C
	 * Size -> 0x0070 (FullSize[0x0580] - InheritedSize[0x0510])
	 */
	class USideMission_DLC2_ReturnOfMaxSky_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_HitButton_1_ObjSetVar;                               // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_HitButton_1_ObjVar;                                  // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_WaitForCountdown_ObjSetVar;                          // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_WaitForCountdown_ObjVar;                             // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_HitButton_2_ObjSetVar;                               // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_HitButton_2_ObjVar;                                  // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ProtectMax_ObjSetVar;                                // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ProtectMax_ObjVar;                                   // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ShootTank_ObjSetVar;                                 // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ShootTank_ObjVar;                                    // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_HitButton_2_ObjVar;                              // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_HitButton_1_Cancel_ObjVar;                       // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UGbxCondition*                                       Is_GreatEscape1_Completed;                               // 0x0578(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void OnDialogSequenceFinished_23();
		void OnDialogSequenceFinished_22();
		void OnDialogSequenceFinished_21();
		void OnDialogSequenceFinished_20();
		void OnDialogSequenceFinished_19();
		void OnDialogSequenceFinished_18();
		void OnDialogSequenceFinished_17();
		void OnDialogSequenceFinished_16();
		void OnDialogSequenceFinished_15();
		void OnDialogSequenceFinished_14();
		void OnDialogSequenceFinished_13();
		void Set_WaitForCountdown(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_WaitForCountdown(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_HitButton_3(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_HitButton_3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ProtectMax(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ProtectMax(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ShootTank(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ShootTank(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_HitButton_3(class UObject* Context);
		void Obj_INV_HitButton_3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ProtectMax(class UObject* Context);
		void MCE_ShootTank(class UObject* Context);
		void MissionKickoff();
		void Obj_INV_HitButton_1_Cancel(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_CancelButton1(class UObject* Context);
		void Obj_HitButton_2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_HitButton_2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void ExecuteUbergraph_SideMission_DLC2_ReturnOfMaxSky(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
