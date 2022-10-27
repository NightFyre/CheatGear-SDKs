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
	 * BlueprintGeneratedClass Mission_Ep11_PrisonBreak.Mission_Ep11_PrisonBreak_C
	 * Size -> 0x04C8 (FullSize[0x09D8] - InheritedSize[0x0510])
	 */
	class UMission_Ep11_PrisonBreak_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		bool                                                       bEnteredLodge;                                           // 0x0518(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bVO_TakeFirearmsFinished;                                // 0x0519(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bCompleteLoad_TalkToBrick;                               // 0x051A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bCompleteLoad_FrontDoor;                                 // 0x051B(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bCompleteLoad_HallDoor;                                  // 0x051C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bCompleteLoad_ReturnToppings;                            // 0x051D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CO1J[0x2];                                   // 0x051E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Int_YardEnemiesDead;                                     // 0x0520(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_NG16[0x4];                                   // 0x0524(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjectiveSet*                                Set_GoToLodge_ObjSetVar;                                 // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillCoV_ObjVar;                                      // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToPrison_ObjSetVar;                                // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToPrison_ObjVar;                                   // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_CollectPizzaToppings_ObjSetVar;                      // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CollectPizzaToppings_ObjVar;                         // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ReturnPizzaToppings_ObjSetVar;                       // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReturnPizzaToppings_ObjVar;                          // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillCoV_ObjSetVar;                                   // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_DeliverThePizza_ObjSetVar;                           // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DeliverThePizza_ObjVar;                              // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_DetonatePizza_ObjSetVar;                             // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DetonatePizza_ObjVar;                                // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillWarden_ObjSetVar;                                // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillWarden_ObjVar;                                   // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MeetWainwright_ObjVar;                               // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TalkToBrick_ObjSetVar;                               // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToBrick_ObjVar;                                  // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TakePizzaBomb_ObjSetVar;                             // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TakePizzaBomb_ObjVar;                                // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ClearTheBridge_ObjSetVar;                            // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ClearTheBridge_ObjVar;                               // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   NITRO_Collect_ObjVar;                                    // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   DETONATOR_Collect_ObjVar;                                // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   WIRES_Collect_ObjVar;                                    // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TITLECARD_Wainwright_ObjSetVar;                      // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TITLECARD_Wainwright_ObjVar;                         // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TITLECARD_Brick_ObjSetVar;                           // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TITLECARD_Brick_ObjVar;                              // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TITLECARD_Tina_ObjSetVar;                            // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TITLECARD_Tina_ObjVar;                               // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TITLECARD_Mordecai_ObjSetVar;                        // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TITLECARD_Mordecai_ObjVar;                           // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TITLECARD_Warden_ObjSetVar;                          // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TITLECARD_Warden_ObjVar;                             // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PlanetTitleCard_ObjSetVar;                           // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlanetTitleCard_ObjVar;                              // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Navigate_Eden6_ObjSetVar;                            // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Navigate_Eden6_ObjVar;                               // 0x0658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToLodge_INVS_ObjVar;                               // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_CrossTheBridge_ObjSetVar;                            // 0x0668(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToBossArena_ObjVar;                                // 0x0670(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToBossArena_ObjSetVar;                             // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindHammerlock_ObjVar;                               // 0x0680(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CollectToppingsCounter_INVS_ObjVar;                  // 0x0688(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlacePizza_INVS_ObjVar;                              // 0x0690(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TalkToTina_ObjSetVar;                                // 0x0698(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToTina_ObjVar;                                   // 0x06A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_OpenFrontGate_ObjVar;                                // 0x06A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillReinforcements_ObjSetVar;                        // 0x06B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillReinforcements_ObjVar;                           // 0x06B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MoveIntoPrison_ObjVar;                               // 0x06C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MoveIntoHall_ObjVar;                                 // 0x06C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_DefeatAmbush_ObjVar;                                 // 0x06D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_OpenFrontDoor_ObjSetVar;                             // 0x06D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillAttackers_ObjSetVar;                             // 0x06E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_DefeatAmbush_ObjSetVar;                              // 0x06E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindTina_ObjSetVar;                                  // 0x06F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindTina_ObjVar;                                     // 0x06F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillAttackers_ObjVar;                                // 0x0700(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FollowBrick_ObjVar;                                  // 0x0708(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FollowBrick_Chkpnt3_ObjSetVar;                       // 0x0710(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FreeHammerlock_ObjSetVar;                            // 0x0718(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FreeHammerlock_ObjVar;                               // 0x0720(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CleanupMeetWainwright_INVS_ObjVar;                   // 0x0728(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Breadcrumb_Lodge1_ObjVar;                            // 0x0730(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Breadcrumb_Lodge2_ObjVar;                            // 0x0738(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Breadcrumb_Lodge3_ObjVar;                            // 0x0740(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Breadcrumb_Lodge4_ObjVar;                            // 0x0748(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Breadcrumb_Lodge5_ObjVar;                            // 0x0750(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Breadcrumb_Lodge6_ObjVar;                            // 0x0758(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   NITRO_SearchLootables_INVS_ObjVar;                       // 0x0760(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   DETONATOR_KillEnemy_INVS_ObjVar;                         // 0x0768(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_EnterLodge_ObjSetVar;                                // 0x0770(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EnterLodge_ObjVar;                                   // 0x0778(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_CleanupMeetWainwright_ObjSetVar;                     // 0x0780(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillCoV_VOcue_INVS_ObjVar;                           // 0x0788(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_BrickMoveToTinaDoor_ObjSetVar;                       // 0x0790(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_SpeakToHammerlock_ObjSetVar;                         // 0x0798(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SpeakToHammerlock_ObjVar;                            // 0x07A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_BC_EnterTinaRoom_ObjVar;                             // 0x07A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_OpenFrontGate_ObjSetVar;                             // 0x07B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   NITRO_PowerGenerator_INVS_ObjVar;                        // 0x07B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   NITRO_UseElevator_INVS_ObjVar;                           // 0x07C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   NITRO_EnterStorage_INVS_ObjVar;                          // 0x07C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CrossTheBridge_INVS_ObjVar;                          // 0x07D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlayElevatorSequence_ObjVar;                         // 0x07D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillCoV_INVS_ObjVar;                                 // 0x07E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_BrickPunchesFrontSwitch_ObjVar;                      // 0x07E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TinaOpensYard_ObjVar;                                // 0x07F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ClearTheYard_ObjVar;                                 // 0x07F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ClearTheYard_ObjSetVar;                              // 0x0800(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MeetMuscle_ObjVar;                                   // 0x0808(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_MeetMuscle_ObjSetVar;                                // 0x0810(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FrontDoorOpened_ObjVar;                              // 0x0818(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_BrickOpensHallDoor_ObjSetVar;                        // 0x0820(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_BrickPunchesHallSwitch_ObjVar;                       // 0x0828(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_HallDoorOpened_ObjVar;                               // 0x0830(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ApproachFrontGate_ObjSetVar;                         // 0x0838(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ApproachFrontGate_INVS_ObjVar;                       // 0x0840(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Event1Complete;                                          // 0x0848(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Event2Complete;                                          // 0x0849(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IOFP[0x6];                                   // 0x084A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjective*                                   Obj_EnterTinaRoom_ObjVar;                                // 0x0850(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EnterAmbushArena_ObjVar;                             // 0x0858(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_BrickPunchesTinaSwitch_INVS_ObjVar;                  // 0x0860(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TinaDoorOpened_ObjVar;                               // 0x0868(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_BrickMovesToTinaDoor_ObjVar;                         // 0x0870(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ApproachFrontGate_Waypoint_ObjVar;                   // 0x0878(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Breadcrumb_Lodge7_ObjVar;                            // 0x0880(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToBuilding_INVS_ObjVar;                            // 0x0888(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToBathroom_INVS_ObjVar;                            // 0x0890(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   WIRES_EnterCrawlSpace_INVS_ObjVar;                       // 0x0898(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   WIRES_EnterWiresRoom_INVS_ObjVar;                        // 0x08A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_TalkToHammerlock_ObjSetVar;                          // 0x08A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToHammerlock_ObjVar;                             // 0x08B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_WainwrightAnswers_INVS_ObjVar;                       // 0x08B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_UseDropPod_OnSanc_ObjSetVar;                         // 0x08C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_UseDropPod_ObjVar;                                   // 0x08C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReNavigate_Wetlands_ObjVar;                          // 0x08D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_UseDropPod_OnPlanet_ObjSetVar;                       // 0x08D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Breadcrumb_Lodge8_ObjVar;                            // 0x08E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Breadcrumb_Lodge9_ObjVar;                            // 0x08E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Breadcrumb_Lodge10_ObjVar;                           // 0x08F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TyreenTaunt_INVS_ObjVar;                             // 0x08F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_WainwrightVO_INVS_ObjVar;                            // 0x0900(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_BrickOpensFrontDoor_ObjVar;                          // 0x0908(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_BrickOpensHallDoor_ObjVar;                           // 0x0910(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_MoveIntoHall_ObjSetVar;                              // 0x0918(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_BrickOpensTinaDoor_INVS_ObjVar;                      // 0x0920(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_BrickOpenTinaDoor_ObjSetVar;                         // 0x0928(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_TalkToWainwright_ObjSetVar;                          // 0x0930(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToWainwright_ObjVar;                             // 0x0938(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GuyGetsRunOver_INVS_ObjVar;                          // 0x0940(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Breadcrumb_Lodge3b_ObjVar;                           // 0x0948(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_BuildPizzaMeshSwap_INVS_ObjVar;                      // 0x0950(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_OpenBridgeDoor_ObjSetVar;                            // 0x0958(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_OpenBridgeDoor_INVS_ObjVar;                          // 0x0960(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Breadcrumb_Prison01_ObjVar;                          // 0x0968(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Breadcrumb_Prison02_ObjVar;                          // 0x0970(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Breadcrumb_Prison03_ObjVar;                          // 0x0978(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Breadcrumb_Prison04_ObjVar;                          // 0x0980(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Breadcrumb_Prison05_ObjVar;                          // 0x0988(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Breadcrumb_Prison06_ObjVar;                          // 0x0990(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Breadcrumb_Prison07_ObjVar;                          // 0x0998(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Breadcrumb_Prison08_ObjVar;                          // 0x09A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Breadcrumb_Prison09_ObjVar;                          // 0x09A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToPrisonEntry_ObjVar;                              // 0x09B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToTransition_ObjSetVar;                            // 0x09B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 VO_PizzaNag;                                             // 0x09C0(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_DQBE[0x4];                                   // 0x09CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjective*                                   OBJ_Hidden_WainwrightSceneComplete_ObjVar;               // 0x09D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
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
		void OnDialogSequenceFinished_46();
		void OnDialogSequenceFinished_45();
		void Obj_MeetWainwright(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_TalkToBrick(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TalkToBrick(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_TakePizzaBomb(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TakePizzaBomb(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ClearTheBridge(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ClearTheBridge(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ClearedBridge(class UObject* Context);
		void NITRO_Collect(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void DETONATOR_Collect(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void WIRES_Collect(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_TITLECARD_Wainwright(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TITLECARD_Wainwright(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_TITLECARD_Brick(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TITLECARD_Brick(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_TITLECARD_Tina(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TITLECARD_Tina(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_TITLECARD_Mordecai(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TITLECARD_Mordecai(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_TITLECARD_Warden(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TITLECARD_Warden(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_PlanetTitleCard(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_PlanetTitleCard(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_Navigate_Eden6(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_Navigate_Eden6(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_Navigate_Eden6(class UObject* Context);
		void Obj_MeetWainwright_Objective_PROXY();
		void Obj_GoToLodge_INVS(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_MeetWainwright_Objective_PROXY_1();
		void UPDATE_GoToPrison(class UObject* Context);
		void UPDATE_GoToLodge(class UObject* Context);
		void Set_CrossTheBridge(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_GoToBossArena(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GoToBossArena(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_GoToBossArena(class UObject* Context);
		void Obj_FindHammerlock(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_CollectToppingsCounter_INVS(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_PlacePizza_INVS(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_DeliverThePizza_Objective_PROXY_2();
		void Obj_DeliverThePizza_Objective_PROXY_3();
		void Obj_OpenFrontGate(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_OpenFrontGate(class UObject* Context);
		void Set_KillReinforcements(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_KillReinforcements(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_KilledReinforcements(class UObject* Context);
		void Obj_MoveIntoPrison(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_FollowBrick1(class UObject* Context);
		void Set_OpenFrontDoor(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_KillAttackers(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_MoveIntoHall(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_FollowBrick2(class UObject* Context);
		void SET_DefeatAmbush(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_DefeatAmbush(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_DefeatAmbush(class UObject* Context);
		void Set_FindTina(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindTina(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_EnterTinaRoom(class UObject* Context);
		void Obj_KillAttackers(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_KillHallwayCoV(class UObject* Context);
		void Obj_FollowBrick(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_FollowBrick_Objective_PROXY_4();
		void Set_FollowBrick_Chkpnt3(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FollowBrick_Objective_PROXY_5();
		void Set_FreeHammerlock(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FreeHammerlock(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_FreeHammerlock(class UObject* Context);
		void UPDATE_KillWarden(class UObject* Context);
		void Obj_CleanupMeetWainwright_INVS(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_TalkedToBrick(class UObject* Context);
		void MCE_KilledCoV(class UObject* Context);
		void Obj_Breadcrumb_Lodge1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_Breadcrumb_Lodge2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_Breadcrumb_Lodge3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_Breadcrumb_Lodge4(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_Breadcrumb_Lodge5(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_Breadcrumb_Lodge6(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_BreadcrumbLodge1(class UObject* Context);
		void UPDATE_BreadcrumbLodge2(class UObject* Context);
		void UPDATE_BreadcrumbLodge3(class UObject* Context);
		void UPDATE_BreadcrumbLodge4(class UObject* Context);
		void UPDATE_BreadcrumbLodge5(class UObject* Context);
		void UPDATE_BreadcrumbLodge6(class UObject* Context);
		void Obj_KillWarden(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void NITRO_SearchLootables_INVS(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_NITRO_SearchLootables(class UObject* Context);
		void Set_KillWarden(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void DETONATOR_KillEnemy_INVS(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_Detonator_KillEnemy(class UObject* Context);
		void Obj_EnterLodge(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_EnterLodge(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void UPDATE_EnterLodge(class UObject* Context);
		void Set_CleanupMeetWainwright(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_KillCoV_VOcue_INVS(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_KillLodgeCoV_VOcue(class UObject* Context);
		void Set_BrickMoveToTinaDoor(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_SpeakToHammerlock(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_SpeakToHammerlock(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void UPDATE_SpeakToHammerlock(class UObject* Context);
		void Obj_BC_EnterTinaRoom(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_BC_EnterTinaRoom(class UObject* Context);
		void Set_OpenFrontGate(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void UPDATE_TalkToTina(class UObject* Context);
		void UPDATE_ReturnPizzaToppings(class UObject* Context);
		void UPDATE_TakePizzaBomb(class UObject* Context);
		void NITRO_PowerGenerator_INVS(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_NITRO_PowerGenerator(class UObject* Context);
		void NITRO_UseElevator_INVS(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_NITRO_UseElevator(class UObject* Context);
		void NITRO_EnterStorage_INVS(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_NITRO_EnterStorage(class UObject* Context);
		void UPDATE_PlacePizza(class UObject* Context);
		void UPDATE_DetonatePizza(class UObject* Context);
		void MCE_VO_TinaIngredients(class UObject* Context);
		void Obj_DetonatePizza(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_CrossTheBridge_INVS(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_CrossTheBridge(class UObject* Context);
		void Set_DetonatePizza(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void UPDATE_TinaBuiltBomb(class UObject* Context);
		void Obj_PlayElevatorSequence(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_KillCoV_INVS(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_KillCoV_INVS_Objective_PROXY_6();
		void Obj_BrickPunchesFrontSwitch(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_BrickPunchesFrontSwitch(class UObject* Context);
		void Obj_TinaOpensYard(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_TinaOpensYard(class UObject* Context);
		void Obj_DeliverThePizza(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_DeliverThePizza(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_TalkToTina(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindHammerlock_Objective_PROXY_7();
		void Obj_ClearTheYard(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ClearTheYard(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindHammerlock_Objective_PROXY_8();
		void Set_MeetMuscle(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindHammerlock_Objective_PROXY_9();
		void Obj_MeetMuscle(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_MeetMuscle_Objective_PROXY_10();
		void Obj_MeetMuscle_Objective_PROXY_11();
		void Obj_FrontDoorOpened(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_FrontDoorOpened(class UObject* Context);
		void Set_BrickOpensHallDoor(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FollowBrick_Objective_PROXY_12();
		void Obj_BrickPunchesHallSwitch(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_BrickPunchesHallSwitch(class UObject* Context);
		void Obj_HallDoorOpened(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_HallDoorOpened(class UObject* Context);
		void Set_ApproachFrontGate(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindHammerlock_Objective_PROXY_13();
		void Obj_MeetMuscle_Objective_PROXY_14();
		void Obj_ApproachFrontGate_INVS(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_ApproachFrontGate(class UObject* Context);
		void Obj_FindHammerlock_Objective_PROXY_15();
		void Obj_FindHammerlock_Objective_PROXY_16();
		void Obj_FindHammerlock_Objective_PROXY_17();
		void Obj_EnterTinaRoom(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_FindTina_Objective_PROXY_18();
		void Obj_FindHammerlock_Objective_PROXY_19();
		void Obj_FindTina_Objective_PROXY_20();
		void Obj_FindHammerlock_Objective_PROXY_21();
		void Obj_FindTina_Objective_PROXY_22();
		void Obj_FindHammerlock_Objective_PROXY_23();
		void Obj_FindTina_Objective_PROXY_24();
		void Obj_EnterAmbushArena(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_EnterAmbushArena(class UObject* Context);
		void Obj_FindHammerlock_Objective_PROXY_25();
		void Obj_FindTina_Objective_PROXY_26();
		void Obj_FindHammerlock_Objective_PROXY_27();
		void Obj_FindTina_Objective_PROXY_28();
		void Obj_BrickPunchesTinaSwitch_INVS(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_TinaDoorOpened(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_TinaDoorOpened(class UObject* Context);
		void UPDATE_BrickAtTinaDoor(class UObject* Context);
		void Obj_FindHammerlock_Objective_PROXY_29();
		void Obj_BrickMovesToTinaDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_BrickPunchesTinaSwitch(class UObject* Context);
		void Obj_ApproachFrontGate_Waypoint(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_BreadcrumbLodge7(class UObject* Context);
		void Obj_Breadcrumb_Lodge7(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_GoToBuilding_INVS(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_GoToBuilding(class UObject* Context);
		void Obj_GoToBathroom_INVS(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_GoToBathroom(class UObject* Context);
		void Set_KillCoV(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void WIRES_EnterCrawlSpace_INVS(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_WIRES_EnterCrawlSpace(class UObject* Context);
		void WIRES_EnterWiresRoom_INVS(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_WIRES_EnterWiresRoom(class UObject* Context);
		void Obj_ReturnPizzaToppings(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ReturnPizzaToppings(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void CLEAR_NITRO_LeftStorage(class UObject* Context);
		void SET_TalkToHammerlock(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TalkToHammerlock(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_WainwrightAnswers_INVS(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_WainwrightAnswers(class UObject* Context);
		void ADVANCE_Navigate_Eden6(class UObject* Context);
		void Set_UseDropPod_OnSanc(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_UseDropPod(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_ReNavigate_Wetlands(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_UseDropPod_OnPlanet(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_CollectPizzaToppings(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_UseDropPod_Objective_PROXY_30();
		void Obj_TalkToTina(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_CollectPizzaToppings(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GoToPrison(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void AdvanceTo_PlanetTitleCard(class UObject* Context);
		void ActiveLoad_CallHammerlock(class UObject* Context);
		void Obj_Breadcrumb_Lodge8(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_Breadcrumb_Lodge9(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_Breadcrumb_Lodge10(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_BreadcrumbLodge8(class UObject* Context);
		void UPDATE_BreadcrumbLodge9(class UObject* Context);
		void UPDATE_BreadcrumbLodge10(class UObject* Context);
		void UPDATE_CleanupMeetWainwright(class UObject* Context);
		void Obj_TyreenTaunt_INVS(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_TyreenTaunt(class UObject* Context);
		void UPDATE_ClearTheYard(class UObject* Context);
		void Obj_WainwrightVO_INVS(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_WainwrightVO(class UObject* Context);
		void Obj_BrickOpensFrontDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_BrickOpensFrontDoort(class UObject* Context);
		void Set_GoToPrison(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_BrickOpensHallDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_BrickOpensHallDoor(class UObject* Context);
		void Obj_KillCoV(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_MoveIntoHall(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindHammerlock_Objective_PROXY_31();
		void Obj_FollowBrick_Objective_PROXY_32();
		void Obj_FindTina_Objective_PROXY_33();
		void Obj_BrickOpensTinaDoor_INVS(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_BrickOpensTinaDoor(class UObject* Context);
		void Obj_FollowBrick_Objective_PROXY_34();
		void Set_BrickOpenTinaDoor(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindHammerlock_Objective_PROXY_35();
		void Obj_FindTina_Objective_PROXY_36();
		void Set_GoToLodge(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_TalkToWainwright(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TalkToWainwright(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_TalkToWainwright(class UObject* Context);
		void Obj_GuyGetsRunOver_INVS(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_GuyGetsRunOver(class UObject* Context);
		void UPDATE_ReNavigate_Wetlands(class UObject* Context);
		void Obj_Breadcrumb_Lodge3b(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_BreadcrumbLodge3b(class UObject* Context);
		void Obj_BuildPizzaMeshSwap_INVS(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_BuildPizzaMeshSwap(class UObject* Context);
		void Set_OpenBridgeDoor(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_OpenBridgeDoor_INVS(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_DeliverThePizza_Objective_PROXY_37();
		void UPDATE_OpenBridgeDoor(class UObject* Context);
		void Obj_Breadcrumb_Prison01(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_Breadcrumb_Prison02(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_Breadcrumb_Prison03(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_Breadcrumb_Prison04(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_Breadcrumb_Prison05(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_Breadcrumb_Prison06(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_Breadcrumb_Prison07(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_Breadcrumb_Prison08(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_Breadcrumb_Prison09(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_BC_Prison01(class UObject* Context);
		void UPDATE_BC_Prison02(class UObject* Context);
		void UPDATE_BC_Prison03(class UObject* Context);
		void UPDATE_BC_Prison04(class UObject* Context);
		void UPDATE_BC_Prison05(class UObject* Context);
		void UPDATE_BC_Prison06(class UObject* Context);
		void UPDATE_BC_Prison07(class UObject* Context);
		void UPDATE_BC_Prison08(class UObject* Context);
		void UPDATE_BC_Prison09(class UObject* Context);
		void Set_GoToTransition(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GoToPrisonEntry(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_GoToPrison_Objective_PROXY_38();
		void Obj_MeetMuscle_Objective_PROXY_39();
		void UPDATE_GoToPrisonEntry(class UObject* Context);
		void Update_Hidden_WainwrightSceneComplete(class UObject* Context);
		void OBJ_Hidden_WainwrightSceneComplete(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ExecuteUbergraph_Mission_Ep11_PrisonBreak(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
