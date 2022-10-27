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
	 * BlueprintGeneratedClass Mission_ProvingGroundsDiscovery_Mission06.Mission_ProvingGroundsDiscovery_Mission06_C
	 * Size -> 0x0038 (FullSize[0x0548] - InheritedSize[0x0510])
	 */
	class UMission_ProvingGroundsDiscovery_Mission06_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_UseDropPod_ObjSetVar;                                // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_UseDropPod_ObjVar;                                   // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Navigate_NewPlanet_ObjSetVar;                        // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Navigate_NewPlanet_ObjVar;                           // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReNavigate_NewPlanet_ObjVar;                         // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ArriveAtMap_ObjSetVar;                               // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Update_Navigate_NewPlanet(class UObject* Context);
		void Obj_Navigate_NewPlanet(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_UseDropPod(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_Navigate_NewPlanet(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Advance_Navigate_NewPlanet(class UObject* Context);
		void Obj_ReNavigate_NewPlanet(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void AdvanceTo_ArriveAtMap(class UObject* Context);
		void Set_UseDropPod(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_ArriveAtMap(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_UseDropPod_Objective_PROXY();
		void ExecuteUbergraph_Mission_ProvingGroundsDiscovery_Mission06(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
