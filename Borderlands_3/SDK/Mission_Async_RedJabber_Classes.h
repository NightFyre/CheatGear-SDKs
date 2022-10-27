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
	 * BlueprintGeneratedClass Mission_Async_RedJabber.Mission_Async_RedJabber_C
	 * Size -> 0x0018 (FullSize[0x0530] - InheritedSize[0x0518])
	 */
	class UMission_Async_RedJabber_C : public UOakMissionRareSpawn
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0518(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_KillRedJabber_ObjSetVar;                             // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillRedJabber_ObjVar;                                // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Obj_KillRedJabber(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_KillRedJabber(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_RedJabberKilled(class UObject* Context);
		void ExecuteUbergraph_Mission_Async_RedJabber(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
