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
	 * BlueprintGeneratedClass Mission_MalevolentPractice.Mission_MalevolentPractice_C
	 * Size -> 0x0140 (FullSize[0x0650] - InheritedSize[0x0510])
	 */
	class UMission_MalevolentPractice_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_GoToPrison_ObjSetVar;                                // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToPrison_ObjVar;                                   // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_SearchFor1stClue_ObjSetVar;                          // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SearchFor1stClue_ObjVar;                             // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_SearchFor2ndClue_ObjSetVar;                          // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SearchFor2ndClue_ObjVar;                             // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_SearchFor3rdClue_ObjSetVar;                          // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SearchFor3rdClue_ObjVar;                             // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_SearchFor4thClue_ObjSetVar;                          // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SearchFor4thClue_ObjVar;                             // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_SearchFor5thClue_ObjSetVar;                          // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SearchFor5thClue_ObjVar;                             // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillAnointed_ObjSetVar;                              // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillAnointed_ObjVar;                                 // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TurnInToDean_ObjSetVar;                              // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TurnInToDean_ObjVar;                                 // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_RetrieveClue01_ObjSetVar;                            // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_RetrieveClue01_ObjVar;                               // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillAnointedClue_ObjSetVar;                          // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillAnointedClue_ObjVar;                             // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PickupAnointedClue_ObjSetVar;                        // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PickupAnointedClue_ObjVar;                           // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_KillAnointedDuo_ObjSetVar;                           // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_KillAnointedDuo_ObjVar;                              // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_PickUp2ndClue_ObjSetVar;                             // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_PickUp2ndClue_ObjVar;                                // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_FreeDean_ObjSetVar;                                  // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_FreeDean_ObjVar;                                     // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_OpenCellDoor_ObjSetVar;                              // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_OpenCellDoor_ObjVar;                                 // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_ListenedClue01_ObjVar;                               // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_LIstenedClue02_ObjVar;                               // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_ListenedClue03_ObjVar;                               // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_ListenedClue04_ObjVar;                               // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_ShatterAnointedX2_ObjSetVar;                         // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_ShatterAnointedX2_ObjVar;                            // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_ShatterAnointedX4_ObjSetVar;                         // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_ShatterAnointedX4_ObjVar;                            // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_FindGang_ObjVar;                                     // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
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
		void OnDialogSequenceFinished_17();
		void Set_SearchFor4thClue(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_SearchFor4thClue(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_SearchFor5thClue(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_SearchFor5thClue(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_KillAnointed(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_KillAnointed(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_TurnInToDean(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TurnInToDean(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_TurnInToDean(class UObject* Context);
		void Obj_SearchFor3rdClue(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_SearchFor3rdClue(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_SearchFor2ndClue(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_SearchFor2ndClue(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_RetrieveClue01(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_SearchFor1stClue(class UObject* Context);
		void Obj_RetrieveClue01(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_KillAnointedClue(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_KillAnointedClue(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_PickupAnointedClue(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_PickupAnointedClue(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_SearchFor3rdClue(class UObject* Context);
		void MCE_SearchFor2ndClue(class UObject* Context);
		void SET_KillAnointedDuo(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_KillAnointedDuo(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_PickUp2ndClue(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_PickUp2ndClue(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_KillAnointedDuo(class UObject* Context);
		void MCE_SearchFor5thClue(class UObject* Context);
		void SET_FreeDean(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_FreeDean(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_FreeDean(class UObject* Context);
		void SET_OpenCellDoor(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_OpenCellDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_OpenCellDoor(class UObject* Context);
		void MCE_GoToPrison(class UObject* Context);
		void Obj_GoToPrison(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_SearchFor1stClue(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_ListenedClue01(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ListenedClue01(class UObject* Context);
		void OBJ_ListenedClue02(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ListenedClue02(class UObject* Context);
		void OBJ_ListenedClue03(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ListenedClue03(class UObject* Context);
		void OBJ_ListenedClue04(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ListenedClue04(class UObject* Context);
		void SET_ShatterAnointedX2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_ShatterAnointedX2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ShatterAnointedX2(class UObject* Context);
		void SET_ShatterAnointedX4(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_ShatterAnointedX4(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ShatterAnointedX4(class UObject* Context);
		void MCE_KillAnointedClue(class UObject* Context);
		void OBJ_FindGang(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_FindGang(class UObject* Context);
		void OBJ_FindGang_Objective_PROXY();
		void OBJ_FindGang_Objective_PROXY_1();
		void OBJ_FindGang_Objective_PROXY_2();
		void OBJ_FindGang_Objective_PROXY_3();
		void OBJ_FindGang_Objective_PROXY_4();
		void OBJ_FindGang_Objective_PROXY_5();
		void OBJ_FindGang_Objective_PROXY_6();
		void OBJ_FindGang_Objective_PROXY_7();
		void OBJ_FindGang_Objective_PROXY_8();
		void OBJ_FindGang_Objective_PROXY_9();
		void OBJ_FindGang_Objective_PROXY_10();
		void OBJ_FindGang_Objective_PROXY_11();
		void MCE_KillAnointedAlpha(class UObject* Context);
		void Set_SearchFor1stClue(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_GoToPrison(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void ExecuteUbergraph_Mission_MalevolentPractice(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
