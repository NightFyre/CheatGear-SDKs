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
	 * BlueprintGeneratedClass Mission_Takedown2_Intro.Mission_Takedown2_Intro_C
	 * Size -> 0x0050 (FullSize[0x0560] - InheritedSize[0x0510])
	 */
	class UMission_Takedown2_Intro_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_Navigate_TakedownTwoPlanet_ObjSetVar;                // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Navigate_TakedownTwoPlanet_ObjVar;                   // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_UseDropPod_ObjSetVar;                                // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReNavigate_Takedown2Planet_ObjVar;                   // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_UseDropPod_ObjVar;                                   // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PlanetTitleCard_ObjSetVar;                           // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TITLECARD_TAKEDOWNTWOPLANET_ObjVar;                  // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_MissionEnd_ObjSetVar;                                // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MissionEnd_ObjVar;                                   // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnDialogSequenceFinished_3();
		void Set_Navigate_TakedownTwoPlanet(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_Navigate_TakedownTwoPlanet(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_Navigate_Takedown2Planet(class UObject* Context);
		void ADVANCE_Navigate_Takedown2Planet(class UObject* Context);
		void Set_UseDropPod(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_PlanetTitleCard(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_MissionEnd(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ReNavigate_Takedown2Planet(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_ReNavigate_Takedown2Planet(class UObject* Context);
		void Obj_UseDropPod(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_TITLECARD_TAKEDOWNTWOPLANET(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_MissionEnd(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MissionKickoff();
		void AdvanceTo_PlanetTitleCard(class UObject* Context);
		void ExecuteUbergraph_Mission_Takedown2_Intro(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
