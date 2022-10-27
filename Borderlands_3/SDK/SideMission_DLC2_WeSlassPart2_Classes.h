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
	 * BlueprintGeneratedClass SideMission_DLC2_WeSlassPart2.SideMission_DLC2_WeSlassPart2_C
	 * Size -> 0x0078 (FullSize[0x0588] - InheritedSize[0x0510])
	 */
	class USideMission_DLC2_WeSlassPart2_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                SET_FindBlueMushroom_ObjSetVar;                          // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindBlueMushroom_ObjVar;                             // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_FightEista_ObjSetVar;                                // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FightEista_ObjVar;                                   // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ReturnToEista_ObjSetVar;                             // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FollowEista_ObjSetVar;                               // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GiveMushroom_ObjSetVar;                              // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ReviveEista_ObjSetVar;                               // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReturnToEista_ObjVar;                                // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GiveMushroom_ObjVar;                                 // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FollowEista_ObjVar;                                  // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReviveEista_ObjVar;                                  // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToArmory_ObjSetVar;                                // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToArmory_ObjVar;                                   // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnDialogSequenceFinished_9();
		void OnDialogSequenceFinished_8();
		void OnDialogSequenceFinished_7();
		void OnDialogSequenceFinished_6();
		void SET_FightEista(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FightEista(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_EistaDowned(class UObject* Context);
		void Set_ReturnToEista(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_FollowEista(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_GiveMushroom(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_ReviveEista(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ReturnToEista(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ReturnToEista(class UObject* Context);
		void Obj_FollowEista(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_FollowEista(class UObject* Context);
		void Obj_GiveMushroom(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_GiveMushroom(class UObject* Context);
		void Obj_ReviveEista(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ReviveEista(class UObject* Context);
		void MCE_FindBlueMushroom(class UObject* Context);
		void MissionKickoff();
		void Obj_FindBlueMushroom(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_FindBlueMushroom(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_GoToArmory(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GoToArmory(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_GoToArmory(class UObject* Context);
		void ExecuteUbergraph_SideMission_DLC2_WeSlassPart2(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
