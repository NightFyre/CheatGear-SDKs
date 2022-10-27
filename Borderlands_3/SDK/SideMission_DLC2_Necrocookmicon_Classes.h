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
	 * BlueprintGeneratedClass SideMission_DLC2_Necrocookmicon.SideMission_DLC2_Necrocookmicon_C
	 * Size -> 0x01A0 (FullSize[0x06B0] - InheritedSize[0x0510])
	 */
	class USideMission_DLC2_Necrocookmicon_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_TalkToHarriet_ObjSetVar;                             // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToHarriet_ObjVar;                                // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_SilenceCultists_ObjSetVar;                           // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SilenceCultists_ObjVar;                              // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PickCard_ObjSetVar;                                  // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PickCard_ObjVar;                                     // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TakeNecrocookmicon_ObjSetVar;                        // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TakeNecrocookmicon_ObjVar;                           // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_UseCard_ObjVar;                                      // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_DestroyFrozenCorpses_ObjSetVar;                      // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DestroyFrozenCorpses_ObjVar;                         // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PickupValve_ObjSetVar;                               // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PickupValve_ObjVar;                                  // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PlaceValve_ObjSetVar;                                // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlaceValve_ObjVar;                                   // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillCultists_ObjSetVar;                              // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillCultists_ObjVar;                                 // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PickupBook_1_ObjSetVar;                              // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PickupBook_1_ObjVar;                                 // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TalkHarriet_2_ObjSetVar;                             // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToHarriet_2_ObjVar;                              // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillHarriet_ObjSetVar;                               // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillHarriet_ObjVar;                                  // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PickupBook_2_ObjSetVar;                              // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PickupBook_2_ObjVar;                                 // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoBackToMancubus_ObjSetVar;                          // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoBackToMancubus_ObjVar;                             // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PlaceBook_Bar_ObjSetVar;                             // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlaceBook_Bar_ObjVar;                                // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PickupIngredient_ObjSetVar;                          // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PickupIngredient_ObjVar;                             // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PlaceIngredient_ObjSetVar;                           // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlaceIngredient_ObjVar;                              // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GiveMeal_ObjSetVar;                                  // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GiveMeal_ObjVar;                                     // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_HarrietTransforms_ObjVar;                        // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TakeMeal_ObjSetVar;                                  // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TakeMeal_ObjVar;                                     // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_SilenceCultists_Attacked_ObjVar;                 // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_TakeNecrocookmicon_MancubusVO_1_ObjVar;          // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_TakeNecrocookmicon_MancubusVO_2_ObjVar;          // 0x0658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_EnterForbiddenSection_1_ObjVar;                  // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GiveBook_ObjSetVar;                                  // 0x0668(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GiveBook_ObjVar;                                     // 0x0670(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_SilenceCultists_Precheck_ObjVar;                 // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_SilenceCultists_Individual_ObjVar;               // 0x0680(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ShootPipe_ObjSetVar;                                 // 0x0688(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ShootPipe_ObjVar;                                    // 0x0690(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_PreCheck_KillHarriet_ObjVar;                     // 0x0698(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_Spit_ObjVar;                                     // 0x06A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_Vomit_ObjVar;                                    // 0x06A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
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
		void OnDialogSequenceFinished_27();
		void OnDialogSequenceFinished_26();
		void Set_TakeNecrocookmicon(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_TakeNecrocookmicon(class UObject* Context);
		void Obj_UseCard(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_UseCard(class UObject* Context);
		void Obj_DestroyFrozenCorpses(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_DestroyFrozenCorpses(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TakeNecrocookmicon(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_PickupValve(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_PickupValve(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_PickupValve(class UObject* Context);
		void Obj_PlaceValve(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_PlaceValve(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_PlaceValve(class UObject* Context);
		void Obj_KillCultists(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_KillCultists(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_KillCultists(class UObject* Context);
		void Obj_PickupBook_2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_PickupBook_2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_PickupBook_2(class UObject* Context);
		void Obj_TalkToHarriet_3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_TalkHarriet_3(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_TalkHarriet_3(class UObject* Context);
		void Obj_KillHarriet(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_KillHarriet(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_KillHarriet(class UObject* Context);
		void Obj_PickupBook_3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_PickupBook_3(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_PickupBook_3(class UObject* Context);
		void Obj_GoBackToMancubus(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GoBackToMancubus(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_GoBackToMancubus(class UObject* Context);
		void MCE_PickCard(class UObject* Context);
		void Obj_PlaceBook_Bar(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_PlaceBook_Bar(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_PlaceBook_Bar(class UObject* Context);
		void Obj_PickupIngredient(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_PickupIngredient(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_PickupIngredient(class UObject* Context);
		void Obj_PlaceIngredient(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_PlaceIngredient(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_PlaceIngredient(class UObject* Context);
		void Obj_GiveMeal(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GiveMeal(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_GiveMeal(class UObject* Context);
		void Obj_INV_HarrietTransforms(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_TakeMeal(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_TakeMeal(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_TakeMeal(class UObject* Context);
		void Obj_SilenceCultists(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_SilenceCultists_Attacked(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_SilenceCultists_Attacked(class UObject* Context);
		void Obj_INV_TakeNecrocookmicon_MancubusVO_2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_TakeNecrocookmicon_MancubusVO_3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_TakeNecrocookmicon_MancubusVO_2(class UObject* Context);
		void MCE_INV_TakeNecrocookmicon_MancubusVO_3(class UObject* Context);
		void Obj_INV_EnterForbiddenSection_2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_EnterForbiddenSection_2(class UObject* Context);
		void Obj_GiveBook(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GiveBook(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_GiveBook(class UObject* Context);
		void MissionKickoff();
		void Set_PickCard(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_PickCard(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_SilenceCultists_Precheck(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_DestroyedFrozenCorpse(class UObject* Context);
		void Obj_INV_SilenceCultists_Individual(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ShootPipe(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ShootPipe(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ShootPipe(class UObject* Context);
		void Obj_INV_PreCheck_KillHarriet(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Spit(class UObject* Context);
		void Obj_INV_Spit(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_Vomit(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_TalkToHarriet(class UObject* Context);
		void MCE_SilenceCultist_Individual(class UObject* Context);
		void Set_TalkToHarriet(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TalkToHarriet(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_SilenceCultists(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void ExecuteUbergraph_SideMission_DLC2_Necrocookmicon(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
