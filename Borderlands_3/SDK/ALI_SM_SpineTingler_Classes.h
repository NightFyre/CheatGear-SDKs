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
	 * BlueprintGeneratedClass ALI_SM_SpineTingler.ALI_SM_SpineTingler_C
	 * Size -> 0x0078 (FullSize[0x0570] - InheritedSize[0x04F8])
	 */
	class UALI_SM_SpineTingler_C : public UOakMission
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04F8(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                SET_GetTheItch_ObjSetVar;                                // 0x0500(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetTheItch_1_ObjVar;                                 // 0x0508(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetTheItch_2_ObjVar;                                 // 0x0510(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_GetTheItch_2_ObjSetVar;                              // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_GetTheItch_3_ObjSetVar;                              // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetTheItch_3_ObjVar;                                 // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_GetTheItch_4_ObjSetVar;                              // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetTheItch_4_ObjVar;                                 // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_GetTheItch_5_ObjSetVar;                              // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetTheItch_5_ObjVar;                                 // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_GetTheItch_6_ObjSetVar;                              // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetTheItch_6_ObjVar;                                 // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_GetTheItch_7_ObjSetVar;                              // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetTheItch_7_ObjVar;                                 // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnDialogSequenceFinished_17();
		void OnDialogSequenceFinished_16();
		void OnDialogSequenceFinished_15();
		void OnDialogSequenceFinished_14();
		void OnDialogSequenceFinished_13();
		void OnDialogSequenceFinished_12();
		void OnDialogSequenceFinished_11();
		void OnDialogSequenceFinished_10();
		void MCE_GetTheItch_2(class UObject* Context);
		void Obj_GetTheItch_2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_GetTheItch(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MissionKickoff();
		void Obj_GetTheItch_3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_GetTheItch_3(class UObject* Context);
		void Obj_GetTheItch_4(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_GetTheItch_4(class UObject* Context);
		void Obj_GetTheItch_5(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_GetTheItch_5(class UObject* Context);
		void Obj_GetTheItch_6(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_GetTheItch_6(class UObject* Context);
		void Obj_GetTheItch_7(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_GetTheItch_7(class UObject* Context);
		void Obj_GetTheItch_8(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_GetTheItch_8(class UObject* Context);
		void SET_GetTheItch_3(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_GetTheItch_4(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_GetTheItch_5(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_GetTheItch_6(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_GetTheItch_7(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_GetTheItch_8(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void ExecuteUbergraph_ALI_SM_SpineTingler(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
