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
	 * BlueprintGeneratedClass Mission_TortureTruck.Mission_TortureTruck_C
	 * Size -> 0x0074 (FullSize[0x0584] - InheritedSize[0x0510])
	 */
	class UMission_TortureTruck_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_PreMission_ObjSetVar;                                // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PreMission_ObjVar;                                   // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindTheTruck_ObjSetVar;                              // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindTheTruck_ObjVar;                                 // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TurnIn_ObjSetVar;                                    // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillTheTruck_ObjVar;                                 // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TurnIn_ObjVar;                                       // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillBloodflapGang_ObjSetVar;                         // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillBloodflapGang1_ObjVar;                           // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillBloodflapGang2_ObjVar;                           // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillBloodflapGang_Counter_ObjVar;                    // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GangWaypoint1_ObjVar;                                // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBj_GangWaypoint2_ObjVar;                                // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ObjCount_BloodflapGangKilled;                            // 0x0580(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnDialogSequenceFinished_9();
		void OnDialogSequenceFinished_8();
		void OnDialogSequenceFinished_7();
		void OnDialogSequenceFinished_6();
		void MCE_GuyGetsRunOver(class UObject* Context);
		void Set_KillBloodflapGang(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_KillBloodflapGang1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_KillBloodflapGang2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_KillBloodflapGang1(class UObject* Context);
		void MCE_Update_KillBloodflapGang2(class UObject* Context);
		void MCE_Update_TurnIn(class UObject* Context);
		void Obj_TurnIn(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_KillTheTruck(class UObject* Context);
		void Obj_KillBloodflapGang_Counter(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_KillBloodflapGangCounter(class UObject* Context);
		void Obj_KillTheTruck(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_TurnIn(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GangWaypoint1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBj_GangWaypoint2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_GangWaypoint1(class UObject* Context);
		void MCE_Update_GangWaypoint2(class UObject* Context);
		void MCE_Update_FindTheTruck(class UObject* Context);
		void Obj_FindTheTruck(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_FindTheTruck(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_Update_PreMission(class UObject* Context);
		void Set_PreMission(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_PreMission(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ExecuteUbergraph_Mission_TortureTruck(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
