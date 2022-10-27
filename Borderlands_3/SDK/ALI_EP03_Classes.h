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
	 * BlueprintGeneratedClass ALI_EP03.ALI_EP03_C
	 * Size -> 0x0388 (FullSize[0x0880] - InheritedSize[0x04F8])
	 */
	class UALI_EP03_C : public UOakMission
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04F8(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_EnterMemory2_ObjSetVar;                              // 0x0500(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EnterMemory2_ObjVar;                                 // 0x0508(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Orb_ObjSetVar;                                       // 0x0510(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TakeOrb_ObjVar;                                      // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlaceOrb_ObjVar;                                     // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_PedestalReady_ObjVar;                            // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Her_ObjSetVar;                                       // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindHer_ObjVar;                                      // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetToMaya_ObjVar;                                    // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_ReadyForTrainTC_ObjVar;                          // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TC_Train_ObjSetVar;                                  // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   TC_Train_ObjVar;                                         // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_HuntTrain_Caboose_ObjSetVar;                         // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_HuntTrain_ObjVar;                                    // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Caboose_ObjSetVar;                                   // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Caboose1_Destroy_ObjVar;                             // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_RailPivot_ObjSetVar;                                 // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ActivateRailPivot_ObjVar;                            // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetMiningExplosives_ObjVar;                          // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_HuntTrainPart2_ObjSetVar;                            // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_RailPivotDone_ObjVar;                            // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Explosives_ObjSetVar;                                // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlaceExplosivesOnCaboose_ObjVar;                     // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ShootFuelTank_ObjVar;                                // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_SEQ_Done_HammerSmash_ObjVar;                     // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_ReadyForGoToTrainsLair_ObjVar;                   // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToTrainsLair_Initial_ObjSetVar;                    // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   GoToTrainsLair_ObjVar;                                   // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_ReadyForTrainPortalEvent_ObjVar;                 // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_EnterPortal_ObjSetVar;                               // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_TrainPortalEventComplete_ObjVar;                 // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   EnterPortal_ObjVar;                                      // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_SaveMaya_ObjSetVar;                                  // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FreeMaya_ObjVar;                                     // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DestroyTrain_ObjVar;                                 // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Whiteroom_ObjSetVar;                                 // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EnterDoor_ObjVar;                                    // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_ReadyForWhiteDoor_ObjVar;                        // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetGauntlet_ObjVar;                                  // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_SanctumWrapUp_ObjSetVar;                             // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReturnToSanctum_ObjVar;                              // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlaceGauntlet_ObjVar;                                // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GetBook_ObjSetVar;                                   // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetBook_ObjVar;                                      // 0x0658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_HuntTrain_BookStandIntro_ObjSetVar;                  // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlaceBookOnStand_ObjVar;                             // 0x0668(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_HuntTrain_BC_BookStandIntro_ObjVar;                  // 0x0670(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_HuntTrain_ToCaboose_BC2_ObjVar;                      // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_HuntTrain_PreBookStand_ObjSetVar;                    // 0x0680(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_BookStandAppeared_Plot1_ObjVar;                  // 0x0688(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_ReadyToDestroyBarricade_ObjVar;                  // 0x0690(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_HamerSmashSEQ_ObjSetVar;                             // 0x0698(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_Caboose1_ReadyToSpawn_ObjVar;                    // 0x06A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_HuntTrain_BC_ToLairIntro_ObjVar;                     // 0x06A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_BC_GoToLair_1_ObjVar;                            // 0x06B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_Caboose1Train_ReadyToSpawn_ObjVar;               // 0x06B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToTrainsLair_PreBook_ObjSetVar;                    // 0x06C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToTrainsLair_ToDropdown_ObjSetVar;                 // 0x06C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_ReadyForZenPedestal_ObjVar;                      // 0x06D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_ReadyForMayaToFreeHerself_ObjVar;                // 0x06D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_DestroyTrain_ObjSetVar;                              // 0x06E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindBarricade_ObjSetVar;                             // 0x06E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FoundBarricade_BC_ObjVar;                            // 0x06F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_HuntTrain_ToCaboose_BC1_ObjVar;                      // 0x06F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToTrainsLair_PutBookOnGround_ObjSetVar;            // 0x0700(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   GoToTrainsLair_PutBookOnGround_ObjVar;                   // 0x0708(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_ReadyForBookPlaceIntro_ObjVar;                       // 0x0710(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   GoToTrainsLair_DefeatAllGuardians_ObjVar;                // 0x0718(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TalkToHer_ToFail_ObjSetVar;                          // 0x0720(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GetToMaya_First_ObjSetVar;                           // 0x0728(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_ReadyForTrainSpawn_ObjVar;                       // 0x0730(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_ReadyForMayaToWhiteDoor_ObjVar;                  // 0x0738(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_ReadyForTannisBackground_1_ObjVar;               // 0x0740(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_ReadyForPlatforms_ObjVar;                        // 0x0748(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   GoToTrainsLair_BC2_ObjVar;                               // 0x0750(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   GoToTrainsLair_BC3_ObjVar;                               // 0x0758(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   GoToTrainsLair_BC4_ObjVar;                               // 0x0760(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToTrainsLair_Finish_ObjSetVar;                     // 0x0768(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_ArrivedAtDropdown_ObjVar;                            // 0x0770(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_ReadyForStationMoodSwap_ObjVar;                      // 0x0778(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Caboose1_ClearArea_ObjVar;                           // 0x0780(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_EnterPortalPrecheck_ObjVar;                          // 0x0788(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_ReadyforMoodSwap_Intro_ObjVar;                   // 0x0790(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_FoundBarricade_ObjVar;                           // 0x0798(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Caboose_FakeExit_ObjSetVar;                          // 0x07A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Caboose_FakeExit_ObjVar;                             // 0x07A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_ReadyForTrainPivotHint_ObjVar;                   // 0x07B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_ReadyForGhostKrieg_ObjVar;                           // 0x07B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_ReadyForGhostMaya_ObjVar;                            // 0x07C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_GhostSceneComplete_ObjVar;                           // 0x07C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_GauntletVisibleOnStatue_ObjVar;                  // 0x07D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   GoToTrainsLair_EscapeMindTrap_ObjVar;                    // 0x07D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToTrainsLair_EscapeMindTrap_final_ObjSetVar;       // 0x07E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   GoToTrainsLair_PIckUpBook_ObjVar;                        // 0x07E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_ReadyForKriegsInAnomalyIntro_ObjVar;             // 0x07F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ActivatePlatform_ObjVar;                             // 0x07F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_ReadyForStationKriegsSpawn_ObjVar;                   // 0x0800(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_StationKriegsDone_ObjVar;                            // 0x0808(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_MayaNearWhiteDoor_ObjVar;                        // 0x0810(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FollowMaya_ObjVar;                                   // 0x0818(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_ReadyForKriegsToEnterWhiteDoor_ObjVar;           // 0x0820(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_KriegsEnteredWhiteDoor_ObjVar;                   // 0x0828(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FollowMaya_ObjSetVar;                                // 0x0830(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_DoneWithMadKreig_Barricade_ObjVar;               // 0x0838(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_ReadyForTannisStationComment_ObjVar;                 // 0x0840(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToKrieg_Sanctum_ObjVar;                          // 0x0848(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReadyForGoToTrainsLair_PRECHECK_ObjVar;              // 0x0850(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_Caboose1_Destroy_Precheck_ObjVar;                // 0x0858(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_BookStandAppeared_Plot2_ObjVar;                  // 0x0860(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_BookStandAppeared_Plot3_ObjVar;                  // 0x0868(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_ReadyForBookStandAppear_ObjVar;                  // 0x0870(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_BookStandAppeared_Plot4_ObjVar;                  // 0x0878(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
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
		void OnDialogSequenceFinished_44();
		void Obj_PlaceOrb(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlacedOrb(class UObject* Context);
		void INV_Obj_PedestalReady(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PedestalReady(class UObject* Context);
		void Obj_TakeOrb(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_Her(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindHer(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_FoundHer(class UObject* Context);
		void Set_Orb(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GetToMaya(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_Obj_ReadyForTrainTC(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ReadyForTrainTC(class UObject* Context);
		void Set_TC_Train(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void TC_Train(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_TC_Train_Complete(class UObject* Context);
		void Set_HuntTrain_Caboose(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_HuntTrain(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MissionKickoff();
		void Set_Caboose(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_Caboose1_Destroy(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_EnteredMemory2(class UObject* Context);
		void INV_Obj_Caboose1_ReadyToSpawn(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Caboose1_ReadyToSpawn(class UObject* Context);
		void MCE_Caboose1_Destroyed(class UObject* Context);
		void Obj_HuntTrain_Objective_PROXY();
		void Set_RailPivot(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_EnterMemory2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ActivateRailPivot(class UObject* Context);
		void Obj_ActivateRailPivot(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_HuntTrain_Objective_PROXY_1();
		void Obj_GetMiningExplosives(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_HuntTrainPart2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_EnterMemory2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_RailPivotDone(class UObject* Context);
		void INV_Obj_RailPivotDone(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_Explosives(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_PlaceExplosivesOnCaboose(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlacedExplosives(class UObject* Context);
		void Obj_ShootFuelTank(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ShotFuelTank(class UObject* Context);
		void INV_Obj_SEQ_Done_HammerSmash(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_SEQ_Done_HammerSmash(class UObject* Context);
		void INV_Obj_ReadyForGoToTrainsLair(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_HuntTrain_Objective_PROXY_2();
		void Obj_HuntTrain_Objective_PROXY_3();
		void GoToTrainsLair(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GoToTrainsLair_Initial(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void INV_Obj_ReadyForTrainPortalEvent(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ReadyForTrainPortalEvent(class UObject* Context);
		void MCE_WentToTrainsLair(class UObject* Context);
		void Set_EnterPortal(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void INV_Obj_TrainPortalEventComplete(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_TrainPortalEventComplete(class UObject* Context);
		void GoToTrainsLair_Objective_PROXY_4();
		void GoToTrainsLair_Objective_PROXY_5();
		void EnterPortal(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_EnteredPortal(class UObject* Context);
		void Obj_FreeMaya(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_SaveMaya(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_DestroyTrain(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_DestroyedTrain(class UObject* Context);
		void Obj_EnterDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_WhiteRoom(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void INV_Obj_ReadyForWhiteDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_EnteredWhiteDoor(class UObject* Context);
		void Obj_GetGauntlet(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_SanctumWrapUp(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ReturnToSanctum(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ReturnedToSanctum(class UObject* Context);
		void Obj_PlaceGauntlet(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlacedGauntlet(class UObject* Context);
		void Set_GetBook(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GetBook(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_HuntTrain_BookStandIntro(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_HuntTrain_Objective_PROXY_6();
		void Obj_PlaceBookOnStand(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlacedBookOnStand(class UObject* Context);
		void Obj_HuntTrain_BC_BookStandIntro(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_HuntTrain_BC_BookStandIntro(class UObject* Context);
		void Obj_HuntTrain_ToCaboose_BC2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_HuntTrain_ToCaboose_BC2(class UObject* Context);
		void Set_HuntTrain_PreBookStand(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_HuntTrain_Objective_PROXY_7();
		void INV_Obj_BookStandAppeared_Plot1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_Obj_ReadyToDestroyBarricade(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ReadyToDestroyBarricade(class UObject* Context);
		void Set_HamerSmashSEQ(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_HuntTrain_Objective_PROXY_8();
		void Obj_HuntTrain_BC_ToLairIntro(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_HuntTrain_BC_ToLairIntro(class UObject* Context);
		void INV_Obj_BC_GoToLair_2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_BC_GoToLair1(class UObject* Context);
		void INV_Obj_Caboose1Train_ReadyToSpawn(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void GoToTrainsLair_EscapeMindTrap(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_EscapedMindTrap(class UObject* Context);
		void Set_GoToTrainsLair_PreBook(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_GoToTrainsLair_ToDropdown(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void INV_Obj_ReadyForZenPedestal(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_Obj_ReadyForMayaToFreeHerself(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_DestroyTrain(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_ReadyForMayaToFreeHerself(class UObject* Context);
		void Set_FindBarricade(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_HuntTrain_Objective_PROXY_9();
		void Obj_FoundBarricade_BC(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_FoundBarricade(class UObject* Context);
		void Obj_HuntTrain_ToCaboose_BC1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_HuntTrain_ToCaboose_BC1(class UObject* Context);
		void GoToTrainsLair_PutBookOnGround(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PutBookOnGround(class UObject* Context);
		void Set_GoToTrainsLair_PutBookOnGround(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void INV_ReadyForBookPlaceIntro(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ReadyForBookPlaceIntro(class UObject* Context);
		void Set_GoToTrainsLair_EscapeMindTrap_final(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void GoToTrainsLair_EscapeMindTrap_Objective_PROXY_10();
		void GoToTrainsLair_DefeatAllGuardians(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_TalkToHer_ToFail(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_GetToMaya_First(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GetToMaya_Objective_PROXY_11();
		void Obj_DestroyTrain_Objective_PROXY_12();
		void INV_Obj_ReadyForTrainSpawn(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_Obj_ReadyForMayaToWhiteDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_AllGuardianDead(class UObject* Context);
		void INV_Obj_ReadyForTannisBackground_2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_Obj_ReadyForPlatforms(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void GoToTrainsLair_BC2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_GoToTrainsLair_BC2(class UObject* Context);
		void GoToTrainsLair_BC3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_GoToTrainsLair_BC3(class UObject* Context);
		void GoToTrainsLair_BC4(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_GoToTrainsLair_BC4(class UObject* Context);
		void Set_GoToTrainsLair_Finish(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void GoToTrainsLair_Objective_PROXY_13();
		void INV_ArrivedAtDropdown(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ArrivedAtDropdown(class UObject* Context);
		void MCE_ReadyForStationMoodSwap(class UObject* Context);
		void INV_ReadyForStationMoodSwap(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_Caboose1_ClearArea(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ClearedArea(class UObject* Context);
		void INV_EnterPortalPrecheck(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_Obj_ReadyforMoodSwap_Intro(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ReadyForIntroMoodSwap(class UObject* Context);
		void INV_Obj_FoundBarricade(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_Caboose_FakeExit(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_HuntTrain_Objective_PROXY_14();
		void Obj_Caboose_FakeExit(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_Obj_ReadyForTrainPivotHint(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_ReadyForGhostKrieg(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_ReadyForGhostMaya(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_GhostSceneComplete(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_Obj_GauntletVisibleOnStatue(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_GauntletVisibleOnStatue(class UObject* Context);
		void GoToTrainsLair_PIckUpBook(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_Obj_ReadyForKriegsInAnomalyIntro(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_ActivatePlatform(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ActivatePlatform(class UObject* Context);
		void GoToTrainsLair_Objective_PROXY_15();
		void MCE_ReadyForStationKreigsSpawn(class UObject* Context);
		void INV_ReadyForStationKriegsSpawn(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_StationKriegsDone(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_Obj_MayaNearWhiteDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_FollowMaya(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_FollowedMaya(class UObject* Context);
		void MCE_MayaNearWhiteDoor(class UObject* Context);
		void INV_Obj_ReadyForKriegsToEnterWhiteDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ReadyForKriegsToEnterWhiteDoor(class UObject* Context);
		void INV_Obj_KriegsEnteredWhiteDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ReadyForPlayerToEnterWhiteDoor(class UObject* Context);
		void Set_FollowMaya(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void INV_Obj_DoneWithMadKreig_Barricade(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ReadyForTannisStationComment(class UObject* Context);
		void INV_ReadyForTannisStationComment(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_TalkToKrieg_Sanctum(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_TalkedToKriegSanctum_EP03(class UObject* Context);
		void MCE_ReadyForGoToTrainsLair_PRECHECK(class UObject* Context);
		void Obj_ReadyForGoToTrainsLair_PRECHECK(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Caboose1_Destroy_Precheck(class UObject* Context);
		void INV_Obj_Caboose1_Destroy_Precheck(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_Obj_BookStandAppeared_Plot2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_BookStandAppeared_Plot2(class UObject* Context);
		void MCE_BookStandAppeared_Plot1(class UObject* Context);
		void INV_Obj_BookStandAppeared_Plot3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_BookStandAppeared_Plot3(class UObject* Context);
		void INV_Obj_ReadyForBookStandAppear(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_Obj_BookStandAppeared_Plot4(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_BookStandAppeared_Plot4(class UObject* Context);
		void ExecuteUbergraph_ALI_EP03(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
