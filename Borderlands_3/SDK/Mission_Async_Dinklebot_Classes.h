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
	 * BlueprintGeneratedClass Mission_Async_Dinklebot.Mission_Async_Dinklebot_C
	 * Size -> 0x0018 (FullSize[0x0530] - InheritedSize[0x0518])
	 */
	class UMission_Async_Dinklebot_C : public UOakMissionRareSpawn
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0518(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_KillDinklebot_ObjSetVar;                             // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillDinklebot_ObjVar;                                // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Obj_KillDinklebot(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_KillDinklebot(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_DinklebotKilled(class UObject* Context);
		void ExecuteUbergraph_Mission_Async_Dinklebot(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
