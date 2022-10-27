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
	 * BlueprintGeneratedClass Mission_Async_RoadDog.Mission_Async_RoadDog_C
	 * Size -> 0x0018 (FullSize[0x0530] - InheritedSize[0x0518])
	 */
	class UMission_Async_RoadDog_C : public UOakMissionRareSpawn
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0518(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_KillRoadDog_ObjSetVar;                               // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillRoadDog_ObjVar;                                  // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Obj_KillRoadDog(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_KillRoadDog(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_RoadDogKilled(class UObject* Context);
		void ExecuteUbergraph_Mission_Async_RoadDog(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
