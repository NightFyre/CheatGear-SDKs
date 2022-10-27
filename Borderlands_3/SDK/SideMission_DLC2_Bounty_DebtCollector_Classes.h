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
	 * BlueprintGeneratedClass SideMission_DLC2_Bounty_DebtCollector.SideMission_DLC2_Bounty_DebtCollector_C
	 * Size -> 0x0040 (FullSize[0x0550] - InheritedSize[0x0510])
	 */
	class USideMission_DLC2_Bounty_DebtCollector_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_FindGideon_ObjSetVar;                                // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindGideon_ObjVar;                                   // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_DestroyBottles_ObjSetVar;                            // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DestroyBottles_ObjVar;                               // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillGideon_ObjSetVar;                                // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillGideon_ObjVar;                                   // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_DestroyBottles_ObjVar;                           // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnDialogSequenceFinished_7();
		void OnDialogSequenceFinished_6();
		void OnDialogSequenceFinished_5();
		void MCE_FindGideon(class UObject* Context);
		void Set_DestroyBottles(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_DestroyBottles(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_DestroyBottles(class UObject* Context);
		void MissionKickoff();
		void Obj_FindGideon(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_KillGideon(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_KillGideon(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_KillGideon(class UObject* Context);
		void Set_FindGideon(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_INV_DestroyBottles(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_DestroyBottles(class UObject* Context);
		void ExecuteUbergraph_SideMission_DLC2_Bounty_DebtCollector(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
