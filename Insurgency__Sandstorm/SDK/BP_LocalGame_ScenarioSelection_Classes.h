#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * WidgetBlueprintGeneratedClass BP_LocalGame_ScenarioSelection.BP_LocalGame_ScenarioSelection_C
	 * Size -> 0x0050 (FullSize[0x0280] - InheritedSize[0x0230])
	 */
	class UBP_LocalGame_ScenarioSelection_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_LocalGame_ScenarioButton_C*                      BP_LocalGame_ScenarioButton;                             // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_LocalGame_ScenarioButton_C*                      BP_LocalGame_ScenarioButton_1;                           // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_LocalGame_ScenarioButton_C*                      BP_LocalGame_ScenarioButton_2;                           // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                          ScenarioList;                                            // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnScenarioChosen;                                        // 0x0258(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FString                                              MapName;                                                 // 0x0268(0x0010) Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash
		class UBP_LocalGame_ScenarioButton_C*                      ChosenScenarioButton;                                    // 0x0278(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		void GetScenarioPrintText(const class FText& GameModeNameText, const class FText& ScenarioText, class FText* ScenarioPrintText);
		void ChooseScenario(class UBP_LocalGame_ScenarioButton_C* ScenarioButton);
		void Should_Display_Scenario(const class FString& ScenarioName, bool* Display);
		void Construct();
		void ScenarioChosen(class UBP_LocalGame_ScenarioButton_C* ScenarioButton);
		void OnRefreshScenarios();
		void ExecuteUbergraph_BP_LocalGame_ScenarioSelection(int32_t EntryPoint);
		void OnScenarioChosen__DelegateSignature(const class FString& ScenarioName, const class FString& GameModeName, const class FText& ScenarioPrintText);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
