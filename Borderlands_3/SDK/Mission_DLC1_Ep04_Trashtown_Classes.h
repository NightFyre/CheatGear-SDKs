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
	 * BlueprintGeneratedClass Mission_DLC1_Ep04_Trashtown.Mission_DLC1_Ep04_Trashtown_C
	 * Size -> 0x0480 (FullSize[0x0990] - InheritedSize[0x0510])
	 */
	class UMission_DLC1_Ep04_Trashtown_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_EnterShredder_ObjSetVar;                             // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EnterShredder_ObjVar;                                // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TalkToMayor_ObjSetVar;                               // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToMayor_ObjVar;                                  // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FollowMayorToConstructor_ObjSetVar;                  // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FollowMayor_ObjVar;                                  // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TalkToMayorAboutConstructor_ObjSetVar;               // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToMayorAboutConstructor_ObjVar;                  // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GetLoaderPartsAndAICore_ObjSetVar;                   // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetAICore_ObjVar;                                    // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ReturnToMayor_ObjSetVar;                             // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReturnToMayor_ObjVar;                                // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PlaceParts_ObjSetVar;                                // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlaceEye_ObjVar;                                     // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindTrashtown_ObjSetVar;                             // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindTrashtown_ObjVar;                                // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KeyToHappiness_Try1_ObjSetVar;                       // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PutKeyToHappinessOnGround_ObjVar;                    // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetConstructorEye_ObjVar;                            // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlaceAIChip_ObjVar;                                  // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_EscortConstructor_FirstBarricade_ObjSetVar;          // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_EscortConstructorToFirstArena_ObjVar;            // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_DefendConstructorWhileFixingBeam_ObjSetVar;          // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DefendConstructor_ObjVar;                            // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReinforceBeam_ObjVar;                                // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_EscortConstructorBack_ObjSetVar;                     // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EscortConstructorBack_ObjVar;                        // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TalkToMayorEnd_ObjSetVar;                            // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToMayorEnd_ObjVar;                               // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_ItemsDropped_ObjVar;                             // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_MayorArrived_ObjVar;                             // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GiveLoaderPartsToEddie_ObjSetVar;                    // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TakePowerCore_ObjSetVar;                             // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TakePoweCore_ObjVar;                                 // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_OpenEscortDoor_ObjSetVar;                            // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_OpenEscortDoor_ObjVar;                               // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_EscortConstructorToSecondArena_ObjVar;           // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EliminateEnemies_FirstBarricade_ObjVar;              // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_EliminateEnemies_SecondBarricade_ObjSetVar;          // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EliminateEnemies_SecondBarricade_ObjVar;             // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_EscortConstructor_ToBeam_ObjSetVar;                  // 0x0658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EscortConstructor_ToBeam_ObjVar;                     // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GetLoaderPartsAndEnterFortress_ObjSetVar;            // 0x0668(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetAICore_BC1_ObjVar;                                // 0x0670(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetAICore_BC2_ObjVar;                                // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetAICore_BC3_ObjVar;                                // 0x0680(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReturnWithParts_BC1_ObjVar;                          // 0x0688(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetLoaderParts_ObjVar;                               // 0x0690(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_obj_ReadyForCoreDropEnemy_ObjVar;                    // 0x0698(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToFortress_BC1_ObjVar;                             // 0x06A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_ContainerClaptrapsSpawned_ObjVar;                // 0x06A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToFortress_BC2_ObjVar;                             // 0x06B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_GoToFortress_ObjVar;                             // 0x06B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GetLoaderPartsAndConstructorEye_ObjSetVar;           // 0x06C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindWayIntoFort_ObjSetVar;                           // 0x06C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_PlayerFailedToFindWayIn_ObjVar;                  // 0x06D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_EnterFortress_ObjSetVar;                             // 0x06D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EnterFortress_ObjVar;                                // 0x06E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EnterFortress_BC1_ObjVar;                            // 0x06E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindWayIntoFort_ObjVar;                              // 0x06F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PlacePowerCore_ObjSetVar;                            // 0x06F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlacePowerCore_ObjVar;                               // 0x0700(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GivePartsToEddie_ObjVar;                             // 0x0708(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_BarricadeMoveComplete_1_ObjVar;                  // 0x0710(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_BarricadeMoveComplete_2_ObjVar;                  // 0x0718(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_ConstructorArrived_FirstBarricade_ObjVar;            // 0x0720(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_ConstructorArrived_SecondBarrricade_ObjVar;          // 0x0728(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EliminateEnemies_PreBeam_ObjVar;                     // 0x0730(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_EliminateTurnAroundEnemies_ObjVar;                   // 0x0738(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_EscortConstructor_ToBeamArena_ObjVar;            // 0x0740(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_ReadyForTrashGatherConvo_ObjVar;                 // 0x0748(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GatherTrashBags_ObjVar;                              // 0x0750(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PileTrash_ObjVar;                                    // 0x0758(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ShootTrashBomb_ObjVar;                               // 0x0760(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillBadassJanitor_ObjVar;                            // 0x0768(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToMarketDistrict_ObjSetVar;                        // 0x0770(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_EnterShredder_First_ObjSetVar;                       // 0x0778(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GatherTrash_ObjSetVar;                               // 0x0780(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PileTrash_ObjSetVar;                                 // 0x0788(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ShootTrashBomb_ObjSetVar;                            // 0x0790(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillBadassJanitor_ObjSetVar;                         // 0x0798(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_ReadyToSpawnJanitor_ObjVar;                      // 0x07A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetTrashBomb_ObjVar;                                 // 0x07A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GetTrashBomb_ObjSetVar;                              // 0x07B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlaceBomb_ObjVar;                                    // 0x07B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetKeys_ObjVar;                                      // 0x07C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_OpenChute_ObjSetVar;                                 // 0x07C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_OpenChute_ObjVar;                                    // 0x07D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TC_Mayor_ObjVar;                                     // 0x07D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TC_Mayor_ObjSetVar;                                  // 0x07E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TalkTo_Mayor_Pre_ObjSetVar;                          // 0x07E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReadyForMayorTC_ObjVar;                              // 0x07F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_obj_ReadyForClaptrapTC_ObjVar;                       // 0x07F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TC_FeralClaptrap_ObjVar;                             // 0x0800(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GetLoaderPartsAndAICore_PreTC_ObjSetVar;             // 0x0808(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FeralClaptrap_TC_ObjSetVar;                          // 0x0810(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReturnToTimothy_ObjVar;                              // 0x0818(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ReturnToTimothy_ObjSetVar;                           // 0x0820(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_ReadyForAlarm_ObjVar;                            // 0x0828(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_KillBadassJanitor_PreKillCheck_ObjVar;           // 0x0830(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_ReadyToSpawnPrettyBoyTroops_ObjVar;                  // 0x0838(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_ReadyToSpawnTony_ObjVar;                             // 0x0840(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_obj_PlayerSpeedranOutOfCave_ObjVar;                  // 0x0848(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_TonyDead_ObjVar;                                     // 0x0850(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_PrettyBoyTroopsDead_ObjVar;                          // 0x0858(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_ReadyToWeldSelfToBeam_ObjVar;                    // 0x0860(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_WeldSelfToBeamDone_ObjVar;                       // 0x0868(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_PlayerDroppedNothing_ObjVar;                     // 0x0870(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_PlayerActivatedSubway_ObjVar;                        // 0x0878(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToMarketDistrict_ObjVar;                           // 0x0880(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Spawn1stLoaderWave_ObjVar;                           // 0x0888(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Spawn2ndLoaderWave_ObjVar;                           // 0x0890(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_WeldedClapstructorInteractible_ObjVar;           // 0x0898(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_MayorIntroDone_ObjVar;                           // 0x08A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_ShredderTremor_1_ObjVar;                         // 0x08A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_ShredderTremor_2_ObjVar;                         // 0x08B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindTrashtown_Breadcrumb_03_ObjVar;                  // 0x08B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindTrashtown_Breadcrumb_01_ObjVar;                  // 0x08C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindTrashtown_Breadcrumb_02_ObjVar;                  // 0x08C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_StartClapstructorDialogueAnim_ObjVar;            // 0x08D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_StartClapstructorDialogueShutDown_ObjVar;        // 0x08D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_EddieHacksClapstructor_ObjVar;                   // 0x08E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_MayorTalksToPlayer_ObjVar;                       // 0x08E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToMarketDistrict_ClearArea_ObjSetVar;              // 0x08F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ClearSubwaArea_ObjVar;                               // 0x08F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_PlayerArrivedInSubwayArea_ObjVar;                    // 0x0900(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToMarketDistrict_ActivateSubway_ObjSetVar;         // 0x0908(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_SubwayDoorOpen_ObjVar;                               // 0x0910(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_ReachShredder_BC1_ObjVar;                        // 0x0918(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Start1stBarricadeSequence_ObjVar;                    // 0x0920(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Start1stBarricadeSequence_ObjSetVar;                 // 0x0928(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Start2ndBarricadeSequence_ObjVar;                    // 0x0930(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Start2ndBarricadeSequence_ObjSetVar;                 // 0x0938(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_TonyAndLoadersDied_ObjVar;                           // 0x0940(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_TimothyMoxxiSequencerDone_ObjVar;                    // 0x0948(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_GetLoaderParts_PartsDropped_ObjVar;                  // 0x0950(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_OpenDoorToMarketSubwayArea_ObjVar;                   // 0x0958(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_ReturnToStripViaLevelTransition_ObjVar;          // 0x0960(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DefeatScraptrapNest_ObjVar;                          // 0x0968(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DefeatScraptrapPrime_ObjVar;                         // 0x0970(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_ContainerDoorOpen_ObjVar;                        // 0x0978(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_ClearSubwayArea_PreCheck_ObjVar;                     // 0x0980(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_ReturnToStripViaFastTravel_ObjVar;               // 0x0988(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
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
		void OnDialogSequenceFinished_39();
		void OnDialogSequenceFinished_38();
		void OnDialogSequenceFinished_37();
		void OnDialogSequenceFinished_36();
		void Obj_EscortConstructorBack(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_EscortConstructorBack(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TalkToMayorEnd(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_TalkToMayorEnd(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ReinforceBeam(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ConstructorWeldedSelfToBeam(class UObject* Context);
		void MCE_PlayerEscortedConstructor_FirstArena(class UObject* Context);
		void MCE_PlayerDroppedAnItem(class UObject* Context);
		void INV_Obj_ItemsDropped(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_Obj_MayorArrived(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_MayorArrived(class UObject* Context);
		void MCE_MayorRejectsItem(class UObject* Context);
		void MCE_PlayerLoadedIntoKeyObjective(class UObject* Context);
		void MCE_MayorGaveUpOnTest(class UObject* Context);
		void Set_GiveLoaderPartsToEddie(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TakePoweCore(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_TakePowerCore(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_PlayerTookPowerCore(class UObject* Context);
		void MCE_PlayerGaveParts(class UObject* Context);
		void MCE_PlayerPlacedEye(class UObject* Context);
		void MCE_PlayerPlacedChip(class UObject* Context);
		void Obj_OpenEscortDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_OpenEscortDoor(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_PlayerOpenedEscortDoor(class UObject* Context);
		void MCE_EscortDoorDoneOpening(class UObject* Context);
		void INV_Obj_EscortConstructorToSecondArena(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerEscortedConstructorToSecondArena(class UObject* Context);
		void MCE_DEBUG_StartMission(class UObject* Context);
		void Set_DefendConstructorWhileFixingBeam(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_EliminateEnemies_FirstBarricade(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerEliminatedEnemies_FirstBarricade(class UObject* Context);
		void Set_EliminateEnemies_SecondBarricade(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_EliminateEnemies_SecondBarricade(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerEliminatedEnemies_SecondBarricade(class UObject* Context);
		void Obj_EscortConstructor_ToBeam(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_EscortConstructor_ToBeam(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_ConstructorArrivedAtBeam(class UObject* Context);
		void Obj_DefendConstructor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ConstructorPartiallyReinforcedBeam(class UObject* Context);
		void Set_an_Objective_in_the_Details();
		void Obj_EscortConstructor_ToBeam_Objective_PROXY_1();
		void Set_GetLoaderPartsAndEnterFortress(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_ConvoDone_GotEye(class UObject* Context);
		void Obj_GetAICore_BC1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_AICore_BC1(class UObject* Context);
		void Obj_GetAICore_BC2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_AICore_BC2(class UObject* Context);
		void Obj_GetAICore_BC3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_AICore_BC3(class UObject* Context);
		void Obj_ReturnWithParts_BC1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ReturnWithParts_Arrived_BC1(class UObject* Context);
		void Obj_GetLoaderParts(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_GetLoaderParts_Objective_PROXY_2();
		void INV_obj_ReadyForCoreDropEnemy(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ReadyForCoreDropEnemy(class UObject* Context);
		void Obj_GoToFortress_BC1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_GoToFortress_BC1_Arrive(class UObject* Context);
		void INV_Obj_ContainerClaptrapsSpawned(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ContainerClaptrapsSpawned(class UObject* Context);
		void Obj_GoToFortress_BC2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_GoToFortress_BC2_Arrive(class UObject* Context);
		void INV_Obj_GoToFortress(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerWentToFortress(class UObject* Context);
		void UPDATE_PlayerFoundWayIntoFort(class UObject* Context);
		void Obj_GetConstructorEye_Objective_PROXY_3();
		void Set_GetLoaderPartsAndConstructorEye(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_EscortConstructor_FirstBarricade(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GetConstructorEye_Objective_PROXY_4();
		void Set_FindWayIntoFort(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void INV_Obj_PlayerFailedToFindWayIn(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerFailedToFindWayIn(class UObject* Context);
		void Set_EnterFortress(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_EnterFortress(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerEnteredFort(class UObject* Context);
		void Obj_GetConstructorEye_Objective_PROXY_5();
		void Obj_EnterFortress_BC1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerEnteredFort_BC1_Arrive(class UObject* Context);
		void Obj_FindWayIntoFort(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_GetLoaderParts_Objective_PROXY_6();
		void Obj_GetLoaderParts_Objective_PROXY_7();
		void Obj_GetLoaderParts_Objective_PROXY_8();
		void Set_FindTrashtown(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_PlacePowerCore(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_PlacePowerCore(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_PlayerPlacedPowerCore(class UObject* Context);
		void Obj_FindTrashtown(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_GivePartsToEddie(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_Obj_BarricadeMoveComplete_2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_BarricadeMoveComplete_2(class UObject* Context);
		void INV_Obj_BarricadeMoveComplete_3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_BarricadeMoveComplete_3(class UObject* Context);
		void INV_ConstructorArrived_FirstBarricade(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ConstructorArrived_FirstBarricade(class UObject* Context);
		void INV_ConstructorArrived_SecondBarrricade(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ConstructorArrived_SecondBarricade(class UObject* Context);
		void Obj_EscortConstructor_ToBeam_Objective_PROXY_9();
		void Obj_EliminateEnemies_PreBeam(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerEliminatedEnemies_PreBeam(class UObject* Context);
		void INV_EliminateTurnAroundEnemies(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerEliminatedTurnaroundEnemies(class UObject* Context);
		void INV_Obj_EscortConstructor_ToBeamArena(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ConstructorArrivedAtBeamArena(class UObject* Context);
		void Set_PlaceParts(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void INV_Obj_EscortConstructorToFirstArena(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GoToMarketDistrict(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void INV_Obj_ReadyForTrashGatherConvo(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_EnterShredder_First(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_ReadyForTrashGatherConvo(class UObject* Context);
		void Obj_EnterShredder_Objective_PROXY_10();
		void Obj_GatherTrashBags(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GatherTrash(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_PileTrash(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_PileTrash(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_TrashBagPiled(class UObject* Context);
		void MCE_PlayerPlacedTrashBomb(class UObject* Context);
		void Obj_PlaceEye(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_ShootTrashBomb(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerTalkedToMayorAboutConstructor(class UObject* Context);
		void Set_ShootTrashBomb(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_KillBadassJanitor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_KillBadassJanitor(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void INV_Obj_ReadyToSpawnJanitor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_TalkToMayorAboutConstructor(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GetTrashBomb(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GetTrashBomb(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_PlayerGotTrashBomb(class UObject* Context);
		void Obj_TalkToMayorAboutConstructor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_PlaceBomb(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerShotTrashBomb(class UObject* Context);
		void MCE_PlayerKilledJanitor(class UObject* Context);
		void MissionKickoff();
		void Obj_GetKeys(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_OpenChute(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_PlayerOpenedTrashChute(class UObject* Context);
		void Obj_OpenChute(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerTalkedToMayorEnd(class UObject* Context);
		void Obj_TC_Mayor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_TC_Mayor(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_TalkTo_Mayor_Pre(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ReadyForMayorTC(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ReadyForMayorTC(class UObject* Context);
		void INV_obj_ReadyForClaptrapTC(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ReadyForClaptrapTC(class UObject* Context);
		void Obj_TC_FeralClaptrap(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_GetAICore_BC1_Objective_PROXY_11();
		void Obj_GetAICore_BC2_Objective_PROXY_12();
		void Obj_GetAICore_BC3_Objective_PROXY_13();
		void Obj_GetAICore_Objective_PROXY_14();
		void Set_GetLoaderPartsAndAICore_PreTC(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GetLoaderParts_Objective_PROXY_15();
		void Set_FeralClaptrap_TC(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_ConvoDone_StartEscort(class UObject* Context);
		void Set_ReturnToTimothy(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_PlayerReturnedToTimothy(class UObject* Context);
		void Obj_ReturnToTimothy(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_PlaceAIChip(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerReturnedToMayor(class UObject* Context);
		void Set_ReturnToMayor(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void INV_Obj_ReadyForAlarm(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_ReturnToMayor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_Obj_KillBadassJanitor_PreKillCheck(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerGotConstructorEye(class UObject* Context);
		void Set_GetLoaderPartsAndAICore(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GetAICore(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerFollowedMayor(class UObject* Context);
		void Set_FollowMayorToConstructor(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FollowMayor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_ReadyToSpawnPrettyBoyTroops(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_ReadyToSpawnTony(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_obj_PlayerSpeedranOutOfCave(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerSpeedRanOutOfCave(class UObject* Context);
		void INV_TonyDead(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_PrettyBoyTroopsDead(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_TonyDied(class UObject* Context);
		void MCE_PrettyBoyLoadersDied(class UObject* Context);
		void INV_Obj_ReadyToWeldSelfToBeam(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ReadyToWeldConstructorToBeam(class UObject* Context);
		void INV_Obj_WeldSelfToBeamDone(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_Obj_PlayerDroppedNothing(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerDroppedNothing(class UObject* Context);
		void MCE_PlayerCalledSubway(class UObject* Context);
		void INV_PlayerActivatedSubway(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerWentToMarketDistrict(class UObject* Context);
		void Obj_GoToMarketDistrict(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerTalkedToMayor(class UObject* Context);
		void Set_TalkToMayor(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void INV_Spawn1stLoaderWave(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_Spawn2ndLoaderWave(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_1stLoaderWaveDestroyed(class UObject* Context);
		void MCE_2ndLoaderWaveDestroyed(class UObject* Context);
		void INV_Obj_WeldedClapstructorInteractible(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_WeldedClapstructorIsNowInteractive(class UObject* Context);
		void MCE_IntroMayorDone(class UObject* Context);
		void INV_Obj_MayorIntroDone(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_Obj_ReadyToWeldSelfToBeam_Objective_PROXY_16();
		void Obj_INV_ShredderTremor_2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_ShredderTremor_2(class UObject* Context);
		void Obj_INV_ShredderTremor_3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_ShredderTremor_3(class UObject* Context);
		void Obj_FindTrashtown_Breadcrumb_03(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_FindTrashtown_Breadcrumb_01(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_FindTrashtown_Breadcrumb_02(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_FindTrashtown_Breadcrumb_01(class UObject* Context);
		void MCE_FindTrashtown_Breadcrumb_02(class UObject* Context);
		void MCE_FindTrashtown_Breadcrumb_03(class UObject* Context);
		void MCE_StartClapstructorDialogueAnim(class UObject* Context);
		void INV_Obj_StartClapstructorDialogueAnim(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_Obj_StartClapstructorDialogueShutDown(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_StartClapstructorDialogueShutDown(class UObject* Context);
		void INV_Obj_EddieHacksClapstructor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_EddieHacksClapstructor(class UObject* Context);
		void MCE_MayorTalksToPlayer(class UObject* Context);
		void INV_Obj_MayorTalksToPlayer(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GoToMarketDistrict_ClearArea(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_PlayerClearedSubwayArea(class UObject* Context);
		void Obj_ClearSubwaArea(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerArrivedAtSubway(class UObject* Context);
		void INV_PlayerArrivedInSubwayArea(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_GoToMarketDistrict_Objective_PROXY_17();
		void Obj_GoToMarketDistrict_Objective_PROXY_18();
		void Set_GoToMarketDistrict_ActivateSubway(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void INV_SubwayDoorOpen(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_SubwayDoorOpen(class UObject* Context);
		void INV_Obj_ReachShredder_BC1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ApproachedShredderBC1(class UObject* Context);
		void Set_Start1stBarricadeSequence(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_Start1stBarricadeSequence(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Started1stInteractSequence(class UObject* Context);
		void Obj_EscortConstructor_ToBeam_Objective_PROXY_19();
		void Obj_Start2ndBarricadeSequence(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_Start2ndBarricadeSequence(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_Started2ndBarricadeSequence(class UObject* Context);
		void Obj_EscortConstructor_ToBeam_Objective_PROXY_20();
		void INV_TonyAndLoadersDied(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_TonyAndLoadersDied(class UObject* Context);
		void INV_TimothyMoxxiSequencerDone(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_TimothyMoxxiSequencerDone(class UObject* Context);
		void INV_GetLoaderParts_PartsDropped(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_GetLoaderParts_PartsDropped_Objective_PROXY_21();
		void INV_GetLoaderParts_PartsDropped_Objective_PROXY_22();
		void INV_GetLoaderParts_PartsDropped_Objective_PROXY_23();
		void INV_GetLoaderParts_PartsDropped_Objective_PROXY_24();
		void INV_GetLoaderParts_PartsDropped_Objective_PROXY_25();
		void MCE_LoaderPartDropped(class UObject* Context);
		void MCE_PlayerOpenedDoorToSubwayArea(class UObject* Context);
		void INV_OpenDoorToMarketSubwayArea(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerReturnedToStrip(class UObject* Context);
		void INV_Obj_ReturnToStripViaLevelTransition(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_DefeatScraptrapNest(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerDefeatedScraptrapNest(class UObject* Context);
		void Obj_DefeatScraptrapPrime(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerDefeatedScraptrapPrime(class UObject* Context);
		void INV_Obj_ContainerDoorOpen(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ContainerDoorOpen(class UObject* Context);
		void INV_ClearSubwayArea_PreCheck(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_ClearSubwayArea_PreCheck_Objective_PROXY_26();
		void INV_Obj_ReturnToStripViaFastTravel(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerReturnedToStrip_HideoutFastTravel(class UObject* Context);
		void Obj_TalkToMayor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ConvoDone_GotItems(class UObject* Context);
		void MCE_PlayerEnteredTheShredder(class UObject* Context);
		void Set_EnterShredder(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_PlayerGotEye(class UObject* Context);
		void Obj_EnterShredder(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_GetConstructorEye(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_KeyToHappiness_Try1(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_PutKeyToHappinessOnGround(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerFoundTrashtown(class UObject* Context);
		void ExecuteUbergraph_Mission_DLC1_Ep04_Trashtown(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
