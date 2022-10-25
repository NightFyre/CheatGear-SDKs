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
	 * BlueprintGeneratedClass Mission_MoneyBackGuarantee.Mission_MoneyBackGuarantee_C
	 * Size -> 0x01C8 (FullSize[0x06D8] - InheritedSize[0x0510])
	 */
	class UMission_MoneyBackGuarantee_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                SET_PayForGun_ObjSetVar;                                 // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_PayForGun_ObjVar;                                    // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ConfrontOfficer_ObjSetVar;                           // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_ConfrontOfficer_ObjVar;                              // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_FindFort_ObjSetVar;                                  // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_FindFort_ObjVar;                                     // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ClearTheFort_ObjSetVar;                              // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_ClearFort_ObjVar;                                    // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_FindOfficer_ObjSetVar;                               // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_FindOfficer_ObjVar;                                  // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_FreeOfficer_ObjSetVar;                               // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_FreeOfficer_ObjVar;                                  // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_CollectShell_ObjVar;                                 // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_ReturnToFort_ObjSetVar;                              // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_ReturnToFort_ObjVar;                                 // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_LoadGun_ObjSetVar;                                   // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_LoadGun_ObjVar;                                      // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_CollectRefund_ObjSetVar;                             // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_CollectRefund_ObjVar;                                // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_DefeatAmbush_ObjSetVar;                              // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_DefeatAmbush_ObjVar;                                 // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_BreakIntoFort_ObjSetVar;                             // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_INVGunFireSequnece_ObjVar;                           // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_FireGunsequence_ObjSetVar;                           // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_FindGun_Breadcrumb01_ObjVar;                         // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_FindGun_Breadcrumb02_ObjVar;                         // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_FindGun_ObjSetVar;                                   // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_FindGun_ObjVar;                                      // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_FindGun_Breadcrumb03_ObjVar;                         // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_FindClue01_ObjSetVar;                                // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_Clue02_ObjVar;                                       // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_FindClue01_ObjVar;                                   // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_FindClue02_ObjSetVar;                                // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_GoToMine_ObjSetVar;                                  // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_GoToMine_ObjVar;                                     // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_GoToMine01_ObjVar;                                   // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_GoToMine02_ObjVar;                                   // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_GoToMine03_ObjVar;                                   // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_GoToMine04_ObjVar;                                   // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_PickUpGun_ObjSetVar;                                 // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_PickUpGun_ObjVar;                                    // 0x0658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJINVIS_OpenSticklysRoom_ObjVar;                        // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_ConfrontConman02_ObjSetVar;                          // 0x0668(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_ConfrontConman02_ObjVar;                             // 0x0670(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_CollectShell_ObjSetVar;                              // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_TalkToOfficer_ObjSetVar;                             // 0x0680(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_TalkToOfficer_ObjVar;                                // 0x0688(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_HitStickly_ObjSetVar;                                // 0x0690(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_HitStickly_ObjVar;                                   // 0x0698(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_GoToCannon_ObjSetVar;                                // 0x06A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_GoToCannon_ObjVar;                                   // 0x06A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_GoToCannon_Breadcrumb01_ObjVar;                      // 0x06B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_GoToCannon_Breadcrumb02_ObjVar;                      // 0x06B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_FireGun_ObjSetVar;                                   // 0x06C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_FireGun_ObjVar;                                      // 0x06C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_GoToCannon_Breadcrumb03_ObjVar;                      // 0x06D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
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
		void OnDialogSequenceFinished_46();
		void OnDialogSequenceFinished_45();
		void OnDialogSequenceFinished_44();
		void OnDialogSequenceFinished_43();
		void OnDialogSequenceFinished_42();
		void OnDialogSequenceFinished_41();
		void OnDialogSequenceFinished_40();
		void OBJ_FindFort(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_ClearFort(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_FindOfficer(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_FindOfficer(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_FreeOfficer(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_FreeOfficer(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_CollectShell(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_ReturnToFort(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_LoadGun(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_ReturnToFort(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_LoadGun(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_CollectRefund(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_CollectRefund(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_PaidForGun(class UObject* Context);
		void Update_ConfrontedOfficer(class UObject* Context);
		void Update_FoundFort(class UObject* Context);
		void Update_ClearedFort(class UObject* Context);
		void Update_FoundOfficer(class UObject* Context);
		void Update_FreedOfficer(class UObject* Context);
		void Update_CollectedShells(class UObject* Context);
		void Update_ReturnedToFort(class UObject* Context);
		void Updated_LoadedGun(class UObject* Context);
		void Update_CollectedRefund(class UObject* Context);
		void SET_DefeatAmbush(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_DefeatAmbush(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_DefeatedAmbush(class UObject* Context);
		void Set_BreakIntoFort(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_BrokeIntoFort(class UObject* Context);
		void OBJ_INVGunFireSequnece(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_GunFireSequence(class UObject* Context);
		void SET_FireGunsequence(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_ClearTheFort(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_FindGun_Breadcrumb01(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_FindGun_Breadcrumb02(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_FindGun_Breadcrumb01(class UObject* Context);
		void Update_FindGun_Breadcrumb02(class UObject* Context);
		void SET_FindGun(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_FindGun(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_FindGun(class UObject* Context);
		void OBJ_FindGun_Breadcrumb03(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_FindGun_Breadcrumb03(class UObject* Context);
		void SET_FindClue01(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_Clue02(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_FindClue02(class UObject* Context);
		void OBJ_FindClue01(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_FindClue01(class UObject* Context);
		void OBJ_ConfrontOfficer(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_FindFort(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_FindClue02(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_GoToMine01(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_GoToMine02(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_GoToMine01(class UObject* Context);
		void Update_GoToMine02(class UObject* Context);
		void SET_GoToMine(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_GoToMine(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_GoToMine(class UObject* Context);
		void OBJ_GoToMine03(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_GoToMine03(class UObject* Context);
		void Set_ConfrontOfficer(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_GoToMine04(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_GoToMine04(class UObject* Context);
		void OBJ_PickUpGun(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_PickUpGun(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_PickupGun(class UObject* Context);
		void OBJINVIS_OpenSticklysRoom(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_ConfrontConman02(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_ConfrontConman02(class UObject* Context);
		void OBJ_ConfrontConman02(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_CollectShell(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_TalkToOfficer(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_TalkToOfficer(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_TalkToOfficer(class UObject* Context);
		void SET_HitStickly(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_HitStickly(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_HitStickly(class UObject* Context);
		void OBJ_GoToCannon_Breadcrumb01(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_GoToCannon_Breadcrumb02(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_Cannon_Breadcrumb01(class UObject* Context);
		void Update_Cannon_Breadcrumb02(class UObject* Context);
		void SET_GoToCannon(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_GoToCannon(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_PayForGun(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_GoToCannon_Breadcrumb03(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_Cannon_Breadcrumb03(class UObject* Context);
		void SET_FireGun(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_FireGun(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Updated_FireGun(class UObject* Context);
		void PlayersCloseToPunchingStickly(class UObject* Context);
		void SET_PayForGun(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_ShittyGunChestReaction(class UObject* Context);
		void ExecuteUbergraph_Mission_MoneyBackGuarantee(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
