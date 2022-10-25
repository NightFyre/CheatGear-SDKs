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
	 * BlueprintGeneratedClass Mission_Ep16_SiblingRivalry.Mission_Ep16_SiblingRivalry_C
	 * Size -> 0x03D0 (FullSize[0x08E0] - InheritedSize[0x0510])
	 */
	class UMission_Ep16_SiblingRivalry_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_Clay_ObjSetVar;                                      // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Clay_ObjVar;                                         // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FollowClay_ObjSetVar;                                // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_RedevousWithHammerlock_ObjSetVar;                    // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TitleCard_Aurelia_ObjSetVar;                         // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_AureliaFight_ObjSetVar;                              // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_EstateGrounds_ObjSetVar;                             // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_HeadShotStatue_ObjSetVar;                            // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_EnterIsland_ObjSetVar;                               // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_OpenVault_ObjSetVar;                                 // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_DefeatVaultMonster_ObjSetVar;                        // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ReturnToSanc_ObjSetVar;                              // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FollowClay_ObjVar;                                   // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EstateGrounds_ObjVar;                                // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TitleCard_Aurelia_INV_ObjVar;                        // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_AureliaFight_ObjVar;                                 // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EnterIsland_ObjVar;                                  // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_OpenVault_ObjVar;                                    // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DefeatVaultMonster_ObjVar;                           // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReturnToSanc_ObjVar;                                 // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EnterTheConveyorBelt_ObjVar;                         // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_EnterBeltArea_ObjSetVar;                             // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GetVaultKeyFromTannis_ObjSetVar;                     // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetVaultKeyFromTannis_ObjVar;                        // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_BreadcrumbStairs_ObjVar;                             // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_BreadcrumbMainHall_ObjVar;                           // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ActivateBridge_ObjVar;                               // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_RaiseTheBridge_ObjSetVar;                            // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_WainwrightBackShot_ObjVar;                           // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_RaiseSwitch_ObjVar;                                  // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_WainwrightMelee_ObjVar;                              // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_WainwrightShoot_ObjVar;                              // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToWainwright_ObjVar;                             // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_EnterEstate_ObjSetVar;                               // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EnterEstate_ObjVar;                                  // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GiveTannisFragment_ObjSetVar;                        // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GiveTannisKeyFragment_ObjVar;                        // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    StatueUnlockObjCount;                                    // 0x0640(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_1B55[0x4];                                   // 0x0644(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjectiveSet*                                SET_TalkToWainwright_ObjSetVar;                          // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_WainTalkTrigger_ObjVar;                              // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_BackShotStatue_ObjSetVar;                            // 0x0658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_MeleeStatue_ObjSetVar;                               // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_RevealRuins_ObjVar;                                  // 0x0668(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_LocatePowderDeliverySystem_ObjSetVar;                // 0x0670(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindDeliveryPipe_ObjVar;                             // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ActivatePipe_ObjSetVar;                              // 0x0680(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ActivatePipe_ObjVar;                                 // 0x0688(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_UnclogPipeAttempt3_ObjSetVar;                        // 0x0690(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_LeverPull3_ObjVar;                                   // 0x0698(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillTinks_ObjVar;                                    // 0x06A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_SillyText_ObjSetVar;                                 // 0x06A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SillyText_ObjVar;                                    // 0x06B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillTinks_ObjSetVar;                                 // 0x06B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_RequestBarrel_ObjVar;                                // 0x06C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_RequestBarrel_ObjSetVar;                             // 0x06C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_RetreiveVaultKey_ObjVar;                             // 0x06D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_RetrieveVaultKey_ObjSetVar;                          // 0x06D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ArriveAtPowderDeliveryRoom_ObjSetVar;                // 0x06E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToPowderRoom_ObjVar;                               // 0x06E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DestroyBarrel_ObjVar;                                // 0x06F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_HammerlockLeaveTalk_ObjVar;                          // 0x06F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_LootVault_ObjSetVar;                                 // 0x0700(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_LootVault_ObjVar;                                    // 0x0708(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ReviveHammerlockAndWainwright_ObjSetVar;             // 0x0710(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CheckOnHamm_ObjVar;                                  // 0x0718(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_WainwrightWingTalk_ObjVar;                           // 0x0720(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_HamDropTalk_ObjVar;                                  // 0x0728(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ZooChatter_ObjVar;                                   // 0x0730(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GHouseChatter_ObjVar;                                // 0x0738(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SingletonChatter_ObjVar;                             // 0x0740(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_DefeatGraveAndWard_ObjSetVar;                        // 0x0748(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DefeatGrave_ObjVar;                                  // 0x0750(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DefeatWard_ObjVar;                                   // 0x0758(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GraveWardTitleCard_ObjSetVar;                        // 0x0760(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GraveWardTitleCard_ObjVar;                           // 0x0768(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 HurtConvo3;                                              // 0x0770(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 SingletonConvo;                                          // 0x077C(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 SingletonRecordingConvo;                                 // 0x0788(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_QSXN[0x4];                                   // 0x0794(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjective*                                   Obj_InterruptSingleton_ObjVar;                           // 0x0798(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_InterruptZoo_ObjVar;                                 // 0x07A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 MaddoxConvo;                                             // 0x07A8(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_AF8L[0x4];                                   // 0x07B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjective*                                   Obj_MaddoxChatter_ObjVar;                                // 0x07B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MontgomeryChatter_ObjVar;                            // 0x07C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 MontgomeryConvo;                                         // 0x07C8(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_BOR7[0x4];                                   // 0x07D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjective*                                   Obj_ClearPowderCellar_ObjVar;                            // 0x07D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ClearPowderRoom_ObjSetVar;                           // 0x07E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_BridgeTalk_ObjVar;                                   // 0x07E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_NormalBarrelDrop_ObjVar;                             // 0x07F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_VaultKeyCreation_ObjVar;                             // 0x07F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_VaultKeyCreation_ObjSetVar;                          // 0x0800(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TannisMove_ObjVar;                                   // 0x0808(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TannisDoesThings_ObjVar;                             // 0x0810(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TannisMove_ObjSetVar;                                // 0x0818(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TannisDoesThings_ObjSetVar;                          // 0x0820(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TannisKidnapped_ObjVar;                              // 0x0828(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TannisKidnapped_ObjSetVar;                           // 0x0830(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MoveToNextObj_ObjVar;                                // 0x0838(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DropBarrel_ObjVar;                                   // 0x0840(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_MissionSkinReward_ObjVar;                            // 0x0848(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TalkToLilith_ObjSetVar;                              // 0x0850(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReturnToShip_ObjVar;                                 // 0x0858(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 HurtConvo1;                                              // 0x0860(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 HurtConvo2;                                              // 0x086C(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EnableVault_ObjVar;                                  // 0x0878(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EnterVault_ObjVar;                                   // 0x0880(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_LeaveVault_ObjVar;                                   // 0x0888(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_MeetTannis_ObjVar;                                   // 0x0890(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_MeetTannis_ObjSetVar;                                // 0x0898(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_TalkToTannis_ObjVar;                                 // 0x08A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 Convo_BalloonAnimals;                                    // 0x08A8(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 Convo_ClayWaterfall;                                     // 0x08B4(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 Convo_CourtyardStatue;                                   // 0x08C0(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VR03[0x4];                                   // 0x08CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjective*                                   Obj_BCSecretPathEntrance_ObjVar;                         // 0x08D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PowderCellarDens_ObjVar;                             // 0x08D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

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
		void Obj_EnterIsland(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_OpenVault(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_DefeatVaultMonster(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_ReturnToSanc(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_AureliaFight(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Player_rendezvous_with_Clay(class UObject* Context);
		void MCE_Player_arrives_at_the_cave_entry(class UObject* Context);
		void MCE_Player_defeats_Aurelia(class UObject* Context);
		void MCE_Player_arrives_at_the_estate_grounds(class UObject* Context);
		void MCE_Player_has_entered_the_vault_island(class UObject* Context);
		void Update_VaultOpened(class UObject* Context);
		void MCE_Player_has_defeated_the_vault_monster(class UObject* Context);
		void MCE_Player_has_returned_to_Lilith_on_Sanctuary(class UObject* Context);
		void Obj_EnterTheConveyorBelt(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_EnteredConveyor(class UObject* Context);
		void Set_EnterBeltArea(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_GetVaultKeyFromTannis(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GetVaultKeyFromTannis(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_GotVaultKey(class UObject* Context);
		void Obj_BreadcrumbStairs(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_BreadCrumbStairs(class UObject* Context);
		void Obj_BreadcrumbMainHall(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_BreadCrumbMainHall(class UObject* Context);
		void Set_an_Objective_in_the_Details();
		void MCE_PlayerActivatedBridge(class UObject* Context);
		void Obj_ActivateBridge(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_RaiseTheBridge(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_WainwrightBackShot(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_BackShotStatue(class UObject* Context);
		void Obj_TitleCard_Aurelia_INV(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_RaiseSwitch(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerEnteredTriggerToRaiseSwitch(class UObject* Context);
		void Obj_WainwrightMelee(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_MeleeStatue(class UObject* Context);
		void Obj_WainwrightShoot(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ShootStatue(class UObject* Context);
		void MCE_Trigger_Aurelia_TitleCard(class UObject* Context);
		void Obj_TalkToWainwright(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_FollowClay(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_EnterEstate(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_EnterEstate(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_ArrivedAtEstate(class UObject* Context);
		void Set_GiveTannisFragment(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GiveTannisKeyFragment(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerGaveTannisVaultKey(class UObject* Context);
		void SET_TalkToWainwright(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_TalkedWithWainwright(class UObject* Context);
		void Obj_WainTalkTrigger(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_WainTalkTrigger(class UObject* Context);
		void Obj_BCSecretPathEntrance(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_ArrivedAtSecretPath(class UObject* Context);
		void Set_BackShotStatue(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_MeleeStatue(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_Player_reveals_one_of_the_ruins(class UObject* Context);
		void Obj_RevealRuins(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_RevealRuins_Objective_PROXY_1();
		void Obj_RevealRuins_Objective_PROXY_2();
		void Obj_FindDeliveryPipe(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_LocatePowderDeliverySystem(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_ActivatePipe(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ActivatePipe(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_UnclogPipeAttempt3(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_LeverPull3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_an_Objective_in_the_Details();
		void Set_KillTinks(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_KillTinks(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_SillyText(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_SillyText(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_RequestBarrel(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_RequestBarrel(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_RetrieveVaultKey(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_RetreiveVaultKey(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_ActivatedPipe(class UObject* Context);
		void Update_LocatedPipe(class UObject* Context);
		void Update_UnclogAttempt3(class UObject* Context);
		void Update_SillyText(class UObject* Context);
		void Update_KilledTinks(class UObject* Context);
		void Update_RequestedBarrel(class UObject* Context);
		void Update_GetVaultKey(class UObject* Context);
		void Obj_GoToPowderRoom(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_ArrivedAtPowderRoom(class UObject* Context);
		void Set_ArriveAtPowderDeliveryRoom(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_DestroyBarrel(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_DestroyedBarrel(class UObject* Context);
		void Obj_HammerlockLeaveTalk(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_HammerlockLeaveTrigger(class UObject* Context);
		void Set_LootVault(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_LootVault(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_LootVault(class UObject* Context);
		void Set_ReviveHammerlockAndWainwright(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_CheckOnHamm(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_CheckedOnHamm(class UObject* Context);
		void Obj_WainwrightWingTalk(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void WainWrightWingTalk(class UObject* Context);
		void Obj_HamDropTalk(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void HamDropTalk(class UObject* Context);
		void Obj_EstateGrounds(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_FollowClay(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ReturnToSanc(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_DefeatVaultMonster(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_OpenVault(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_EnterIsland(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_HeadShotStatue(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ZooChatter(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ZooChatter(class UObject* Context);
		void Obj_GHouseChatter(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_GHouseChatter(class UObject* Context);
		void Obj_SingletonChatter(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SingletonChatter(class UObject* Context);
		void Set_DefeatGraveAndWard(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_DefeatGrave(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_DefeatedGrave(class UObject* Context);
		void Obj_DefeatWard(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_DefeatedWard(class UObject* Context);
		void Set_GravewardTitleCard(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GravewardTitleCard(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_InterruptSingleton(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void InterruptSingleton(class UObject* Context);
		void Obj_InterruptZoo(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void InterruptMaddox(class UObject* Context);
		void Obj_MaddoxChatter(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MaddoxChatter(class UObject* Context);
		void Obj_MontgomeryChatter(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void InterruptMontgomery(class UObject* Context);
		void Set_ClearPowderRoom(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ClearPowderCellar(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_ClearedPowderCellar(class UObject* Context);
		void Obj_BridgeTalk(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_TannisBridgeTalk(class UObject* Context);
		void Obj_NormalBarrelDrop(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_NormalBarrelDrop(class UObject* Context);
		void Set_VaultKeyCreation(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_VaultKeyCreation(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_VaultKeyCreated(class UObject* Context);
		void Set_TannisMove(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TannisMove(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_TannisDoesThings(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TannisDoesThings(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_TannisMoved(class UObject* Context);
		void Update_TannisDoesThings(class UObject* Context);
		void Set_TannisKidnapped(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TannisKidnapped(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_TannisKidnapped(class UObject* Context);
		void Obj_MoveToNextObj(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_DropBarrel(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_DropBarrel(class UObject* Context);
		void OBJ_MissionSkinReward(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_TalkToLilith(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ReturnToSanc_Objective_PROXY_4();
		void Obj_ReturnToShip(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_ReturnToShip(class UObject* Context);
		void Set_Clay(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_EstateGrounds(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_AureliaFight(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MissionKickoff();
		void Obj_EnableVault(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_OpenVault(class UObject* Context);
		void Obj_EnterVault(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_LeaveVault(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void PlayersInsideVault(class UObject* Context);
		void PlayersOutsideVault(class UObject* Context);
		void Set_TitleCard_Aurelia(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_MeetTannis(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_MeetTannis(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_MetTannis(class UObject* Context);
		void OBJ_TalkToTannis(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void AdvanceTo_ReturnToSanc(class UObject* Context);
		void Set_RedevousWithHammerlock(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_PowderCellarDens(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_PowderCellarDens(class UObject* Context);
		void Obj_Clay(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ExecuteUbergraph_Mission_Ep16_SiblingRivalry(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
