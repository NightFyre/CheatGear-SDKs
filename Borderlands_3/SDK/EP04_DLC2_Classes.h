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
	 * BlueprintGeneratedClass EP04_DLC2.EP04_DLC2_C
	 * Size -> 0x0508 (FullSize[0x0A18] - InheritedSize[0x0510])
	 */
	class UEP04_DLC2_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                SET_ReachAmourettesBlockade_ObjSetVar;                   // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SecureArea_ObjVar;                                   // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_HuntWendigo_ObjVar;                                  // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DestroyCounterweight_ObjVar;                         // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FollowHammerlockToCave_ObjVar;                       // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_CreateBait_ObjSetVar;                                // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Breadcrumb_01_ObjVar;                                // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Breadcrumb_02_ObjVar;                                // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CreateBait_ObjVar;                                   // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindWendigoLair_ObjVar;                              // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_InteractWithFeces_ObjVar;                            // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_FindWendigoLair_ObjSetVar;                           // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlaceBait_ObjVar;                                    // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_SecureArea_ObjSetVar;                                // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_DestroyCounterweight_ObjSetVar;                      // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_FollowHammerlockToCave_ObjSetVar;                    // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_InteractWithFeces_ObjSetVar;                         // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_PickUpBait_ObjSetVar;                                // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PickUpBait_ObjVar;                                   // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_PlaceBait_ObjSetVar;                                 // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_KillWendigo_ObjSetVar;                               // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillWendigo_ObjVar;                                  // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_PickUpBalls_ObjSetVar;                               // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PickupBalls_ObjVar;                                  // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_FollowLeaderToMountainGate_ObjSetVar;                // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FollowLeaderToMountainGate_ObjVar;                   // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToHammerlock_ObjVar;                             // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReachAmourettesBlockade_ObjVar;                      // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_BlowHorn_ObjSetVar;                                  // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_BlowHorn_ObjVar;                                     // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_TalkToHammerlock_ObjSetVar;                          // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_InfiltrateOutpost_ObjSetVar;                         // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_InfiltrateOutpost_ObjVar;                            // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_TalkToLeader_ObjSetVar;                              // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToLeader_ObjVar;                                 // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_KillCultistAmbushers_ObjSetVar;                      // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillCultistAmbushers_ObjVar;                         // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_WendigoTitleCard_ObjSetVar;                          // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_WendigoTitleCard_ObjVar;                             // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_ReturnToAmourettesLeader_ObjSetVar;                  // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReturnToAmourettesLeader_ObjVar;                     // 0x0658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_TitleCardEista_ObjSetVar;                            // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TitleCardEista_ObjVar;                               // 0x0668(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_UnlockWoodsGate_ObjSetVar;                           // 0x0670(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_UnlockWoodsGate_ObjVar;                              // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_FollowHammerlockToLair_ObjSetVar;                    // 0x0680(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FollowHammerlockToLair_ObjVar;                       // 0x0688(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_DefeatAmourettes_ObjSetVar;                          // 0x0690(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DefeatAmourettes_ObjVar;                             // 0x0698(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_DefeatEista_ObjSetVar;                               // 0x06A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DefeatEista_ObjVar;                                  // 0x06A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ReviveEista_ObjSetVar;                               // 0x06B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReviveEista_ObjVar;                                  // 0x06B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FollowEista_ObjSetVar;                               // 0x06C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_EatWithEista_ObjSetVar;                              // 0x06C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FollowEista_ObjVar;                                  // 0x06D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EatWithEista_ObjVar;                                 // 0x06D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToForest1_ObjSetVar;                               // 0x06E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToForest_ObjVar;                                   // 0x06E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToForest2_ObjSetVar;                               // 0x06F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Inv_Obj_ReachWoodGate_ObjVar;                            // 0x06F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_LowerBridge_ObjVar;                                  // 0x0700(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_PickupGeselium_ObjSetVar;                            // 0x0708(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PickupGeselium_ObjVar;                               // 0x0710(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_GetPrimeWolfMeat_ObjSetVar;                          // 0x0718(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetPrimeWolfMeat_ObjVar;                             // 0x0720(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_HuntPrimeMeat_ObjVar;                                // 0x0728(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_HammerlockGone_ObjVar;                           // 0x0730(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_HuntPrimeMeat_ObjSetVar;                             // 0x0738(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_ReachFactory_ObjSetVar;                              // 0x0740(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReachFactory_ObjVar;                                 // 0x0748(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_DefendClaptrap_ObjSetVar;                            // 0x0750(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DefendClaptrap_ObjVar;                               // 0x0758(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TalkToClaptrap_ObjSetVar;                            // 0x0760(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToClaptrap_ObjVar;                               // 0x0768(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_RegroupWithHammerlock_ObjSetVar;                     // 0x0770(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_RegroupWithHammerlock_ObjVar;                        // 0x0778(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_InfiltrateBreacrumb_01_ObjVar;                       // 0x0780(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_InfiltrateBreacrumb_02_ObjVar;                       // 0x0788(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_InfiltrateBreacrumb_03_ObjVar;                       // 0x0790(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_InfiltrateBreacrumb_04_ObjVar;                       // 0x0798(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_FindWendigoLair_ObjVar;                          // 0x07A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_FollowHammerlock_ObjSetVar;                          // 0x07A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FollowHammerlock_ObjVar;                             // 0x07B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_HammerlockToFirstArea_ObjSetVar;                     // 0x07B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_FollowHMTo1stArena_ObjVar;                       // 0x07C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ClearFirstCombatZone_ObjVar;                         // 0x07C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_HammerlockToSecondArea_ObjSetVar;                    // 0x07D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ClearSecondCombatZone_ObjVar;                        // 0x07D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_FollowHMTo2ndArena_ObjVar;                       // 0x07E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_HammerlockToThirdArea_ObjSetVar;                     // 0x07E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_FollowHMTo3rdArena_ObjVar;                       // 0x07F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ClearThirdCombatZone_ObjVar;                         // 0x07F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_InteractWith1stTracks_ObjSetVar;                     // 0x0800(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_InteractWith1stTracks_ObjVar;                        // 0x0808(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_InteractWith2ndTracks_ObjSetVar;                     // 0x0810(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_InteractWith2ndTracks_ObjVar;                        // 0x0818(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_InteractWith3rdTracks_ObjSetVar;                     // 0x0820(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_InteractWith3rdTracks_ObjVar;                        // 0x0828(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_ClearThridCombatZone_ObjSetVar;                      // 0x0830(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_ClearSecondCombatZone_ObjSetVar;                     // 0x0838(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_ClearFirstCombatZone_ObjSetVar;                      // 0x0840(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_ReachCave1stArea_ObjSetVar;                          // 0x0848(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReachCave1stArea_ObjVar;                             // 0x0850(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_Cave1stCombatZone_ObjSetVar;                         // 0x0858(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Cave1stCombatZone_ObjVar;                            // 0x0860(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_ReachCave2ndArea_ObjSetVar;                          // 0x0868(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReachCave2ndArea_ObjVar;                             // 0x0870(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PlaceWendigoBalls_ObjSetVar;                         // 0x0878(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlaceWendigoBalls_ObjVar;                            // 0x0880(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Inv_FirstTrophyPlaced_ObjVar;                            // 0x0888(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Inv_SecondTrophyPlaced_ObjVar;                           // 0x0890(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_Cave1stCombatZone_ObjVar;                        // 0x0898(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReachAmourettesBlockade_Breadcrumb_01_ObjVar;        // 0x08A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReachAmourettesBlockade_Breadcrumb_02_ObjVar;        // 0x08A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_TriggerEistaHMDialogue_01_ObjVar;                // 0x08B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_TriggerEistaHMDialogue_02_ObjVar;                // 0x08B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_DestroyMushroomGating_ObjVar;                    // 0x08C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_InfiltrateMushroomGate_ObjVar;                   // 0x08C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_OpenOutpostDoor_ObjSetVar;                           // 0x08D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_OpenOutpostDoor_ObjVar;                              // 0x08D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_FakeReachFactory_ObjSetVar;                          // 0x08E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_OpenDoor_ObjSetVar;                                  // 0x08E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_OpenDoor_ObjVar;                                     // 0x08F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_ClearFirstCombatZone_Precheck_ObjVar;            // 0x08F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_ClearSecondCombatZone_Precheck_ObjVar;           // 0x0900(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_ClearThirdCombatZone_Precheck_ObjVar;            // 0x0908(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_Cave1stCombatZone_Precheck_ObjVar;               // 0x0910(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_HammerlockVOEnteringCave_ObjVar;                 // 0x0918(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ClaptrapTeleports_ObjVar;                            // 0x0920(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_MeleeRoots_ObjSetVar;                                // 0x0928(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_TalkToHammerlockPostBoss_ObjSetVar;                  // 0x0930(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToHammerlockPostBoss_ObjVar;                     // 0x0938(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_1stTracksVOs_ObjVar;                             // 0x0940(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_2ndTracksVOs_ObjVar;                             // 0x0948(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_1stTracksSmartObject_ObjVar;                     // 0x0950(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_2ndTracksSmartObject_ObjVar;                     // 0x0958(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_3rdTracksSmartObject_ObjVar;                     // 0x0960(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_EistaPoints_ObjVar;                              // 0x0968(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Breadcrumb_WoodGate_ObjVar;                          // 0x0970(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_EistaDespawned_ObjVar;                           // 0x0978(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_OpenWendigoDoor_ObjVar;                          // 0x0980(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_PlaceKifeDialogueOver_ObjVar;                    // 0x0988(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ClearOutpostWithHammerlock_ObjSetVar;                // 0x0990(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ClearOutpostWithHammerlock_ObjVar;                   // 0x0998(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FollowHammerlockToOutpost_ObjSetVar;                 // 0x09A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FollowHammerlockToOutpost_ObjVar;                    // 0x09A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_WoodsEntranceRegroup_ObjSetVar;                      // 0x09B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_WoodsEntranceRegroup_ObjVar;                         // 0x09B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_BreakableVines_01_ObjVar;                        // 0x09C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_BreakableVines_02_ObjVar;                        // 0x09C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PrecheckDefendClaptrap_ObjVar;                       // 0x09D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_SkipInfiltration_ObjVar;                         // 0x09D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_GatePrecheck_ObjVar;                             // 0x09E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_EnteredWolvenArena_ObjVar;                       // 0x09E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MancubusVO_ObjVar;                                   // 0x09F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_DefeatAmourettes_ObjVar;                         // 0x09F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_HammerlockLooksAtBridge_ObjVar;                  // 0x0A00(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReachDevice_ObjVar;                                  // 0x0A08(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ReachMixingDevice_ObjSetVar;                         // 0x0A10(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
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
		void OnDialogSequenceFinished_28();
		void Obj_HuntWendigo_Objective_PROXY_5();
		void SET_FollowHammerlockToLair(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FollowHammerlockToLair(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_FollowedHammerlockToLair(class UObject* Context);
		void Obj_UnlockWoodsGate(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ME_UnlockedWoodsGate(class UObject* Context);
		void SET_UnlockWoodsGate(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_DefeatAmourettes(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_DefeatAmourettes(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ME_TitleCardEista(class UObject* Context);
		void Obj_TitleCardEista(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_AmourettesDefeated(class UObject* Context);
		void SET_TitleCardEista(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_DefeatEista(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_DefeatEista(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_EistaDefeated(class UObject* Context);
		void Set_ReviveEista(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ReviveEista(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ReviveEista(class UObject* Context);
		void ME_ReturnedToAmourettesLeader(class UObject* Context);
		void SET_ReturnToAmourettesLeader(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ReturnToAmourettesLeader(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_FollowEista(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_EatWithEista(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FollowEista(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_EatWithEista(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_FollowedEista(class UObject* Context);
		void MCE_AteWithEista(class UObject* Context);
		void Set_GoToForest1(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GoToForest(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_GoToForest_Objective_PROXY_6();
		void Set_GoToForest2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_WendigoTitleCard(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void ME_WendigoTitleCard(class UObject* Context);
		void Obj_WendigoTitleCard(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_GoToForest_Objective_PROXY_7();
		void Inv_Obj_ReachWoodGate(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_EnteredWoods(class UObject* Context);
		void MCE_ReachedWoodGate(class UObject* Context);
		void ME_LoweredBridge(class UObject* Context);
		void Obj_LowerBridge(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_LowerBridge_Objective_PROXY_8();
		void Obj_LowerBridge_Objective_PROXY_9();
		void Obj_LowerBridge_Objective_PROXY_10();
		void SET_PickupGeselium(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_PickupGeselium(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PickedUpGeselium(class UObject* Context);
		void Obj_GetPrimeWolfMeat(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_GetPrimeWolfMeat(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_GotPrimeWolfMeat(class UObject* Context);
		void ME_KilledCultistAmbushers(class UObject* Context);
		void SET_KillCultistAmbushers(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_KillCultistAmbushers(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_HuntPrimeMeat(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_HuntedPrimeMeat(class UObject* Context);
		void Obj_INV_HammerlockGone(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_HammerlockGone(class UObject* Context);
		void SET_HuntPrimeMeat(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ReachFactory(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_ReachFactory(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_ReachFactory(class UObject* Context);
		void ME_TalkedToLeader(class UObject* Context);
		void SET_DefendClaptrap(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_DefendClaptrap(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_DefendedClaptrap(class UObject* Context);
		void Set_TalkToClaptrap(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TalkToClaptrap(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_TalkedToClaptrap(class UObject* Context);
		void SET_TalkToLeader(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TalkToLeader(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_HuntWendigo_Objective_PROXY_4();
		void SET_InfiltrateOutpost(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_RegroupWithHammerlock(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_RegroupWithHammerlock(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_RegroupedWithHammerlock(class UObject* Context);
		void Obj_HuntWendigo_Objective_PROXY_11();
		void Obj_InfiltrateBreacrumb_01(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_InfiltrateBreacrumb_01(class UObject* Context);
		void Obj_InfiltrateBreacrumb_02(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_InfiltrateBreacrumb_02(class UObject* Context);
		void Obj_InfiltrateBreacrumb_03(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_InfiltrateBreacrumb_03(class UObject* Context);
		void Obj_InfiltrateBreacrumb_04(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_InfiltrateBreacrumb_04(class UObject* Context);
		void Obj_INV_FindWendigoLair(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_FollowHammerlock(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FollowHammerlock(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_FollowedHammerlock(class UObject* Context);
		void ME_InfiltratedOutpost(class UObject* Context);
		void Obj_InfiltrateOutpost(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_ClearFirstCombatZone(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_ClearFirstCombatZone(class UObject* Context);
		void Obj_INV_FollowHMTo2ndArena(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_FollowedHMTo2ndArena(class UObject* Context);
		void Obj_ClearSecondCombatZone(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_ClearedSecondCombatZone(class UObject* Context);
		void Obj_INV_FollowHMTo1stArena(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_FollowedHMTo1stArena(class UObject* Context);
		void Obj_ClearThirdCombatZone(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ClearedThirdCombatZone(class UObject* Context);
		void Obj_INV_FollowHMTo3rdArena(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_FollowedHMTo3rdArena(class UObject* Context);
		void SET_HammerlockToFirstArea(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_HammerlockToSecondArea(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_HammerlockToThirdArea(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FollowHammerlock_Objective_PROXY_12();
		void Obj_FollowHammerlock_Objective_PROXY_13();
		void Obj_FollowHammerlock_Objective_PROXY_14();
		void Obj_InteractWith1stTracks(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_InteractedWith1stTracks(class UObject* Context);
		void SET_InteractWith1stTracks(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_InteractWith2ndTracks(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_InteractedWith2ndTracks(class UObject* Context);
		void SET_InteractWith2ndTracks(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_InteractWith3rdTracks(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_InteractedWith3rdTracks(class UObject* Context);
		void SET_InteractWith3rdTracks(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_ClearThridCombatZone(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_ClearSecondCombatZone(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_ClearFirstCombatZone(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MissionKickoff();
		void ME_BlewHorn(class UObject* Context);
		void Obj_BlowHorn(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_BlowHorn(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void ME_ReachedAmourettesBlockade(class UObject* Context);
		void Obj_ReachAmourettesBlockade(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_TalkToHammerlock(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void ME_TalkedToHammerlock(class UObject* Context);
		void Obj_TalkToHammerlock(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ME_FollowedLeaderToMountainGate(class UObject* Context);
		void Obj_HuntWendigo_Objective_PROXY_15();
		void Obj_HuntWendigo_Objective_PROXY_16();
		void Obj_HuntWendigo_Objective_PROXY_17();
		void Obj_HuntWendigo_Objective_PROXY_18();
		void Obj_HuntWendigo_Objective_PROXY_19();
		void Obj_HuntWendigo_Objective_PROXY_20();
		void Obj_HuntWendigo_Objective_PROXY_21();
		void Obj_HuntWendigo_Objective_PROXY_22();
		void Obj_HuntWendigo_Objective_PROXY_23();
		void Obj_HuntWendigo_Objective_PROXY_24();
		void Obj_ReachCave1stArea(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_ReachCave1stArea(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_ReachedCave1stArea(class UObject* Context);
		void Obj_Cave1stCombatZone(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_Cave1stCombatZone(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_Cave1stCombatZone(class UObject* Context);
		void Obj_ReachCave2ndArea(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_ReachCave2ndArea(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_ReachedCave2ndArea(class UObject* Context);
		void Obj_HuntWendigo_Objective_PROXY_25();
		void Obj_HuntWendigo_Objective_PROXY_26();
		void Obj_HuntWendigo_Objective_PROXY_27();
		void SET_FollowLeaderToMountainGate(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FollowLeaderToMountainGate(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_FollowHammerlockToLair_Objective_PROXY_28();
		void Obj_FollowHammerlockToLair_Objective_PROXY_29();
		void ME_PickedupBalls(class UObject* Context);
		void Obj_PickupBalls(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_PlaceWendigoBalls(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_PlaceWendigoBalls(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Inv_FirstTrophyPlaced(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Inv_SecondTrophyPlaced(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_UpdateFirstTrophy(class UObject* Context);
		void MCE_UpdateSecondTrophy(class UObject* Context);
		void Obj_INV_Cave1stCombatZone(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_Cave1stCombatZone(class UObject* Context);
		void Obj_ReachAmourettesBlockade_Breadcrumb_01(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ME_ReachedAmourettesBlockade_Breadcrumb_01(class UObject* Context);
		void Obj_ReachAmourettesBlockade_Breadcrumb_02(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ME_ReachedAmourettesBlockade_Breadcrumb_02(class UObject* Context);
		void SET_SecureArea(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_INV_TriggerEistaHMDialogue_01(class UObject* Context);
		void Obj_INV_TriggerEistaHMDialogue_01(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_TriggerEistaHMDialogue_02(class UObject* Context);
		void Obj_INV_TriggerEistaHMDialogue_02(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_PlaceBait(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ME_FoundWendigoLair(class UObject* Context);
		void SET_FindWendigoLair(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void ME_InteractWithFeces(class UObject* Context);
		void Obj_InteractWithFeces(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ME_BaitPlaced(class UObject* Context);
		void SET_PickUpBalls(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindWendigoLair(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_DestroyMushroomGating(class UObject* Context);
		void Obj_INV_DestroyMushroomGating(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_InfiltrateMushroomGate(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_InfiltrateMushroomGate(class UObject* Context);
		void SET_OpenOutpostDoor(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_OpenOutpostDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_OpenOutpostDoor(class UObject* Context);
		void SET_KillWendigo(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void ME_KilledWendigo(class UObject* Context);
		void SET_FakeReachFactory(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ReachFactory_Objective_PROXY_30();
		void SET_OpenDoor(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_OpenDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_OpenDoor(class UObject* Context);
		void Obj_ReachFactory_Objective_PROXY_31();
		void Obj_KillWendigo(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_PlaceBait(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_INV_ClearFirstCombatZone_Precheck(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_ClearSecondCombatZone_Precheck(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_ClearThirdCombatZone_Precheck(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_Cave1stCombatZone_Precheck(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_HammerlockVOEnteringCave(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_HammerlockVOEnteringCave(class UObject* Context);
		void Obj_ClaptrapTeleports(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ClaptrapTeleports(class UObject* Context);
		void SET_MeleeRoots(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_HuntWendigo_Objective_PROXY_32();
		void SET_PickUpBait(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void ME_PickedupBait(class UObject* Context);
		void Obj_TalkToHammerlockPostBoss(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_TalkToHammerlockPostBoss(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_TalkToHammerlockPostBoss(class UObject* Context);
		void Obj_INV_1stTracksVOs(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_1stTracksVOs(class UObject* Context);
		void Obj_INV_2ndTracksVOs(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_2ndTracksVOs(class UObject* Context);
		void Obj_INV_1stTracksSmartObject(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_1stTracksSmartObject(class UObject* Context);
		void Obj_INV_2ndTracksSmartObject(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_2ndTracksSmartObject(class UObject* Context);
		void Obj_INV_3rdTracksSmartObject(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_3rdTracksSmartObject(class UObject* Context);
		void Obj_INV_EistaPoints(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_EistaPoints(class UObject* Context);
		void MCE_Breadcrumb_WoodGate(class UObject* Context);
		void Obj_Breadcrumb_WoodGate(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_EistaDespawned(class UObject* Context);
		void Obj_INV_EistaDespawned(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_OpenWendigoDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_OpenWendigoDoor(class UObject* Context);
		void Obj_INV_PlaceKifeDialogueOver(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlaceKifeDialogueOver(class UObject* Context);
		void Obj_ClearOutpostWithHammerlock(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ClearOutpostWithHammerlock(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_ClearOutpostWithHammerlock(class UObject* Context);
		void Obj_PickUpBait(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_HuntWendigo_Objective_PROXY_3();
		void Obj_HuntWendigo_Objective_PROXY_33();
		void Obj_HuntWendigo_Objective_PROXY_34();
		void Obj_HuntWendigo_Objective_PROXY_2();
		void Obj_HuntWendigo_Objective_PROXY_1();
		void Obj_FollowHammerlockToOutpost(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_FollowHammerlockToOutpost(class UObject* Context);
		void Set_FollowHammerlockToOutpost(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_WoodsEntranceRegroup(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_WoodsEntranceRegroup(class UObject* Context);
		void SET_WoodsEntranceRegroup(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_HuntWendigo_Objective_PROXY();
		void SET_InteractWithFeces(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_INV_BreakableVines_01(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_BreakableVines_01(class UObject* Context);
		void Obj_INV_BreakableVines_02(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_BreakableVines_02(class UObject* Context);
		void Obj_PrecheckDefendClaptrap(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_SkipInfiltration(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_SkipInfiltration(class UObject* Context);
		void Obj_INV_GatePrecheck(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_EnteredWolvenArena(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_EnteredWolvenArena(class UObject* Context);
		void Obj_MancubusVO(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_MancubusVO(class UObject* Context);
		void Obj_INV_DefeatAmourettes(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_HammerlockLooksAtBridge(class UObject* Context);
		void Obj_INV_HammerlockLooksAtBridge(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_ReachDevice(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ReachDevice(class UObject* Context);
		void Set_ReachMixingDevice(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_FollowHammerlockToCave(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_DestroyCounterweight(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void ME_CreatedBait(class UObject* Context);
		void Obj_CreateBait(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ME_BC_Bread_02(class UObject* Context);
		void ME_BC_Bread_01(class UObject* Context);
		void SET_CreateBait(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_Breadcrumb_02(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_Breadcrumb_01(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ME_ReachedCave(class UObject* Context);
		void Obj_FollowHammerlockToCave(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ME_DestroyedCounterweight(class UObject* Context);
		void Obj_DestroyCounterweight(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ME_SecureArea(class UObject* Context);
		void Obj_HuntWendigo(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_SecureArea(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_ReachAmourettesBlockade(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void ExecuteUbergraph_EP04_DLC2(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
