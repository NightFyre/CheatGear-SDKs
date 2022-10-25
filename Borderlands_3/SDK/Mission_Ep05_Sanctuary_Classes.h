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
	 * BlueprintGeneratedClass Mission_Ep05_Sanctuary.Mission_Ep05_Sanctuary_C
	 * Size -> 0x02A0 (FullSize[0x07B0] - InheritedSize[0x0510])
	 */
	class UMission_Ep05_Sanctuary_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                SET_HelpCrew_ObjSetVar;                                  // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_CheckOnTannis_ObjVar;                                // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_ReleaseTrappedCrew_ObjVar;                           // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_LiftStuckSupplyDoor_ObjSetVar;                       // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_BangOnSupplyDoor_ObjVar;                             // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_FindNightclubOwner_ObjSetVar;                        // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_FindNightclub_ObjVar;                                // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_MoxxieTitlecard_ObjVar;                              // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_TalkToMoxxie_ObjSetVar;                              // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_TalkToMoxxie_ObjVar;                                 // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_UseSlotMachine_ObjSetVar;                            // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_UseSlotMachine_ObjVar;                               // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_TakeEridium_ObjSetVar;                               // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_TakeEridium_ObjVar;                                  // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_PurchaseSomethingFromEarl_ObjSetVar;                 // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_PurchaseSomethingFromEarl_ObjVar;                    // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_InstallPart_ObjSetVar;                               // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_InstallPart_ObjVar;                                  // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Navigate_NewPlanet_ObjSetVar;                        // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Navigate_NewPlanet_ObjVar;                           // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TalkToLilith_ObjSetVar;                              // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToLilith_ObjVar;                                 // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_TalkToEllie_ObjSetVar;                               // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_TalkToEllie_ObjVar;                                  // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_CheckOnMarcus_ObjVar;                                // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_InstallNavigationDevice_ObjSetVar;                   // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_InstallNavigationDevice_ObjVar;                      // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_OpenCargoBayToSpace_ObjSetVar;                       // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_OpenCargoBayDoor_ObjVar;                             // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_GoToSupplyClosetArea_ObjSetVar;                      // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_GoToSupplyClosetArea_ObjVar;                         // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Hidden_ExposeCargoBay_ObjVar;                            // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_OpenBayToSpace_CargoDoorOpens_ObjSetVar;             // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_TravelToPromethea_PlayersInZ_ObjSetVar;              // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Hidden_PlayersInZeroG_ObjVar;                            // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   HiddenCargoBayOnFire_ObjVar;                             // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Hidden_LowerShutters_ObjVar;                             // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_WinSlotMachine_ObjVar;                               // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_MissionPrologue_ObjSetVar;                           // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_PickUpEntropyAccelerator_ObjSetVar;                  // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_PickUpEntropyAccelerator_ObjVar;                     // 0x0658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_ClaptrapDisaster_RedAlert_ObjVar;                    // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_ResetEnviromentalControls_ObjVar;                    // 0x0668(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ShootFireSuppressors_ObjVar;                         // 0x0670(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_CheckCrewArea_ObjVar;                                // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_Hidden_SpawnMoxxieParty_ObjVar;                      // 0x0680(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Hidden_OpenGarageRoomPlayerDoors_ObjVar;                 // 0x0688(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_TalkToEllie_Breadcrumb01_ObjVar;                     // 0x0690(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_TitleCard_Moxxie_ObjSetVar;                          // 0x0698(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_FindNightclub_Breadcrumb01_ObjVar;                   // 0x06A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_FindNightclub_Breadcrumb02_ObjVar;                   // 0x06A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_FindNightclub_Breadcrumb03_ObjVar;                   // 0x06B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_FindNightclub_Breadcrumb04_ObjVar;                   // 0x06B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_FindNightclub_Breadcrumb05_ObjVar;                   // 0x06C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EnterShip_ObjVar;                                    // 0x06C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Cinematic_SanctuaryTakeoff_ObjVar;                   // 0x06D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_EnterShip_ObjSetVar;                                 // 0x06D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Cinematic_SanctuaryTakeoff_ObjSetVar;                // 0x06E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_TalkToMarcusSDU_ObjVar;                              // 0x06E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_BrowseSDU_ObjVar;                                    // 0x06F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bTemp_PlayerBackpackTier0;                               // 0x06F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MG3Z[0x7];                                   // 0x06F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjectiveSet*                                SET_ReturnToBridge_PreVidscreen_ObjSetVar;               // 0x0700(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_Vidscreen_Plucked_ObjSetVar;                         // 0x0708(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_ReturnToBrdige_ObjVar;                               // 0x0710(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_Hidden_Vidscreen_Plucked_ObjVar;                     // 0x0718(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ReturnToBridge_PostVidscreen_ObjSetVar;              // 0x0720(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_TalkToLilith_MissionStart_ObjSetVar;                 // 0x0728(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_TalkToLilith_MissionStart_ObjVar;                    // 0x0730(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_ShootFireSupressor_01_ObjVar;                        // 0x0738(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_ShootFireSupressor_02_ObjVar;                        // 0x0740(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_ShootFireSupressor_03_ObjVar;                        // 0x0748(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_CheckOnMarcus_ChainComplete_ObjVar;                  // 0x0750(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bSkippingToEndOfMarcusChain;                             // 0x0758(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Z1N0[0x7];                                   // 0x0759(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjective*                                   OBJ_FollowMoxxieToSlots_ObjVar;                          // 0x0760(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_FollowMoxxieToSlots_ObjSetVar;                       // 0x0768(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_Hidden_EngineLightsUp_ObjVar;                        // 0x0770(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bZeroGCompletedOnActiveLoad;                             // 0x0778(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_251G[0x7];                                   // 0x0779(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjective*                                   OBJ_CheckOnTannis_ChainComplete_ObjVar;                  // 0x0780(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_CheckCrewArea_ChainComplete_ObjVar;                  // 0x0788(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Cinematic_CallToAction_ObjVar;                       // 0x0790(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Cinematic_CallToAction_ObjSetVar;                    // 0x0798(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_EnterShip_Pandora_ObjVar;                            // 0x07A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_Hidden_SparkAstroNav_Show_ObjVar;                    // 0x07A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AreHelpCrewObjectivesComplete(bool* AllComplete);
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
		void OnDialogSequenceFinished_44();
		void OnDialogSequenceFinished_43();
		void OnDialogSequenceFinished_42();
		void OnDialogSequenceFinished_41();
		void OnDialogSequenceFinished_40();
		void OBJ_CheckOnTannis(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_HelpCrew(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_CheckOnTannis(class UObject* Context);
		void OBJ_ReleaseTrappedCrew(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_ReleaseTrappedCrew(class UObject* Context);
		void OBJ_BangOnSupplyDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_LiftStuckSupplyDoor(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_BangOnSupplyDoor(class UObject* Context);
		void OBJ_FindNightclub(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_FindNightclubOwner(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_FindNightclub(class UObject* Context);
		void OBJ_TalkToMoxxie(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_TalkToMoxxie(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_TalkToMoxxie(class UObject* Context);
		void OBJ_UseSlotMachine(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_UseSlotMachine(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_UseSlotMachine(class UObject* Context);
		void OBJ_TakeEridium(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_TakeEridium(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_TakeEridium(class UObject* Context);
		void OBJ_PurchaseSomethingFromEarl(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_PurchaseSomethingFromEarl(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_PurchaseSomethingFromEarl(class UObject* Context);
		void OBJ_InstallPart(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_InstallPart(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_InstallPart(class UObject* Context);
		void Obj_Navigate_NewPlanet(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_Navigate_NewPlanet(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_Navigate_NewPlanet(class UObject* Context);
		void Obj_TalkToLilith(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_TalkToLilith(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void UPDATE_TalkToLilith(class UObject* Context);
		void Update_MoxxieTitlecard(class UObject* Context);
		void OBJ_MoxxieTitlecard(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void AdvanceTo_FollowMoxxie(class UObject* Context);
		void SET_TalkToEllie(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_TalkToEllie(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_GoToSupplyClosetArea(class UObject* Context);
		void OBJ_CheckOnMarcus(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_CheckOnMarcus(class UObject* Context);
		void SET_InstallNavigationDevice(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_InstallNavigationDevice(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_InstallNavigationDevice(class UObject* Context);
		void SET_OpenCargoBayToSpace(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_GoToSupplyClosetArea(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_OpenCargoBayDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_OpenCargoBayDoor(class UObject* Context);
		void OBJ_GoToSupplyClosetArea(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_TalkToEllie(class UObject* Context);
		void Advance_OpenCargoBayDoor(class UObject* Context);
		void Hidden_ExposeCargoBay(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_ExposeCargoBay(class UObject* Context);
		void SET_OpenBayToSpace_CargoDoorOpens(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_OpenCargoBayDoor_Objective_PROXY();
		void Advance_OpenBayToSpace_CargoBayOpens(class UObject* Context);
		void SET_TravelToPromethea_PlayersInZ(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Hidden_PlayersInZeroG(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_PlayersInZeroG(class UObject* Context);
		void Advance_TravelToPromethea_PlayersInZeroG(class UObject* Context);
		void OBJ_InstallNavigationDevice_Objective_PROXY_1();
		void HiddenCargoBayOnFire(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_an_Objective_in_the_Details();
		void Advance_GoToSupplyCloset(class UObject* Context);
		void Hidden_LowerShutters(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_LowerShutters(class UObject* Context);
		void OBJ_WinSlotMachine(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_WinSlotMachine(class UObject* Context);
		void Set_an_Objective_in_the_Details();
		void Set_an_Objective_in_the_Details();
		void Set_an_Objective_in_the_Details();
		void SET_MissionPrologue(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Advance_TalkToEllie(class UObject* Context);
		void Advance_BangOnDoor(class UObject* Context);
		void SET_PickUpEntropyAccelerator(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_PickUpEntropyAccelerator(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_PickUpEntropyAccelerator(class UObject* Context);
		void OBJ_ClaptrapDisaster_RedAlert(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_ClaptrapDisaster_RedAlert(class UObject* Context);
		void Advance_Navigate_NewPlanet(class UObject* Context);
		void OBJ_ResetEnviromentalControls(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_ResetEnviromentalControls(class UObject* Context);
		void Obj_ShootFireSuppressors(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_FireSuppressorShot(class UObject* Context);
		void OBJ_CheckCrewArea(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_CheckOnCrewArea(class UObject* Context);
		void MCE_AreHelpCrewObjectivesComplete(class UObject* Context);
		void Advance_PickUpEntropyAccelerator(class UObject* Context);
		void OBJ_Hidden_SpawnMoxxieParty(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_Hidden_SpawnMoxxieParty_Objective_PROXY_6();
		void OBJ_Hidden_SpawnMoxxieParty_Objective_PROXY_7();
		void OBJ_Hidden_SpawnMoxxieParty_Objective_PROXY_8();
		void Hidden_OpenGarageRoomPlayerDoors(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Hidden_OpenGarageRoomPlayerDoors_Objective_PROXY_9();
		void Update_Hidden_OpenGarageRoomPlayerDoors(class UObject* Context);
		void OBJ_TalkToEllie_Breadcrumb01(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_TalkToEllie_Breadcrumb01(class UObject* Context);
		void SET_TitleCard_Moxxie(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_FindNightclub_Breadcrumb01(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_FindNightclub_Breadcrumb01(class UObject* Context);
		void OBJ_FindNightclub_Breadcrumb02(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_FindNightclub_Breadcrumb03(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_FindNightclub_Breadcrumb04(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_FindNightclub_Breadcrumb05(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_FindNightclub_Breadcrumb02(class UObject* Context);
		void Update_FindNightclub_Breadcrumb03(class UObject* Context);
		void Update_FindNightclub_Breadcrumb04(class UObject* Context);
		void Update_FindNightclub_Breadcrumb05(class UObject* Context);
		void AdvanceTo_BCObjective_FindNightclub_Breadcrumb05(class UObject* Context);
		void Set_EnterShip(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_EnterShip(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_Cinematic_SanctuaryTakeoff(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_Cinematic_SanctuaryTakeoff(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Advance_EnterShip(class UObject* Context);
		void OBJ_TalkToMarcusSDU(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_TalkToMarcusSDU(class UObject* Context);
		void OBJ_BrowseSDU(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_BrowseSDU(class UObject* Context);
		void MCE_PlayerBackedOutOfSDU_SelectedNothing(class UObject* Context);
		void MCE_ShootSupressors_OnComplete_HasSampleSDUTier_False(class UObject* Context);
		void MCE_ShootSupressors_OnComplete_HasSampleSDUTier_True(class UObject* Context);
		void SET_ReturnToBridge_PreVidscreen(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_ReturnToBridge(class UObject* Context);
		void SET_Vidscreen_Plucked(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_ReturnToBrdige(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_Hidden_Vidscreen_Plucked(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ReturnToBridge_PostVidscreen(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_ReturnToBrdige_Objective_PROXY_10();
		void OBJ_ReturnToBrdige_Objective_PROXY_11();
		void SET_TalkToLilith_MissionStart(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_TalkToLilith_MissionStart(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_TalkToLilith_MissionStart(class UObject* Context);
		void AdvanceTo_InstallNavigationDevice(class UObject* Context);
		void AdvanceTo_HelpCrew(class UObject* Context);
		void OBJ_ShootFireSupressor_01(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_ShootFireSupressor_02(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_ShootFireSupressor_03(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_ShootFireSuppressor_01(class UObject* Context);
		void Update_ShootFireSuppressor_02(class UObject* Context);
		void Update_ShootFireSuppressor_03(class UObject* Context);
		void OBJ_CheckOnMarcus_ChainComplete(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void CE_SkipToEndOfMarcusChain();
		void MCE_PlayerBackedOutOfSDU_SelectedSDU(class UObject* Context);
		void OBJ_FollowMoxxieToSlots(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_FollowMoxxieToSlots(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_FollowMoxxieToSlots(class UObject* Context);
		void OBJ_Hidden_EngineLightsUp(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_Hidden_EngineLightsUp(class UObject* Context);
		void Update_Vidscreen_Plucked(class UObject* Context);
		void Thwart_PurchaseSomethingFromEarl(class UObject* Context);
		void OBJ_CheckOnTannis_ChainComplete(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Unpause_ResetEnviromentalConrols(class UObject* Context);
		void Unpause_ReleaseTrappedCrew(class UObject* Context);
		void OBJ_CheckCrewArea_ChainComplete(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_Cinematic_CallToAction(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_Cinematic_CallToAction(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void AdvanceTo_CallToAction(class UObject* Context);
		void Update_EnterShip(class UObject* Context);
		void OBJ_EnterShip_Pandora(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_Hidden_SparkAstroNav_Show(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_SparkAstronav(class UObject* Context);
		void ExecuteUbergraph_Mission_Ep05_Sanctuary(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
