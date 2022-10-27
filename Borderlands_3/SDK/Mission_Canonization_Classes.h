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
	 * BlueprintGeneratedClass Mission_Canonization.Mission_Canonization_C
	 * Size -> 0x00E0 (FullSize[0x05F0] - InheritedSize[0x0510])
	 */
	class UMission_Canonization_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_GetTrap_Empty_ObjSetVar;                             // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetTrap_Empty_ObjVar;                                // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToTemple_ObjSetVar;                                // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToTemple_ObjVar;                                   // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PlaceTrap_ObjSetVar;                                 // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlaceTrap_ObjVar;                                    // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FillTrap_ObjSetVar;                                  // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GetWeaponParts_ObjSetVar;                            // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ReturnToResearchCenter_ObjSetVar;                    // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReturnToResearchCenter_ObjVar;                       // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PlaceWeaponParts_ObjSetVar;                          // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlaceWeaponParts_ObjVar;                             // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlaceEnergySinkInWeapon_ObjVar;                      // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FillTrap_ObjVar;                                     // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DestroyCyclone_ObjVar;                               // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PlaceEnergySinkInWeapon_ObjSetVar;                   // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GetTrap_Full_ObjSetVar;                              // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetTrap_Full_ObjVar;                                 // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_LootCyclone_ObjVar;                                  // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_CannonWarmupComplete_ObjVar;                         // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DestroyOutrunner_ObjVar;                             // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_LootOutrunner_ObjVar;                                // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    WeaponPartsLooted;                                       // 0x05C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8C52[0x4];                                   // 0x05CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjectiveSet*                                Set_GetWeapon_ObjSetVar;                                 // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetWeapon_ObjVar;                                    // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_BackUp_ObjVar;                                       // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_BackUp_ObjSetVar;                                    // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void IsAllWeaponPartsLooted(bool* Return_bool);
		void OnDialogSequenceFinished_17();
		void OnDialogSequenceFinished_16();
		void OnDialogSequenceFinished_15();
		void OnDialogSequenceFinished_14();
		void OnDialogSequenceFinished_13();
		void OnDialogSequenceFinished_12();
		void OnDialogSequenceFinished_11();
		void OnDialogSequenceFinished_10();
		void MCE_ReturnedToResearchCenter(class UObject* Context);
		void Obj_GetTrap_Full(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GetTrap_Full(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_LootCyclone(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlacedEnergySink(class UObject* Context);
		void Obj_PlaceEnergySinkInWeapon(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_PlaceWeaponParts(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_WentToTemple(class UObject* Context);
		void Obj_ReturnToResearchCenter(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_PlaceTrap(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_GetTrap_Empty(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_CannonWarmupComplete(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_WeaponWarmupComplete(class UObject* Context);
		void Obj_DestroyOutrunner(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_LootOutrunner(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_GetWeaponParts_CompleteLoad(class UObject* Context);
		void MCE_GetWeaponParts_OnCompleted(class UObject* Context);
		void MCE_DestroyedCyclone(class UObject* Context);
		void MCE_DestroyedOutrunner(class UObject* Context);
		void Set_GetWeapon(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GetWeapon(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ClosedTrap(class UObject* Context);
		void Obj_GoToTemple(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlacedWeaponPart(class UObject* Context);
		void MCE_PlacedEnergySinkInWeapon(class UObject* Context);
		void Set_PlaceEnergySinkInWeapon(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_PlaceWeaponParts(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_ReturnToResearchCenter(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_BackUp(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GetWeaponParts(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_BackUp(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_FillTrap(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_DestroyCyclone(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_FillTrap(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_GrouseBackedUp(class UObject* Context);
		void Set_PlaceTrap(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_GoToTemple(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_GetTrap_Empty(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_FiledEnergySink(class UObject* Context);
		void ExecuteUbergraph_Mission_Canonization(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
