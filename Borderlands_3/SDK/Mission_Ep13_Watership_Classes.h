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
	 * BlueprintGeneratedClass Mission_Ep13_Watership.Mission_Ep13_Watership_C
	 * Size -> 0x0460 (FullSize[0x0970] - InheritedSize[0x0510])
	 */
	class UMission_Ep13_Watership_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                SET_GoToEden6_ObjSetVar;                                 // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_GoToEden6_ObjVar;                                    // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_TalkToHammerlock_ObjSetVar;                          // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToHammerlock_ObjVar;                             // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindShip_ObjSetVar;                                  // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindShip_ObjVar;                                     // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_KillSaurians_ObjSetVar;                              // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_KillSaurians_ObjVar;                                 // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_CollectAI_ObjSetVar;                                 // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CollectAI_ObjVar;                                    // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GetToPanel_ObjSetVar;                                // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetToPanel_ObjVar;                                   // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_OpenPanel_ObjSetVar;                                 // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_OpenPanel_ObjVar;                                    // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_CutLines_ObjSetVar;                                  // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CutLines_ObjVar;                                     // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_EnterShip_ObjSetVar;                                 // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EnterShip_ObjVar;                                    // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GetToBridge_ObjSetVar;                               // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetToBridge_ObjVar;                                  // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GrabWires_ObjSetVar;                                 // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GrabWires_ObjVar;                                    // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GetToBridge2_ObjSetVar;                              // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetToBridge2_ObjVar;                                 // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PlaceAI_ObjSetVar;                                   // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlaceAI_ObjVar;                                      // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GetToBridge3_ObjSetVar;                              // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetToBridge3_ObjVar;                                 // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillEvilAI_ObjSetVar;                                // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillEvilAI_ObjVar;                                   // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_CollectBalexEnd_ObjSetVar;                           // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CollectBalexEnd_ObjVar;                              // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GetToBridge4_ObjSetVar;                              // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetToBridge4_ObjVar;                                 // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_CollectBadAI_ObjSetVar;                              // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   CollectBadAI_ObjVar;                                     // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_MeetAI_ObjSetVar;                                    // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MeetAI_ObjVar;                                       // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GetToBridge2_5_ObjSetVar;                            // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetToBridge2_5_ObjVar;                               // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_DefendYourself1_ObjSetVar;                           // 0x0658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DefendYourself1_ObjVar;                              // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_DefendGoodAI_ObjSetVar;                              // 0x0668(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DefendGoodAI_ObjVar;                                 // 0x0670(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillApe_ObjSetVar;                                   // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillApe_ObjVar;                                      // 0x0680(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_CollectAISecurity_ObjSetVar;                         // 0x0688(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CollectAISecurity_ObjVar;                            // 0x0690(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ClearSecurityBay_ObjSetVar;                          // 0x0698(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ClearSecurityBay_ObjVar;                             // 0x06A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GetToContainer_ObjSetVar;                            // 0x06A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetToContainer_ObjVar;                               // 0x06B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_DisconnectContainer_ObjSetVar;                       // 0x06B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DisconnectContainer_ObjVar;                          // 0x06C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ClearCargoBay_ObjSetVar;                             // 0x06C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ClearCargoBay_ObjVar;                                // 0x06D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PlaceAICargoBay_ObjSetVar;                           // 0x06D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlaceAICargoBay_ObjVar;                              // 0x06E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_SanctuaryGetToTheBridge_ObjSetVar;                   // 0x06E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SanctuaryGetToTheBridge_ObjVar;                      // 0x06F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_SanctuaryKillServiceBots_ObjSetVar;                  // 0x06F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SanctuaryKillServiceBots_ObjVar;                     // 0x0700(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SanctuaryInstallGoodAI_ObjVar;                       // 0x0708(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_SanctuaryInstallGoodAI_ObjSetVar;                    // 0x0710(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SanctuaryPickUpBadAIChip_ObjVar;                     // 0x0718(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_SanctuaryPickUpBadAIChip_ObjSetVar;                  // 0x0720(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GiveAIToMarcus_ObjSetVar;                            // 0x0728(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GiveAIToMarcus_ObjVar;                               // 0x0730(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_SanctuaryGiveKeyToTannis2_ObjSetVar;                 // 0x0738(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillMedBot_ObjSetVar;                                // 0x0740(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillMedBot_ObjVar;                                   // 0x0748(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GetToBridge5_ObjSetVar;                              // 0x0750(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetToBridge5_ObjVar;                                 // 0x0758(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SanctuaryKillServiceBotsCompleted;                       // 0x0760(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_H8X8[0x7];                                   // 0x0761(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjective*                                   Obj_GoToSecureDoor_ObjVar;                               // 0x0768(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToServiceDoor_ObjSetVar;                           // 0x0770(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToServiceDoor_ObjVar;                              // 0x0778(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_SpawnBalexBoss_ObjVar;                           // 0x0780(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_SpawnBalexMech_ObjVar;                           // 0x0788(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindKeyFragment_ObjSetVar;                           // 0x0790(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindKeyFragment_ObjVar;                              // 0x0798(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_FindKeyFragDoor_ObjVar;                          // 0x07A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindKeyFragButton_ObjVar;                            // 0x07A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_MedBayExitDoor_ObjVar;                           // 0x07B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToSecureDoor_ObjSetVar;                            // 0x07B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_CargoEnterDoor_ObjVar;                           // 0x07C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_CargoExitDoor_ObjVar;                            // 0x07C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_SecurityDoorEnter_ObjVar;                        // 0x07D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UObject*                                             PlayerContexVar;                                         // 0x07D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 Dialog_PostPickUpAI;                                     // 0x07E0(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 Dialog_HitPanel;                                         // 0x07EC(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_DefendGoodAI_Turets_ObjVar;                      // 0x07F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_CINE_Holo1_ObjVar;                               // 0x0800(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_CineHolo1_ObjSetVar;                                 // 0x0808(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_CINE_Holo2_ObjSetVar;                                // 0x0810(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_CINE_Holo2_ObjVar;                               // 0x0818(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_CINE_Holo3_ObjSetVar;                                // 0x0820(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_CINE_Holo3_ObjVar;                               // 0x0828(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 Dialog_BalexOriginStory;                                 // 0x0830(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_JNI1[0x4];                                   // 0x083C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjectiveSet*                                Set_CINE_Holo4_ObjSetVar;                                // 0x0840(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_CINE_Holo4_ObjVar;                               // 0x0848(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_KillBalex_ObjVar;                                // 0x0850(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindShip2_ObjSetVar;                                 // 0x0858(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_SpawnSecurityApe_ObjVar;                         // 0x0860(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_ServiceDoor_ObjVar;                              // 0x0868(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SpawnBalexDino_ObjVar;                               // 0x0870(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 Dialog__PickUpBalexNag;                                  // 0x0878(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_R0W2[0x4];                                   // 0x0884(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjective*                                   Obj_INV_BalexDinoDoor_ObjVar;                            // 0x0888(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SanctuaryGiveKeyToTanns2_ObjVar;                     // 0x0890(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ReturnToSanctuary_ObjSetVar;                         // 0x0898(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_ReturnToSanctuary_ObjVar;                            // 0x08A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_SanctuaryGetToTheBridge2_ObjSetVar;                  // 0x08A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_INVIS_AsteroidCollision_ObjVar;                      // 0x08B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_GenevivTakesShip_ObjVar;                         // 0x08B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 NewVar_1;                                                // 0x08C0(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 Dialog_BalexEnterShip;                                   // 0x08CC(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_MedBotFirstSpawn_ObjVar;                         // 0x08D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_BossShield_ObjVar;                               // 0x08E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PlayRecord_ObjSetVar;                                // 0x08E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlayRecord_ObjVar;                                   // 0x08F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TakeRecord_ObjSetVar;                                // 0x08F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TakeRecrod_ObjVar;                                   // 0x0900(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetToBridge4_BC1_ObjVar;                             // 0x0908(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetToBrdige4_BC2_ObjVar;                             // 0x0910(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetToBridge_BC1_ObjVar;                              // 0x0918(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetToBridge2_5_BC2_ObjVar;                           // 0x0920(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetToBridge2_5_BC1_ObjVar;                           // 0x0928(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetToBridge5_BC1_ObjVar;                             // 0x0930(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetToBridge5_BC2_ObjVar;                             // 0x0938(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_INVIS_BalexInControl_ObjVar;                         // 0x0940(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 Convo_TannisBringThingToMe1;                             // 0x0948(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_RJ1M[0x4];                                   // 0x0954(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjective*                                   OBJ_Invisible_MeetAtlasSoliders_ObjVar;                  // 0x0958(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_Invisible_GenevivLargeFaceShowsUp_ObjVar;            // 0x0960(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_NearSecurityBay_AtCheckpoint_ObjVar;                 // 0x0968(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

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
		void SET_KillSaurians(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_CollectAI(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_CollectAI(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GetToPanel(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GetToPanel(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_OpenPanel(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_OpenPanel(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void UpdateGetToPanel(class UObject* Context);
		void UpdateOpenPanel(class UObject* Context);
		void Obj_CutLines(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_CutLines(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void UpdateCutLines(class UObject* Context);
		void Set_EnterShip(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_EnterShip(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UpdateEnterShip(class UObject* Context);
		void Obj_GetToBridge(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GetToBridge(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GrabWires(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GrabWires(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void UpdateGrabWires(class UObject* Context);
		void Set_GetToBridge2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GetToBridge2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UpdateGetToBridge2(class UObject* Context);
		void Obj_PlaceAI(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_PlaceAI(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void UpdatePlaceAI(class UObject* Context);
		void Obj_GetToBridge3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GetToBridge3(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void UpdateGetToBridge3(class UObject* Context);
		void Set_KillEvilAI(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_KillEvilAI(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UpdateKillEvilAI(class UObject* Context);
		void Set_CollectBalexEnd(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_CollectBalexEnd(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UpdateCollectBalexEnd(class UObject* Context);
		void Set_GetToBridge4(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void UpdateGetToBridge4(class UObject* Context);
		void Obj_GetToBridge4(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void CollectBadAI(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_CollectBadAI(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void UpdateCollectBadAI(class UObject* Context);
		void Obj_MeetAI(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_MeetAI(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void UpdateMeetAI(class UObject* Context);
		void Set_GetToBridge2_6(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void UpdateGetToBrdige2_6(class UObject* Context);
		void Obj_GetToBridge2_6(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Adv2GetToBridge2_6(class UObject* Context);
		void Obj_DefendYourself1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_DefendYourself1(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void UpdateDefendYourself1(class UObject* Context);
		void Set_DefendGoodAI(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void UpdateDefendGoodAI(class UObject* Context);
		void Obj_DefendGoodAI(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_KillApe(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void UpdateKillApe(class UObject* Context);
		void Obj_KillApe(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_CollectAISecurity(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_CollectAISecurity(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void UpdateCollectAISecurity(class UObject* Context);
		void Obj_ClearSecurityBay(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ClearSecurityBay(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void UpdateClearSecurityBay(class UObject* Context);
		void Adv2DefendGoodAI(class UObject* Context);
		void Adv2KillApe(class UObject* Context);
		void Obj_GetToContainer(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GetToContainer(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void UpdateGetToContainer(class UObject* Context);
		void Set_DisconnectContainer(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void UpdateDisconnectContainer(class UObject* Context);
		void Obj_DisconnectContainer(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ClearCargoBay(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void UpdateClearCargoBay(class UObject* Context);
		void Obj_ClearCargoBay(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Adv2GetToContainer(class UObject* Context);
		void Obj_PlaceAICargoBay(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_PlaceAICargoBay(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void UpdatePlaceAICargoBay(class UObject* Context);
		void Set_SanctuaryGetToTheBridge(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_SanctuaryGetToTheBridge(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_SanctuaryKillServiceBots(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_SanctuaryKillServiceBots(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_SanctuaryInstallGoodAI(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_SanctuaryInstallGoodAI(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_SanctuaryGiveKeyToTannis2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_SanctuaryGetToTheBridge_Objective_PROXY();
		void Set_SanctuaryPickUpBadAIChip(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_SanctuaryPickUpBadAIChip(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GiveAIToMarcus(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GiveAIToMarcus(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_SanctuaryGoToBridge(class UObject* Context);
		void Advance_SanctuaryPickUpBadAIChip(class UObject* Context);
		void Update_SanctuaryInstallGoodAI(class UObject* Context);
		void Update_GiveAIToMarcus(class UObject* Context);
		void OBJ_KillSaurians(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UpdateFindShip(class UObject* Context);
		void Set_FindShip(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindShip(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UpdateGoToEden6(class UObject* Context);
		void UpdateTalkToHammerlock(class UObject* Context);
		void Obj_TalkToHammerlock(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_TalkToHammerlock(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_SanctuaryGiveKeyToTannis(class UObject* Context);
		void Obj_KillMedBot(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_KillMedBot(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void UpdateKillMedBot(class UObject* Context);
		void AdvToKillMedBot(class UObject* Context);
		void Obj_GoToServiceDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GoToServiceDoor(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void UpdateGoToServiceDoor(class UObject* Context);
		void Obj_GetToBridge5(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GetToBridge5(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void UpdateGetToBridge5(class UObject* Context);
		void AdvToGetToBridge5(class UObject* Context);
		void Adv2KillEvilAI(class UObject* Context);
		void AdvToGetToBridge3(class UObject* Context);
		void Adv2DisconnectContainer(class UObject* Context);
		void Adv2ClearCargoBay(class UObject* Context);
		void AdvToPlaceAICargoBay(class UObject* Context);
		void Obj_GoToSecureDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UpdateGoToSecureDoor(class UObject* Context);
		void AdvToGoToServiceDoor(class UObject* Context);
		void AdvToGetToBridge4(class UObject* Context);
		void INV_Obj_SpawnBalexBoss(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_SpawnBalexMech(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_FindKeyFragment(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_FindKeyFragment(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_INV_FindKeyFragDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UpdateINVKeyFragDoor(class UObject* Context);
		void AdvToGetToBridge2(class UObject* Context);
		void Adv2CollectBalexEnd(class UObject* Context);
		void Obj_FindKeyFragButton(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UpdateINVKeyFragButton(class UObject* Context);
		void Obj_INV_MedBayExitDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UpdateINVMedBayExitDoor(class UObject* Context);
		void Set_GoToSecureDoor(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_INV_CargoEnterDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_CargoExitDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UpdateCargoExitDoor(class UObject* Context);
		void UpdateCargoEnterDoor(class UObject* Context);
		void Obj_INV_SecurityDoorEnter(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UpdateINVSecurityDoorEnter(class UObject* Context);
		void Adv2GoToSecureDoor(class UObject* Context);
		void Dialog_BalexOpening1(class UObject* Context);
		void Dialog_GaveMeRatch(class UObject* Context);
		void Dialog_StopBalexBackStory(class UObject* Context);
		void Dialog_GenIVIVSexTalk(class UObject* Context);
		void Obj_INV_DefendGoodAI_Turets(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UpdateDefendGoodAI_Turrets(class UObject* Context);
		void Dialog_BalexCloseHoles(class UObject* Context);
		void UpdateINV_CINE_HOLO1(class UObject* Context);
		void Obj_INV_CINE_Holo1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_CineHolo1(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_GoToEden6(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_GoToEden6(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_CINE_Holo2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_INV_CINE_Holo2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Adv2CineHolo2(class UObject* Context);
		void Set_CINE_Holo3(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void UpdateCINE_Halo3(class UObject* Context);
		void Obj_INV_CINE_Holo3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Adv2CINEHolo3(class UObject* Context);
		void AdvToCINEHOLO4(class UObject* Context);
		void Set_CINE_Holo4(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_INV_CINE_Holo4(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_KillBalex(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UpdateKillBalex(class UObject* Context);
		void Obj_FindShip_Objective_PROXY_1();
		void Obj_FindShip_Objective_PROXY_2();
		void Obj_FindShip_Objective_PROXY_3();
		void Set_FindShip2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_INV_SpawnSecurityApe(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_INV_SpawnSecurityApe(class UObject* Context);
		void Obj_INV_ServiceDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_INV_ServiceDoor(class UObject* Context);
		void Obj_SpawnBalexDino(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Dialog_BalexWhereAreYou(class UObject* Context);
		void Obj_FindKeyFragment_Objective_PROXY_4();
		void Update_FindKeyFrag(class UObject* Context);
		void Obj_FindKeyFragment_Objective_PROXY_5();
		void Obj_FindKeyFragment_Objective_PROXY_6();
		void Obj_FindKeyFragment_Objective_PROXY_7();
		void Obj_FindKeyFragment_Objective_PROXY_8();
		void Obj_FindKeyFragment_Objective_PROXY_9();
		void Obj_FindKeyFragment_Objective_PROXY_10();
		void Obj_FindKeyFragment_Objective_PROXY_11();
		void Obj_FindKeyFragment_Objective_PROXY_12();
		void Obj_FindKeyFragment_Objective_PROXY_13();
		void Obj_FindKeyFragment_Objective_PROXY_14();
		void Obj_FindKeyFragment_Objective_PROXY_15();
		void Obj_FindKeyFragment_Objective_PROXY_16();
		void Obj_FindKeyFragment_Objective_PROXY_17();
		void Obj_FindKeyFragment_Objective_PROXY_18();
		void Obj_FindKeyFragment_Objective_PROXY_19();
		void Obj_FindKeyFragment_Objective_PROXY_20();
		void Obj_FindKeyFragment_Objective_PROXY_21();
		void Obj_FindKeyFragment_Objective_PROXY_22();
		void Obj_FindKeyFragment_Objective_PROXY_23();
		void Obj_FindKeyFragment_Objective_PROXY_24();
		void Obj_FindKeyFragment_Objective_PROXY_25();
		void Obj_INV_BalexDinoDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Dialog_BalexDinoDoor(class UObject* Context);
		void Obj_SanctuaryGiveKeyToTanns2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ReturnToSanctuary(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_ReturnToSanctuary(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void WatershipUpdate_ReturnToSanctuary(class UObject* Context);
		void Set_SanctuaryGetToTheBridge2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_INVIS_AsteroidCollision(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_INVAsteroidCollision(class UObject* Context);
		void Obj_INV_GenevivTakesShip(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Dialog_BalexBackstory(class UObject* Context);
		void Dialog_CloseBalexOpenMedBayGate(class UObject* Context);
		void Obj_INV_MedBotFirstSpawn(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SaveState_SecurityAlarm(class UObject* Context);
		void Adv_DefendYourself(class UObject* Context);
		void Update_INV_BossShield(class UObject* Context);
		void Obj_INV_BossShield(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_PlayRecord(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_PlayRecord(class UObject* Context);
		void Set_PlayRecord(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_TakeRecord(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_TakeRecord(class UObject* Context);
		void Obj_TakeRecrod(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_GetToBridge4_BC1(class UObject* Context);
		void Obj_GetToBridge4_BC1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_GetToBridge4_BC2(class UObject* Context);
		void Obj_GetToBrdige4_BC2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_GetToBridge_BC1(class UObject* Context);
		void Obj_GetToBridge_BC1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_GetToBridge2_5_BC1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_GetToBridge2_5_BC2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_GetToBridge2_5_BC1(class UObject* Context);
		void Update_GetToBridge2_5_BC2(class UObject* Context);
		void Update_GetToBridge5_BC1(class UObject* Context);
		void Obj_GetToBridge5_BC1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_GetToBridge5_BC2(class UObject* Context);
		void Obj_GetToBridge5_BC2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_INVIS_BalexInControl(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_INVBalexInControl(class UObject* Context);
		void OBJ_Invisible_MeetAtlasSoliders(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_Invisible_MeetAtlasSoliders(class UObject* Context);
		void OBJ_Invisible_GenevivLargeFaceShowsUp(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void CompleteMission_Watership(class UObject* Context);
		void AdvanceTo_InstallGoodAI(class UObject* Context);
		void Obj_NearSecurityBay_AtCheckpoint(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_NearSecurityBay_AtCheckpoint(class UObject* Context);
		void UPDATE_SanctuaryKillServiceBots(class UObject* Context);
		void ExecuteUbergraph_Mission_Ep13_Watership(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
