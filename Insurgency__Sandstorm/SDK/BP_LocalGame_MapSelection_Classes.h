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
	 * WidgetBlueprintGeneratedClass BP_LocalGame_MapSelection.BP_LocalGame_MapSelection_C
	 * Size -> 0x0050 (FullSize[0x0280] - InheritedSize[0x0230])
	 */
	class UBP_LocalGame_MapSelection_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_LocalGame_MapButton_C*                           BP_LocalGame_MapButton;                                  // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_LocalGame_MapButton_C*                           BP_LocalGame_MapButton_1;                                // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_LocalGame_MapButton_C*                           BP_LocalGame_MapButton_2;                                // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                          MapList;                                                 // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnMapChosen;                                             // 0x0258(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UBP_LocalGame_MapButton_C*                           ChosenMapButton;                                         // 0x0268(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class FString>                                      MapNames;                                                // 0x0270(0x0010) Edit, BlueprintVisible, HasGetValueTypeHash

	public:
		class UWidget* OnCustomNavigation(class UWidget* Widget, const class FName& Key);
		void PopulateMaps();
		void ChooseMap(class UBP_LocalGame_MapButton_C* NewMapButton);
		void CheckMapAllowed(const class FString& Map, bool* Allowed);
		void GetWidgetToFocus(class UWidget** Widget);
		void Construct();
		void ExecuteUbergraph_BP_LocalGame_MapSelection(int32_t EntryPoint);
		void OnMapChosen__DelegateSignature(const class FString& MapName);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
