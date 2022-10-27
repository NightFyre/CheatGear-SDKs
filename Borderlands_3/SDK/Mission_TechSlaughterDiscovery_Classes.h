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
	 * BlueprintGeneratedClass Mission_TechSlaughterDiscovery.Mission_TechSlaughterDiscovery_C
	 * Size -> 0x0068 (FullSize[0x0578] - InheritedSize[0x0510])
	 */
	class UMission_TechSlaughterDiscovery_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_GoToSanctuary_ObjSetVar;                             // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToSanctuary_ObjVar;                                // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Navigate_TechSlaughter_ObjSetVar;                    // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Navigate_TechSlaughter_ObjVar;                       // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_UseDropPod_OnSanctuary_ObjSetVar;                    // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_UseDropPod_ObjVar;                                   // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_ReNavigate_TechSlaughter_ObjVar;                     // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TechSlaughterTitleCard_ObjSetVar;                    // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlanetTitleCard_ObjVar;                              // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_UseDropPod_OnPlanet_ObjSetVar;                       // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TalkToNPC_ObjSetVar;                                 // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToNPC_ObjVar;                                    // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Set_GoToSanctuary(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GoToSanctuary(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_TechSlaughterTitleCard(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_PlanetTitleCard(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_UseDropPod_OnSanctuary(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_UseDropPod(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_ReNavigate_TechSlaughter(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_ReNavigate_TechSlaughter(class UObject* Context);
		void Set_Navigate_TechSlaughter(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_Navigate_TechSlaughter(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_Navigate_TechSlaughter(class UObject* Context);
		void ADVANCE_Navigate_TechSlaughter(class UObject* Context);
		void AdvanceTo_PlanetTitleCard(class UObject* Context);
		void Set_UseDropPod_OnPlanet(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_UseDropPod_Objective_PROXY();
		void Set_TalkToNPC(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TalkToNPC(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_TalkToNPC(class UObject* Context);
		void Update_GoToSanctuary(class UObject* Context);
		void ExecuteUbergraph_Mission_TechSlaughterDiscovery(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
