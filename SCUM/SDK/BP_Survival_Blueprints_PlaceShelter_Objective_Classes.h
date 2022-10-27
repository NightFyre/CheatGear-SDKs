#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * BlueprintGeneratedClass BP_Survival_Blueprints_PlaceShelter_Objective.BP_Survival_Blueprints_PlaceShelter_Objective_C
	 * Size -> 0x0020 (FullSize[0x0388] - InheritedSize[0x0368])
	 */
	class ABP_Survival_Blueprints_PlaceShelter_Objective_C : public ABlueprintableItemObjective
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0368(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0370(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UDialogueData*                                       DialogueData;                                            // 0x0378(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AMissionDialogueManager*                             DialogueManager;                                         // 0x0380(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetPrisoner(class APrisoner** Prisoner);
		void AddToDialogueQueue(EDialogEvent DialogueEvent);
		void OnObjectiveStarted();
		void OnTabModeOpened(ETabMode tabMode);
		void ExecuteUbergraph_BP_Survival_Blueprints_PlaceShelter_Objective(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
