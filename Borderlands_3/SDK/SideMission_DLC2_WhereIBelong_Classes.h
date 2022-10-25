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
	 * BlueprintGeneratedClass SideMission_DLC2_WhereIBelong.SideMission_DLC2_WhereIBelong_C
	 * Size -> 0x0258 (FullSize[0x0768] - InheritedSize[0x0510])
	 */
	class USideMission_DLC2_WhereIBelong_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_GetCranePart_Initial_ObjSetVar;                      // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetCranePart_ObjVar;                                 // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PlaceCranePart_ObjSetVar;                            // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlaceCranePart_ObjVar;                               // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GetFlesh_ObjSetVar;                                  // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ClearOutNormalKriches_ObjVar;                        // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetFlesh_ObjVar;                                     // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ReturnToOmen_ObjSetVar;                              // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MeetOmenAtFishingHole_ObjVar;                        // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PlaceFlesh_ObjSetVar;                                // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlaceFlesh_ObjVar;                                   // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_DefendFisherman_1_ObjSetVar;                         // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_HelpFisherman_ObjVar;                                // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DefendFisherman_ObjVar;                              // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_HelpFisherman_ObjSetVar;                             // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_DefendFisherman_Final_ObjSetVar;                     // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_FishermanReadyForHelp_ObjVar;                    // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GetBloodJar_ObjSetVar;                               // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetBloodJar_ObjVar;                                  // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetBeastBlood_ObjVar;                                // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlaceBloodJar_ObjVar;                                // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_BloodBomb_ObjSetVar;                                 // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlaceBloodBomb_ObjVar;                               // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_BackAwayFromBlood_ObjVar;                            // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ShootBloodBomb_ObjVar;                               // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_ReadyForFishermanCast_ObjVar;                    // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_ReadyForDefend_ObjVar;                           // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_PlayerInDefendAreaAfterLoad_ObjVar;              // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GetFish_ObjSetVar;                                   // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetFish_ObjVar;                                      // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlaceFish_ObjVar;                                    // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ExitHut_ObjVar;                                      // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_FishermanInHut_ObjVar;                           // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_WaitForFishermanToChange_ObjVar;                     // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_CloseCageAndLowerIntoWater_ObjSetVar;                // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_FishermanInCage_ObjVar;                          // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_LowerFishermanToHisDestiny_ObjVar;                   // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_FishermanInWater_ObjVar;                         // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_LowerFisherman_ObjSetVar;                            // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_LowerFisherman_SEQ_ObjSetVar;                        // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_CraneCageOnPlatform_ObjVar;                      // 0x0658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_SEQ_CraneCageOnPlatform_ObjSetVar;                   // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_WatchFishermanCatchFish_ObjSetVar;                   // 0x0668(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_WatchFishermanCatchFish_ObjVar;                      // 0x0670(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_SEQ_FishFlying_ObjSetVar;                            // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_FishLanded_ObjVar;                               // 0x0680(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_CraneReadyToMove_ObjVar;                         // 0x0688(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_OmenAtFishingspot_ObjVar;                        // 0x0690(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CloseCage_ObjVar;                                    // 0x0698(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_FishermanInFrontOfCage_ObjVar;                   // 0x06A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReturnToCrane_ObjVar;                                // 0x06A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ReturnToCrane_ObjSetVar;                             // 0x06B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PlaceHeadlights_ObjSetVar;                           // 0x06B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_AttachHeadlight_L_ObjVar;                            // 0x06C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_FishermanOutOfHut_ObjVar;                        // 0x06C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_AttachHeadlight_R_ObjVar;                            // 0x06D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ActivateCrane_ObjVar;                                // 0x06D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillBadassKrich_ObjVar;                              // 0x06E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_BadassKrichSpawned_ObjVar;                       // 0x06E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetHeadlights_ObjVar;                                // 0x06F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GetHeadlights_ObjSetVar;                             // 0x06F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_bloodjarfull_ObjVar;                                 // 0x0700(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_GetBeastBloodPickup_ObjVar;                          // 0x0708(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_OpenCranePartDoor_ObjVar;                        // 0x0710(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PickupCranePart_ObjVar;                              // 0x0718(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PickUpCranePart_ObjSetVar;                           // 0x0720(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_ChestSpawned_ObjVar;                             // 0x0728(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GetBlood_ObjSetVar;                                  // 0x0730(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToBloodSource_ObjSetVar;                           // 0x0738(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToBloodSource_ObjVar;                              // 0x0740(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToBloodSource_BC1_ObjVar;                          // 0x0748(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_PlayerInCage_ObjVar;                                 // 0x0750(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToCage_ObjVar;                                     // 0x0758(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_ReadyForSeq_FishFlying_ObjVar;                   // 0x0760(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
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
		void OnDialogSequenceFinished_24();
		void MissionKickoff();
		void Obj_GetCranePart(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GetCranePart_Initial(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_PlaceCranePart(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_PlaceCranePart(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void ME_PlayerPlacedCranePart(class UObject* Context);
		void Obj_ClearOutNormalKriches(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GetFlesh(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void ME_PlayerClearedOutNormalKriches(class UObject* Context);
		void Obj_GetFlesh(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_MeetOmenAtFishingHole(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ReturnToOmen(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void ME_MetOmenAtFishingSpot(class UObject* Context);
		void Obj_PlaceFlesh(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_PlaceFlesh(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void ME_PlacedFlesh(class UObject* Context);
		void Obj_HelpFisherman(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_DefendFisherman_2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void ME_HelpedFisherman(class UObject* Context);
		void Obj_DefendFisherman(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_DefendFisherman_Final(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_DefendFisherman_Objective_PROXY();
		void Set_HelpFisherman(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void ME_DefendedFisherman(class UObject* Context);
		void INV_Obj_FishermanReadyForHelp(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ME_FishermanReadyForHelp(class UObject* Context);
		void Obj_GetBloodJar(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GetBloodJar(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GetBeastBlood(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_PlaceBloodJar(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ME_PlayerPlacedBloodJar(class UObject* Context);
		void ME_BloodJarFull(class UObject* Context);
		void Obj_PlaceBloodBomb(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_BloodBomb(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void ME_PlacedBloodBomb(class UObject* Context);
		void Obj_BackAwayFromBlood(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ME_BackedAwayFromBomb(class UObject* Context);
		void Obj_ShootBloodBomb(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ME_ShotBomb(class UObject* Context);
		void INV_Obj_ReadyForFishermanCast(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_Obj_ReadyForDefend(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ME_ReadyForFishermanCast(class UObject* Context);
		void ME_ReadyForDefend(class UObject* Context);
		void INV_Obj_PlayerInDefendAreaAfterLoad(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_Obj_PlayerInDefendAreaAfterLoad_Objective_PROXY_1();
		void ME_PlayerInDefendAreaAfterLoad(class UObject* Context);
		void Set_GetFish(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GetFish(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ME_PlaceFish(class UObject* Context);
		void Obj_PlaceFish(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_ExitHut(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ME_AllPlayersExitedHut(class UObject* Context);
		void ME_FishOnTheGround(class UObject* Context);
		void INV_Obj_FishermanInHut(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ME_FishermanInHut(class UObject* Context);
		void Obj_WaitForFishermanToChange(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ME_WaitedForFishermanToChange(class UObject* Context);
		void Set_CloseCageAndLowerIntoWater(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void INV_Obj_FishermanInCage(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ME_FishermanInCage(class UObject* Context);
		void Obj_LowerFishermanToHisDestiny(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ME_LoweredFisherman(class UObject* Context);
		void INV_Obj_FishermanInWater(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ME_FishermanInWater(class UObject* Context);
		void Set_LowerFisherman(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_LowerFisherman_SEQ(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void INV_Obj_CraneCageOnPlatform(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ME_CraneCageOnPlatform(class UObject* Context);
		void Set_SEQ_CraneCageOnPlatform(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_WatchFishermanCatchFish(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_WatchFishermanCatchFish(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void ME_AllPlayersInRangeLookingAtFish(class UObject* Context);
		void INV_Obj_FishLanded(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_SEQ_FishFlying(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void ME_FishLanded(class UObject* Context);
		void INV_Obj_CraneReadyToMove(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_Obj_OmenAtFishingspot(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ME_OmenArrivedAtFishingSpot(class UObject* Context);
		void INV_Obj_OmenAtFishingspot_Objective_PROXY_2();
		void ME_ActivatedCageDoorSwitch(class UObject* Context);
		void Obj_CloseCage(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_Obj_FishermanInFrontOfCage(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ME_FishermanInFrontOfCage(class UObject* Context);
		void Obj_ReturnToCrane(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ME_PlayerReturnedToTheCrane(class UObject* Context);
		void Set_ReturnToCrane(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_PlaceHeadlights(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_AttachHeadlight_L(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ME_AttachHeadlight_L(class UObject* Context);
		void INV_Obj_FishermanOutOfHut(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ME_FishermanOutOfHut(class UObject* Context);
		void Obj_AttachHeadlight_R(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ME_AttachHeadlight_R(class UObject* Context);
		void Obj_ActivateCrane(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ME_ActivateCrane(class UObject* Context);
		void Obj_KillBadassKrich(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ME_PlayerKilledBadassKrich(class UObject* Context);
		void INV_Obj_BadassKrichSpawned(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ME_BadassKrichSpawned(class UObject* Context);
		void Obj_GetHeadlights(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ME_GotHeadlights(class UObject* Context);
		void Set_GetHeadlights(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void INV_BloodJarFull(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ME_PickedUpBeastBlood(class UObject* Context);
		void INV_GetBeastBloodPickup(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_Obj_OpenCranePartDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_PickupCranePart(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_PickUpCranePart(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void ME_OpenedCranePartDoor(class UObject* Context);
		void INV_Obj_ChestSpawned(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ME_ChestSpawned(class UObject* Context);
		void Set_GetBlood(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_GoToBloodSource(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GoToBloodSource(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_GoToBloodSource_BC1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ME_WentToBloodSource(class UObject* Context);
		void ME_WentToBloodSource_BC1(class UObject* Context);
		void INV_PlayerInCage(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ME_PlayerInCage(class UObject* Context);
		void ME_NoPlayersInCage(class UObject* Context);
		void Obj_GoToCage(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ME_PlayerWentToCage(class UObject* Context);
		void INV_Obj_ReadyForSeq_FishFlying(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ME_ReadyForSeq_FishFlying(class UObject* Context);
		void INV_Obj_PlayerInDefendAreaAfterLoad_Objective_PROXY_3();
		void ExecuteUbergraph_SideMission_DLC2_WhereIBelong(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
