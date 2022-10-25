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
	 * BlueprintGeneratedClass Mission_Ep02_Bathhouse.Mission_Ep02_Bathhouse_C
	 * Size -> 0x03C0 (FullSize[0x08D0] - InheritedSize[0x0510])
	 */
	class UMission_Ep02_Bathhouse_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		EMissionObjectiveEvent                                     ObjStatus_ChaddUsesLift;                                 // 0x0518(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VLDL[0x7];                                   // 0x0519(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjectiveSet*                                Set_MeetJunoChurch_ObjSetVar;                            // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MeetJunoChurch_ObjVar;                               // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TalkToTitusInCell_ObjSetVar;                         // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToTitusInCell_ObjVar;                            // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TakeCoresploderThingFromTitus_ObjVar;                // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToLodgeEntrance_ObjSetVar;                         // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToLodgeEntrance_ObjVar;                            // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillBathhouseBoss_ObjSetVar;                         // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillBathhouseBoss_ObjVar;                            // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToMountainPass_LodgeMap_ObjSetVar;                 // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToMountainPass_LodgeMap_ObjVar;                    // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_StepOnPlantLift_ObjSetVar;                           // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_StepOnPlantLift_ObjVar;                              // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_UnlockTreasureRoom_ObjSetVar;                        // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_UnlockTreasureRoom_ObjVar;                           // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_OpenPrisonerCell_ObjSetVar;                          // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_OpenPrisonerCell_ObjVar;                             // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindAWayIntoTheLodge_ObjSetVar;                      // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_EnterLodge_ObjSetVar;                                // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EnterLodge_ObjVar;                                   // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindTownStone_ObjSetVar;                             // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DestroyStolenGoods_UseRockSploder_ObjVar;            // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_DestroyStolenGoods_ObjSetVar;                        // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindTownStone_ObjVar;                                // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TakePlantLiftSyringe_ObjSetVar;                      // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TakePlantLiftSyringe_ObjVar;                         // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GrabJetBeastKey_ObjSetVar;                           // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GrabJetBeastKey_ObjVar;                              // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GrabBossKey_ObjSetVar;                               // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GrabBossKey_ObjVar;                                  // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FollowPrisonerToMural_ObjSetVar;                     // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FollowPrisonerToMural_ObjVar;                        // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GiveJunoBadge_ObjVar;                                // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TakeJetBeast_ObjSetVar;                              // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TakeJetBeast_ObjVar;                                 // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MeleeCoresploderToFreeTitus_ObjVar;                  // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TakeCoresploderThingFromTitus_ObjSetVar;             // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_MeleeCoresploderToFreeTitus_ObjSetVar;               // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_OpenJetbeastKeyLockBox_ObjVar;                       // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToBossArena_ObjVar;                                // 0x0658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToBossArena_ObjSetVar;                             // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToLodge_ObjSetVar;                                 // 0x0668(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToLodge_ObjVar;                                    // 0x0670(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ClearGangTitusArea_ObjVar;                           // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ClearGangTitusArea_ObjSetVar;                        // 0x0680(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MeleeSploderPlantsInCombat_ObjVar;                   // 0x0688(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GotoAtriumEntrance_ObjVar;                           // 0x0690(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GiveJunoBadge_ObjSetVar;                             // 0x0698(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_LeaveTown_ObjSetVar;                                 // 0x06A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindJuno_TownMap_ObjSetVar;                          // 0x06A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindJuno_TownMap_ObjVar;                             // 0x06B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_LeaveTown_ObjVar;                                    // 0x06B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_OpenShed_FrontierMap_ObjSetVar;                      // 0x06C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_OpenShed_FrontierMap_ObjVar;                         // 0x06C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Breadcrumb01_ObjVar;                                 // 0x06D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Breadcrumb02_ObjVar;                                 // 0x06D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Breadcrumb03_ObjVar;                                 // 0x06E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Breadcrumb04_ObjVar;                                 // 0x06E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Breadcrumb05_ObjVar;                                 // 0x06F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Breadcrumb06_ObjVar;                                 // 0x06F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Breadcrumb07_ObjVar;                                 // 0x0700(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_EnterTreasureRoom_ObjSetVar;                         // 0x0708(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EnterTreasureRoom_ObjVar;                            // 0x0710(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TakeRuninerTechDoc_ObjSetVar;                        // 0x0718(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TakeRuinerTechDoc_ObjVar;                            // 0x0720(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_CrossTheFrontier_ObjSetVar;                          // 0x0728(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CrossTheFrontier_ObjVar;                             // 0x0730(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToLodgeCourtyard_ObjSetVar;                        // 0x0738(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToLodgeCourtyard_ObjVar;                           // 0x0740(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindAWayIntoTheLodge_ObjVar;                         // 0x0748(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_IgniteFireworks_ObjSetVar;                           // 0x0750(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_IgniteFireworks_UseRockSploder_ObjVar;               // 0x0758(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_RescueTitus_ObjVar;                                  // 0x0760(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FollowTitusToLodgeEntrance_ObjSetVar;                // 0x0768(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FollowTitusToLodgeEntrance_ObjVar;                   // 0x0770(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_DefeatCelebratingDevilriders_ObjSetVar;              // 0x0778(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DefeatCelebratingDevilriders_ObjVar;                 // 0x0780(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_DakotaTitleCard_ObjSetVar;                           // 0x0788(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DakotaTitleCard_ObjVar;                              // 0x0790(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_BothRescueComplete_ObjVar;                           // 0x0798(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_DisruptHotWaterFlow1_ObjSetVar;                      // 0x07A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DisruptHotWaterFlow1_ObjVar;                         // 0x07A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindSomethingDestrutiveGasCan_ObjSetVar;             // 0x07B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindSomethingDestructiveGasCan_ObjVar;               // 0x07B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_EnterBathhouse_ObjSetVar;                            // 0x07C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PlaceGasCan_ObjSetVar;                               // 0x07C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlaceGasCan_ObjVar;                                  // 0x07D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FollowJunoPlantLift_ObjSetVar;                       // 0x07D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FollowJunoPlantLift_ObjVar;                          // 0x07E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Hidden_LeaveTownDialog_ObjVar;                       // 0x07E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_BossTitleCard_ObjSetVar;                             // 0x07F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_BossTitleCard_ObjVar;                                // 0x07F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Breadcrumb_Frontier01_ObjVar;                        // 0x0800(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Breadcrumb_Frontier02_ObjVar;                        // 0x0808(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Breadcrumb_Frontier03_ObjVar;                        // 0x0810(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Breadcrumb_Frontier04_ObjVar;                        // 0x0818(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Breadcrumb_Frontier05_ObjVar;                        // 0x0820(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EnterBathhouse_ObjVar;                               // 0x0828(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindStolenGoods_ObjSetVar;                           // 0x0830(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindStolenGoods_ObjVar;                              // 0x0838(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindHotWaterPipes_ObjVar;                            // 0x0840(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindHotWaterPipes_ObjSetVar;                         // 0x0848(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ExitGateToTitusArea_ObjVar;                          // 0x0850(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindLodgeVistaView_ObjSetVar;                        // 0x0858(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindLodgeVistaView_ObjVar;                           // 0x0860(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindSomethingToBurnTowels_ObjSetVar;                 // 0x0868(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindSomethingToBurnTowels_ObjVar;                    // 0x0870(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_MeetJunoPreTC_ObjSetVar;                             // 0x0878(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MeetJunoPreTC_ObjVar;                                // 0x0880(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_DisruptHotWaterFlow2_ObjSetVar;                      // 0x0888(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DisruptHotWaterFlow2_ObjVar;                         // 0x0890(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_DisruptHotWaterFlow3_ObjSetVar;                      // 0x0898(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DisruptHotWaterFlow3_ObjVar;                         // 0x08A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DestroyStolenGoods_ObjVar;                           // 0x08A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DisruptHotWater_UseRockSploder_ObjVar;               // 0x08B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_LodgeDoorGoAway_ObjVar;                              // 0x08B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_IgniteFireworks_ObjVar;                              // 0x08C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_RocketLaunch_ObjVar;                                 // 0x08C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
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
		void Obj_GoToLodge(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Go_To_Lodge(class UObject* Context);
		void Set_GoToLodge(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindTownStone_Objective_PROXY_4();
		void Set_GoToBossArena(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_ClearGangTitusArea(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ClearGangTitusArea(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Clear_Gang_Titus_Area(class UObject* Context);
		void MCE_Go_To_Boss_Arena(class UObject* Context);
		void Obj_GoToBossArena(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Open_JetBeast_Lock_Box(class UObject* Context);
		void Obj_MeleeSploderPlantsInCombat(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Melee_Sploder_Plants_In_Combat(class UObject* Context);
		void MCE_Find_Town_Stone(class UObject* Context);
		void Obj_GoToAtriumEntrance(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Go_To_Atrium_Entrance(class UObject* Context);
		void Set_GiveJunoBadge(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_OpenJetbeastKeyLockBox(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_LeaveTown(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_MeleeCoresploderToFreeTitus(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_Melee_Coresploder_To_Free_Titus(class UObject* Context);
		void Set_FindJuno_TownMap(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindJuno_TownMap(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Find_Juno_Town_Map(class UObject* Context);
		void Obj_MeleeCoresploderToFreeTitus(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_TakeCoresploderThingFromTitus(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_Take_JetBeast(class UObject* Context);
		void Obj_LeaveTown(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Leave_Town(class UObject* Context);
		void Set_OpenShed_FrontierMap(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_OpenShed_FrontierMap(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Open_Shed_Frontier_Map(class UObject* Context);
		void Obj_TakeJetBeast(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_TakeJetBeast(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_Breadcrumb01(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_Breadcrumb01(class UObject* Context);
		void Update_Breadcrumb02(class UObject* Context);
		void Obj_Breadcrumb02(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_Breadcrumb03(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_Breadcrumb03(class UObject* Context);
		void Obj_Breadcrumb04(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_Breadcrumb04(class UObject* Context);
		void Obj_Breadcrumb05(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_Breadcrumb05(class UObject* Context);
		void Obj_Breadcrumb06(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_Breadcrumb06(class UObject* Context);
		void Obj_Breadcrumb07(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_Breadcrumb07(class UObject* Context);
		void Set_EnterTreasureRoom(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_EnterTreasureRoom(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Enter_Treasure_Room(class UObject* Context);
		void MCE_Give_Juno_Badge(class UObject* Context);
		void Obj_GiveJunoBadge(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Follow_Prisoner_To_Mural(class UObject* Context);
		void Obj_FindTownStone_Objective_PROXY_5();
		void Set_TakeRuninerTechDoc(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TakeRuinerTechDoc(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Take_Ruiner_Tech_Doc(class UObject* Context);
		void Obj_FollowPrisonerToMural(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_FollowPrisonerToMural(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindTownStone_Objective_PROXY_3();
		void MCE_Grab_Boss_Key(class UObject* Context);
		void MCE_Leave_Town_Folk_Banter(class UObject* Context);
		void MCE_Cross_The_Frontier(class UObject* Context);
		void Set_CrossTheFrontier(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_CrossTheFrontier(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_GrabBossKey(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GrabBossKey(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_GoToLodgeCourtyard(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GoToLodgeCourtyard(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Grab_JetBeast_Key(class UObject* Context);
		void Obj_GrabJetBeastKey(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GrabJetBeastKey(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_Go_To_Lodge_Courtyard(class UObject* Context);
		void Obj_FindAWayIntoTheLodge(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Find_A_Way_Into_The_Lodge(class UObject* Context);
		void MCE_Take_Plant_Lift_Syringe(class UObject* Context);
		void Obj_TakePlantLiftSyringe(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_TakePlantLiftSyringe(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindTownStone_Objective_PROXY_2();
		void Set_IgniteFireworks(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_Ignite_Fireworks_Use_Rock_Sploder(class UObject* Context);
		void Obj_IgniteFireworks_UseRockSploder(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_FindTownStone_Objective_PROXY_6();
		void Obj_FindTownStone_Objective_PROXY_7();
		void MCE_Update_Open_Prisoner_Cell(class UObject* Context);
		void Obj_RescueTitus(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Rescue_Titus(class UObject* Context);
		void Obj_FollowTitusToLodgeEntrance(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Follow_Titus_To_Lodge_Entrance(class UObject* Context);
		void Set_FollowTitusToLodgeEntrance(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindTownStone_Objective_PROXY_1();
		void Obj_FindTownStone_Objective_PROXY();
		void Obj_FindTownStone(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_GoToLodge_Objective_PROXY_8();
		void Obj_GoToLodge_Objective_PROXY_9();
		void Obj_GoToLodge_Objective_PROXY_10();
		void Obj_GoToLodge_Objective_PROXY_11();
		void Obj_GoToLodge_Objective_PROXY_12();
		void Obj_GoToLodge_Objective_PROXY_13();
		void MCE_Go_To_Lodge_Entrance(class UObject* Context);
		void Obj_DefeatCelebratingDevilriders(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Defeat_Celebrating_Devilriders(class UObject* Context);
		void Set_DefeatCelebratingDevilriders(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_Destroy_Stolen_Goods_Use_Rock_Sploder(class UObject* Context);
		void MCE_Enter_Lodge(class UObject* Context);
		void MCE_Talk_To_Titus_In_Cell(class UObject* Context);
		void Set_DestroyStolenGoods(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_DakotaTitleCard(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_DakotaTitleCard(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_BothRescueComplete(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Both_Rescue_Complete(class UObject* Context);
		void Set_DisruptHotWaterFlow1(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_DisruptHotWaterFlow1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_FindSomethingDestructiveGasCan(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_FindSomethingDestrutiveGasCan(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_EnterBathhouse(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_DestroyStolenGoods_UseRockSploder(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_FindTownStone(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_EnterLodge(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_EnterLodge(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_FindAWayIntoTheLodge(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_Open_Prisoner_Cell(class UObject* Context);
		void Obj_OpenPrisonerCell(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Disrupt_Hot_Water_Flow(class UObject* Context);
		void MCE_Find_Gas_Can(class UObject* Context);
		void Obj_PlaceGasCan(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_PlaceGasCan(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindTownStone_Objective_PROXY_14();
		void Set_OpenPrisonerCell(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_Unlock_Treasure_Room(class UObject* Context);
		void Obj_UnlockTreasureRoom(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Place_Gas_Can(class UObject* Context);
		void Obj_FindTownStone_Objective_PROXY_15();
		void Obj_FindTownStone_Objective_PROXY_16();
		void Set_UnlockTreasureRoom(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_Step_On_Plant_Lift(class UObject* Context);
		void Obj_StepOnPlantLift(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_FollowJunoPlantLift(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FollowJunoPlantLift(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Follow_Juno_Plant_Lift(class UObject* Context);
		void Obj_Hidden_LeaveTownDialog(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Leave_Town_Dialog(class UObject* Context);
		void Obj_BossTitleCard(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_BossTitleCard(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_StepOnPlantLift(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_Go_To_Mountain_Pass_Lodge_Map(class UObject* Context);
		void Obj_GoToMountainPass_LodgeMap(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GoToMountainPass_LodgeMap(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_Breadcrumb_Frontier01(class UObject* Context);
		void Obj_Breadcrumb_Frontier01(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_Breadcrumb_Frontier02(class UObject* Context);
		void Obj_Breadcrumb_Frontier02(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_Breadcrumb_Frontier03(class UObject* Context);
		void Obj_Breadcrumb_Frontier03(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_Breadcrumb_Frontier04(class UObject* Context);
		void Obj_Breadcrumb_Frontier04(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_Breadcrumb_Frontier05(class UObject* Context);
		void Obj_Breadcrumb_Frontier05(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_EnterBathhouse(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Enter_Bathhouse(class UObject* Context);
		void Set_FindStolenGoods(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MissionKickoff();
		void Obj_FindTownStone_Objective_PROXY_17();
		void Obj_FindStolenGoods(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Find_Stolen_Goods(class UObject* Context);
		void Obj_FindTownStone_Objective_PROXY_18();
		void Set_FindHotWaterPipes(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GoToLodgeEntrance(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GoToLodgeEntrance(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindTownStone_Objective_PROXY_19();
		void Obj_FindHotWaterPipes(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Find_Hot_Water_Pipes(class UObject* Context);
		void Obj_ExitGateToTitusArea(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Exit_Gate_To_Titus_Area(class UObject* Context);
		void Obj_FollowTitusToLodgeEntrance_Objective_PROXY_20();
		void Set_FindLodgeVistaView(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindLodgeVistaView(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Find_Lodge_Vista_View(class UObject* Context);
		void MCE_Kill_Bathhouse_Boss(class UObject* Context);
		void Obj_KillBathhouseBoss(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_KillBathhouseBoss(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindSomethingToBurnTowels(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_FindSomethingToBurnTowels(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_Meet_Juno_Church(class UObject* Context);
		void Obj_MeetJunoChurch(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_MeetJunoChurch(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_Take_Coresploder_Thing_From_Titus(class UObject* Context);
		void MCE_Find_Towels(class UObject* Context);
		void Obj_FindTownStone_Objective_PROXY_21();
		void Set_MeetJunoPreTC(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_MeetJunoPreTC(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Meet_Juno_Pre_TC(class UObject* Context);
		void Obj_TakeCoresploderThingFromTitus(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_TalkToTitusInCell(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_TalkToTitusInCell(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_DisruptHotWaterFlow2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_DisruptHotWaterFlow2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Disrupt_Hot_Water_Flow(class UObject* Context);
		void Obj_FindTownStone_Objective_PROXY_22();
		void Set_DisruptHotWaterFlow3(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_DisruptHotWaterFlow3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Disrupt_Hot_Water_Flow(class UObject* Context);
		void Obj_FindTownStone_Objective_PROXY_23();
		void Obj_DestroyStolenGoods(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Destroy_Stolen_Goods(class UObject* Context);
		void Obj_DisruptHotWater_UseRockSploder(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Disrupt_Hot_Water_Use_Rock_Sploder(class UObject* Context);
		void Obj_DisruptHotWater_UseRockSploder_Objective_PROXY_24();
		void Obj_DisruptHotWater_UseRockSploder_Objective_PROXY_25();
		void Obj_LodgeDoorGoAway(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Lodge_Doors_Go_Away(class UObject* Context);
		void MCE_Ignite_Fireworks(class UObject* Context);
		void Obj_IgniteFireworks(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_RocketLaunch(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Rocket_Launch(class UObject* Context);
		void MCE_EggBamfSound(class UObject* Context);
		void MCE_GoToLodgeBC_AdvanceToBC2(class UObject* Context);
		void MCE_GoToLodgeBC_AdvanceToBC3(class UObject* Context);
		void MCE_GoToLodgeBC_AdvanceToBC7(class UObject* Context);
		void MCE_GoToLodgeBC_AdvanceToBC5(class UObject* Context);
		void ExecuteUbergraph_Mission_Ep02_Bathhouse(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
