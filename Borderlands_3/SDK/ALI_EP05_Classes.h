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
	 * BlueprintGeneratedClass ALI_EP05.ALI_EP05_C
	 * Size -> 0x00F0 (FullSize[0x05E8] - InheritedSize[0x04F8])
	 */
	class UALI_EP05_C : public UOakMission
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04F8(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                EP05_GoToEldorado_ObjSetVar;                             // 0x0500(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToEldorado_ObjVar;                                 // 0x0508(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_ProceedInEldorado_ObjSetVar;                         // 0x0510(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ProceedInEldorado_ObjVar;                            // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_TitleCardPsycho_ObjSetVar;                           // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TitleCardPsycho_ObjVar;                              // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_KillPsychoreaver_ObjSetVar;                          // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillPsychoreaver_ObjVar;                             // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_TalkToKrieg_ObjSetVar;                               // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToKrieg_ObjVar;                                  // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_EnterTreasureRoom_ObjSetVar;                         // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EnterTreasureRoom_ObjVar;                            // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_LootAllYouCan_ObjSetVar;                             // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_LootAllYouCan_ObjVar;                                // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_OpenFinalChest_ObjSetVar;                            // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_OpenFinalChest_ObjVar;                               // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_OutroCIN_ObjSetVar;                                  // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_OutroCIN_ObjVar;                                     // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_Credits_ObjSetVar;                                   // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Credits_ObjVar;                                      // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_BeginLooting_ObjSetVar;                              // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_BeginLooting_ObjVar;                                 // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_OpenPortal_ObjVar;                               // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_ProceedBossArea_ObjSetVar;                           // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ProceedBossArea_ObjVar;                              // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_ActivateProtection_ObjVar;                       // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_OpenBossRoom_ObjVar;                             // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_ProtectionActivated_ObjVar;                      // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_TriggerOutroCin_ObjVar;                          // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnDialogSequenceFinished_15();
		void OnDialogSequenceFinished_14();
		void OnDialogSequenceFinished_13();
		void OnDialogSequenceFinished_12();
		void OnDialogSequenceFinished_11();
		void OnDialogSequenceFinished_10();
		void OnDialogSequenceFinished_9();
		void Obj_TitleCardPsycho(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_TitleCardPsycho(class UObject* Context);
		void SET_KillPsychoreaver(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_KillPsychoreaver(class UObject* Context);
		void Obj_KillPsychoreaver(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_TitleCardPsycho(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_TalkToKrieg(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_TalkToKrieg(class UObject* Context);
		void Obj_TalkToKrieg(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_ProceedInEldorado(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_EnterTreasureRoom(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_EnterTreasureRoom(class UObject* Context);
		void Obj_EnterTreasureRoom(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_LootAllYouCan(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_LootAllYouCan(class UObject* Context);
		void Obj_LootAllYouCan(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ProceedInEldorado(class UObject* Context);
		void SET_ProceedInEldorado(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_OpenFinalChest(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_OpenFinalChest(class UObject* Context);
		void Obj_OpenFinalChest(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_GoToEldorado(class UObject* Context);
		void Obj_GoToEldorado(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_OutroCIN(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_OutroCIN(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void EP05_GoToEldorado(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_Credits(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_Credits(class UObject* Context);
		void Obj_Credits(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_BeginLooting(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_BeginLooting(class UObject* Context);
		void Obj_BeginLooting(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_OpenPortal(class UObject* Context);
		void Obj_INV_OpenPortal(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_ProceedBossArea(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_ProceedBossArea(class UObject* Context);
		void Obj_ProceedBossArea(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_ActivateProtection(class UObject* Context);
		void Obj_INV_ActivateProtection(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_OpenBossRoom(class UObject* Context);
		void Obj_INV_OpenBossRoom(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_ProtectionActivated(class UObject* Context);
		void Obj_INV_ProtectionActivated(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_TriggerOutroCin(class UObject* Context);
		void Obj_INV_TriggerOutroCin(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ExecuteUbergraph_ALI_EP05(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
