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
	 * BlueprintGeneratedClass Mission_Ep19_MinerDetails.Mission_Ep19_MinerDetails_C
	 * Size -> 0x03E8 (FullSize[0x08F8] - InheritedSize[0x0510])
	 */
	class UMission_Ep19_MinerDetails_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                SET_DefeatAnointed_ObjSetVar;                            // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DefeatAnointed_ObjVar;                               // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_TalkToVaughn_ObjSetVar;                              // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToVaughn_ObjVar;                                 // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToMines_ObjSetVar;                                 // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToMines_ObjVar;                                    // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_OpenTransportDoors_ObjSetVar;                        // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_OpenTransportDoors_ObjVar;                           // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_MakeHoleInFloor_ObjSetVar;                           // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_FollowCorridor_ObjSetVar;                            // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_DisengageCouplings_ObjSetVar;                        // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MakeHoleInFloor_ObjVar;                              // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FollowCorridor_ObjVar;                               // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DisengageCouplings_ObjVar;                           // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToHub_ObjVar;                                      // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_EnterFacility_ObjSetVar;                             // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EnterFacility_ObjVar;                                // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_ApproachFirstGate_ObjSetVar;                         // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ApproachFirstGate_INVS_ObjVar;                       // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_ElectrifyRails_ObjSetVar;                            // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_UseDecoySwitchboard_INVS_ObjVar;                     // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_LoadReactor_ObjVar;                                  // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_UsedDoorSwitches_INVS_ObjVar;                        // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_GoToHub_ObjSetVar;                                   // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_DefendCityHub_ObjSetVar;                             // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DefendCityHub_ObjVar;                                // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_CaressMinecart_ObjSetVar;                            // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MeleeMinecart_ObjVar;                                // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillVarkids_ObjVar;                                  // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillVarkids_ObjSetVar;                               // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_EnterLab_ObjSetVar;                                  // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EnterLab_ObjVar;                                     // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MinecartCaresses;                                        // 0x0618(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_3QIC[0x4];                                   // 0x061C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjectiveSet*                                Set_FinalCaress_ObjSetVar;                               // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToTransportBuilding_ObjSetVar;                     // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToTransportBuilding_ObjVar;                        // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindSecretLab_ObjVar;                                // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToGarage_ObjVar;                                   // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TurnInToVaughn_ObjVar;                               // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DriveToDestination_ObjVar;                           // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   BC_Convoy_10_ThirdStation_ObjVar;                        // 0x0658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   BC_Convoy_17_Landslide_ObjVar;                           // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_GoToGarage_ObjSetVar;                                // 0x0668(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_DriveConvoy_ObjSetVar;                               // 0x0670(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_TurnInAfterConvoy_ObjSetVar;                         // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   BC_Convoy_06_Blockade_ObjVar;                            // 0x0680(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToSanctuary_ObjSetVar;                             // 0x0688(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToSanctuary_ObjVar;                                // 0x0690(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToBridge_ObjSetVar;                                // 0x0698(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToBridge_ObjVar;                                   // 0x06A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GetLilithsAttention_ObjSetVar;                       // 0x06A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToLilith_ObjVar;                                 // 0x06B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_VaughnRallyTroops_ObjVar;                            // 0x06B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToDesertVaultEntrance_ObjSetVar;                   // 0x06C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToDesertVaultEntrance_INVS_ObjVar;                 // 0x06C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoLongWayAround_ObjVar;                              // 0x06D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   BC_Convoy_03_GarageEnd_ObjVar;                           // 0x06D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   BC_Convoy_04_FirstStation_ObjVar;                        // 0x06E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   BC_Convoy_07_SecondStation_ObjVar;                       // 0x06E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   BC_Convoy_08_ToThirdStation_01_ObjVar;                   // 0x06F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   BC_Convoy_11_ToFourthStation_01_ObjVar;                  // 0x06F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   BC_Convoy_13_FourthStation_ObjVar;                       // 0x0700(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   BC_Convoy_15_ToFifthStation_02_ObjVar;                   // 0x0708(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   BC_Convoy_16_FifthStation_ObjVar;                        // 0x0710(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_HitMinecart_INVS_ObjVar;                             // 0x0718(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MeleeMinecartCounter_INVS_ObjVar;                    // 0x0720(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_OpenDoor1_INVS_ObjVar;                               // 0x0728(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_OpenDoor2_INVS_ObjVar;                               // 0x0730(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DefendCityHub2_ObjVar;                               // 0x0738(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 Convo_LilithTannisArgument;                              // 0x0740(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_TPPR[0x4];                                   // 0x074C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjective*                                   Obj_CrumbleFloorHandler_INVS_ObjVar;                     // 0x0750(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SEQ_ReactorLoadSwap_ObjVar;                          // 0x0758(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DestroyWatchTower_ObjVar;                            // 0x0760(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_DestroyWatchTower_ObjSetVar;                         // 0x0768(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_ReachElevator_ObjSetVar;                             // 0x0770(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EnterVehicle_ObjVar;                                 // 0x0778(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DefendHub_INVS_ObjVar;                               // 0x0780(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_AssaultCoVDefenses_ObjVar;                           // 0x0788(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillRedShirts_INVS_ObjVar;                           // 0x0790(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Retreat_ObjSetVar;                                   // 0x0798(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Retreat_ObjVar;                                      // 0x07A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Regroup_ObjVar;                                      // 0x07A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Regroup_ObjSetVar;                                   // 0x07B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_OpenGateToMines_INVS_ObjVar;                         // 0x07B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_BreakTransportDoor_ObjSetVar;                        // 0x07C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_BreakTransportDoor_ObjVar;                           // 0x07C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DestroyTransportDoor_INVS_ObjVar;                    // 0x07D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   BC_FindLab01_ObjVar;                                     // 0x07D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   BC_FindLab02_ObjVar;                                     // 0x07E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   BC_FindLab03_ObjVar;                                     // 0x07E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   BC_FindLab04_ObjVar;                                     // 0x07F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   BC_FindLab05_ObjVar;                                     // 0x07F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   BC_FindLab06_ObjVar;                                     // 0x0800(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   BC_FindLab07_ObjVar;                                     // 0x0808(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   BC_FindLab08_ObjVar;                                     // 0x0810(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   BC_FindLab09_ObjVar;                                     // 0x0818(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   BC_FindLab10_ObjVar;                                     // 0x0820(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   BC_FindLab11_ObjVar;                                     // 0x0828(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   BC_FindLab12_ObjVar;                                     // 0x0830(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   BC_FindLab13_ObjVar;                                     // 0x0838(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   BC_FindLab14_ObjVar;                                     // 0x0840(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   BC_FindLab15_ObjVar;                                     // 0x0848(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   BC_FindLab16_ObjVar;                                     // 0x0850(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   BC_FindLab17_ObjVar;                                     // 0x0858(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   BC_FindLab18_ObjVar;                                     // 0x0860(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DefendCounter_INVS_ObjVar;                           // 0x0868(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Inv_DestroyJunkBarricade_ObjVar;                         // 0x0870(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_MeetVaughnInDesert_ObjSetVar;                        // 0x0878(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MeetVaughnRolandsRest_ObjVar;                        // 0x0880(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillRedshirts_ObjSetVar;                             // 0x0888(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_GarageDoor_ObjVar;                                   // 0x0890(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   BC_Convoy_03b_VO_ObjVar;                                 // 0x0898(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   BC_Convoy_04b_VO_ObjVar;                                 // 0x08A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   BC_Convoy_05b_VO_ObjVar;                                 // 0x08A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   BC_Convoy_06b_BlockadeRamp_ObjVar;                       // 0x08B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   BC_Convoy_07b_VO_ObjVar;                                 // 0x08B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   BC_Convoy_10b_VO_FlyBy_ObjVar;                           // 0x08C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   BC_Convoy_11b_Vehicles_ObjVar;                           // 0x08C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   BC_Convoy_13b_VO_ObjVar;                                 // 0x08D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INVS_SpawnCue_bCoV_ObjVar;                               // 0x08D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INVS_SpawnCue_Vehicle_ObjVar;                            // 0x08E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SpawnVehicle_ObjVar;                                 // 0x08E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Invs_KillCoVAttackers2_ObjVar;                           // 0x08F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnDialogSequenceFinished_47();
		void OnDialogSequenceFinished_46();
		void OnDialogSequenceFinished_45();
		void OnDialogSequenceFinished_44();
		void OnDialogSequenceFinished_43();
		void OnDialogSequenceFinished_42();
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
		void SET_ApproachFirstGate(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ApproachFirstGate_INVS(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_ApproachFirstGate(class UObject* Context);
		void SET_ElectrifyRails(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void UPDATE_UseDecoySwitchboard(class UObject* Context);
		void Obj_UseDecoySwitchboard_INVS(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_LoadReactor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_UsedDoorSwitches_INVS(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_GoToHub(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void UPDATE_GoToHub(class UObject* Context);
		void SET_DefendCityHub(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_DefendCityHub(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_DefendCityHub(class UObject* Context);
		void Set_CaressMinecart(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_MeleeMinecart(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_KillVarkids(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_KillVarkids(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_EnterLab(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_EnterLab(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_FinalCaress(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_MeleeMinecart_Objective_PROXY();
		void UPDATE_KillVarkids(class UObject* Context);
		void UPDATE_EnterLab(class UObject* Context);
		void Set_GoToTransportBuilding(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GoToTransportBuilding(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_GoToTransportBuilding(class UObject* Context);
		void Obj_FindSecretLab(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_GoToGarage(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_DriveConvoy(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GoToGarage(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_TurnInToVaughn(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_TurnInToVaughn(class UObject* Context);
		void UPDATE_EnterFacility(class UObject* Context);
		void Obj_EnterFacility(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_TurnInAfterConvoy(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_EnterVehicle_Objective_PROXY_1();
		void Obj_DriveToDestination(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void BC_Convoy_10_ThirdStation(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_BC_Convoy_10_ThirdStation(class UObject* Context);
		void BC_Convoy_17_Landslide(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_BC_Convoy_17_Landslide(class UObject* Context);
		void BC_Convoy_06_Blockade(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_BC_Convoy_06_Blockade(class UObject* Context);
		void UPDATE_GoToGarage(class UObject* Context);
		void Set_GoToSanctuary(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GoToSanctuary(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_GoToSanctuary(class UObject* Context);
		void Set_GoToBridge(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GoToBridge(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_GoToBridge(class UObject* Context);
		void Set_GetLilithsAttention(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TalkToLilith(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_TalkToLilith(class UObject* Context);
		void SET_EnterFacility(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_VaughnRallyTroops(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GoToDesertVaultEntrance(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GoToDesertVaultEntrance_INVS(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_FindSecretLab_Objective_PROXY_2();
		void Obj_FindSecretLab_Objective_PROXY_3();
		void Obj_FindSecretLab_Objective_PROXY_4();
		void Obj_FindSecretLab_Objective_PROXY_5();
		void Obj_FindSecretLab_Objective_PROXY_6();
		void Obj_GoLongWayAround(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_GoLongWayAround_Objective_PROXY_7();
		void Obj_GoToHub(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_GoToVaultEntrance(class UObject* Context);
		void UPDATE_BC_Convoy_03_GarageEnd(class UObject* Context);
		void BC_Convoy_03_GarageEnd(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void BC_Convoy_04_FirstStation(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_BC_Convoy_04_FirstStation(class UObject* Context);
		void BC_Convoy_07_SecondStation(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_BC_Convoy_07_SecondStation(class UObject* Context);
		void BC_Convoy_08_ToThirdStation_01(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_BC_Convoy_08_ToThirdStation_01(class UObject* Context);
		void BC_Convoy_11_ToFourthStation_01(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_BC_Convoy_11_ToFourthStation_01(class UObject* Context);
		void BC_Convoy_13_FourthStation(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_BC_Convoy_13_FourthStation(class UObject* Context);
		void BC_Convoy_15_ToFifthStation_02(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_BC_Convoy_15_ToFifthStation_02(class UObject* Context);
		void BC_Convoy_16_FifthStation(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_BC_Convoy_16_FifthStation(class UObject* Context);
		void MCE_CouplingsDisengaged(class UObject* Context);
		void Obj_DisengageCouplings(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_HitMinecart_INVS(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_HitMinecart(class UObject* Context);
		void Obj_MeleeMinecartCounter_INVS(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_MeleeMinecartCounter(class UObject* Context);
		void Obj_OpenDoor1_INVS(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_MeleeMinecartCounter_INVS_Objective_PROXY_8();
		void Obj_OpenDoor2_INVS(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_DefendCityHub2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_CrumbleFloorHandler_INVS(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_LoadReactor(class UObject* Context);
		void Obj_SEQ_ReactorLoadSwap(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SEQ_ReactorLoadSwap(class UObject* Context);
		void Obj_DestroyWatchTower(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_DestroyWatchTower(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_WatchTowerDestroyed(class UObject* Context);
		void Obj_DriveToDestination_Objective_PROXY_9();
		void Update_ReactorIsAtElevator(class UObject* Context);
		void SET_ReachElevator(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_EnterVehicle(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_DefendHub_INVS(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_DefendHub_INVS_Objective_PROXY_10();
		void UPDATE_GoToMInes(class UObject* Context);
		void Obj_GoToMines(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GoToMines(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void UPDATE_FollowCorridor(class UObject* Context);
		void Obj_AssaultCoVDefenses(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_KillRedShirts_INVS(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_Retreat(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_Retreat(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_FollowCorridor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_KillRedShirts(class UObject* Context);
		void Obj_Regroup(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_Regroup(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void UPDATE_Regroup(class UObject* Context);
		void Obj_OpenGateToMines_INVS(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_OpenGateToMines(class UObject* Context);
		void UPDATE_MakeHoleInFloor(class UObject* Context);
		void Set_BreakTransportDoor(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_BreakTransportDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_FindSecretLab_Objective_PROXY_11();
		void Obj_GoLongWayAround_Objective_PROXY_12();
		void Obj_HitMinecart_INVS_Objective_PROXY_13();
		void Obj_DestroyTransportDoor_INVS(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_DestroyTransportDoor(class UObject* Context);
		void Obj_DestroyTransportDoor_INVS_Objective_PROXY_14();
		void BC_FindLab01(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void BC_FindLab02(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void BC_FindLab03(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void BC_FindLab04(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void BC_FindLab05(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void BC_FindLab06(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void BC_FindLab07(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void BC_FindLab08(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void BC_FindLab09(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void BC_FindLab10(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void BC_FindLab11(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_BC_FindLab01(class UObject* Context);
		void UPDATE_BC_FindLab02(class UObject* Context);
		void UPDATE_BC_FindLab03(class UObject* Context);
		void UPDATE_BC_FindLab04(class UObject* Context);
		void UPDATE_BC_FindLab05(class UObject* Context);
		void UPDATE_BC_FindLab06(class UObject* Context);
		void UPDATE_BC_FindLab07(class UObject* Context);
		void UPDATE_BC_FindLab08(class UObject* Context);
		void UPDATE_BC_FindLab09(class UObject* Context);
		void UPDATE_BC_FindLab10(class UObject* Context);
		void UPDATE_BC_FindLab11(class UObject* Context);
		void UPDATE_FindSecretLab(class UObject* Context);
		void Obj_MakeHoleInFloor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_DisengageCouplings(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_FollowCorridor(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_MakeHoleInFloor(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindSecretLab_Objective_PROXY_15();
		void Obj_FindSecretLab_Objective_PROXY_16();
		void Obj_GoLongWayAround_Objective_PROXY_17();
		void BC_FindLab01_Objective_PROXY_18();
		void BC_FindLab02_Objective_PROXY_19();
		void Obj_GoLongWayAround_Objective_PROXY_20();
		void BC_FindLab12(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void BC_FindLab13(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void BC_FindLab14(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_BC_FindLab12(class UObject* Context);
		void UPDATE_BC_FindLab13(class UObject* Context);
		void UPDATE_BC_FindLab14(class UObject* Context);
		void Obj_GoLongWayAround_Objective_PROXY_21();
		void BC_FindLab15(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void BC_FindLab16(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void BC_FindLab17(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_BC_FindLab15(class UObject* Context);
		void UPDATE_BC_FindLab16(class UObject* Context);
		void UPDATE_BC_FindLab17(class UObject* Context);
		void Obj_FindSecretLab_Objective_PROXY_22();
		void BC_FindLab18(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_BC_FindLab18(class UObject* Context);
		void Obj_DefendCounter_INVS(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_TalkToVaughn(class UObject* Context);
		void Obj_TalkToVaughn(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Inv_DestroyJunkBarricade(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Player_JunkBarricadeDestroyed(class UObject* Context);
		void Obj_MeetVaughnRolandsRest(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_MeetVaughnInDesert(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_EnterVehicle_Objective_PROXY_23();
		void Obj_DriveToDestination_Objective_PROXY_24();
		void UPDATE_MeetVaughn(class UObject* Context);
		void UPDATE_TalkToLilith_VOend(class UObject* Context);
		void Set_KillRedshirts(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_AssaultCoVDefenses_Objective_PROXY_25();
		void UPDATE_Retreat(class UObject* Context);
		void INV_GarageDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_INV_OpenGarageDoor(class UObject* Context);
		void UPDATE_UseDoorSwitches(class UObject* Context);
		void BC_Convoy_03b_VO(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_BC_Convoy_03b_VO(class UObject* Context);
		void BC_Convoy_04b_VO(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_BC_Convoy_04b_VO(class UObject* Context);
		void BC_Convoy_05b_VO(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_BC_Convoy_05b_VO(class UObject* Context);
		void BC_Convoy_06b_BlockadeRamp(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_BC_Convoy_06b_BlockadeRamp(class UObject* Context);
		void BC_Convoy_07b_VO(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_BC_Convoy_07b_VO(class UObject* Context);
		void BC_Convoy_10b_VO_FlyBy(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_BC_Convoy_10b_VO_Flyby(class UObject* Context);
		void BC_Convoy_11b_Vehicles(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_BC_Convoy_11b_Vehicles(class UObject* Context);
		void BC_Convoy_13b_VO(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_BC_Convoy_13b_VO(class UObject* Context);
		void INVS_SpawnCue_bCoV(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INVS_SpawnCue_Vehicle(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_INV_05bCoV(class UObject* Context);
		void UPDATE_INV_07Vehicle(class UObject* Context);
		void Obj_OpenTransportDoors(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_SpawnVehicle(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_SpawnVehicle_Objective_PROXY_26();
		void Obj_SpawnVehicle_Objective_PROXY_27();
		void ClearConvoyBreadcrumbs(class UObject* Context);
		void Invs_KillCoVAttackers2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_KillCoVAttackers2(class UObject* Context);
		void SET_OpenTransportDoors(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_TalkToVaughn(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_DefeatAnointed(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_DefeatAnointed(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void ExecuteUbergraph_Mission_Ep19_MinerDetails(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
