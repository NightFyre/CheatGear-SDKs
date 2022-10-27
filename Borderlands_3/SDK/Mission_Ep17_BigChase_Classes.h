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
	 * BlueprintGeneratedClass Mission_Ep17_BigChase.Mission_Ep17_BigChase_C
	 * Size -> 0x03A8 (FullSize[0x08B8] - InheritedSize[0x0510])
	 */
	class UMission_Ep17_BigChase_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_Carnivora_Catchup_ObjSetVar;                         // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CatchUpToCarnivora_ObjVar;                           // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Carnivora_BoostTanks_ObjSetVar;                      // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Carnivora_BoostTanks_ObjVar;                         // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_EnterCarnivoraInterior_ObjSetVar;                    // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EnterCarnivoraInterior_ObjVar;                       // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             KillBoss_ObjectiveActivated;                             // 0x0548(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UMissionObjectiveSet*                                Set_TannisTitleCard_ObjSetVar;                           // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TannisTitleCard_ObjVar;                              // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillBigDonny_ObjVar;                                 // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_StartConveyor_GoldenTicket_ObjSetVar;                // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_DefeatAgonizer9k_ObjSetVar;                          // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DefeatAgonizer9k_ObjVar;                             // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_EnterCarnivoraGates_ObjSetVar;                       // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EnterCarnivoraGates_ObjVar;                          // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PIckUpKey_ObjSetVar;                                 // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PickupKey_ObjVar;                                    // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindTannis_ObjVar;                                   // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_LowerCar_ObjSetVar;                                  // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_LowerCar_ObjVar;                                     // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_CarnivoraTitleCard_ObjSetVar;                        // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CarnivoraTitleCard_ObjVar;                           // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PainAndTerrorTitleCad_ObjSetVar;                     // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PainAndTerrorTitleCard_ObjVar;                       // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Carnivora_Wave1_ObjVar;                              // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_EnterFestival_Transition_ObjSetVar;                  // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EnterFestival_ObjVar;                                // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_EnterFestivalNoTicket_ObjSetVar;                     // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_ReachedCarnivora_NoTicket_ObjVar;                // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToChopShop_ObjSetVar;                              // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToChopShop_ObjVar;                                 // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillBigDonny_ObjSetVar;                              // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillPainAndTerror_ObjSetVar;                         // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DefeatPain_ObjVar;                                   // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DefeatTerror_ObjVar;                                 // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TalkToTannis_ObjSetVar;                              // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkWithTannis_ObjVar;                               // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_OpenCraneDoor_ObjVar;                            // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_GoToCarnivora_ObjSetVar;                             // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToMotorcade_ObjVar;                                // 0x0658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Carnivora_Transmission_ObjSetVar;                    // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Carnivora_Transmission_ObjVar;                       // 0x0668(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Carnivora_DestroyMainTank_ObjVar;                    // 0x0670(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_UseArenaElevator_ObjSetVar;                          // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindTannis_ObjSetVar;                                // 0x0680(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_StartGoldenTicketGrinder_ObjVar;                     // 0x0688(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DriveGoldenTicketOntoBelt_ObjVar;                    // 0x0690(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToFestivalEntrance_WithTicket_ObjSetVar;           // 0x0698(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToCarnivora_GoldenTicket_ObjVar;                   // 0x06A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_StartConveyor_NoTicket_ObjSetVar;                    // 0x06A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_StartNoTicketConveyor_ObjVar;                        // 0x06B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DriveNoTicketOntoBelt_ObjVar;                        // 0x06B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Carnivora_WatchFireworks_ObjSetVar;                  // 0x06C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              Current_Player;                                          // 0x06C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_EnterChopShop_ObjVar;                            // 0x06D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindBigDonny_ObjSetVar;                              // 0x06D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Elevator_MusicSwitch_ObjVar;                         // 0x06E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_UseAirpushValve_ObjVar;                          // 0x06E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_MurderCircusVO_ObjVar;                           // 0x06F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindElevator_ObjSetVar;                              // 0x06F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   BC_ToValveSwitch_01_ObjVar;                              // 0x0700(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   BC_ToValveSwitch_02_ObjVar;                              // 0x0708(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_EngineRoom_ObjVar;                               // 0x0710(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   BC_EngineRoom_01_ObjVar;                                 // 0x0718(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   BC_EngineRoom_02_ObjVar;                                 // 0x0720(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_VO_GoToExterior_ObjVar;                          // 0x0728(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   BC_EngineRoom_04_ObjVar;                                 // 0x0730(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   BC_EngineRoom_05_ObjVar;                                 // 0x0738(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   BC_EngineRoom_06_ObjVar;                                 // 0x0740(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   BC_ToValveSwitch_04_ObjVar;                              // 0x0748(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   BC_ToArena_01_ObjVar;                                    // 0x0750(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   BC_ToArena_02_ObjVar;                                    // 0x0758(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   BC_ToArena_03_ObjVar;                                    // 0x0760(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindBigDonny_ObjVar;                                 // 0x0768(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EnterSacrificialArena_ObjVar;                        // 0x0770(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   BC_EngineRoom_03_ObjVar;                                 // 0x0778(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_GoToPrologue_ObjSetVar;                              // 0x0780(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_GoToPrologue_ObjVar;                                 // 0x0788(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_AskVaughnAboutTannis_ObjVar;                         // 0x0790(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_PandoraTitlecard_ObjSetVar;                          // 0x0798(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PandoraTitlecard_INVS_ObjVar;                        // 0x07A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToPrologueDesertGate_ObjSetVar;                    // 0x07A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToPrologueDesertGate_INVS_ObjVar;                  // 0x07B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GetThroughPrologueGate_ObjSetVar;                    // 0x07B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToDesertZone_ObjSetVar;                            // 0x07C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToDesertZone_ObjVar;                               // 0x07C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_TalkToVaughn_ObjSetVar;                              // 0x07D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToVaughn_ObjVar;                                 // 0x07D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_OpenGate_INVIS_ObjVar;                               // 0x07E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_StallTheCarnivora_ObjVar;                            // 0x07E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SelectSongA_INVS_ObjVar;                             // 0x07F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SelectSongB_INVS_ObjVar;                             // 0x07F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SelectSongC_INVS_ObjVar;                             // 0x0800(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   BC_Festival_01_ObjVar;                                   // 0x0808(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   BC_Festival_02_ObjVar;                                   // 0x0810(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   BC_Festival_03_ObjVar;                                   // 0x0818(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   BC_Festival_04_ObjVar;                                   // 0x0820(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   BC_Festival_05_ObjVar;                                   // 0x0828(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   BC_Festival_06_ObjVar;                                   // 0x0830(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   BC_Festival_07_ObjVar;                                   // 0x0838(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   BC_Festival_08_ObjVar;                                   // 0x0840(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Inv_Obj_RegoupBeforeCarnivora_ObjVar;                    // 0x0848(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_DriveOnConveyor_NoTicket_ObjSetVar;                  // 0x0850(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetIntoCarnivora_Overarc_ObjVar;                     // 0x0858(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_DriveOntoConveyor_GoldenTicket_ObjSetVar;            // 0x0860(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Carnivora_BadassWave_ObjSetVar;                      // 0x0868(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Carnivora_BadassWave2_ObjSetVar;                     // 0x0870(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Carnivora_Wave2_ObjVar;                              // 0x0878(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DriveGoldenChariot_ObjVar;                           // 0x0880(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Inv_Obj_GoldenTicketCrane_ObjVar;                        // 0x0888(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_WatchVidScreen_ObjSetVar;                            // 0x0890(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_WatchVidScreen_ObjVar;                               // 0x0898(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToHubTown_ObjSetVar;                               // 0x08A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_RespawnGoldenChariot_ObjVar;                         // 0x08A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INVS_GoToMusicElevator_ObjVar;                           // 0x08B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
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
		void OnDialogSequenceFinished_48();
		void OnDialogSequenceFinished_47();
		void UPDATE_EnterFestival(class UObject* Context);
		void SET_EnterFestivalNoTicket(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void INV_Obj_ReachedCarnivora_NoTicket(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_EnterFestival(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ME_PlayerWentToCarnivoraNoTicket(class UObject* Context);
		void Set_GoToChopShop(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GoToChopShop(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_GoToChopShop(class UObject* Context);
		void Set_KillBigDonny(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void ME_GoldenTicketComplete(class UObject* Context);
		void Set_KillPainAndTerror(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_DefeatPain(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_DefeatTerror(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_TalkToTannis(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TalkWithTannis(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_TalkToTannis(class UObject* Context);
		void Set_EnterFestival_Transition(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void INV_Obj_OpenCraneDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_OpenCraneDoor(class UObject* Context);
		void SET_GoToCarnivora(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GoToMotorcade(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_GoToMotorcade(class UObject* Context);
		void ME_PlayerClearedCrew(class UObject* Context);
		void Set_Carnivora_Transmission(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_Carnivora_Transmission(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ME_PlayerDestroyTransmission(class UObject* Context);
		void Obj_Carnivora_Wave1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_FindTannis(class UObject* Context);
		void Obj_Carnivora_DestroyMainTank(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ME_PlayerWatchesFirework(class UObject* Context);
		void UPDATE_UseAirpushValve(class UObject* Context);
		void Set_UseArenaElevator(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void ME_PlayerExploredEngineRoom(class UObject* Context);
		void Set_FindTannis(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_StartGoldenTicketGrinder(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ME_PlayerStartedConveyor_GoldenTicket(class UObject* Context);
		void Obj_DriveGoldenTicketOntoBelt(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ME_GoldenTicketEnteredConveyor(class UObject* Context);
		void Set_GoToFestivalEntrance_WithTicket(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GoToCarnivora_GoldenTicket(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ME_PlayerWentToCarnivoraWithTicket(class UObject* Context);
		void Obj_StartNoTicketConveyor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_DriveNoTicketOntoBelt(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_StartConveyor_NoTicket(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void ME_NonTicketEnteredConveyor(class UObject* Context);
		void ME_PlayerStartedConveyor_NoTicket(class UObject* Context);
		void Obj_PainAndTerrorTitleCard(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_Carnivora_WatchFireworks(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MissionActiveLoad();
		void Set_PainAndTerrorTitleCad(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MissionActive();
		void INV_Obj_EnterChopShop(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_EnterChopShop(class UObject* Context);
		void Set_EnterCarnivoraInterior(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_FindBigDonny(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_Carnivora_BoostTanks(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_Carnivora_BoostTanks(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_Elevator_MusicSwitch(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_Obj_UseAirpushValve(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_Obj_MurderCircusVO(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_MurderCircusVO(class UObject* Context);
		void Obj_CarnivoraTitleCard(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ME_DEBUG_FoundTannis(class UObject* Context);
		void ME_DEBUG_AgonizerBossFight(class UObject* Context);
		void ME_DEBUG_AgonizerDefeated(class UObject* Context);
		void Set_CarnivoraTitleCard(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_FindElevator(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void BC_ToValveSwitch_01(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void BC_ToValveSwitch_02(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_LowerCar(class UObject* Context);
		void INV_Obj_EngineRoom(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_LowerCar(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_LowerCar(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ME_BC_ToValveSwitch_01(class UObject* Context);
		void ME_BC_ToValveSwitch_02(class UObject* Context);
		void BC_EngineRoom_01(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void BC_EngineRoom_02(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ME_BC_EngineRoom_01(class UObject* Context);
		void ME_BC_EngineRoom_02(class UObject* Context);
		void ME_BC_EngineRoom_04(class UObject* Context);
		void ME_BC_EngineRoom_05(class UObject* Context);
		void ME_BC_EngineRoom_06(class UObject* Context);
		void INV_Obj_VO_GoToExterior(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_VO_GoToExterior(class UObject* Context);
		void BC_EngineRoom_04(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void BC_EngineRoom_05(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void BC_EngineRoom_06(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void BC_ToValveSwitch_04(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ME_BC_ToValveSwitch_04(class UObject* Context);
		void BC_ToArena_01(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ME_BC_ToArena_01(class UObject* Context);
		void BC_ToArena_02(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ME_BC_ToArena_02(class UObject* Context);
		void BC_ToArena_03(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ME_BC_ToArena_03(class UObject* Context);
		void Obj_FindBigDonny(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_EnterSacrificialArena(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void BC_EngineRoom_03(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ME_BC_EngineRoom_03(class UObject* Context);
		void Obj_CatchUpToCarnivora(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_Carnivora_Catchup(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindTannis(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ME_BoosterTankWasDestoyed(class UObject* Context);
		void UPDATE_PickupKey(class UObject* Context);
		void Set_PickUpKey(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_PickupKey(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_GoToPrologue(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_GoToPrologue(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_GoToPrologue(class UObject* Context);
		void OBJ_AskVaughnAboutTannis(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_PandoraTitlecard(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_PandoraTitlecard_INVS(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GoToPrologueDesertGate(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GoToPrologueDesertGate_INVS(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GetThroughPrologueGate(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_GoToDesertZone(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GoToDesertZone(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_TalkToVaughn(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TalkToVaughn(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_EnterCarnivoraGates(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_GoToPrologueDesertGate(class UObject* Context);
		void Set_EnterCarnivoraGates(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void UPDATE_DefeatAgonizer9k(class UObject* Context);
		void Obj_DefeatAgonizer9k(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_OpenGate_INVIS(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_OpenGate(class UObject* Context);
		void UPDATE_TalkToVaughn(class UObject* Context);
		void UPDATE_GoToDesertZone(class UObject* Context);
		void Set_DefeatAgonizer9k(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void UPDATE_FindBigDonny(class UObject* Context);
		void Set_StartConveyor_GoldenTicket(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_KillBigDonny(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_StallTheCarnivora(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_StallTheCarnivora_Objective_PROXY();
		void Obj_StallTheCarnivora_Objective_PROXY_1();
		void Obj_SelectSongA_INVS(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_SelectSongA(class UObject* Context);
		void Obj_SelectSongB_INVS(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_SelectSongB(class UObject* Context);
		void Obj_SelectSongC_INVS(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_SelectSongC(class UObject* Context);
		void BC_Festival_01(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void BC_Festival_02(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_BC_Festival_01(class UObject* Context);
		void UPDATE_BC_Festival_02(class UObject* Context);
		void BC_Festival_03(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_BC_Festival_03(class UObject* Context);
		void BC_Festival_04(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_BC_Festival_04(class UObject* Context);
		void BC_Festival_05(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_BC_Festival_05(class UObject* Context);
		void BC_Festival_06(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_BC_Festival_06(class UObject* Context);
		void BC_Festival_07(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_BC_Festival_07(class UObject* Context);
		void BC_Festival_08(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_BC_Festival_08(class UObject* Context);
		void Inv_Obj_RegoupBeforeCarnivora(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_AllPlayersAreThereForCarnivora(class UObject* Context);
		void CLEAR_NotAllPlayersAreThereForCarnivora(class UObject* Context);
		void Obj_TannisTitleCard(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_DriveOnConveyor_NoTicket(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GetIntoCarnivora_Overarc(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_DriveOntoConveyor_GoldenTicket(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GetIntoCarnivora_Overarc_Objective_PROXY_2();
		void Obj_GetIntoCarnivora_Overarc_Objective_PROXY_3();
		void Obj_GetIntoCarnivora_Overarc_Objective_PROXY_4();
		void Obj_GetIntoCarnivora_Overarc_Objective_PROXY_5();
		void Obj_GetIntoCarnivora_Overarc_Objective_PROXY_6();
		void Obj_GetIntoCarnivora_Overarc_Objective_PROXY_7();
		void Obj_GetIntoCarnivora_Overarc_Objective_PROXY_8();
		void Obj_GetIntoCarnivora_Overarc_Objective_PROXY_9();
		void Obj_GetIntoCarnivora_Overarc_Objective_PROXY_10();
		void Obj_GetIntoCarnivora_Overarc_Objective_PROXY_11();
		void Set_Carnivora_BadassWave(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_StallTheCarnivora_Objective_PROXY_12();
		void Set_Carnivora_BadassWave2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_StallTheCarnivora_Objective_PROXY_13();
		void Obj_Carnivora_Wave2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ME_PlayerClearedCrew2(class UObject* Context);
		void Set_TannisTitleCard(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void UPDATE_EnterCarnivoraInterior(class UObject* Context);
		void Obj_DriveGoldenChariot(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ME_PlayerCaughtCarnivora(class UObject* Context);
		void UPDATE_EnterCarnivoraGates(class UObject* Context);
		void Inv_Obj_GoldenTicketCrane(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_FestivalCraneStart(class UObject* Context);
		void Set_WatchVidScreen(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_WatchVidScreen(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_WatchVidScreen(class UObject* Context);
		void AdvanceTo_GoToPrologue(class UObject* Context);
		void Obj_GoToDesertZone_Objective_PROXY_14();
		void Obj_GoToDesertZone_Objective_PROXY_15();
		void Set_GoToHubTown(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_GoToHubTown(class UObject* Context);
		void Obj_GetIntoCarnivora_Overarc_Objective_PROXY_16();
		void VO_PlayMarcusSponsorVO(class UObject* Context);
		void Obj_EnterFestival_Objective_PROXY_17();
		void Obj_RespawnGoldenChariot(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_RespawnGoldenChariot_Objective_PROXY_18();
		void Obj_DriveGoldenChariot_Objective_PROXY_19();
		void INVS_GoToMusicElevator(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_GoToMusicElevator(class UObject* Context);
		void Obj_EnterCarnivoraInterior(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MissionKickoff();
		void ExecuteUbergraph_Mission_Ep17_BigChase(int32_t EntryPoint);
		void KillBoss_ObjectiveActivated__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
