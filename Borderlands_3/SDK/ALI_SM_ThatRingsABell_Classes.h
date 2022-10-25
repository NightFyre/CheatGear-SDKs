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
	 * BlueprintGeneratedClass ALI_SM_ThatRingsABell.ALI_SM_ThatRingsABell_C
	 * Size -> 0x0018 (FullSize[0x0510] - InheritedSize[0x04F8])
	 */
	class UALI_SM_ThatRingsABell_C : public UOakMission
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04F8(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                SET_RingABell_ObjSetVar;                                 // 0x0500(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_RingABell_ObjVar;                                    // 0x0508(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnDialogSequenceFinished_5();
		void OnDialogSequenceFinished_4();
		void MCE_RingABell(class UObject* Context);
		void Obj_RingABell(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_RingABell(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MissionKickoff();
		void ExecuteUbergraph_ALI_SM_ThatRingsABell(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
