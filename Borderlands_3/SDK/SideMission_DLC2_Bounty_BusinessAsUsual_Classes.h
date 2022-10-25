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
	 * BlueprintGeneratedClass SideMission_DLC2_Bounty_BusinessAsUsual.SideMission_DLC2_Bounty_BusinessAsUsual_C
	 * Size -> 0x0078 (FullSize[0x0588] - InheritedSize[0x0510])
	 */
	class USideMission_DLC2_Bounty_BusinessAsUsual_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                SET_FindProcurerHouse_ObjSetVar;                         // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindProcurerHouse_ObjVar;                            // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_TurnOffValves_ObjSetVar;                             // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TurnValves_ObjVar;                                   // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_ActivateSwitch_ObjSetVar;                            // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ActivateSwitch_ObjVar;                               // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillProcurer_ObjSetVar;                              // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PickUpWine_ObjVar;                                   // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillProcurer_ObjVar;                                 // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_PlaceWine_ObjSetVar;                                 // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlaceWine_ObjVar;                                    // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Inv_Obj_Valve1_ObjVar;                                   // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Inv_Obj_Valve2_ObjVar;                                   // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_PickUpWine_ObjSetVar;                                // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnDialogSequenceFinished_11();
		void OnDialogSequenceFinished_10();
		void OnDialogSequenceFinished_9();
		void OnDialogSequenceFinished_8();
		void OnDialogSequenceFinished_7();
		void Obj_TurnValves(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MissionKickoff();
		void Obj_FindProcurerHouse(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_TurnOffValves(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_ActivateSwitch(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ActivateSwitch(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_SwitchActivated(class UObject* Context);
		void MCE_ProcurerHouseFound(class UObject* Context);
		void Set_KillProcurer(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_PickUpWine(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_WinePickedUp(class UObject* Context);
		void SET_PlaceWine(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_KillProcurer(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ProcurerKilled(class UObject* Context);
		void Obj_PlaceWine(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_WinePlaced(class UObject* Context);
		void Inv_Obj_Valve1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Inv_Obj_Valve2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ValveTurned1(class UObject* Context);
		void MCE_ValveTurned2(class UObject* Context);
		void SET_PickUpWine(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_FindProcurerHouse(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void ExecuteUbergraph_SideMission_DLC2_Bounty_BusinessAsUsual(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
