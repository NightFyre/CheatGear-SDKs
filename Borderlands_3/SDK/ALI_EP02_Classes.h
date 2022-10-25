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
	 * BlueprintGeneratedClass ALI_EP02.ALI_EP02_C
	 * Size -> 0x0388 (FullSize[0x0880] - InheritedSize[0x04F8])
	 */
	class UALI_EP02_C : public UOakMission
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04F8(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_EnterMemory1_ObjSetVar;                              // 0x0500(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EnterMemory1_ObjVar;                                 // 0x0508(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_OpenRedChest_ObjSetVar;                              // 0x0510(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_OpenRedChest_ObjVar;                                 // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_OpenStagingAreaDoor_ObjSetVar;                       // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_OpenStagingAreaDoor_ObjVar;                          // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TalkToMadKrieg_ObjSetVar;                            // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToMadKrieg_ObjVar;                               // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindFleshHorn_ObjSetVar;                             // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindFleshHorn_ObjVar;                                // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_BlowFleshHorn_ObjVar;                                // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_BlowFleshHorn_ObjSetVar;                             // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_AssaultMeatCastle_ObjSetVar;                         // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_AssaultMeatCastle_ObjVar;                            // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_ArrivedAtCastleGates_ObjVar;                     // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Catapult_1_ObjSetVar;                                // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Catapult1_Find_ObjVar;                               // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Catapult1_Fire_ObjVar;                               // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Catapult1_Aim_ObjVar;                                // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_Catapult1_GateDamaged_ObjVar;                    // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Catapult_2_PreFight_ObjSetVar;                       // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Catapult2_Find_ObjVar;                               // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Catapult_2_Fight_ObjSetVar;                          // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Catapult2_DefeatBrick_ObjVar;                        // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Catapult_2_Find_ObjSetVar;                           // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Catapult_2_GetSkagMeat_ObjSetVar;                    // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Catapult2_GetSkagMeat_ObjVar;                        // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Catapult_2_Return_ObjSetVar;                         // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Catapult2_ReturnToCatapult_ObjVar;                   // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Catapult_2_Feed_ObjSetVar;                           // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Catapult2_Feed_1_ObjVar;                             // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Catapult_2_Dynamite_ObjSetVar;                       // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Catapult2_GetDynamite_ObjVar;                        // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlaceDynamite_ObjVar;                                // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Catapult_2_AimAndFire_ObjSetVar;                     // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Catapult2_Aim_ObjVar;                                // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Catapult2_Fire_ObjVar;                               // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Catapult2_GateDamaged_ObjVar;                        // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Catapult_3_ShootMoon_ObjSetVar;                      // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Catapult3_ShootMoon_ObjVar;                          // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_Catapult3_MoonLanded_ObjVar;                     // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Catapult_3_GetMoon_ObjSetVar;                        // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Catapult3_GetMoon_ObjVar;                            // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Catapult_3_GoToCatapult_ObjSetVar;                   // 0x0658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Catapult3_GoToCatapult_ObjVar;                       // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Catapult_3_Aim_ObjSetVar;                            // 0x0668(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Catapult3_Aim_ObjVar;                                // 0x0670(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Catapult_3_Crank_ObjSetVar;                          // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Catapult3_Crank_ObjVar;                              // 0x0680(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Catapult_3_Load_ObjSetVar;                           // 0x0688(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Catapult3_Load_ObjVar;                               // 0x0690(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Catapult_3_Fire_ObjSetVar;                           // 0x0698(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Catapult3_Fire_ObjVar;                               // 0x06A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_Catapult3_GateDestroyed_ObjVar;                  // 0x06A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_EnterCastle_ObjSetVar;                               // 0x06B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EnterCastle_ObjVar;                                  // 0x06B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToGiantBuzzAxe_ObjSetVar;                          // 0x06C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToGiantBuzzAxe_ObjVar;                             // 0x06C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Lilith_TitleCard_ObjSetVar;                          // 0x06D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_Lilith_TitleCard_ObjVar;                         // 0x06D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Lilith_Fight_ObjSetVar;                              // 0x06E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DefeatLilith_ObjVar;                                 // 0x06E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_EnterDoor_ObjSetVar;                                 // 0x06F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetBuzzAxe_ObjVar;                                   // 0x06F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Whiteroom_ObjSetVar;                                 // 0x0700(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EnterDoor_ObjVar;                                    // 0x0708(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_SanctumWrapUp_ObjSetVar;                             // 0x0710(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlaceBuzzAxe_ObjVar;                                 // 0x0718(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReturnToSanctum_ObjVar;                              // 0x0720(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_MadKriegOpenedFleshDoor_ObjVar;                  // 0x0728(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_Catapult1InFiringPos_ObjVar;                     // 0x0730(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   TC_BrickAndMordecai_ObjVar;                              // 0x0738(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_ReadyForBrickAndMordTC_ObjVar;                   // 0x0740(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Catapult2_DefeatMord_ObjVar;                         // 0x0748(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Catapult2_InFiringPos_ObjVar;                        // 0x0750(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Catapult2_Feed_2_ObjVar;                             // 0x0758(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Catapult2_Feed_3_ObjVar;                             // 0x0760(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_Catapult2_Scaled_1_ObjVar;                       // 0x0768(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_Catapult2_Scaled_2_ObjVar;                       // 0x0770(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_Catapult2_Scaled_3_ObjVar;                       // 0x0778(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_Catapult3_CrankDone_ObjVar;                      // 0x0780(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindFleshHorn_BC1_ObjVar;                            // 0x0788(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindFleshHorn_BC2_ObjVar;                            // 0x0790(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_ReadyForBandMINtro_ObjVar;                       // 0x0798(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_WatchMeatCastle_ObjVar;                              // 0x07A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_BrickAndMordDefeated_ObjVar;                         // 0x07A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Catapult2_FakeFire_ObjVar;                           // 0x07B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_ReadyForBloodPuddleKrieg_ObjVar;                     // 0x07B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_ReadyForRevealArgument_ObjVar;                       // 0x07C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_ReturnToGoliathTNT_ObjVar;                       // 0x07C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Catapult1_Find_BC1_ObjVar;                           // 0x07D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EnterCastle_BC1_ObjVar;                              // 0x07D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_OpenChestPreCheck_ObjVar;                            // 0x07E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToGiantBuzzAxe_BC1_ObjVar;                         // 0x07E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToGiantBuzzAxe_BC2_ObjVar;                         // 0x07F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Catapult2_Find_BC1_ObjVar;                           // 0x07F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToGiantBuzzAxe_BC3_ObjVar;                         // 0x0800(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_ReadyForSaneKriegSpawn_ObjVar;                   // 0x0808(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_ReadyforLilithTaunt2_ObjVar;                         // 0x0810(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_ReadyToOpenPostFightDoor_ObjVar;                     // 0x0818(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_ReadyforLilithTaunt1_ObjVar;                         // 0x0820(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_ReadyForGhostKrieg_ObjVar;                       // 0x0828(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_ReadyForGhostLilith_ObjVar;                      // 0x0830(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_ReadyForGhostBrickAndMord_ObjVar;                // 0x0838(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_GhostSceneComplete_ObjVar;                       // 0x0840(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_BuzzAxeVisibleOnStatue_ObjVar;                   // 0x0848(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_ArrivedAtCastleBridge_ObjVar;                    // 0x0850(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToKrieg_ObjVar;                                  // 0x0858(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_EnterCastlePreCheck_ObjVar;                      // 0x0860(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_OpenGateToCat3_ObjVar;                           // 0x0868(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_WhiteDoorRose_ObjVar;                            // 0x0870(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EnterCastle_BC1_Precheck_ObjVar;                     // 0x0878(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnDialogSequenceFinished_97();
		void OnDialogSequenceFinished_96();
		void OnDialogSequenceFinished_95();
		void OnDialogSequenceFinished_94();
		void OnDialogSequenceFinished_93();
		void OnDialogSequenceFinished_92();
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
		void Set_OpenStagingAreaDoor(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_OpenStagingAreaDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_OpenedStagingAreaDoor(class UObject* Context);
		void Set_TalkToMadKrieg(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TalkToMadKrieg(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_TalkedToMadKrieg(class UObject* Context);
		void Set_FindFleshHorn(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindFleshHorn(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_FoundFleshHorn(class UObject* Context);
		void Obj_BlowFleshHorn(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_BlewFleshHorn(class UObject* Context);
		void Set_BlowFleshHorn(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_OpenedRedChest(class UObject* Context);
		void Obj_AssaultMeatCastle(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_AssaultMeatCastle(class UObject* Context);
		void Set_AssaultMeatCastle(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void INV_Obj_ArrivedAtCastleGates(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ArrivedAtCastleGates(class UObject* Context);
		void Obj_Catapult1_Find(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Cat1_Found(class UObject* Context);
		void Set_Catapult_2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_AssaultMeatCastle_Objective_PROXY();
		void Obj_Catapult1_Fire(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Cat1_Fired(class UObject* Context);
		void Obj_Catapult1_Aim(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Cat1_Aimed(class UObject* Context);
		void INV_Obj_Catapult1_GateDamaged(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Cat1_GateDamaged(class UObject* Context);
		void Obj_OpenRedChest(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_Catapult2_Find(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Cat2_Found(class UObject* Context);
		void Set_Catapult_2_PreFight(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_AssaultMeatCastle_Objective_PROXY_1();
		void Obj_Catapult2_DefeatBrick(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_DefeatedBrick(class UObject* Context);
		void Set_Catapult_2_Fight(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_AssaultMeatCastle_Objective_PROXY_2();
		void Obj_Catapult2_Find_Objective_PROXY_3();
		void Obj_Catapult2_Find_Objective_PROXY_4();
		void Set_Catapult_2_Find(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_Catapult2_GetSkagMeat(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_Catapult_2_GetSkagMeat(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_Catapult2_ReturnToCatapult(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Cat2_Returned(class UObject* Context);
		void Set_Catapult_2_Return(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_Catapult2_Feed_2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_Catapult_2_Feed(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_Catapult2_GetDynamite(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_Catapult_2_Dynamite(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_PlaceDynamite(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_Catapult2_Aim(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Cat2_Aimed(class UObject* Context);
		void Set_Catapult_2_AimAndFire(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_Catapult2_Fire(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Cat2_Fired(class UObject* Context);
		void INV_Catapult2_GateDamaged(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Cat2_GateDamaged(class UObject* Context);
		void Obj_Catapult3_ShootMoon(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Cat3_ShotMoon(class UObject* Context);
		void Set_Catapult_3_ShootMoon(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void INV_Obj_Catapult3_MoonLanded(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Cat3_MoonLanded(class UObject* Context);
		void Obj_Catapult3_GetMoon(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_Catapult_3_GetMoon(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_Catapult3_GoToCatapult(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Cat3_WentToCatapult(class UObject* Context);
		void Set_Catapult_3_GoToCatapult(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_Catapult3_Aim(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Cat3_AimedCatapult(class UObject* Context);
		void Set_Catapult_3_Aim(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_Catapult3_Crank(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Cat3_Cranked(class UObject* Context);
		void Set_Catapult_3_Crank(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_Catapult3_Load(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Cat3_Loaded(class UObject* Context);
		void Set_Catapult_3_Load(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_Catapult3_Fire(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Cat3_Fired(class UObject* Context);
		void Set_Catapult_3_Fire(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_EnterCastle(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_EnteredCastle(class UObject* Context);
		void Set_EnterCastle(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void INV_Obj_Catapult3_GateDestroyed(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Cat3_GateDestroyed(class UObject* Context);
		void Obj_GoToGiantBuzzAxe(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_WentToBuzzAxe(class UObject* Context);
		void Set_GoToGiantBuzzAxe(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void INV_Obj_Lilith_TitleCard(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_LilithTitleCardComplete(class UObject* Context);
		void Set_Lilith_TitleCard(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_DefeatLilith(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_DefeatedLilith(class UObject* Context);
		void Set_Lilith_Fight(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GetBuzzAxe(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_EnterDoor(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_EnterDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_WhiteRoom(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_PlaceBuzzAxe(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_SanctumWrapUp(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ReturnToSanctum(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_OpenRedChest(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_EnteredMemory1(class UObject* Context);
		void Obj_EnterMemory1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_EnterMemory1(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MissionKickoff();
		void INV_Obj_MadKriegOpenedFleshDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_MadKriegOpenedFleshDoor(class UObject* Context);
		void MCE_Cat1_InFiringPosition(class UObject* Context);
		void INV_Obj_Catapult1InFiringPos(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void TC_BrickAndMordecai(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_TCComplete_BrickAndMord(class UObject* Context);
		void INV_Obj_ReadyForBrickAndMordTC(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_Catapult2_DefeatMord(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_DefeatedMord(class UObject* Context);
		void INV_Catapult2_InFiringPos(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Cat2_InFiringPosition(class UObject* Context);
		void Obj_Catapult2_Feed_3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_Catapult2_Feed_4(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_Obj_Catapult2_Scaled_2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Cat2_ScaledGoliath_2(class UObject* Context);
		void INV_Obj_Catapult2_Scaled_3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_Obj_Catapult2_Scaled_4(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Cat2_ScaledGoliath_3(class UObject* Context);
		void MCE_Cat2_ScaledGoliath_4(class UObject* Context);
		void MCE_Cat2_FedGoliath(class UObject* Context);
		void MCE_Cat2_PlacedDynamite(class UObject* Context);
		void INV_Obj_Catapult3_CrankDone(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Cat3_CrankDone(class UObject* Context);
		void MCE_PlacedBuzzAxe(class UObject* Context);
		void Obj_FindFleshHorn_BC1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_FindFleshHorn_BC1(class UObject* Context);
		void Obj_FindFleshHorn_BC2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_FindFleshHorn_BC2(class UObject* Context);
		void MCE_ReadyForBandMIntro(class UObject* Context);
		void INV_Obj_ReadyForBandMIntro(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ReturnedToSanctum(class UObject* Context);
		void MCE_EnteredDoor(class UObject* Context);
		void Obj_WatchMeatCastle(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_BrickAndMordDefeated(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_Catapult2_FakeFire(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_ReadyForBloodPuddleKrieg(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_ReadyForRevealArgument(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_Obj_ReturnToGoliathTNT(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Cat2_ReturnToGoliathTNT(class UObject* Context);
		void Obj_Catapult1_Find_BC1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Cat1_Find_BC1(class UObject* Context);
		void Obj_EnterCastle_BC1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_EnteredCastle_BC1(class UObject* Context);
		void INV_OpenChestPreCheck(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_GoToGiantBuzzAxe_BC1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_WentToBuzzAxe_BC1(class UObject* Context);
		void Obj_GoToGiantBuzzAxe_BC2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_WentToBuzzAxe_BC2(class UObject* Context);
		void Obj_Catapult2_Find_BC1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Cat2_Found_BC1(class UObject* Context);
		void Obj_GoToGiantBuzzAxe_BC3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_WentToBuzzAxe_BC3(class UObject* Context);
		void INV_Obj_ReadyForSaneKriegSpawn(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_AssaultMeatCastle_Objective_PROXY_5();
		void Obj_AssaultMeatCastle_Objective_PROXY_6();
		void Obj_AssaultMeatCastle_Objective_PROXY_7();
		void Obj_AssaultMeatCastle_Objective_PROXY_8();
		void Obj_AssaultMeatCastle_Objective_PROXY_9();
		void Obj_AssaultMeatCastle_Objective_PROXY_10();
		void Obj_AssaultMeatCastle_Objective_PROXY_11();
		void Obj_AssaultMeatCastle_Objective_PROXY_12();
		void Obj_AssaultMeatCastle_Objective_PROXY_13();
		void Obj_AssaultMeatCastle_Objective_PROXY_14();
		void Obj_AssaultMeatCastle_Objective_PROXY_15();
		void Obj_AssaultMeatCastle_Objective_PROXY_16();
		void Obj_AssaultMeatCastle_Objective_PROXY_17();
		void Obj_AssaultMeatCastle_Objective_PROXY_18();
		void MCE_ReadyForLilithTauntPart2(class UObject* Context);
		void INV_ReadyforLilithTaunt2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_ReadyToOpenPostFightDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PostBandMFightDoorOpen(class UObject* Context);
		void MCE_ReadyForLilithTauntPart1(class UObject* Context);
		void INV_ReadyforLilithTaunt1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_Obj_ReadyForGhostKrieg(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_Obj_ReadyForGhostLilith(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_Obj_ReadyForGhostBrickAndMord(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_Obj_GhostSceneComplete(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_Obj_BuzzAxeVisibleOnStatue(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_BuzzAxeVisibleOnStatue(class UObject* Context);
		void INV_Obj_ArrivedAtCastleBridge(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ArrivedAtCastleBridge(class UObject* Context);
		void Obj_TalkToKrieg(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_TalkedToKriegInSanctum(class UObject* Context);
		void INV_Obj_EnterCastlePreCheck(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_EnteredCastle_Precheck(class UObject* Context);
		void INV_Obj_OpenGateToCat3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_Obj_WhiteDoorRose(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_WhiteDoorRose(class UObject* Context);
		void Obj_EnterCastle_BC1_Precheck(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ExecuteUbergraph_ALI_EP02(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
