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
	 * BlueprintGeneratedClass Mission_Async_BormanNates.Mission_Async_BormanNates_C
	 * Size -> 0x0018 (FullSize[0x0530] - InheritedSize[0x0518])
	 */
	class UMission_Async_BormanNates_C : public UOakMissionRareSpawn
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0518(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_KillBormanNates_ObjSetVar;                           // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillBormanNates_ObjVar;                              // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Obj_KillBormanNates(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_KillBormanNates(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_BormanNatesKilled(class UObject* Context);
		void ExecuteUbergraph_Mission_Async_BormanNates(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
