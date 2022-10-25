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
	 * BlueprintGeneratedClass Mission_DLC1_Ep03_Impound.Mission_DLC1_Ep03_Impound_C
	 * Size -> 0x0430 (FullSize[0x0940] - InheritedSize[0x0510])
	 */
	class UMission_DLC1_Ep03_Impound_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjective*                                   Obj_TakeNumber_ObjVar;                                   // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TakeANumber_ObjSetVar;                               // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PayFee_ObjSetVar;                                    // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_PlayerTriedToPayFee_ObjVar;                      // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                InquireAtInformationKiosk_ObjSetVar;                     // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_InquireAtInformationKiosk_ObjVar;                    // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                CustomerCareCenter_Fake_ObjSetVar;                       // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_PLayerTriedToGoToCustCare_NoForm_ObjVar;         // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToCustomerCareCenterFake_ObjVar;                   // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                ClientServices_ObjSetVar;                                // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToClientServices_ObjVar;                         // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                DataRequisition_RingBell_ObjSetVar;                      // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToDataRequisition_ObjVar;                        // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetForm34B_ObjVar;                                   // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_PlayerArrivedAtDataRequisition_ObjVar;           // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_RingBell_DataRequisition_ObjVar;                     // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                DataRequisition_ObjSetVar;                               // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_BotArrivedPostBell_ObjVar;                       // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                ReturnToClientServices_ObjSetVar;                        // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_BotArrivedPostBell_ClientServices_ObjVar;        // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToClientServicesAgain_ObjVar;                    // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_PlayerReturnedToClientServies_ObjVar;            // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_RingBell_ClientServices_ObjVar;                      // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                ReturnToDataRequisition_ObjSetVar;                       // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_BotArrivedPostBell_DataReqAgain_ObjVar;          // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_PlayerReturnedToDataReq_ObjVar;                  // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                ReturnToDataRequisition_RingBell_ObjSetVar;              // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToDataRequisition_Again_ObjVar;                  // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetForm34BRightVersion_ObjVar;                       // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillBot_ObjVar;                                      // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_AttackBot_ObjVar;                                    // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                GoToCustomerCare_WrongForm_ObjSetVar;                    // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                GoToCustomerCare_RightForm_ObjSetVar;                    // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToCustomerCare_Real_ObjVar;                        // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Kill_Bot_ObjSetVar;                                      // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetCorrectForm_KilledBot_ObjVar;                     // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TakeTicket_ObjVar;                                   // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                EnterImpound_ObjSetVar;                                  // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlaceTicket_EnterImpound_ObjVar;                     // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                GoToDataRequisition_ObjSetVar;                           // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_RingBell_DataRequisition_Premium_ObjVar;             // 0x0658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                GoToCustomerCare_UseSwitchWrongForm_ObjSetVar;           // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToCustomerCare_WrongForm_ObjVar;                   // 0x0668(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_ApproachSwitch_WrongForm_ObjVar;                 // 0x0670(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                RingBell_ClientServices_ObjSetVar;                       // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_RingBell_ClientSevices_Premium_ObjVar;           // 0x0680(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DataRequision_RingBell_Again_ObjVar;                 // 0x0688(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DataRequision_RingBell_Again_Premium_ObjVar;         // 0x0690(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_InsertForm_ObjVar;                                   // 0x0698(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                GoToCustomerCare_PreTakeNumber_ObjSetVar;                // 0x06A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetNewNumber_Precise_ObjVar;                         // 0x06A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GetNewNumber_Precise_ObjSetVar;                      // 0x06B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_PlayerWokeEnemy_ObjVar;                          // 0x06B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillEnemyWithNumber_ObjVar;                          // 0x06C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_InsertNumberTicket_ObjVar;                           // 0x06C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_InsertNumberTicket_ObjSetVar;                        // 0x06D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillEnemyWithNumber_ObjSetVar;                       // 0x06D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PayFee_ObjVar;                                       // 0x06E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoInAnyway_ObjVar;                                   // 0x06E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoInAnyway_ObjSetVar;                                // 0x06F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetDroppedNumber_ObjVar;                             // 0x06F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GetDroppedNumber_ObjSetVar;                          // 0x0700(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_UseNumSwitch_ObjVar;                             // 0x0708(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_ArriveAtTakeFeeTicket_ObjVar;                    // 0x0710(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToCustomerCareFinal_ObjSetVar;                     // 0x0718(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindShip_ObjVar;                                     // 0x0720(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindShip_ObjSetVar;                                  // 0x0728(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindShip_BC1_ObjVar;                                 // 0x0730(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindShip_BC2_ObjVar;                                 // 0x0738(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EnterImpound_ObjVar;                                 // 0x0740(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindEddiesFriend_ObjVar;                             // 0x0748(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindEddiesFriend_PreTurret_ObjSetVar;                // 0x0750(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReturnToEddie_ObjVar;                                // 0x0758(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ReturnToEddie_ObjSetVar;                             // 0x0760(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillKidnappers_ObjVar;                               // 0x0768(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillKidnappers_ObjSetVar;                            // 0x0770(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_OpenBotDoor_ObjVar;                                  // 0x0778(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FreeBot_ObjSetVar;                                   // 0x0780(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_ReadyToMovePlatform_ObjVar;                          // 0x0788(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_BotJumpComplete_ObjVar;                              // 0x0790(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_BridgeDone_ObjVar;                                   // 0x0798(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_Freddie_TC_ObjVar;                               // 0x07A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToEddie_Initial_ObjVar;                          // 0x07A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Freddie_TC_ObjSetVar;                                // 0x07B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindEddiesFriend_BC1_ObjVar;                         // 0x07B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_BotDoorOpen_ObjVar;                              // 0x07C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_KillKidnappersPreCheck_ObjVar;                   // 0x07C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_NearKiosk_ObjVar;                                // 0x07D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 CurrentConvo;                                            // 0x07D8(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_U2VP[0x4];                                   // 0x07E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjective*                                   INV_Obj_PLayerArrivedAfterLevelTransition_ObjVar;        // 0x07E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_TriggerVO_TimothyDebtRaised_ObjVar;              // 0x07F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_TriggerVO_FreddieBackground_ObjVar;              // 0x07F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GetTools_ObjSetVar;                                  // 0x0800(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_EddieArrivedAtCargo_ObjVar;                          // 0x0808(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_CargoOpen_ObjVar;                                    // 0x0810(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_ReadyForEddieToGoToCargo_ObjVar;                     // 0x0818(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetTools_ObjVar;                                     // 0x0820(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_WentOutside_ObjVar;                              // 0x0828(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_ArrivedAtDocks_ObjVar;                           // 0x0830(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindShip_Part2_ObjSetVar;                            // 0x0838(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ClearArea_ObjVar;                                    // 0x0840(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_GoInAnyway_PreCheck_ObjVar;                      // 0x0848(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_FindBotIntroDone_ObjVar;                         // 0x0850(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_OpenDoorAfterFreddie_ObjVar;                     // 0x0858(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_WaitForNumberToBeCalled_ObjVar;                      // 0x0860(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_EddieFixBotSeq_ObjSetVar;                            // 0x0868(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_EddieFixBot_SeqDone_ObjVar;                          // 0x0870(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_BotAndFreddieReadyForSeq_ObjVar;                     // 0x0878(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ClearRoom_ObjSetVar;                                 // 0x0880(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ClearFeeRoom_ObjVar;                                 // 0x0888(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_GoToCustomerCare_Real_PreCheck_ObjVar;           // 0x0890(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_EddieArrivedByShip_ObjVar;                       // 0x0898(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TalkToFreddie_ObjSetVar;                             // 0x08A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_EddieReadyToWalk_ObjVar;                         // 0x08A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_SpawnConstructor_ObjVar;                         // 0x08B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ApproachFreddie_ObjVar;                              // 0x08B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_ClearAreacOUNT_ObjVar;                           // 0x08C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindEddiesFriend_Turret_ObjSetVar;                   // 0x08C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindEddiesFriend_PostTurret_ObjSetVar;               // 0x08D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ClearArea_Turret_ObjVar;                             // 0x08D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_ArrivedAtTurretFight_ObjVar;                     // 0x08E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_PostTurretDoorsOpen_ObjVar;                      // 0x08E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_PostTurretRunnersSpawned_ObjVar;                 // 0x08F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_ClearFeeRoom_Precheck_ObjVar;                    // 0x08F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_KillEnemyWithNumber_Precheck_ObjVar;             // 0x0900(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToCustomerCareCenterFake_BC1_ObjVar;               // 0x0908(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToCustomerCareCenterFake_BC2_ObjVar;               // 0x0910(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_ReadyForScan_ObjVar;                             // 0x0918(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_EmberShipPassBy_MapStart_ObjVar;                 // 0x0920(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                OpenImpoundDoor_ObjSetVar;                               // 0x0928(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_PlayerArrivedAtImpoundDoor_ObjVar;               // 0x0930(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_Obj_UseSwitchWrongForm_ObjVar;                       // 0x0938(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

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
		void CustomerCareCenter_Fake(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void INV_Obj_PLayerTriedToGoToCustCare_NoForm(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_GoToCustomerCareCenterFake(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ClientServices(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TalkToClientServices(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayeTalkedToClientServices(class UObject* Context);
		void DataRequisition_RingBell(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TalkToDataRequisition(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayeTalkedToDataRequisition(class UObject* Context);
		void Obj_GetForm34B(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_Obj_PlayerArrivedAtDataRequisition(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerArrivedAtDataRequisition(class UObject* Context);
		void Obj_RingBell_DataRequisition(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerRungBell_DataRequisition(class UObject* Context);
		void Obj_TalkToDataRequisition_Objective_PROXY();
		void DataRequisition(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void INV_Obj_BotArrivedPostBell(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_BotArrivedPostBell_DataRequisition(class UObject* Context);
		void ReturnToClientServices(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void INV_Obj_PlayerReturnedToClientServies(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerReturnedToClientServices(class UObject* Context);
		void Obj_RingBell_ClientServices(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerRungBell_ClientServices(class UObject* Context);
		void INV_Obj_BotArrivedPostBell_ClientServices(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_BotArrivedPostBell_ClientServices(class UObject* Context);
		void Obj_TalkToClientServicesAgain(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerInquiredAtKiosk(class UObject* Context);
		void ReturnToDataRequisition(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void INV_Obj_PlayerReturnedToDataReq(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerReturnedToDataRequisition(class UObject* Context);
		void ReturnToDataRequisition_RingBell(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void INV_Obj_BotArrivedPostBell_DataReqAgain(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_BotArrivedPostBell_DataReqAgain(class UObject* Context);
		void Obj_TalkToDataRequisition_Again(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayeTalkedToDataRequisitionAgain(class UObject* Context);
		void Obj_GetForm34BRightVersion(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void InquireAtInformationKiosk(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_KillBot(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerKilledbot(class UObject* Context);
		void Obj_AttackBot(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerAttackedBot(class UObject* Context);
		void Obj_AttackBot_Objective_PROXY_1();
		void GoToCustomerCare_WrongForm(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_InquireAtInformationKiosk(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_GoToCustomerCare_Real(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerWentToCustomerCare_Real(class UObject* Context);
		void GoToCustomerCare_RightForm(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Kill_Bot(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GetCorrectForm_KilledBot(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_PayFee(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TakeTicket(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void EnterImpound(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GoToCustomerCareCenterFake_Objective_PROXY_2();
		void Obj_PlaceTicket_EnterImpound(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerPlacedTicket_EnterImpound(class UObject* Context);
		void MCE_PlayerUsedCustomerCareSwitch(class UObject* Context);
		void GoToDataRequisition(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TalkToDataRequisition_Objective_PROXY_3();
		void INV_RingBell_DataRequisition_Premium(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerRungBell_DataRequisition_Premium(class UObject* Context);
		void GoToCustomerCare_UseSwitchWrongForm(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GoToCustomerCare_WrongForm(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_GoToCustomerCare_WrongForm_Objective_PROXY_4();
		void INV_Obj_ApproachSwitch_WrongForm(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerApproachedSwitch_WrongForm(class UObject* Context);
		void RingBell_ClientServices(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void INV_Obj_RingBell_ClientSevices_Premium(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerRungBell_ClientServices_Premium(class UObject* Context);
		void Obj_TalkToDataRequisition_Again_Objective_PROXY_5();
		void Obj_DataRequision_RingBell_Again(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerRungBell_DataReq_Again(class UObject* Context);
		void Obj_DataRequision_RingBell_Again_Premium(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerRungBell_DataReq_Again_Premium(class UObject* Context);
		void Obj_TalkToClientServicesAgain_Objective_PROXY_6();
		void Obj_InsertForm(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_GoToCustomerCare_Real_Objective_PROXY_7();
		void GoToCustomerCare_PreTakeNumber(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_GetNewNumber_Precise(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GetNewNumber_Precise(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerGotNewNumber_Precise(class UObject* Context);
		void INV_Obj_PlayerWokeEnemy(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_KillEnemyWithNumber(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerWokeEnemy(class UObject* Context);
		void MCE_PlayerKilledEnemyWithNumber(class UObject* Context);
		void Set_InsertNumberTicket(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_InsertNumberTicket(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerInsertedNumberTicket(class UObject* Context);
		void Set_KillEnemyWithNumber(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GetNewNumber_Precise_Objective_PROXY_8();
		void Obj_PayFee(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GoInAnyway(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GoInAnyway(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerWentInWithoutPaying(class UObject* Context);
		void Obj_GetDroppedNumber(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GetDroppedNumber(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void INV_Obj_UseNumSwitch(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerUsedNumSwitch(class UObject* Context);
		void Obj_GoToCustomerCare_Real_Objective_PROXY_9();
		void INV_Obj_ArriveAtTakeFeeTicket(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ArrivedATakeFeeTicket(class UObject* Context);
		void Set_GoToCustomerCareFinal(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void INV_Obj_PlayerTriedToPayFee(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_FindShip(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindShip(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerFoundShip(class UObject* Context);
		void Obj_FindShip_BC1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_FindShip_BC1(class UObject* Context);
		void Obj_FindShip_BC2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_FindShip_BC2(class UObject* Context);
		void Obj_EnterImpound(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerOpenedDoorToMainImpound(class UObject* Context);
		void Obj_FindEddiesFriend(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerFoundEddiesFriend(class UObject* Context);
		void Set_FindEddiesFriend_PreTurret(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_TakeANumber(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ReturnToEddie(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerReturnedToEddie(class UObject* Context);
		void Set_ReturnToEddie(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_KillKidnappers(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerKilledKidnappers(class UObject* Context);
		void Set_KillKidnappers(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_OpenBotDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_OpenBotDoor(class UObject* Context);
		void Set_FreeBot(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MissionKickoff();
		void MCE_PlayerTriedToPayFee(class UObject* Context);
		void INV_ReadyToMovePlatform(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ReadyToMovePlatform(class UObject* Context);
		void INV_BotJumpComplete(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_BotJumpComplete(class UObject* Context);
		void INV_BridgeDone(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_BridgeDone(class UObject* Context);
		void INV_Obj_Freddie_TC(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_TalkToEddie_Initial(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerTalkedToEddie_Initial(class UObject* Context);
		void Set_Freddie_TC(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindEddiesFriend_BC1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Arrived_FoundEddiesFriend_BC1(class UObject* Context);
		void INV_Obj_BotDoorOpen(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_BotDoorOpen(class UObject* Context);
		void INV_Obj_KillKidnappersPreCheck(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_Obj_NearKiosk(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerNearKiosk(class UObject* Context);
		void INV_Obj_PLayerArrivedAfterLevelTransition(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerArrivedAfterLevelTransition(class UObject* Context);
		void MCE_PlayerTookNumber(class UObject* Context);
		void INV_Obj_TriggerVO_TimothyDebtRaised(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ReadyForVO_TimDebt(class UObject* Context);
		void MCE_ReadyForVO_FreddieBackground(class UObject* Context);
		void INV_Obj_TriggerVO_FreddieBackground(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GetTools(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_EddieArrivedAtCargo(class UObject* Context);
		void INV_EddieArrivedAtCargo(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_CargoOpen(class UObject* Context);
		void INV_CargoOpen(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_ReadyForEddieToGoToCargo(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_GetTools(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_WentOutside(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_WentOutside(class UObject* Context);
		void Obj_INV_ArrivedAtDocks(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_ArrivedAtDocks(class UObject* Context);
		void Set_FindShip_Part2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindShip_Objective_PROXY_10();
		void Obj_ClearArea(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_Obj_GoInAnyway_PreCheck(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_Obj_FindBotIntroDone(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_FindBotIntroDone(class UObject* Context);
		void INV_Obj_OpenDoorAfterFreddie(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerOpenedDoorAfterFreddie(class UObject* Context);
		void Obj_WaitForNumberToBeCalled(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_EddieFixBotSeq(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void INV_EddieFixBot_SeqDone(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_SeqDone_EddieFixBot(class UObject* Context);
		void Obj_TakeNumber(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_BotAndFreddieReadyForSeq(class UObject* Context);
		void INV_BotAndFreddieReadyForSeq(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_ClearFeeRoom(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerClearedFeeRoom(class UObject* Context);
		void Set_ClearRoom(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void INV_Obj_GoToCustomerCare_Real_PreCheck(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_GoToCustomerCare_Real_Objective_PROXY_11();
		void MCE_PlayerClearedOutLoaders(class UObject* Context);
		void INV_Obj_EddieArrivedByShip(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_TalkToFreddie(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void INV_Obj_EddieReadyToWalk(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerKilledConstructor(class UObject* Context);
		void Obj_INV_SpawnConstructor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_SpawnConstructor(class UObject* Context);
		void Obj_ApproachFreddie(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerApproachedFreddie(class UObject* Context);
		void MCE_PlayerKilledLooters(class UObject* Context);
		void Obj_INV_ClearAreaCount(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_FindEddiesFriend_Turret(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_FindEddiesFriend_PostTurret(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindEddiesFriend_Objective_PROXY_12();
		void Obj_FindEddiesFriend_BC1_Objective_PROXY_13();
		void Obj_FindEddiesFriend_Objective_PROXY_14();
		void Obj_ClearArea_Turret(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerClearedArea_Turret(class UObject* Context);
		void INV_Obj_ArrivedAtTurretFight(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerArrivedAtTurretFight(class UObject* Context);
		void INV_Obj_PostTurretDoorsOpen(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PostTurretDoorsOpen(class UObject* Context);
		void INV_Obj_PostTurretRunnersSpawned(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PostTurretRunnersSpawned(class UObject* Context);
		void INV_Obj_ClearFeeRoom_Precheck(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_Obj_KillEnemyWithNumber_Precheck(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_GoToCustomerCareCenterFake_BC1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_GoToCustomerCareCenterFake_BC2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerArrived_GoToCustomerCareFake_BC1(class UObject* Context);
		void MCE_PlayerArrived_GoToCustomerCareFake_BC2(class UObject* Context);
		void INV_Obj_ReadyForScan(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_Obj_EmberShipPassBy_MapStart(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_EmberShip_PassBy_MapStart(class UObject* Context);
		void OpenImpoundDoor(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GoToCustomerCareCenterFake_Objective_PROXY_15();
		void INV_Obj_PlayerArrivedAtImpoundDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerArrivedAtImpoundDoor(class UObject* Context);
		void INV_Obj_PlayerWokeEnemy_Objective_PROXY_16();
		void INV_Obj_UseSwitchWrongForm(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ExecuteUbergraph_Mission_DLC1_Ep03_Impound(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
