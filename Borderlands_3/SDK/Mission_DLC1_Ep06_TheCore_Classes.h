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
	 * BlueprintGeneratedClass Mission_DLC1_Ep06_TheCore.Mission_DLC1_Ep06_TheCore_C
	 * Size -> 0x0218 (FullSize[0x0728] - InheritedSize[0x0510])
	 */
	class UMission_DLC1_Ep06_TheCore_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_GetPastSecurity_ObjSetVar;                           // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_EnterCore_ObjSetVar;                                 // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ReachStationCore_Entrance_ObjSetVar;                 // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_EliminateSecurityBots_ObjSetVar;                     // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ReachStationCore_Elevator_ObjSetVar;                 // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_JumpOffTheElevator_ObjSetVar;                        // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoTowerSecurityPower_1_ObjSetVar;                    // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_StopAssemblyLine_ObjSetVar;                          // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoTowerSecurityPower_ReachGenerator_ObjSetVar;       // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_DestroyShieldGenerator_ObjSetVar;                    // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoTowerSecurityPower_End_ObjSetVar;                  // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_DestroyFabricator_ObjSetVar;                         // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ShootPipe_ObjSetVar;                                 // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetPastSecurity_ObjVar;                              // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EnterCore_ObjVar;                                    // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReachStationCore_ObjVar;                             // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EliminateSecurityBots_ObjVar;                        // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_JumpOffTheElevator_ObjVar;                           // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoTowerSecurityPower_ObjVar;                         // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_StopAssemblyLine_ObjVar;                             // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DestroyShieldGenerator_ObjVar;                       // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DestroyFabricator_ObjVar;                            // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ShootPipe_ObjVar;                                    // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_TimothyKidnapped_ObjVar;                         // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_ReachedTimothyGate_ObjVar;                       // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_ElevatorIsStopped_ObjVar;                        // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_ReachedAssemblyLine_ObjVar;                      // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_ReachedGenerator_ObjVar;                         // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_TitleCardTrigger_Fabricator_ObjVar;              // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_ReachedFirstRoom_ObjVar;                         // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_ArrivedAtPipeRoomEnd_ObjVar;                     // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_ReadyToSpawnTimothyAtDoor_ObjVar;                // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ReachStationCore_GetChemicals_ObjSetVar;             // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ReachStationCore_ArriveAtKidnapping_ObjSetVar;       // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetChemicals_ObjVar;                                 // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlaceChemicals_ObjVar;                               // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ReachStationCore_KillRatches_ObjSetVar;              // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillRatches_ObjVar;                                  // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_TimothySpawnedAtCoreDoor_ObjVar;                 // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_ReachedConveyor_Reveal_ObjVar;                   // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_TitleCard_Fabricator_ObjVar;                     // 0x0658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ReachStationCore_Kidnapping_ObjSetVar;               // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_BypassForcefield_ObjVar;                             // 0x0668(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_MidRoadToElevator_ObjVar;                        // 0x0670(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_ElevatorTaken_ObjVar;                            // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_EnteredArmory_ObjVar;                            // 0x0680(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_TimothyEnteredScan_ObjVar;                       // 0x0688(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_TimothyArrivedAtScanRoom_ObjVar;                 // 0x0690(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_ReachScanTeleporter_ObjVar;                      // 0x0698(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_TimothyReadyToScan_ObjVar;                       // 0x06A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_BypassForcefield_2_ObjVar;                           // 0x06A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToArea_ObjSetVar;                                  // 0x06B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ClearArea_ObjVar;                                    // 0x06B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ClearArea_ObjSetVar;                                 // 0x06C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_ReachedConveyor_AssemblyLine_ObjVar;             // 0x06C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_ReachedFurnace_ObjVar;                           // 0x06D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_ReachedMidFurnace_ObjVar;                        // 0x06D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_EnteredBreakRoom_ObjVar;                         // 0x06E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_MidRoadToElevator_VOFinished_ObjVar;             // 0x06E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_ClearedTurrets_ObjVar;                           // 0x06F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ShootTank_ObjVar;                                    // 0x06F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_ReachedWarehouse_ObjVar;                         // 0x0700(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_ReachedWarehouseEnd_ObjVar;                      // 0x0708(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_ReachedAssemblyLineEnd_ObjVar;                   // 0x0710(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_ReadyToOpenDoor_ObjVar;                          // 0x0718(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_WentArea_ObjVar;                                 // 0x0720(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnDialogSequenceFinished_41();
		void OnDialogSequenceFinished_40();
		void OnDialogSequenceFinished_39();
		void OnDialogSequenceFinished_38();
		void OnDialogSequenceFinished_37();
		void OnDialogSequenceFinished_36();
		void OnDialogSequenceFinished_35();
		void OnDialogSequenceFinished_34();
		void OnDialogSequenceFinished_33();
		void OnDialogSequenceFinished_32();
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
		void Obj_DestroyFabricator(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_ShootPipe(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_TimothyKidnapped(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_EnteredCore(class UObject* Context);
		void MCE_ReachedStationCore(class UObject* Context);
		void MCE_JumpedOffTheElevator(class UObject* Context);
		void MCE_StoppedAssemblyLine(class UObject* Context);
		void MCE_DestroyedShieldGenerator(class UObject* Context);
		void MCE_ShotPipe(class UObject* Context);
		void Obj_INV_ReachedTimothyGate(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_ReachedTimothyGate(class UObject* Context);
		void MCE_EliminatedSecurityBots(class UObject* Context);
		void Obj_INV_ElevatorIsStopped(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ElevatorIsStopped(class UObject* Context);
		void MCE_ArrivedAtAssemblyLine(class UObject* Context);
		void Obj_INV_ReachedAssemblyLine(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_ReachedGenerator(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ReachedGenerator(class UObject* Context);
		void MCE_DestroyedFabricator(class UObject* Context);
		void Obj_INV_TitleCardTrigger_Fabricator(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_TitleCardTrigger_Fabricator(class UObject* Context);
		void Obj_INV_ReachedFirstRoom(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_ReachedFirstRoom(class UObject* Context);
		void Obj_INV_ArrivedAtPipeRoomEnd(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_ArrivedAtPipeRoomEnd(class UObject* Context);
		void INV_Obj_ReadyToSpawnTimothyAtDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ReachedScanTeleporter(class UObject* Context);
		void Obj_DestroyShieldGenerator(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ReachStationCore_ArriveAtKidnapping(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ReachStationCore_Objective_PROXY_7();
		void Set_ReachStationCore_GetChemicals(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ReachStationCore_Objective_PROXY_8();
		void Obj_GetChemicals(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_PlaceChemicals(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ReachStationCore_KillRatches(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ReachStationCore_Objective_PROXY_9();
		void Obj_KillRatches(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_StopAssemblyLine(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_GoTowerSecurityPower_Objective_PROXY_6();
		void Obj_GoTowerSecurityPower_Objective_PROXY_5();
		void Obj_GoTowerSecurityPower_Objective_PROXY_4();
		void Obj_GoTowerSecurityPower_Objective_PROXY_3();
		void MCE_KilledRatches(class UObject* Context);
		void MCE_PlacedChemicals(class UObject* Context);
		void INV_Obj_TimothySpawnedAtCoreDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_TimothySpawnedAtCoreDoor(class UObject* Context);
		void Obj_INV_ReachedConveyor_Reveal(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_ReachedConveyor_Reveal(class UObject* Context);
		void Obj_INV_ReachedConveyor_AssemblyLine(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_ReachedConveyor_AssemblyLine(class UObject* Context);
		void Obj_INV_TitleCard_Fabricator(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_EliminateSecurityBots(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_ReachStationCore(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_EnterCore(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ReachStationCore_Kidnapping(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ReachStationCore_Objective_PROXY_10();
		void Obj_BypassForcefield(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_GetPastSecurity(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ShootPipe(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_INV_MidRoadToElevator(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_DestroyFabricator(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_INV_MidRoadToElevator(class UObject* Context);
		void Obj_INV_ElevatorTaken(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_ElevatorTaken(class UObject* Context);
		void Set_GoTowerSecurityPower_End(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_DestroyShieldGenerator(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_GoTowerSecurityPower_ReachGenerator(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_INV_EnteredArmory(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_EnteredArmory(class UObject* Context);
		void Set_StopAssemblyLine(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void INV_Obj_TimothyEnteredScan(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_TimothyEnteredScan(class UObject* Context);
		void Obj_GoTowerSecurityPower(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_JumpOffTheElevator(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_Obj_TimothyArrivedAtScanRoom(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_TimothyArrivedAtScanRoom(class UObject* Context);
		void Obj_INV_ReachScanTeleporter(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_TimothyReadyToScan(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_GetPastSecurity(class UObject* Context);
		void Obj_BypassForcefield_3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GoToArea(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_ClearedLoaders(class UObject* Context);
		void Obj_ClearArea(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ClearArea(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_WentToArea(class UObject* Context);
		void Obj_GetPastSecurity_Objective_PROXY_11();
		void MCE_TimothyHasBeenKidnapped(class UObject* Context);
		void MCE_TimothyIsReadyToScan(class UObject* Context);
		void Obj_INV_ReachedFurnace(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_ReachedMidFurnace(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_ReachedFurnace(class UObject* Context);
		void MCE_INV_ReachedMidFurnace(class UObject* Context);
		void Obj_INV_EnteredBreakRoom(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_EnteredBreakRoom(class UObject* Context);
		void Obj_INV_MidRoadToElevator_VOFinished(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_ClearedTurrets(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_ClearedTurrets(class UObject* Context);
		void Obj_ShootTank(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ShotTank(class UObject* Context);
		void Set_GoTowerSecurityPower_2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_INV_ReachedWarehouse(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_ReachedWarehouse(class UObject* Context);
		void Obj_INV_ReachedWarehouseEnd(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_ReachedWarehouseEnd(class UObject* Context);
		void Obj_INV_ReachedAssemblyLineEnd(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_ReachedAssemblyLineEnd(class UObject* Context);
		void INV_Obj_ReadyToOpenDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_ReachStationCore_Objective_PROXY_2();
		void Obj_INV_WentArea(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_JumpOffTheElevator(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_ReachStationCore_Elevator(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_EliminateSecurityBots(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_EnterCore(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_ReachStationCore_Entrance(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_GetPastSecurity(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MissionKickoff();
		void Obj_ReachStationCore_Objective_PROXY_1();
		void Obj_ReachStationCore_Objective_PROXY();
		void ExecuteUbergraph_Mission_DLC1_Ep06_TheCore(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
