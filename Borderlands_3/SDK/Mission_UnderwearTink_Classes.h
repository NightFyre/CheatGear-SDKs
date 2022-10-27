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
	 * BlueprintGeneratedClass Mission_UnderwearTink.Mission_UnderwearTink_C
	 * Size -> 0x0020 (FullSize[0x0530] - InheritedSize[0x0510])
	 */
	class UMission_UnderwearTink_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_UnderTaker_ObjSetVar;                                // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillUndertaker_ObjVar;                               // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   See_UnderwearTink_ObjVar;                                // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnDialogSequenceFinished_3();
		void Obj_KillUndertaker(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_UnderTaker(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_KilledTheUnderTaker(class UObject* Context);
		void MCE_BountyUndertakerSeen(class UObject* Context);
		void See_UnderwearTink(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ExecuteUbergraph_Mission_UnderwearTink(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
