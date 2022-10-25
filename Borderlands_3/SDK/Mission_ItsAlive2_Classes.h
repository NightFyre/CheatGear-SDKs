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
	 * BlueprintGeneratedClass Mission_ItsAlive2.Mission_ItsAlive2_C
	 * Size -> 0x0158 (FullSize[0x0668] - InheritedSize[0x0510])
	 */
	class UMission_ItsAlive2_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_GoToMaliwanCamp_ObjSetVar;                           // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToMaliwanCamp_ObjVar;                              // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FAKELootRevolvers_ObjSetVar;                         // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FAKELootJetpacks_ObjSetVar;                          // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FAKELootJetpacks_ObjVar;                             // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_LootFlashTrooper_ObjSetVar;                          // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_LootFlashTrooper_ObjVar;                             // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FAKELootNogs_ObjSetVar;                              // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FAKELootNogs_ObjVar;                                 // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FAKELootShotgun_ObjSetVar;                           // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FAKELootShotgun_ObjVar;                              // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_LootAcidHeavy_ObjSetVar;                             // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_LootAcidHeavy_ObjVar;                                // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ReturnToResearchCenter_ObjSetVar;                    // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReturnToResearchCenter_ObjVar;                       // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PlaceLoot1_ObjSetVar;                                // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlaceLoot1_ObjVar;                                   // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PushLoot1_ObjSetVar;                                 // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PushLoot1_ObjVar;                                    // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PlaceLoot2_ObjSetVar;                                // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlaceLoot2_ObjVar;                                   // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PushLoot2_ObjSetVar;                                 // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PushLoot2_ObjVar;                                    // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TurnOnPower_ObjSetVar;                               // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TurnedOnPower_ObjVar;                                // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PutInAIChip_ObjSetVar;                               // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PutInAIChip_ObjVar;                                  // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillBot_ObjSetVar;                                   // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillBot_ObjVar;                                      // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FAKELootRevolvers_ObjVar;                            // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FAKELootHumanLegs_ObjSetVar;                         // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FAKELootHumanLegs_ObjVar;                            // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FAKEBatteries_ObjSetVar;                             // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FAKELootBatteries_ObjVar;                            // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_LootAIChip_ObjSetVar;                                // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_LootAIChip_ObjVar;                                   // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_PowerUpSequence_ObjVar;                          // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_LootFlashTrooper_ForWaypoint_ObjVar;             // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INV_LootAcidHeavy_ForWaypoint_ObjVar;                // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 CombatConversation;                                      // 0x0650(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5851[0x4];                                   // 0x065C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjective*                                   Obj_ExtraReward_ObjVar;                                  // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
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
		void OnDialogSequenceFinished_37();
		void OnDialogSequenceFinished_36();
		void Set_GoToMaliwanCamp(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_LootFlashTrooper(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_LootAcidHeavy(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_ReturnToResearchCenter(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_PlaceLoot1(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_TurnOnPower(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_PutInAIChip(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_KillBot(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GoToMaliwanCamp(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_LootFlashTrooper(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_LootAcidHeavy(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_ReturnToResearchCenter(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_PlaceLoot1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_PushLoot1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_PlaceLoot2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_PushLoot2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_TurnedOnPower(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_PutInAIChip(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_KillBot(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_WentToMaliwanCamp(class UObject* Context);
		void MCE_LootedFlashTrooper(class UObject* Context);
		void MCE_LootedAcidHeavy(class UObject* Context);
		void MCE_ReturnedToResearchCenter(class UObject* Context);
		void MCE_PlaceLoot1(class UObject* Context);
		void MCE_PushLoot1(class UObject* Context);
		void MCE_PlaceLoot2(class UObject* Context);
		void MCE_PushLoot2(class UObject* Context);
		void MCE_TurnedOnPower(class UObject* Context);
		void MCE_PutInAIChip(class UObject* Context);
		void MCE_KillBot(class UObject* Context);
		void Set_FAKELootRevolvers(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_FAKELootJetpacks(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FAKELootJetpacks(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_FAKELootEmperors(class UObject* Context);
		void MCE_FAKELootJetpacks(class UObject* Context);
		void Set_FAKELootNogs(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FAKELootNogs(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_FAKELootShotgun(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FAKELootShotgun(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_FAKELootNogs(class UObject* Context);
		void MCE_FAKELootShotgun(class UObject* Context);
		void Set_PushLoot1(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_PlaceLoot2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_PushLoot2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FAKELootRevolvers(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_FAKELootHumanLegs(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_FAKELootHumanLegs(class UObject* Context);
		void Obj_FAKELootHumanLegs(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_FAKEBatteries(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FAKELootBatteries(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_FAKELootBatteries(class UObject* Context);
		void Set_LootAIChip(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_LootAIChip(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_LootedAIChip(class UObject* Context);
		void Obj_INV_PowerUpSequence(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INV_LootFlashTrooper_ForWaypoint(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_LootedFlashTrooper_ForWaypoint(class UObject* Context);
		void Obj_INV_LootAcidHeavy_ForWaypoint(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_LootAcidHeavy_ForWaypoint(class UObject* Context);
		void Obj_ExtraReward(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ExecuteUbergraph_Mission_ItsAlive2(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
