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
	 * BlueprintGeneratedClass Mission_GoldenCalves.Mission_GoldenCalves_C
	 * Size -> 0x00A8 (FullSize[0x05B8] - InheritedSize[0x0510])
	 */
	class UMission_GoldenCalves_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_FindWantedPosters_ObjSetVar;                         // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindWantedPoster1_ObjVar;                            // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindManufacturingPlant_ObjSetVar;                    // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindManufacturingPlant_ObjVar;                       // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_UseScanner_ObjSetVar;                                // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_UseScanner_ObjVar;                                   // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindScanner_ObjSetVar;                               // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindScanner_ObjVar;                                  // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_AdmireYourWork_ObjSetVar;                            // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_AdmireYourWork_ObjVar;                               // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoldenCalvesTalkToVaughn_ObjSetVar;                  // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoldenCalvesTalkToVaughn_ObjVar;                     // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindWantedPoster2_ObjVar;                            // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindWantedPoster3_ObjVar;                            // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_MakeAPlan_ObjSetVar;                                 // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MakeAPlan_ObjVar;                                    // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_SmashAndReplaceStatues_ObjSetVar;                    // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SmashStatues_ObjVar;                                 // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReplaceStatues_ObjVar;                               // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_UseScanner_HIDDEN_ObjVar;                            // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
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
		void OnDialogSequenceFinished_17();
		void OnDialogSequenceFinished_16();
		void OnDialogSequenceFinished_15();
		void MCE_FindManufacturingPlant(class UObject* Context);
		void MCE_UseScanner(class UObject* Context);
		void Set_FindScanner(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindScanner(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_FindScanner(class UObject* Context);
		void Set_AdmireYourWork(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_AdmireYourWork(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_AdmireYourWork(class UObject* Context);
		void Set_GoldenCalvesTalkToVaughn(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GoldenCalvesTalkToVaughn(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_GoldenCalvesTalkToVaughn(class UObject* Context);
		void Obj_FindWantedPoster2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_FindWantedPoster2(class UObject* Context);
		void Obj_FindWantedPoster3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_FindWantedPoster3(class UObject* Context);
		void Set_MakeAPlan(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_MakeAPlan(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_MakeAPlan(class UObject* Context);
		void MCE_FindWantedPoster1(class UObject* Context);
		void Obj_UseScanner(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_UseScanner(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindManufacturingPlant(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_FindManufacturingPlant(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_FindWantedPosters(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_SmashAndReplaceStatues(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_SmashStatues(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_SmashStatues(class UObject* Context);
		void Obj_FindWantedPoster1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_ReplaceStatues(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ReplaceStatues(class UObject* Context);
		void Advance_UseScanner(class UObject* Context);
		void Obj_UseScanner_HIDDEN(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_DialogueNearPlant(class UObject* Context);
		void ExecuteUbergraph_Mission_GoldenCalves(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
