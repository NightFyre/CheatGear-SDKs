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
	 * BlueprintGeneratedClass ALI_EP01.ALI_EP01_C
	 * Size -> 0x00F9 (FullSize[0x05F1] - InheritedSize[0x04F8])
	 */
	class UALI_EP01_C : public UOakMission
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04F8(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_Navigate_ALIPlanet_ObjSetVar;                        // 0x0500(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   NavigateToPlanet_ObjVar;                                 // 0x0508(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_UseDropPod_ObjSetVar;                                // 0x0510(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Renavigate_AlismaPlanet_ObjVar;                      // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_UseDropPod_ObjVar;                                   // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Survive_ObjSetVar;                                   // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Survive_ObjVar;                                      // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToPlains_ObjSetVar;                                // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToPlains_ObjVar;                                   // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_EnterDoorway_ObjSetVar;                              // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EnterDoorway_ObjVar;                                 // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TalkToKrieg1st_ObjSetVar;                            // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToKrieg1st_ObjVar;                               // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToVaulthalla_ObjSetVar;                            // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToVaulthalla_ObjVar;                               // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TakeOrb_ObjSetVar;                                   // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TakeOrb_ObjVar;                                      // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_PlaceOrb_ObjSetVar;                                  // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlaceOrb_ObjVar;                                     // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_GiantKriegDisappears_ObjVar;                     // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TC_Krieg_ObjSetVar;                                  // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TC_Krieg_ObjVar;                                     // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FollowKrieg_ObjSetVar;                               // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FollowKrieg_ObjVar;                                  // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_GateToSanctumOpens_ObjVar;                       // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_GiantKriegStartsToDisappear_ObjVar;              // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_GoToVaulthalla_Precheck_ObjVar;                  // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_ChangeKriegSpawn_ObjVar;                         // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_RaiseGate_ObjVar;                                // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_LockGate_ObjVar;                                 // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       GoToVaultHallaCompleteLoad;                              // 0x05F0(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnDialogSequenceFinished_23();
		void OnDialogSequenceFinished_22();
		void OnDialogSequenceFinished_21();
		void OnDialogSequenceFinished_20();
		void OnDialogSequenceFinished_19();
		void OnDialogSequenceFinished_18();
		void OnDialogSequenceFinished_17();
		void OnDialogSequenceFinished_16();
		void OnDialogSequenceFinished_15();
		void OnDialogSequenceFinished_14();
		void OnDialogSequenceFinished_13();
		void Set_UseDropPod(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_AdvanceToDroppod(class UObject* Context);
		void Obj_Renavigate_AlismaPlanet(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_UseDropPod(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Navigated_AlismaPlanet(class UObject* Context);
		void MCE_NavigateToALIPlanet(class UObject* Context);
		void NavigateToPlanet(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_Navigate_ALIPlanet(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_UsedDropPod(class UObject* Context);
		void Set_Survive(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_Survive(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Survive(class UObject* Context);
		void Set_GoToPlains(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GoToPlains(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_GoToPlains(class UObject* Context);
		void Set_EnterDoorway(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_EnterDoorway(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_EnterDoorway(class UObject* Context);
		void Set_TalkToKrieg1st(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TalkToKrieg1st(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_TalkToKrieg1st(class UObject* Context);
		void Set_GoToVaulthalla(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GoToVaulthalla(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_GoToVaulthalla(class UObject* Context);
		void Set_TakeOrb(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TakeOrb(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_TakeOrb(class UObject* Context);
		void SET_PlaceOrb(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_PlaceOrb(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlaceOrb(class UObject* Context);
		void Obj_INV_GiantKriegDisappears(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_GiantKriegDisappears(class UObject* Context);
		void Set_TC_Krieg(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TC_Krieg(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_FollowKrieg(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FollowKrieg(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_FollowKrieg(class UObject* Context);
		void Obj_INV_GateToSanctumOpens(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_GateToSanctumOpens(class UObject* Context);
		void Obj_INV_GiantKriegStartsToDisappear(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_GiantKriegStartsToDisappear(class UObject* Context);
		void Obj_INV_GoToVaulthalla_Precheck(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MissionKickoff();
		void Obj_INV_ChangeKriegSpawn(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_RaiseGate(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_LockGate(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_RaiseGate(class UObject* Context);
		void MCE_INV_LockGate(class UObject* Context);
		void MCE_INV_ChangeKriegSpawn(class UObject* Context);
		void ExecuteUbergraph_ALI_EP01(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
