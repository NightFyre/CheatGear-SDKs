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
	 * BlueprintGeneratedClass Mission_DirtyDeeds.Mission_DirtyDeeds_C
	 * Size -> 0x0168 (FullSize[0x0678] - InheritedSize[0x0510])
	 */
	class UMission_DirtyDeeds_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_RescueSoapMaker_ObjSetVar;                           // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_RescueSoapMaker_ObjVar;                              // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PickUpMop_ObjSetVar;                                 // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PickUpMop_ObjVar;                                    // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_LockSauna_ObjSetVar;                                 // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_LockSauna_ObjVar;                                    // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_CollectEpsomSatlt_ObjSetVar;                         // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CollectEpsomSalt_ObjVar;                             // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PourEpsomSalt_ObjSetVar;                             // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PourEspomSalt_ObjVar;                                // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillSoapySteve_ObjSetVar;                            // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillSoapySteve_ObjVar;                               // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ReturnToSoapMaker_ObjSetVar;                         // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReturnToSoapMaker_ObjVar;                            // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_EnterVent_ObjSetVar;                                 // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_OpenVent_ObjVar;                                     // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EnterVent_ObjVar;                                    // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_BreakIntoTrophyRoom_ObjSetVar;                       // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_BreakIntoTrophyRoom_ObjVar;                          // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_LootBathProducts_ObjSetVar;                          // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_LootBathProducts_ObjVar;                             // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_AddBathProducts_ObjSetVar;                           // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Invs_UnblockVent_ObjVar;                                 // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Invs_OpenVentExit_ObjVar;                                // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_LootBubbleBath_ObjVar;                               // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_LootLavenderOil_ObjVar;                              // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_LootGoldenSoap_ObjVar;                               // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Invs_DestroyBubbleBathCase_ObjVar;                       // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Invs_DestroyLavenderOilCase_ObjVar;                      // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Invs_DestroyGoldenSoapCase_ObjVar;                       // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Invs_AddBathProducts_ObjVar;                             // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_AddLavenderOil_ObjVar;                               // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_AddGoldenSoap_ObjVar;                                // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_AddAllBubbleBath_ObjVar;                             // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Invs_AlarmTriggered_ObjVar;                              // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TalkToSoapmakerEntry_ObjSetVar;                      // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Invs_TalkToSoapmakerEntry_ObjVar;                        // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToBaths_ObjSetVar;                                 // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToBaths_ObjVar;                                    // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ReturnToBaths_ObjSetVar;                             // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReturnToBaths_ObjVar;                                // 0x0658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FollowSoapmaker_ObjVar;                              // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindTrophyRoom_ObjSetVar;                            // 0x0668(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindTrophyRoom_ObjVar;                               // 0x0670(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
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
		void OnDialogSequenceFinished_22();
		void OnDialogSequenceFinished_21();
		void OnDialogSequenceFinished_20();
		void OnDialogSequenceFinished_19();
		void OnDialogSequenceFinished_18();
		void Advance_EnterVent(class UObject* Context);
		void Set_BreakIntoTrophyRoom(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_BreakIntoTrophyRoom(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Advance_BreakIntoTrophyRoom(class UObject* Context);
		void Advance_DestroyVent(class UObject* Context);
		void Obj_EnterVent(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_OpenVent(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_EnterVent(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_LootBathProducts(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_LootBathProducts(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_LootBathProducts(class UObject* Context);
		void Advance_LockSauna(class UObject* Context);
		void Set_AddBathProducts(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Invs_UnblockVent(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Advance_UnblockVent(class UObject* Context);
		void Invs_OpenVentExit(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Advance_OpenVentExit(class UObject* Context);
		void Obj_AddLavenderOil(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_AddGoldenSoap(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_AddAllBubbleBath(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_LootBubbleBath(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_LootLavenderOil(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_LootGoldenSoap(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Invs_DestroyBubbleBathCase(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Invs_DestroyLavenderOilCase(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Invs_DestroyGoldenSoapCase(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Advance_DestroyBubbleBathCase(class UObject* Context);
		void Advance_DestroyLavenderOilCase(class UObject* Context);
		void Advance_DestroyGoldenSoapCase(class UObject* Context);
		void Invs_AddBathProducts(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_AddBathProducts(class UObject* Context);
		void Advance_AddLavenderOil(class UObject* Context);
		void Advance_AddGoldenSoap(class UObject* Context);
		void Advance_AddAllBubbleBath(class UObject* Context);
		void Advance_AddEpsomSalt(class UObject* Context);
		void Advance_KillSoapySteve(class UObject* Context);
		void Advance_ReturnToSoapMaker(class UObject* Context);
		void Advance_RescueSoapMaker(class UObject* Context);
		void Invs_AlarmTriggered(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Advance_AlarmTriggered(class UObject* Context);
		void Advance_PickUpMop(class UObject* Context);
		void Obj_ReturnToSoapMaker(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_TalkToSoapmakerEntry(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Invs_TalkToSoapmakerEntry(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ReturnToSoapMaker(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_KillSoapySteve(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_KillSoapySteve(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_PourEspomSalt(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GoToBaths(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_GoToBaths(class UObject* Context);
		void Obj_GoToBaths(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_PourEpsomSalt(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_CollectEpsomSalt(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_CollectEpsomSatlt(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_LockSauna(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ReturnToBaths(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ReturnToBaths(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_ReturnToBaths(class UObject* Context);
		void Obj_FollowSoapmaker(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_FollowSoapmaker(class UObject* Context);
		void MissionKickoff();
		void Set_LockSauna(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_LockSauna_Objective_PROXY();
		void Obj_PickUpMop(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_SoapmakerPreTrophyRoomVO(class UObject* Context);
		void Set_PickUpMop(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_RescueSoapMaker(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_RescueSoapMaker(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_FindTrophyRoom(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_FindTrophyRoom(class UObject* Context);
		void Obj_FindTrophyRoom(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ExecuteUbergraph_Mission_DirtyDeeds(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
