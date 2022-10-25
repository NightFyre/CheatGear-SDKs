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
	 * BlueprintGeneratedClass Mission_Porta_Prison.Mission_Porta-Prison_C
	 * Size -> 0x0148 (FullSize[0x0658] - InheritedSize[0x0510])
	 */
	class UMission_Porta_Prison_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_PaintGraffiti_ObjSetVar;                             // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PaintGraffiti_ObjVar;                                // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_InstallAIChip_ObjSetVar;                             // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_InstallAIChip_ObjVar;                                // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_DefendPotty_ObjSetVar;                               // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DefendPotty_ObjVar;                                  // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindPrisoner_ObjSetVar;                              // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindPrisoner_ObjVar;                                 // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_DestroyBot_ObjSetVar;                                // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DestroyedBot_ObjVar;                                 // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_CollectAIChip_ObjSetVar;                             // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CollectAIChip_ObjVar;                                // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_BreakTank_ObjSetVar;                                 // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_BreakTank_ObjVar;                                    // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_CollectAIChip2_ObjSetVar;                            // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CollectAIChip2_ObjVar;                               // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_InstallAIChip2_ObjSetVar;                            // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_InstallAIChip2_ObjVar;                               // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_DestroyWMSBot_ObjSetVar;                             // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DestroyWMSBot_ObjVar;                                // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindVandals_ObjSetVar;                               // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindVandals_ObjVar;                                  // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GetSprayPaint_ObjSetVar;                             // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetSprayPaint_ObjVar;                                // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Initial_ObjSetVar;                                   // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FakeLaunch_ObjSetVar;                                // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FakeLaunch_ObjVar;                                   // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillVandals_ObjSetVar;                               // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillVandals_ObjVar;                                  // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_SpawnWMSBot_ObjVar;                              // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_PottyMusic_ObjVar;                               // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PottyMusic_ObjSetVar;                                // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillPrisoner_ObjSetVar;                              // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillPrisoner_ObjVar;                                 // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_CollectWeapon_ObjSetVar;                             // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CollectWeapon_ObjVar;                                // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 Dialog_PottyChase;                                       // 0x0638(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_SU0W[0x4];                                   // 0x0644(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjective*                                   Obj_FindVandals_BC1_ObjVar;                              // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TrackingKillingVandals_ObjVar;                       // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnDialogSequenceFinished_15();
		void OnDialogSequenceFinished_14();
		void OnDialogSequenceFinished_13();
		void OnDialogSequenceFinished_12();
		void OnDialogSequenceFinished_11();
		void OnDialogSequenceFinished_10();
		void OnDialogSequenceFinished_9();
		void Set_InstallAIChip(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_InstallAIChip(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_DefendPotty(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_DefendPotty(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_FindPrisoner(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindPrisoner(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ME_ActivatePortaPotty(class UObject* Context);
		void Set_DestroyBot(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_DestroyedBot(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_CollectAIChip(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_CollectAIChip(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ME_UpdateDestroyBot(class UObject* Context);
		void ME_UpdatePaintGraffiti(class UObject* Context);
		void ME_UpdateInstallAIChip(class UObject* Context);
		void ME_UpdateDefendPotty(class UObject* Context);
		void Obj_BreakTank(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_BreakTank(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_CollectAIChip2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_CollectAIChip2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_InstallAIChip2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_InstallAIChip2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void ME_UpdateBreakTank(class UObject* Context);
		void Set_DestroyWMSBot(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void ME_UpdateDestroyWMSBot(class UObject* Context);
		void Obj_DestroyWMSBot(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ME_UpdateInstallAIChip2(class UObject* Context);
		void ME_UpdateFindPrisoner(class UObject* Context);
		void ME_UpdateFindVandals(class UObject* Context);
		void Set_FindVandals(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindVandals(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ME_UpdateGetSprayPaint(class UObject* Context);
		void Set_GetSprayPaint(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GetSprayPaint(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_Initial(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void AdvToDefendPotty(class UObject* Context);
		void AdvToDestroyBot(class UObject* Context);
		void AdvToBreakTank(class UObject* Context);
		void AdvToDestroyWMS(class UObject* Context);
		void Set_FakeLaunch(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FakeLaunch(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void AdvToFakeLaunch(class UObject* Context);
		void Obj_KillVandals(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_KillVandals(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void ME_UpdateKillVandals(class UObject* Context);
		void AdvToKillVandals(class UObject* Context);
		void AdvToCollectPaint(class UObject* Context);
		void AdvToFnidVandals(class UObject* Context);
		void Obj_INV_SpawnWMSBot(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_PottyMusic(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_PottyMusic(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_PaintGraffiti(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_PottyMusic_Objective_PROXY();
		void Obj_INV_PottyMusic_Objective_PROXY_1();
		void AdvTo_PottyMusic(class UObject* Context);
		void AdvTo_CollectAIChip(class UObject* Context);
		void AdvTo_InstallAIChip(class UObject* Context);
		void Obj_INV_PottyMusic_Objective_PROXY_2();
		void Obj_KillPrisoner(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_KillPrisoner(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_KillPrisoner(class UObject* Context);
		void Obj_CollectWeapon(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_CollectWeapon(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Update_CollectWeapon(class UObject* Context);
		void Update_FindVandals_BC1(class UObject* Context);
		void Obj_FindVandals_BC1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_TrackingKillingVandals(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_PaintGraffiti(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void ExecuteUbergraph_Mission_Porta_Prison(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
