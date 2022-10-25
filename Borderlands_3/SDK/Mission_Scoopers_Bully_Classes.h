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
	 * BlueprintGeneratedClass Mission_Scoopers_Bully.Mission_Scoopers_Bully_C
	 * Size -> 0x0078 (FullSize[0x0588] - InheritedSize[0x0510])
	 */
	class UMission_Scoopers_Bully_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_Bullystart_ObjSetVar;                                // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillBully_ObjVar;                                    // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 Conversation;                                            // 0x0528(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_S034[0x4];                                   // 0x0534(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjective*                                   Obj_SawRakkspit_ObjVar;                                  // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_OpenTrapDoor_ObjSetVar;                              // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_OpenTrapDoor_ObjVar;                                 // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindRedChest_ObjSetVar;                              // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindRedChest_ObjVar;                                 // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PipeIsFlowing_ObjVar;                                // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SwitchIsOn_ObjVar;                                   // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_OpenTrapDoorInitial_ObjSetVar;                       // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TimedToAdvanceToDirectHelp_ObjVar;                   // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ShootDumptrucksAss_ObjVar;                           // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnDialogSequenceFinished_9();
		void OnDialogSequenceFinished_8();
		void OnDialogSequenceFinished_7();
		void OnDialogSequenceFinished_6();
		void MCE_BullyKilled(class UObject* Context);
		void MCE_SawRakkspitr(class UObject* Context);
		void Obj_SawRakkspit(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MissionKickoff();
		void Obj_PipeIsFlowing(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_OpenTrapDoor(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Advance_OpenTrapDoor(class UObject* Context);
		void Obj_OpenTrapDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_FindRedChest(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Advance_FindRedChest(class UObject* Context);
		void Set_FindRedChest(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Advance_PipeIsFlowing(class UObject* Context);
		void Obj_SwitchIsOn(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Advance_SwitchIsOn(class UObject* Context);
		void Set_Bullystart(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_OpenTrapDoorInitial(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_OpenTrapDoor_Objective_PROXY();
		void Obj_KillBully(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_TimedToAdvanceToDirectHelp(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Advance_TimedToAdvanceToDirectHelp(class UObject* Context);
		void Obj_ShootDumptrucksAss(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Advance_ShootDumpTrucksAss(class UObject* Context);
		void CE_EllieSpellsItOut();
		void ExecuteUbergraph_Mission_Scoopers_Bully(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
