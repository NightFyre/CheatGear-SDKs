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
	 * BlueprintGeneratedClass BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C
	 * Size -> 0x0030 (FullSize[0x0378] - InheritedSize[0x0348])
	 */
	class ABP_Survival_Tutorial_CraftStoneKnifeObjective_C : public ACraftingObjective
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0348(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0350(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class AMissionDialogueManager*                             DialogueManager;                                         // 0x0358(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       _firstTimeOpened;                                        // 0x0360(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KNOG[0x7];                                   // 0x0361(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCraftableItem*                                      CraftableItem;                                           // 0x0368(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UDialogueData*                                       DialogueData;                                            // 0x0370(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UnbindItemClicked(const class FScriptDelegate& Delegate);
		void UnbindTabModeOpened(const class FScriptDelegate& Delegate);
		void GetPrisoner(class APrisoner** AsPrisoner);
		void AddToDialogueQueue(EDialogEvent dialogEvent);
		void OnObjectiveStarted();
		void OnTabModeOpened(ETabMode tabMode);
		void CraftingTabOpened();
		void CraftingItemClicked(class UCraftableItem* CraftableItem);
		void OnObjectiveCompleted();
		void OnObjectiveFailed();
		void OnObjectiveBelated();
		void ExecuteUbergraph_BP_Survival_Tutorial_CraftStoneKnifeObjective(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
