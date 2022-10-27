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
	 * BlueprintGeneratedClass Mission_DLC1_Ep02_MeetCrad.Mission_DLC1_Ep02_MeetCrad_C
	 * Size -> 0x01F8 (FullSize[0x0708] - InheritedSize[0x0510])
	 */
	class UMission_DLC1_Ep02_MeetCrad_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_GoToRedLight_1_ObjSetVar;                            // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToRedLIghtDistrict_2_ObjVar;                       // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                TalkToContact1_1_ObjSetVar;                              // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToContact1_ObjVar;                               // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                TalkToContact2_ObjSetVar;                                // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToContact2_ObjVar;                               // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                TalkToContact1AndKillJerks_ObjSetVar;                    // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillJerks_ObjVar;                                    // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                GetPackage_ObjSetVar;                                    // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetPackage_ObjVar;                                   // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Deliverpackage_ObjSetVar;                                // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DeliverPackage_ObjVar;                               // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillTrashers_ObjSetVar;                              // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillTrashers_ObjVar;                                 // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_MeetEmber_1_ObjSetVar;                               // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MeetEmber_ObjVar;                                    // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_BotheredCustomers_ObjVar;                        // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_PackageExploded_ObjVar;                          // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_ReadyToSpawnLoaders_ObjVar;                      // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_PackageReadyToExplode_ObjVar;                    // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ClearSubwayFromLoaders_ObjSetVar;                    // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToRedLight_2_ObjSetVar;                            // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_UseTheHyperHoop_ObjVar;                              // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_EnterSubwayArea_ObjVar;                              // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ClearSubwayFromLoaders_ObjVar;                       // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                FindEmber_ObjSetVar;                                     // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_EnteredFoxxi_ObjVar;                             // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                TalkToContact1_Real_ObjSetVar;                           // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_ReadyToTeleportTimToSubway_ObjVar;                   // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_TimTeleportedToSubway_ObjVar;                        // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_TimOpenedSubway_ObjVar;                              // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_FoundFirstDancer_ObjVar;                         // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_KillTrashers_PreCheck_ObjVar;                    // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Ember_TC_ObjSetVar;                                  // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_MeetEmber_ObjSetVar;                                 // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Inv_Ember_TC_ObjVar;                                 // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_ArrivedAtBarricade_ObjVar;                       // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TalkToContact3_ObjSetVar;                            // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_SawFoxxi_ObjVar;                                 // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_ClearSubwayPreCheck_ObjVar;                          // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_EmberGreetings_VO_ObjVar;                        // 0x0658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_UseHyperHoopPreCheck_ObjVar;                     // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetPackage_BC1_ObjVar;                               // 0x0668(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MeetEmber_BC_1_ObjVar;                               // 0x0670(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_ReadyToCloseCurtain_ObjVar;                      // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_obj_JerksKilled_ObjVar;                              // 0x0680(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_ReadyToCloseCurtain_Contact2_ObjVar;             // 0x0688(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_ReadyToCloseCurtain_Contact3_ObjVar;             // 0x0690(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToContact_3_ObjVar;                              // 0x0698(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_DonePlayingPrettyBoyVideo_Subway_ObjVar;         // 0x06A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_PlayerEnteredSubway_ObjVar;                      // 0x06A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_ReadyToOpenDoor_ObjVar;                          // 0x06B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_OpenDoorToSubwayArea_ObjVar;                         // 0x06B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                DeliverPackage_ClearArea_ObjSetVar;                      // 0x06C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DeliverPackage_ClearArea_ObjVar;                     // 0x06C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                DeliverPackage_PreClearArea_ObjSetVar;                   // 0x06D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_PlayerInSpaArena_ObjVar;                         // 0x06D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DeliverPackage_ClearArea_PreCheck_ObjVar;            // 0x06E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_TimothyReadyToTeleportBackToHideout_ObjVar;      // 0x06E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_TimothyTeleportedBackToHideout_ObjVar;           // 0x06F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_GoToSubwayDoor_ObjVar;                           // 0x06F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_TimAtSubwayDoor_ObjVar;                              // 0x0700(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
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
		void OnDialogSequenceFinished_21();
		void OnDialogSequenceFinished_20();
		void OnDialogSequenceFinished_19();
		void OnDialogSequenceFinished_18();
		void Set_KillTrashers(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_MeetEmber(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_MeetEmber_2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_KillTrashers(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_Obj_BotheredCustomers(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerBotheredCustomers(class UObject* Context);
		void MCE_PlayerKilledCustomers(class UObject* Context);
		void MCE_PlayerDeliveredPackage(class UObject* Context);
		void INV_Obj_PackageExploded(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_Obj_ReadyToSpawnLoaders(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerKilledTrashers(class UObject* Context);
		void MCE_PackageExploded(class UObject* Context);
		void MCE_PlayerTalkedToCrad(class UObject* Context);
		void INV_Obj_PackageReadyToExplode(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MissionKickoff();
		void Set_ClearSubwayFromLoaders(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_GoToRedLight_3(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_UseTheHyperHoop(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_EnterSubwayArea(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_ClearSubwayFromLoaders(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerWentToSubway(class UObject* Context);
		void MCE_PlayerClearedSubwayFromLoaders(class UObject* Context);
		void MCE_UsedTheHyperHoop(class UObject* Context);
		void GetPackage(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_PlayerTalkedToContact3(class UObject* Context);
		void FindEmber(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_InterruptedFindEmber(class UObject* Context);
		void Obj_GetPackage(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_EnteredFoxxi(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_EnteredFoxxi(class UObject* Context);
		void TalkToContact1_Real(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void INV_ReadyToTeleportTimToSubway(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_TimTeleportedToSubway(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_TimTeleportedToSubway(class UObject* Context);
		void INV_TimOpenedSubway(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_TiimOpenedSubway(class UObject* Context);
		void INV_Obj_FoundFirstDancer(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_MeetEmber_Objective_PROXY();
		void Obj_MeetEmber_Objective_PROXY_1();
		void Obj_MeetEmber_Objective_PROXY_2();
		void Obj_MeetEmber_Objective_PROXY_3();
		void Obj_MeetEmber_Objective_PROXY_4();
		void Obj_MeetEmber_Objective_PROXY_5();
		void INV_Obj_KillTrashers_PreCheck(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_Ember_TC(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_MeetEmber_Objective_PROXY_6();
		void Set_Ember_TC(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_MeetEmber(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_MeetEmber_Objective_PROXY_7();
		void DeliverPackage(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_DeliverPackage(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void TalkToContact1AndKillJerks(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void INV_Obj_ArrivedAtBarricade(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_ArrivedAtBarricade(class UObject* Context);
		void Obj_KillJerks(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerTalkedToContact2(class UObject* Context);
		void Set_TalkToContact3(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_MeetEmber_Objective_PROXY_8();
		void TalkToContact2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_INV_SawFoxxi(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_SawFoxxi(class UObject* Context);
		void Obj_TalkToContact1_Objective_PROXY_9();
		void Obj_TalkToContact1_Objective_PROXY_10();
		void Obj_TalkToContact2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_ClearSubwayPreCheck(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_EmberGreetings_VO(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_Obj_UseHyperHoopPreCheck(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_GetPackage_BC1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerArrived_GetPackage_BC1(class UObject* Context);
		void Obj_MeetEmber_BC_2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerArrived_MeetEmberBC_2(class UObject* Context);
		void Obj_MeetEmber_BC_1_Objective_PROXY_11();
		void Obj_MeetEmber_BC_1_Objective_PROXY_12();
		void INV_Obj_ReadyToCloseCurtain(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_obj_JerksKilled(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_Obj_ReadyToCloseCurtain_Contact2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_Obj_ReadyToCloseCurtain_Contact3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_TalkToContact_4(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_Obj_DonePlayingPrettyBoyVideo_Subway(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_DoneWithSubwayVid(class UObject* Context);
		void INV_Obj_PlayerEnteredSubway(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerEnteredSubway(class UObject* Context);
		void INV_Obj_ReadyToOpenDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_GoToRedLIghtDistrict_2_Objective_PROXY_13();
		void Obj_GoToRedLIghtDistrict_2_Objective_PROXY_14();
		void INV_OpenDoorToSubwayArea(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerOpenedDoorToSubwayArea(class UObject* Context);
		void DeliverPackage_ClearArea(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_PlayerClearedArea(class UObject* Context);
		void Obj_DeliverPackage_ClearArea(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void DeliverPackage_PreClearArea(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_DeliverPackage_Objective_PROXY_15();
		void Obj_DeliverPackage_Objective_PROXY_16();
		void INV_Obj_PlayerInSpaArena(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerInSpaArena(class UObject* Context);
		void Obj_DeliverPackage_ClearArea_PreCheck(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_Obj_TimothyReadyToTeleportBackToHideout(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_TimReadyToTeleportBackToHideout(class UObject* Context);
		void INV_Obj_TimothyTeleportedBackToHideout(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_TiimTeleportedBackToHideout(class UObject* Context);
		void INV_Obj_GoToSubwayDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerWentToSubwayDoor(class UObject* Context);
		void INV_TimAtSubwayDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_TimAtSubwayDoor(class UObject* Context);
		void ClearTimothyTeleportObjectives(class UObject* Context);
		void MCE_PlayerWentToRedLight(class UObject* Context);
		void Set_GoToRedLight_2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GoToRedLIghtDistrict_3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerTalkedToContact1(class UObject* Context);
		void TalkToContact1_2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TalkToContact1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ExecuteUbergraph_Mission_DLC1_Ep02_MeetCrad(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
