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
	 * BlueprintGeneratedClass Mission_Async_CaptainThunkAndSloth.Mission_Async_CaptainThunkAndSloth_C
	 * Size -> 0x0018 (FullSize[0x0530] - InheritedSize[0x0518])
	 */
	class UMission_Async_CaptainThunkAndSloth_C : public UOakMissionRareSpawn
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0518(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_KillCaptainThunkAndSloth_ObjSetVar;                  // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillCaptainThunkAndSloth_ObjVar;                     // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Obj_KillCaptainThunkAndSloth(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_KillCaptainThunkAndSloth(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_CaptainThunkAndSlothKilled(class UObject* Context);
		void ExecuteUbergraph_Mission_Async_CaptainThunkAndSloth(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
