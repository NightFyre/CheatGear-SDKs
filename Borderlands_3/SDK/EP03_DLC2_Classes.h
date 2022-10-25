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
	 * BlueprintGeneratedClass EP03_DLC2.EP03_DLC2_C
	 * Size -> 0x02C4 (FullSize[0x07D4] - InheritedSize[0x0510])
	 */
	class UEP03_DLC2_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                SET_TalkToMancubus_ObjSetVar;                            // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToMancubus_ObjVar;                               // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindPrivateEye_ObjSetVar;                            // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ReachPrivateEyeOffice_ObjSetVar;                     // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReachPrivateEyeOffice_ObjVar;                        // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_InterrogateCitizen_1_ObjSetVar;                      // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_InterrogateCitizen1_ObjVar;                          // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_InterrogateCitizen2_ObjVar;                          // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindPrivateEye_ObjVar;                               // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_DefendPrivateEye_ObjSetVar;                          // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DefendPrivateEye_ObjVar;                             // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PIckUpKey_ObjSetVar;                                 // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PickupKey_ObjVar;                                    // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_OpenTownGate_ObjSetVar;                              // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_OpenTownGate_ObjVar;                                 // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ReachHistoryRoom_ObjSetVar;                          // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReachHistoryRoom_ObjVar;                             // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TurnOnProjector_ObjSetVar;                           // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TurnOnProjector_ObjVar;                              // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindHolotape1_ObjSetVar;                             // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindHolotape1_ObjVar;                                // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PlaceHolotape1_ObjSetVar;                            // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlaceHolotape1_ObjVar;                               // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ClearRoom_ObjSetVar;                                 // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ClearRoom_ObjVar;                                    // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ReachMiniboss_ObjSetVar;                             // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Inv_Obj_ReachMiniboss_ObjVar;                            // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_MinibossTitleCard_ObjSetVar;                         // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Inv_Obj_MinibossTitleCard_ObjVar;                        // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillMiniboss_ObjVar;                                 // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ReachedEleanorsOffice_ObjSetVar;                     // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReachEleanorsOffice_ObjVar;                          // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillMiniboss_ObjSetVar;                              // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PickupVHS_ObjSetVar;                                 // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PickUpVHS_ObjVar;                                    // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_InsertTape_ObjSetVar;                                // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_InsertTape_ObjVar;                                   // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_RevivePrivateEye_ObjSetVar;                          // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_RevivePrivateEye_ObjVar;                             // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_RingTheDoor_ObjVar;                                  // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_InterrogateCitizen3_ObjVar;                          // 0x0658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Librarian_ObjSetVar;                                 // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToLibrarian_ObjVar;                              // 0x0668(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Inv_Obj_ReachLibrarian_ObjVar;                           // 0x0670(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindHolotape2_ObjSetVar;                             // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindHolotape2_ObjVar;                                // 0x0680(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PlaceHolotape2_ObjSetVar;                            // 0x0688(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlaceHolotape2_ObjVar;                               // 0x0690(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_SurviveAmbush_ObjSetVar;                             // 0x0698(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SurviveAmbush_ObjVar;                                // 0x06A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ReturnToBar_ObjSetVar;                               // 0x06A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReturnToBar_ObjVar;                                  // 0x06B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TalkToMancubus_3_ObjSetVar;                          // 0x06B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToMancubus_3_ObjVar;                             // 0x06C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindAnotherWayIn_ObjVar;                             // 0x06C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DestroyTheBarricade_ObjVar;                          // 0x06D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Inv_Obj_LockedDoor_ObjVar;                               // 0x06D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindHolotape2_FindAnotherWay_ObjSetVar;              // 0x06E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ExploreTheVent_ObjVar;                               // 0x06E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindHolotape2_LastStep_ObjSetVar;                    // 0x06F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReachPrivateEyeOffice_Breadcrumb2_ObjVar;            // 0x06F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindPrivateEye_Breadcrumb_01_ObjVar;                 // 0x0700(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindPrivateEye_Breadcrumb_02_ObjVar;                 // 0x0708(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindPrivateEye_Breadcrumb_03_ObjVar;                 // 0x0710(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   BC_Obj_ReachMiniBoss_ObjVar;                             // 0x0718(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_RemoveRing_ObjSetVar;                                // 0x0720(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_RemoveRing_ObjVar;                                   // 0x0728(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_RemoveRing_Tentative_ObjVar;                     // 0x0730(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_TalkToMancubus_2_ObjSetVar;                          // 0x0738(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToMancubus_2_ObjVar;                             // 0x0740(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_InterrogateCitizen_2_ObjSetVar;                      // 0x0748(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_InterrogateCitizen3_ObjSetVar;                       // 0x0750(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_FindHolotape2_PreAmbush_ObjVar;                  // 0x0758(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_FindHolotape2_Ambush_ObjVar;                     // 0x0760(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReachPrivateEyeOffice_Breadcrumb1_ObjVar;            // 0x0768(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Inv_obj_OpenDoor_ObjVar;                                 // 0x0770(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Inv_GaddyDialogue_ObjVar;                                // 0x0778(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Inv_HallanDialogue_ObjVar;                               // 0x0780(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Inv_InterrogateJeanna_ObjVar;                            // 0x0788(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Inv_EleanorVO_ObjVar;                                    // 0x0790(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToArchives_ObjSetVar;                              // 0x0798(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToArchives_ObjVar;                                 // 0x07A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_TalkToWainwrightRing_ObjSetVar;                      // 0x07A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkWainwrightRing_ObjVar;                           // 0x07B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TalkToHarriet_ObjSetVar;                             // 0x07B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Inv_OpenDoorMiniBoss_ObjVar;                             // 0x07C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 NewVar_1;                                                // 0x07C8(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

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
		void Set_KillMiniboss(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_PickupVHS(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_PickUpVHS(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_InsertTape(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_InsertTape(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_VHSPickedUp(class UObject* Context);
		void MCE_TapeInserted(class UObject* Context);
		void MCE_EleanorsOfficeReached(class UObject* Context);
		void Set_RevivePrivateEye(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_RevivePrivateEye(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PrivateEyeRevived(class UObject* Context);
		void MCE_MinibossKilled(class UObject* Context);
		void MCE_UpdateTitleCardMiniboss(class UObject* Context);
		void Obj_ReachEleanorsOffice_Objective_PROXY_1();
		void Obj_ReachEleanorsOffice_Objective_PROXY();
		void Obj_ReachEleanorsOffice(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ReachedEleanorsOffice(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_KillMiniboss(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Inv_Obj_MinibossTitleCard(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_MinibossTitleCard(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_MinibossReached(class UObject* Context);
		void Inv_Obj_ReachMiniboss(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ReachMiniboss(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_RoomCleared(class UObject* Context);
		void MCE_HoloFinishedCorrupt(class UObject* Context);
		void MCE_HoloFinished1(class UObject* Context);
		void Obj_ClearRoom(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ClearRoom(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_UpdatePlaceHolotape1(class UObject* Context);
		void Obj_PlaceHolotape1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_PlaceHolotape1(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_UpdateHolotape1(class UObject* Context);
		void Obj_FindHolotape1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_FindHolotape1(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_ProjectorTurnedOn(class UObject* Context);
		void Obj_TurnOnProjector(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_TurnOnProjector(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_HistoryReached(class UObject* Context);
		void Obj_RingTheDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_DoorBellRang(class UObject* Context);
		void Obj_InterrogateCitizen3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Interrogation3Done(class UObject* Context);
		void Set_Librarian(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TalkToLibrarian(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_ReachHistoryRoom_Objective_PROXY_2();
		void Obj_ReachHistoryRoom(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ReachHistoryRoom(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Inv_Obj_ReachLibrarian(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_TalkedToLibrarian(class UObject* Context);
		void MCE_ReachedLibrarian(class UObject* Context);
		void Set_FindHolotape2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindHolotape2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_GateOpened(class UObject* Context);
		void Set_PlaceHolotape2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_PlaceHolotape2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_OpenTownGate(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_HoloFinished2(class UObject* Context);
		void Set_OpenTownGate(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_SurviveAmbush(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_SurviveAmbush(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_AmbushOver(class UObject* Context);
		void MCE_UpdateHolotape2(class UObject* Context);
		void MCE_UpdatePlaceHolotape2(class UObject* Context);
		void MCE_KeyPickedUp(class UObject* Context);
		void Obj_PickupKey(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_PickUpKey(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_ReturnToBar(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_TalkToMancubus_4(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ReturnToBar(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_TalkToMancubus_4(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_TalkedToMancubus_4(class UObject* Context);
		void MCE_ReturnedToBar(class UObject* Context);
		void Set_FindHolotape2_FindAnotherWay(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindAnotherWayIn(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_DestroyTheBarricade(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Inv_Obj_LockedDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ReachedLockedDoor(class UObject* Context);
		void MCE_FoundAnotherWayIn(class UObject* Context);
		void MCE_DestroyedTheBarricade(class UObject* Context);
		void Obj_ExploreTheVent(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ExploredTheVent(class UObject* Context);
		void Obj_FindHolotape2_Objective_PROXY_3();
		void Set_FindHolotape2_LastStep(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ReachPrivateEyeOffice_Breadcrumb2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ReachPrivateEyeOffice_Breadcrumb2(class UObject* Context);
		void Obj_FindPrivateEye_Breadcrumb_01(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PrivateEyeFounded_Breadcrumb_01(class UObject* Context);
		void Obj_FindPrivateEye_Breadcrumb_02(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PrivateEyeFounded_Breadcrumb_02(class UObject* Context);
		void Obj_FindPrivateEye_Breadcrumb_03(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PrivateEyeFounded_Breadcrumb_03(class UObject* Context);
		void BC_Obj_ReachMiniBoss(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void BC_UpdateReachMiniBoss(class UObject* Context);
		void SET_RemoveRing(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_RemoveRing(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_RemoveRing(class UObject* Context);
		void Obj_InterrogateCitizen2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_RemoveRing_Tentative(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_TalkToMancubus_3(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TalkToMancubus_3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_TalkToMancubus_3(class UObject* Context);
		void MCE_DefendDone(class UObject* Context);
		void Obj_DefendPrivateEye(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_InterrogateCitizen1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_InterrogateCitizen_3(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_InterrogateCitizen3(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_OfficeReached(class UObject* Context);
		void Set_InterrogateCitizen_2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ReachPrivateEyeOffice(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ReachPrivateEyeOffice(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_INV_FindHolotape2_PreAmbush(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_FindHolotape2_Ambush(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_ArrivedAtHolotape2(class UObject* Context);
		void Obj_FindPrivateEye(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_FindPrivateEye(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_MancubusTalkedTo(class UObject* Context);
		void MCE_ReachPrivateEyeOffice_Breadcrumb1(class UObject* Context);
		void Obj_ReachPrivateEyeOffice_Breadcrumb1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Inv_obj_OpenDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_OpenDoorHistory(class UObject* Context);
		void MCE_Update_GaddysDialogue(class UObject* Context);
		void Inv_GaddyDialogue(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Inv_HallanDialogue(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_HallanDialogue(class UObject* Context);
		void Inv_InterrogateJeanna(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_JeannaDialogue(class UObject* Context);
		void Inv_EleanorVO(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_UpdateEleanorVO(class UObject* Context);
		void Set_GoToArchives(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GoToArchives(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_DefendPrivateEye(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_PrivateEyeFounded(class UObject* Context);
		void MCE_WentToArchives(class UObject* Context);
		void SET_TalkToWainwrightRing(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_Interrogation2Done(class UObject* Context);
		void MCE_Interrogation1Done(class UObject* Context);
		void Obj_TalkWainwrightRing(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_TalkWainwrightRing(class UObject* Context);
		void Set_TalkToHarriet(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ReachHistoryRoom_Objective_PROXY_4();
		void Inv_OpenDoorMiniBoss(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MissionKickoff();
		void MCE_DEBUG_EP03_JumpToEndMission(class UObject* Context);
		void Obj_TalkToMancubus(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_TalkToMancubus(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void ExecuteUbergraph_EP03_DLC2(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
