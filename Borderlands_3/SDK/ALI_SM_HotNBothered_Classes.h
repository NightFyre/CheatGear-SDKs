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
	 * BlueprintGeneratedClass ALI_SM_HotNBothered.ALI_SM_HotNBothered_C
	 * Size -> 0x0018 (FullSize[0x0510] - InheritedSize[0x04F8])
	 */
	class UALI_SM_HotNBothered_C : public UOakMission
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04F8(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                SET_TurnHeatOn_ObjSetVar;                                // 0x0500(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TurnHeatOn_ObjVar;                                   // 0x0508(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnDialogSequenceFinished_7();
		void OnDialogSequenceFinished_6();
		void OnDialogSequenceFinished_5();
		void MissionKickoff();
		void Obj_TurnHeatOn(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_TurnedHeatOn(class UObject* Context);
		void SET_TurnHeatOn(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void ExecuteUbergraph_ALI_SM_HotNBothered(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
