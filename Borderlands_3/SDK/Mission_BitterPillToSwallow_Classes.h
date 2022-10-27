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
	 * BlueprintGeneratedClass Mission_BitterPillToSwallow.Mission_BitterPillToSwallow_C
	 * Size -> 0x0170 (FullSize[0x0680] - InheritedSize[0x0510])
	 */
	class UMission_BitterPillToSwallow_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_GetMedicine_ObjSetVar;                               // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_CollectMedicine_Blood_ObjVar;                        // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_DeliverMedicalGoods_ObjSetVar;                       // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_DeliverMedicalGoods_ObjVar;                          // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MedChestC_ObjVar;                                    // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MedChestB_ObjVar;                                    // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindDealer_ObjVar;                                   // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_MeetDoctor_ObjVar;                                   // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_MeetDoctor_ObjSetVar;                                // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PayorThreatenDealer_ObjVar;                          // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ThreatenedDealer_ObjVar;                             // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PaidDealer_ObjVar;                                   // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TakeMeds_ObjVar;                                     // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_DealWithDealer_ObjSetVar;                            // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TakeMeds_ObjSetVar;                                  // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_InvisibleHolding_ObjSetVar;                          // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_InvisibleHolding_ObjVar;                             // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_PickUpBloodPack_ObjSetVar;                           // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_PickUpBloodPack_ObjVar;                              // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_FollowDoctor_ObjSetVar;                              // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_FollowDoctor_ObjVar;                                 // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_AttachTransfusionPack_ObjSetVar;                     // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_AttachEmptyBloodPack_ObjVar;                         // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_PickUpFilledPack_ObjSetVar;                          // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_PickUpFilledPack_ObjVar;                             // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_TalkToMissionGiverOrDonate_ObjSetVar;                // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_TalkToMedicalAssistant_CompletsMission_ObjVar;       // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MedChestBLocation_ObjVar;                            // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MedChestCLocation_ObjVar;                            // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MedChestDLocation_ObjVar;                            // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MedChestCCount_ObjVar;                               // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 NewVar_1;                                                // 0x0610(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_EZX0[0x4];                                   // 0x061C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjective*                                   OBJ_PlacedMedTray1_ObjVar;                               // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_PlacedMedTray2_ObjVar;                               // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_PlacedMedTray3_ObjVar;                               // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_AllSuppliesFound_ObjVar;                             // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       PaidHardin;                                              // 0x0640(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6TL3[0x7];                                   // 0x0641(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjective*                                   Obj_DestroyTrailer_ObjVar;                               // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EmptyObjective_ObjVar;                               // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_CollectMedicine_ObjVar;                              // 0x0658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SmallerWaypoint_ObjVar;                              // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlayerInArea_ObjVar;                                 // 0x0668(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_ExitTalk_ObjVar;                                     // 0x0670(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_CompleteMission_ObjVar;                              // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AreMedicalItemsAllCollected(bool* MedicalItemsCollected1);
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
		void OnDialogSequenceFinished_23();
		void Set_GetMedicine(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_CollectMedicine_Blood(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_TalkToMedicalAssistant_CompletsMission(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_TalkToMissionGiverOrDonate(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_CollectedMedicine_A(class UObject* Context);
		void Update_CollectedMedicine_B(class UObject* Context);
		void Update_CollectedMedicine_C(class UObject* Context);
		void Update_TookMedsFromDealer(class UObject* Context);
		void SET_DeliverMedicalGoods(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_DeliverMedicalGoods(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_TalkToMedicalAssitant_CompleteMission(class UObject* Context);
		void Update_DeliverMedicalGoods(class UObject* Context);
		void Obj_MedChestC(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_OpenedMedChestC(class UObject* Context);
		void Obj_MedChestB(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_OpenedMedChestB(class UObject* Context);
		void Obj_FindDealer(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_ArrivedAtDealer(class UObject* Context);
		void OBJ_MeetDoctor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_MeetDoctor(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_MetDoctor(class UObject* Context);
		void Obj_PayorThreatenDealer(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_DealWithDealer(class UObject* Context);
		void Obj_ThreatenedDealer(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_PaidDealer(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_ThreatenedDealer(class UObject* Context);
		void Update_PaidDealer(class UObject* Context);
		void Obj_TakeMeds(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_TakeMeds(class UObject* Context);
		void Set_DealWithDealer(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_TakeMeds(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_CollectMedicine_Objective_PROXY();
		void OBJ_CollectMedicine_Blood_Objective_PROXY_1();
		void OBJ_CollectMedicine_Objective_PROXY_2();
		void OBJ_CollectMedicine_Blood_Objective_PROXY_3();
		void Set_InvisibleHolding(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_InvisibleHolding(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_CollectMedicine_Objective_PROXY_4();
		void OBJ_CollectMedicine_Blood_Objective_PROXY_5();
		void SET_PickUpBloodPack(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_PickUpBloodPack(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_GotEmptyBloodPack(class UObject* Context);
		void SET_FollowDoctor(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_FollowDoctor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_FollowedDoc(class UObject* Context);
		void SET_AttachTransfusionPack(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_AttachEmptyBloodPack(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_AttachedPack(class UObject* Context);
		void SET_PickUpFilledPack(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_PickUpFilledPack(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_PickedUpFilledPack(class UObject* Context);
		void Obj_MedChestBLocation(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_MedChestCLocation(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_MedChestDLocation(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_EnteredLocB(class UObject* Context);
		void Update_EnteredLocC(class UObject* Context);
		void Update_EnteredLocD(class UObject* Context);
		void Obj_MedChestCCount(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_OpenedMedChestCount(class UObject* Context);
		void OBJ_PlacedMedTray1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_PlacedMedTray1(class UObject* Context);
		void OBJ_PlacedMedTray2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_PlacedMedTray2(class UObject* Context);
		void OBJ_PlacedMedTray3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_PlacedMedTray3(class UObject* Context);
		void Obj_MedChestCLocation_Objective_PROXY_6();
		void Obj_MedChestBLocation_Objective_PROXY_7();
		void Obj_MedChestBLocation_Objective_PROXY_8();
		void Obj_MedChestCLocation_Objective_PROXY_9();
		void Obj_MedChestBLocation_Objective_PROXY_10();
		void Obj_MedChestCLocation_Objective_PROXY_11();
		void Obj_MedChestC_Objective_PROXY_12();
		void Obj_MedChestC_Objective_PROXY_13();
		void Obj_MedChestC_Objective_PROXY_14();
		void OBJ_AllSuppliesFound(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_AllSuppliesFound_Objective_PROXY_15();
		void OBJ_AllSuppliesFound_Objective_PROXY_16();
		void OBJ_AllSuppliesFound_Objective_PROXY_17();
		void Obj_DestroyTrailer(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_DestroyedTrailer(class UObject* Context);
		void Obj_EmptyObjective(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_CollectMedicine(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_SmallerWaypoint(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_SmallerWaypointHit(class UObject* Context);
		void Obj_PlayerInArea(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_PlayerInArea(class UObject* Context);
		void MissionKickoff();
		void OBJ_ExitTalk(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_ExitTalk(class UObject* Context);
		void OBJ_CompleteMission(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ExecuteUbergraph_Mission_BitterPillToSwallow(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
