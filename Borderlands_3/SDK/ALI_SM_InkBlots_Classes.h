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
	 * BlueprintGeneratedClass ALI_SM_InkBlots.ALI_SM_InkBlots_C
	 * Size -> 0x0060 (FullSize[0x0558] - InheritedSize[0x04F8])
	 */
	class UALI_SM_InkBlots_C : public UOakMission
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04F8(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                SET_ShootOilPipe1_ObjSetVar;                             // 0x0500(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj__ShootOilPipe1_ObjVar;                               // 0x0508(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_ShootOilPipe2_ObjSetVar;                             // 0x0510(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ShootOilPipe2_ObjVar;                                // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_ShootOilPipe3_ObjSetVar;                             // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ShootOilPipe3_ObjVar;                                // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_FindBetterPerspective_ObjSetVar;                     // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindBetterPerspective_ObjVar;                        // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj__INV_ShootOilPipe_ObjVar;                            // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj__INV_ShootOilPipe_3_ObjVar;                          // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj__INV_ShootOilPipe_2_ObjVar;                          // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnDialogSequenceFinished_11();
		void OnDialogSequenceFinished_10();
		void OnDialogSequenceFinished_9();
		void OnDialogSequenceFinished_8();
		void OnDialogSequenceFinished_7();
		void MCE_ShootOilPipe2(class UObject* Context);
		void Obj_ShootOilPipe2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_ShootOilPipe2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_ShootOilPipe3(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ShootOilPipe3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_ShootOilPipe3(class UObject* Context);
		void SET_FindBetterPerspective(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindBetterPerspective(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_FindBetterPerspective(class UObject* Context);
		void MCE_ShootOilPipe1(class UObject* Context);
		void Obj__ShootOilPipe1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_ShootOilPipe1(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MissionKickoff();
		void Obj__INV_ShootOilPipe(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_ShootOilPipe(class UObject* Context);
		void Obj__INV_ShootOilPipe_3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_ShootOilPipe_3(class UObject* Context);
		void Obj__INV_ShootOilPipe_4(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_INV_ShootOilPipe_4(class UObject* Context);
		void ExecuteUbergraph_ALI_SM_InkBlots(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
