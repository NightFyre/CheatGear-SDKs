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
	 * BlueprintGeneratedClass Mission_GrowingPains.Mission_GrowingPains_C
	 * Size -> 0x0230 (FullSize[0x0740] - InheritedSize[0x0510])
	 */
	class UMission_GrowingPains_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                SET_ExamineWaterPurifier_ObjSetVar;                      // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ExamineWaterPurifier_ObjVar;                         // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_GoToTannisLab_ObjSetVar;                             // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToTannisLab_ObjVar;                                // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_OpenStorageDoor1_ObjSetVar;                          // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_OpenStorageDoor1_ObjVar;                             // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_FindPortrait_ObjSetVar;                              // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_MovePicture_ObjSetVar;                               // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MovePortrait_ObjVar;                                 // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_TouchToyBear_ObjSetVar;                              // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TouchToyBear_ObjVar;                                 // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_FindVendingMachine_ObjSetVar;                        // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindVendingMachine_ObjVar;                           // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_TouchVendingMachine_ObjSetVar;                       // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TouchVendingMachine_ObjVar;                          // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindTurret_ObjVar;                                   // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_TouchTurret_ObjSetVar;                               // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TouchTurret_ObjVar;                                  // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_DestroyTurret_ObjSetVar;                             // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DestroyTurret_ObjVar;                                // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_FindSatellite_ObjSetVar;                             // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindSatellite_ObjVar;                                // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_GoBackToCityHub_ObjSetVar;                           // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReturnToCityHub_ObjVar;                              // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_TouchWaterPurifier_ObjSetVar;                        // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TouchWaterPurifier_ObjVar;                           // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_TurnInToVaughn_ObjSetVar;                            // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TurnInToVaughn_ObjVar;                               // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindPortrait_ObjVar;                                 // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_TouchSatellite_ObjSetVar;                            // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TouchSatellite_ObjVar;                               // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_GoToCityHub_ObjSetVar;                               // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToCityHub_ObjVar;                                  // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_FindToyBear_ObjSetVar;                               // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindToyBear_ObjVar;                                  // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_OpenStorageDoor2_ObjSetVar;                          // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_OpenStorageDoor2_ObjVar;                             // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_OpenVendingDoor_INVS_ObjVar;                         // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_TakeFuse_ObjSetVar;                                  // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TakeFuse_INVS_ObjVar;                                // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_PlaceFuse_ObjSetVar;                                 // 0x0658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlaceFuse_INVS_ObjVar;                               // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_OpenTurretDoor_ObjSetVar;                            // 0x0668(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_OpenTurretDoor_INVS_ObjVar;                          // 0x0670(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_OpenRafters_ObjSetVar;                               // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_OpenRafters_INVS_ObjVar;                             // 0x0680(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_OpenTopDoor_INVS_ObjVar;                             // 0x0688(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_PowerGenerator_ObjSetVar;                            // 0x0690(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PowerGenerator_INVS_ObjVar;                          // 0x0698(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Breadcrumb_Generator1_ObjVar;                        // 0x06A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Breadcrumb_Generator2_ObjVar;                        // 0x06A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Breadcrumb_Generator3_ObjVar;                        // 0x06B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Breadcrumb_Generator4_ObjVar;                        // 0x06B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   BC_GoToLab1_ObjVar;                                      // 0x06C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   BC_GoToLab2_ObjVar;                                      // 0x06C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   BC_GoToLab3_ObjVar;                                      // 0x06D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   BC_GoToLab4_ObjVar;                                      // 0x06D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   BC_GoToLab5_ObjVar;                                      // 0x06E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   BC_GoToLab6_ObjVar;                                      // 0x06E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   BC_GoToLab7_ObjVar;                                      // 0x06F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   BC_GoToLab8_ObjVar;                                      // 0x06F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   BC_GoToLab9_ObjVar;                                      // 0x0700(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   BC_GoToLab10_ObjVar;                                     // 0x0708(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   BC_GoToLab11_ObjVar;                                     // 0x0710(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   BC_GoToLab12_ObjVar;                                     // 0x0718(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   BC_GoToLab13_ObjVar;                                     // 0x0720(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   BC_GoToLab14_ObjVar;                                     // 0x0728(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   BC_GoToLab15_ObjVar;                                     // 0x0730(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   BC_GoToLab16_ObjVar;                                     // 0x0738(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnDialogSequenceFinished_95();
		void OnDialogSequenceFinished_94();
		void OnDialogSequenceFinished_93();
		void OnDialogSequenceFinished_92();
		void OnDialogSequenceFinished_91();
		void OnDialogSequenceFinished_90();
		void OnDialogSequenceFinished_89();
		void OnDialogSequenceFinished_88();
		void OnDialogSequenceFinished_87();
		void OnDialogSequenceFinished_86();
		void OnDialogSequenceFinished_85();
		void OnDialogSequenceFinished_84();
		void OnDialogSequenceFinished_83();
		void OnDialogSequenceFinished_82();
		void OnDialogSequenceFinished_81();
		void OnDialogSequenceFinished_80();
		void OnDialogSequenceFinished_79();
		void OnDialogSequenceFinished_78();
		void OnDialogSequenceFinished_77();
		void OnDialogSequenceFinished_76();
		void OnDialogSequenceFinished_75();
		void OnDialogSequenceFinished_74();
		void OnDialogSequenceFinished_73();
		void OnDialogSequenceFinished_72();
		void OnDialogSequenceFinished_71();
		void OnDialogSequenceFinished_70();
		void OnDialogSequenceFinished_69();
		void OnDialogSequenceFinished_68();
		void OnDialogSequenceFinished_67();
		void OnDialogSequenceFinished_66();
		void OnDialogSequenceFinished_65();
		void OnDialogSequenceFinished_64();
		void OnDialogSequenceFinished_63();
		void OnDialogSequenceFinished_62();
		void OnDialogSequenceFinished_61();
		void OnDialogSequenceFinished_60();
		void OnDialogSequenceFinished_59();
		void OnDialogSequenceFinished_58();
		void OnDialogSequenceFinished_57();
		void OnDialogSequenceFinished_56();
		void OnDialogSequenceFinished_55();
		void OnDialogSequenceFinished_54();
		void OnDialogSequenceFinished_53();
		void OnDialogSequenceFinished_52();
		void OnDialogSequenceFinished_51();
		void OnDialogSequenceFinished_50();
		void OnDialogSequenceFinished_49();
		void UPDATE_TouchVendingMachine(class UObject* Context);
		void Obj_FindTurret(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_TouchTurret(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void UPDATE_TouchTurret(class UObject* Context);
		void Obj_TouchTurret(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_DestroyTurret(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_DestroyTurret(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_FindSatellite(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindSatellite(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_FindSatellite(class UObject* Context);
		void SET_GoBackToCityHub(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ReturnToCityHub(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_ReturnToCityHub(class UObject* Context);
		void SET_TouchWaterPurifier(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TouchWaterPurifier(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_TouchWaterPurifier(class UObject* Context);
		void SET_TurnInToVaughn(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TurnInToVaughn(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_TurnedInToVaughn(class UObject* Context);
		void Obj_TouchVendingMachine(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_TouchVendingMachine(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void UPDATE_FindPortrait(class UObject* Context);
		void UPDATE_FindVendingMachine(class UObject* Context);
		void Obj_FindPortrait(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_TouchSatellite(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TouchSatellite(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_TouchSatellite(class UObject* Context);
		void SET_GoToCityHub(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GoToCityHub(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_GoToCityHub(class UObject* Context);
		void Obj_FindVendingMachine(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_FindToyBear(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindToyBear(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_FindToyBear(class UObject* Context);
		void SET_FindVendingMachine(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_OpenStorageDoor2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_OpenStorageDoor2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_OpenStorageDoor2(class UObject* Context);
		void Obj_OpenVendingDoor_INVS(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_OpenVendingDoor(class UObject* Context);
		void SET_TakeFuse(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TakeFuse_INVS(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_TakeFuse(class UObject* Context);
		void SET_PlaceFuse(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_PlaceFuse_INVS(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_PlaceFuse(class UObject* Context);
		void Obj_FindTurret_Objective_PROXY();
		void Obj_FindTurret_Objective_PROXY_1();
		void SET_OpenTurretDoor(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_OpenTurretDoor_INVS(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_OpenTurretDoor(class UObject* Context);
		void Set_OpenRafters(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_OpenRafters_INVS(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_FindSatellite_Objective_PROXY_2();
		void UPDATE_OpenRafters(class UObject* Context);
		void Obj_OpenTopDoor_INVS(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_OpenTopDoor(class UObject* Context);
		void Obj_OpenTopDoor_INVS_Objective_PROXY_3();
		void UPDATE_TouchToyBear(class UObject* Context);
		void SET_PowerGenerator(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_PowerGenerator_INVS(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_PowerGenerator(class UObject* Context);
		void Obj_FindTurret_Objective_PROXY_4();
		void Obj_Breadcrumb_Generator1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_Breadcrumb_Generator1(class UObject* Context);
		void Obj_Breadcrumb_Generator2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_Breadcrumb_Generator2(class UObject* Context);
		void Obj_Breadcrumb_Generator3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_Breadcrumb_Generator4(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_Breadcrumb_Generator3(class UObject* Context);
		void UPDATE_Breadcrumb_Generator4(class UObject* Context);
		void Obj_TouchToyBear(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_TouchToyBear(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void UPDATE_MovePortrait(class UObject* Context);
		void Obj_OpenTopDoor_INVS_Objective_PROXY_5();
		void BC_GoToLab1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void BC_GoToLab2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void BC_GoToLab3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void BC_GoToLab4(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void BC_GoToLab5(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void BC_GoToLab6(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void BC_GoToLab7(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void BC_GoToLab8(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void BC_GoToLab9(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_BC_GoToLab1(class UObject* Context);
		void UPDATE_BC_GoToLab2(class UObject* Context);
		void UPDATE_BC_GoToLab3(class UObject* Context);
		void UPDATE_BC_GoToLab4(class UObject* Context);
		void UPDATE_BC_GoToLab5(class UObject* Context);
		void UPDATE_BC_GoToLab6(class UObject* Context);
		void UPDATE_BC_GoToLab7(class UObject* Context);
		void UPDATE_BC_GoToLab8(class UObject* Context);
		void UPDATE_BC_GoToLab9(class UObject* Context);
		void BC_GoToLab10(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void BC_GoToLab11(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void BC_GoToLab12(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void BC_GoToLab13(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void BC_GoToLab14(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void BC_GoToLab15(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_BC_GoToLab10(class UObject* Context);
		void UPDATE_BC_GoToLab11(class UObject* Context);
		void UPDATE_BC_GoToLab12(class UObject* Context);
		void UPDATE_BC_GoToLab13(class UObject* Context);
		void UPDATE_BC_GoToLab14(class UObject* Context);
		void UPDATE_BC_GoToLab15(class UObject* Context);
		void BC_GoToLab16(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_BC_GoToLab16(class UObject* Context);
		void Obj_MovePortrait(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_FindPortrait(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void UPDATE_OpenStorageDoor1(class UObject* Context);
		void Obj_OpenStorageDoor1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_OpenStorageDoor1(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void UPDATE_GoToTannisLab(class UObject* Context);
		void Obj_GoToTannisLab(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_GoToTannisLab(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_MovePicture(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_ExaminedWaterPurifier_ACTIVATE(class UObject* Context);
		void UPDATE_ExamineWaterPurifier(class UObject* Context);
		void Obj_ExamineWaterPurifier(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_ExamineWaterPurifier(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void ExecuteUbergraph_Mission_GrowingPains(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
