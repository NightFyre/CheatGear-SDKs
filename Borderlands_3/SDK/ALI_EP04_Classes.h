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
	 * BlueprintGeneratedClass ALI_EP04.ALI_EP04_C
	 * Size -> 0x03E8 (FullSize[0x08E0] - InheritedSize[0x04F8])
	 */
	class UALI_EP04_C : public UOakMission
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04F8(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                SET_GoToExperiment_ObjSetVar;                            // 0x0500(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToExperiment_ObjVar;                               // 0x0508(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_EnterHyperionLab_ObjSetVar;                          // 0x0510(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EnterHyperionLab_ObjVar;                             // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindLoaderLegs_ObjVar;                               // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindLoaderArms_ObjVar;                               // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindChest_ObjVar;                                    // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindEye_ObjVar;                                      // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PickUpEye_ObjVar;                                    // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PickUpChest_ObjVar;                                  // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PickUpLoaderArms_ObjVar;                             // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PickUpLoaderLegs_ObjVar;                             // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_PickUpOrb3_ObjSetVar;                                // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PickUpOrb3_ObjVar;                                   // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_PlaceOrb_ObjSetVar;                                  // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlaceOrb_ObjVar;                                     // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_GoToHyperionDoor_ObjSetVar;                          // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToHyperionDoor_ObjVar;                             // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_GatherParts_ObjSetVar;                               // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GatherParts_ObjVar;                                  // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_AssembleLoaderBot_ObjSetVar;                         // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_AssembleLoaderBot_ObjVar;                            // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_AssembleLoaderBotLegs_ObjSetVar;                     // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_AssembleLeftLeg_ObjVar;                              // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_AssembleRightLeg_ObjVar;                             // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_AssembleChest_ObjVar;                                // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_AssembleLoaderChest_ObjSetVar;                       // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_AssembleArmsAndEye_ObjVar;                       // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_AssembleLeftArm_ObjVar;                              // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_AssembleRightArm_ObjVar;                             // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_AssembleEye_ObjVar;                                  // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_WaitForLoaderBot_ObjSetVar;                          // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_WaitForLoaderBot_ObjVar;                             // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_FreeKrieg_ObjSetVar;                                 // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FreeKrieg_ObjVar;                                    // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_GoToElectrifiedDoor_ObjSetVar;                       // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToElectrifiedDoor_ObjVar;                          // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_RemovePowerFromMachine_ObjSetVar;                    // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_RemovePowerFromMachine_ObjVar;                       // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_FirstPowerSource_ObjVar;                         // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_SecondPowerSource_ObjVar;                        // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_ThirdPowerSource_ObjVar;                         // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_ExitFirstMemory_ObjSetVar;                           // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ExitFirstMemory_ObjVar;                              // 0x0658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_ToFirstGate_ObjSetVar;                               // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ToFirstGate_ObjVar;                                  // 0x0668(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_OpenFirstGate_ObjVar;                                // 0x0670(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_ToSecondMemory_ObjSetVar;                            // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ToSecondMemory_ObjVar;                               // 0x0680(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_DeactivateGasThwart_ObjSetVar;                       // 0x0688(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DeactivateGasThwart_ObjVar;                          // 0x0690(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_ProgressToHyperionRoom_ObjSetVar;                    // 0x0698(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ProgressToHyperionRoom_ObjVar;                       // 0x06A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_KillHyperionOfficers_ObjSetVar;                      // 0x06A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillHyperionOfficers_ObjVar;                         // 0x06B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_DeactivateGas_ObjSetVar;                             // 0x06B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DeactivateGas_ObjVar;                                // 0x06C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_KillBerserkPatients_ObjSetVar;                       // 0x06C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillBerserkPatients_ObjVar;                          // 0x06D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_KillCorrosiveBadasses_ObjSetVar;                     // 0x06D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillCorrosiveBadasses_ObjVar;                        // 0x06E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_ExitSecondMemory_ObjSetVar;                          // 0x06E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ExitSecondMemory_ObjVar;                             // 0x06F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_ToKriegMoment_ObjSetVar;                             // 0x06F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ToKriegMoment_ObjVar;                                // 0x0700(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_WaitOnTheTwoKriegs_ObjSetVar;                        // 0x0708(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_WaitOnTheTwoKriegs_ObjVar;                           // 0x0710(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_ToBossArea_ObjSetVar;                                // 0x0718(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ToBossArea_ObjVar;                                   // 0x0720(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_TitleCardBoss_ObjSetVar;                             // 0x0728(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TitleCardBoss_ObjVar;                                // 0x0730(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillBoss_ObjSetVar;                                  // 0x0738(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillBoss_ObjVar;                                     // 0x0740(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_OpenCage_ObjVar;                                     // 0x0748(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_PickUpMask_ObjSetVar;                                // 0x0750(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PickUpMask_ObjVar;                                   // 0x0758(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_EnterWhiteRoom_ObjSetVar;                            // 0x0760(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EnterWhiteRoom_ObjVar;                               // 0x0768(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_ReturnToSanctum_ObjSetVar;                           // 0x0770(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReturnToSanctum_ObjVar;                              // 0x0778(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_TurnOffPowerThwart_ObjSetVar;                        // 0x0780(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TurnOffPowerThwart_ObjVar;                           // 0x0788(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_ProceedIn1stMemory_ObjSetVar;                        // 0x0790(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ProceedIn1stMemory_ObjVar;                           // 0x0798(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_SlamTrapDoor_ObjVar;                             // 0x07A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_To2ndDoor_ObjSetVar;                                 // 0x07A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_To2ndDoor_ObjVar;                                    // 0x07B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Open2ndDoor_ObjVar;                                  // 0x07B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_WaitForGas_ObjVar;                               // 0x07C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_TalkToKrieg_ObjSetVar;                               // 0x07C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToKrieg_ObjVar;                                  // 0x07D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_StandBack_ObjSetVar;                                 // 0x07D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_StandBack_ObjVar;                                    // 0x07E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_PlaceMask_ObjSetVar;                                 // 0x07E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlaceMask_ObjVar;                                    // 0x07F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_OpenWhiteDoor_ObjVar;                            // 0x07F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_GoToSecretLair_ObjSetVar;                            // 0x0800(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToSecretLair_ObjVar;                               // 0x0808(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_SecureSecretLair_ObjSetVar;                          // 0x0810(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SecureSecretLair_ObjVar;                             // 0x0818(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_KillConstructorSergeant_ObjSetVar;                   // 0x0820(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillConstructorSergeant_ObjVar;                      // 0x0828(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_KillConstructorChief_ObjSetVar;                      // 0x0830(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillConstructorChief_ObjVar;                         // 0x0838(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_MaskVisibleOnStatue_ObjVar;                      // 0x0840(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_SequencerStatue_ObjVar;                          // 0x0848(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_To2ndDoor_Intercom_ObjVar;                       // 0x0850(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_StairsBottomsMemory2_ObjVar;                     // 0x0858(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_ProceedIn1stMemory_Precheck_ObjVar;              // 0x0860(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillOfficers_Precheck_1_ObjVar;                      // 0x0868(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillOfficers_Precheck_2_ObjVar;                      // 0x0870(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_LoaderThrownAtDoor_ObjVar;                       // 0x0878(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_LoaderDance_ObjVar;                              // 0x0880(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_ApproachPatient_ObjSetVar;                           // 0x0888(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ApproachPatient_ObjVar;                              // 0x0890(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_GhostsAppear_ObjVar;                             // 0x0898(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_WhiteRoomSequenceEnded_ObjVar;                   // 0x08A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_Kickoff_ObjSetVar;                                   // 0x08A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_ReadyForOrb_ObjVar;                              // 0x08B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_ExitMemory_Precheck_ObjVar;                      // 0x08B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SecureSecretLair_INV_ObjVar;                         // 0x08C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ExitSecondMemory_Precheck_ObjVar;                    // 0x08C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_ReachCombatSanitarium_Precheck_ObjVar;           // 0x08D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToSecretLair_Precheck_ObjVar;                      // 0x08D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
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
		void OnDialogSequenceFinished_39();
		void OnDialogSequenceFinished_38();
		void Obj_WaitForLoaderBot(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_WaitForLoaderBot(class UObject* Context);
		void SET_WaitForLoaderBot(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FreeKrieg(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_GoToElectrifiedDoor(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GoToElectrifiedDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_GoToElectrifiedDoor(class UObject* Context);
		void SET_RemovePowerFromMachine(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_RemovePowerFromMachine(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_RemovePowerFromMachine(class UObject* Context);
		void Obj_INV_FirstPowerSource(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_FirstPowerSource(class UObject* Context);
		void Obj_INV_SecondPowerSource(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_SecondPowerSource(class UObject* Context);
		void Obj_INV_ThirdPowerSource(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_ThirdPowerSource(class UObject* Context);
		void SET_ExitFirstMemory(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ExitFirstMemory(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ExitFirstMemory(class UObject* Context);
		void SET_ToFirstGate(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ToFirstGate(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ToFirstGate(class UObject* Context);
		void MCE_AssembleEye(class UObject* Context);
		void Obj_AssembleEye(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_OpenFirstGate(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_OpenFirstGate(class UObject* Context);
		void SET_ToSecondMemory(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ToSecondMemory(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ToSecondMemory(class UObject* Context);
		void MCE_AssembleRightArm(class UObject* Context);
		void Obj_AssembleRightArm(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_DeactivateGasThwart(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_DeactivateGasThwart(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_DeactivateGasThwart(class UObject* Context);
		void MCE_AssembleLeftArm(class UObject* Context);
		void Obj_AssembleLeftArm(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_ProgressToHyperionRoom(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ProgressToHyperionRoom(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ProgressToHyperionRoom(class UObject* Context);
		void MCE_AssembleArmsAndEye(class UObject* Context);
		void Obj_INV_AssembleArmsAndEye(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_KillHyperionOfficers(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_KillHyperionOfficers(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_KillHyperionOfficers(class UObject* Context);
		void Obj_AssembleLoaderBot_Objective_PROXY_1();
		void SET_DeactivateGas(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_DeactivateGas(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_DeactivateGas(class UObject* Context);
		void MCE_AssembleChest(class UObject* Context);
		void SET_KillBerserkPatients(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_KillBerserkPatients(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_KillBerserkPatients(class UObject* Context);
		void Obj_AssembleChest(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_AssembleLoaderChest(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_KillCorrosiveBadasses(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_KillCorrosiveBadasses(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_KillCorrosiveBadasses(class UObject* Context);
		void SET_ExitSecondMemory(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_ExitSecondMemory(class UObject* Context);
		void Obj_ExitSecondMemory(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_ToKriegMoment(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_ToKriegMoment(class UObject* Context);
		void Obj_ToKriegMoment(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_WaitOnTheTwoKriegs(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_WaitOnTheTwoKriegs(class UObject* Context);
		void Obj_WaitOnTheTwoKriegs(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_ToBossArea(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_ToBossArea(class UObject* Context);
		void MCE_AssembleRightLeg(class UObject* Context);
		void Obj_ToBossArea(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_TitleCardBoss(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_AssembleRightLeg(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_AssembleLoaderBot_Objective_PROXY();
		void Obj_TitleCardBoss(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_KillBoss(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_KillBoss(class UObject* Context);
		void Obj_KillBoss(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_OpenCage(class UObject* Context);
		void Obj_OpenCage(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_PickUpMask(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_PickUpMask(class UObject* Context);
		void MCE_AssembleLeftLeg(class UObject* Context);
		void Obj_AssembleLeftLeg(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_PickUpMask(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_EnterWhiteRoom(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_EnterWhiteRoom(class UObject* Context);
		void SET_AssembleLoaderBotLegs(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_EnterWhiteRoom(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_FreeKrieg(class UObject* Context);
		void SET_ReturnToSanctum(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_ReturnToSanctum(class UObject* Context);
		void SET_FreeKrieg(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ReturnToSanctum(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_TurnOffPowerThwart(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TurnOffPowerThwart(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_TurnOffPowerThwart(class UObject* Context);
		void MCE_GatherParts(class UObject* Context);
		void SET_ProceedIn1stMemory(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ProceedIn1stMemory(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ProceedIn1stMemory(class UObject* Context);
		void Obj_GatherParts(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_GatherParts(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_INV_SlamTrapDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_SlamTrapDoor(class UObject* Context);
		void SET_To2ndDoor(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_To2ndDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_To2ndDoor(class UObject* Context);
		void Obj_Open2ndDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Open2ndDoor(class UObject* Context);
		void MCE_AssembleLoaderBot(class UObject* Context);
		void Obj_INV_WaitForGas(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_WaitForGas(class UObject* Context);
		void MissionKickoff();
		void MCE_PickUpChest(class UObject* Context);
		void Obj_AssembleLoaderBot(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_PickUpChest(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PickUpEye(class UObject* Context);
		void Obj_PickUpEye(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_FindEye(class UObject* Context);
		void Obj_FindEye(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_FindChest(class UObject* Context);
		void Obj_FindChest(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_FindLoaderArms(class UObject* Context);
		void Obj_FindLoaderArms(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_TalkToKrieg(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_TalkToKrieg(class UObject* Context);
		void SET_AssembleLoaderBot(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TalkToKrieg(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_FindLoaderLegs(class UObject* Context);
		void SET_StandBack(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_StandBack(class UObject* Context);
		void Obj_StandBack(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_FindLoaderLegs(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_PlaceMask(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_PlaceMask(class UObject* Context);
		void Obj_PlaceMask(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_GoToHyperionDoor(class UObject* Context);
		void Obj_GoToHyperionDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_OpenWhiteDoor(class UObject* Context);
		void Obj_INV_OpenWhiteDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_GoToSecretLair(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_GoToSecretLair(class UObject* Context);
		void SET_GoToHyperionDoor(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GoToSecretLair(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_SecureSecretLair(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_SecureSecretLair(class UObject* Context);
		void MCE_PlaceOrb(class UObject* Context);
		void Obj_SecureSecretLair(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_KillConstructorSergeant(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_KillConstructorSergeant(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_KillConstructorSergeant(class UObject* Context);
		void Obj_PlaceOrb(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_PlaceOrb(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_KillConstructorChief(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_KillConstructorChief(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_KillConstructorChief(class UObject* Context);
		void MCE_INV_MaskVisibleOnStatue(class UObject* Context);
		void Obj_INV_MaskVisibleOnStatue(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_SequencerStatue(class UObject* Context);
		void Obj_INV_SequencerStatue(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_To2ndDoor_Intercom(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_To2ndDoor_Intercom(class UObject* Context);
		void Obj_INV_StairsBottomsMemory2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_StairsBottomsMemory2(class UObject* Context);
		void Obj_INV_ProceedIn1stMemory_Precheck(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_KillOfficers_Precheck_2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_KillOfficers_Precheck_3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_LoaderThrownAtDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_LoaderThrownAtDoor(class UObject* Context);
		void Obj_INV_LoaderDance(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_LoaderDance(class UObject* Context);
		void MCE_PickUpOrb3(class UObject* Context);
		void Obj_PickUpOrb3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_ApproachPatient(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_ApproachPatient(class UObject* Context);
		void Obj_ApproachPatient(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_GhostsAppear(class UObject* Context);
		void Obj_INV_GhostsAppear(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_WhiteRoomSequenceEnded(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_Kickoff(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void INV_Obj_ReadyForOrb(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_PickUpOrb3(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_INV_ExitMemory_Precheck(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_SecureSecretLair_INV(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_ExitSecondMemory_Precheck(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_ReachCombatSanitarium_Precheck(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_GoToSecretLair_Precheck(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_EnterHyperionLab(class UObject* Context);
		void MCE_PickUpLoaderLegs(class UObject* Context);
		void Obj_EnterHyperionLab(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_EnterHyperionLab(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_PickUpLoaderLegs(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PickUpLoaderArms(class UObject* Context);
		void Obj_PickUpLoaderArms(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_GoToExperiment(class UObject* Context);
		void Obj_GoToExperiment(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_GoToExperiment(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void ExecuteUbergraph_ALI_EP04(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
