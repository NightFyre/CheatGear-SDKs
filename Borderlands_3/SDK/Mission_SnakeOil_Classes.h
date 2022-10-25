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
	 * BlueprintGeneratedClass Mission_SnakeOil.Mission_SnakeOil_C
	 * Size -> 0x0158 (FullSize[0x0668] - InheritedSize[0x0510])
	 */
	class UMission_SnakeOil_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_PickUpVial_ObjSetVar;                                // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PickUpVial_ObjVar;                                   // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GiveVial_ObjSetVar;                                  // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GiveVial_ObjVar;                                     // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_SabotageElixirRefinery_ObjSetVar;                    // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SabotageElixirReginery_ObjVar;                       // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillDocStanley_ObjSetVar;                            // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillDocStanley_ObjVar;                               // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ShootOilWell_ObjVar;                                 // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ShootOilWell_ObjSetVar;                              // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ReturnToPriscilla_ObjSetVar;                         // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReturnToPriscilla_ObjVar;                            // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DestroyElixirInventory_ObjVar;                       // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToBottlingPlant_ObjSetVar;                         // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PickUpTNT_ObjVar;                                    // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PickUpTNT_ObjSetVar;                                 // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_AttendMeeting_ObjVar;                                // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlaceTNT_ObjVar;                                     // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PlaceTNT_ObjSetVar;                                  // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ShootTNT_ObjSetVar;                                  // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FireExecutives_ObjSetVar;                            // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_AttendMeeting_ObjSetVar;                             // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Invs_DoorExplosion_ObjVar;                               // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FireExecutives_ObjVar;                               // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Invs_KahnIncinerated_ObjVar;                             // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INVS_SecondStockpile_ObjVar;                             // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Invs_ThirdStockpile_ObjVar;                              // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Invs_GoToRefinery_ObjVar;                                // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_IncreasePressure_ObjVar;                             // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ShootTNT_ObjVar;                                     // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToBottlingPlant_ObjVar;                            // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_DestroyInventory_ObjSetVar;                          // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DestroyRefineryMachines_ObjVar;                      // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Invs_FourthStockpile_ObjVar;                             // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 PreMissionVO;                                            // 0x0628(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MYDK[0x4];                                   // 0x0634(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjectiveSet*                                Set_DestroyPumps_ObjSetVar;                              // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DestroyPumps_ObjVar;                                 // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Invs_OilWell2_ObjVar;                                    // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Invs_OilWell3_ObjVar;                                    // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Invs_OilWell2Pressure_ObjVar;                            // 0x0658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Invs_Oil3Pressure_ObjVar;                                // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnDialogSequenceFinished_31();
		void OnDialogSequenceFinished_30();
		void OnDialogSequenceFinished_29();
		void OnDialogSequenceFinished_28();
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
		void Obj_PickUpTNT(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_PickUpTNT(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_DestroyElixirInventory(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GoToBottlingPlant(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_ShootTNT(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ShootTNT(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Advance_RetunToPriscilla(class UObject* Context);
		void Obj_ReturnToPriscilla(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ReturnToPriscilla(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_FireExecutives(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FireExecutives(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ShootOilWell(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Advance_ShootOilWell(class UObject* Context);
		void Obj_ShootOilWell(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_AttendMeeting(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_AttendMeeting(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_SabotageElixirRefinery(class UObject* Context);
		void MissionKickoff();
		void Set_PlaceTNT(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_PlaceTNT(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Invs_DoorExplosion(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_DoorExplosion(class UObject* Context);
		void Update_ShootTNT(class UObject* Context);
		void Update_DestroyElixirInventory(class UObject* Context);
		void Update_FireExecutives(class UObject* Context);
		void Update_AttendMeeting(class UObject* Context);
		void Update_PlaceTNT(class UObject* Context);
		void Update_PickUpTNT(class UObject* Context);
		void Obj_DestroyElixirInventory_Objective_PROXY();
		void Obj_DestroyElixirInventory_Objective_PROXY_1();
		void Invs_KahnIncinerated(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_KahnIncinerated(class UObject* Context);
		void INVS_SecondStockpile(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_SecondStockpile(class UObject* Context);
		void Invs_ThirdStockpile(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_ThirdStockpile(class UObject* Context);
		void Invs_GoToRefinery(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_GoToRefinery(class UObject* Context);
		void Obj_IncreasePressure(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_IncreasePressure(class UObject* Context);
		void Obj_GoToBottlingPlant(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_GoBottlingPlant(class UObject* Context);
		void Advance_PickUpVial(class UObject* Context);
		void Advance_GiveVial(class UObject* Context);
		void Obj_KillDocStanley(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_DestroyInventory(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_DestroyRefineryMachines(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Invs_FourthStockpile(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_FourthStockpile(class UObject* Context);
		void Obj_SabotageElixirReginery_Objective_PROXY_2();
		void Obj_DestroyPumps(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_DestroyPumps(class UObject* Context);
		void Set_KillDocStanley(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_SabotageElixirReginery(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_SabotageElixirRefinery(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GiveVial(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GiveVial(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_DestroyPumps(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_SabotageElixirReginery_Objective_PROXY_3();
		void Invs_OilWell2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Invs_OilWell3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_OilWell2(class UObject* Context);
		void Update_OilWell3(class UObject* Context);
		void Invs_OilWell2Pressure(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Invs_Oil3Pressure(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_OilWell3Pressure(class UObject* Context);
		void Update_OilWell2Pressure(class UObject* Context);
		void Obj_PickUpVial(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MRE_LeavingHinaVO1(class UObject* Context);
		void MRE_LeavingHinaVO2(class UObject* Context);
		void Set_PickUpVial(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_BeckonConvo(class UObject* Context);
		void ExecuteUbergraph_Mission_SnakeOil(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
