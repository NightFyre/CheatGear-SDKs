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
	 * WidgetBlueprintGeneratedClass BP_LocalGame_LightingSelection.BP_LocalGame_LightingSelection_C
	 * Size -> 0x0038 (FullSize[0x0268] - InheritedSize[0x0230])
	 */
	class UBP_LocalGame_LightingSelection_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UScrollBox*                                          List;                                                    // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnLightingChosen;                                        // 0x0240(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UBP_LocalGame_LightingButton_C*                      ChosenLightingButton;                                    // 0x0250(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class FString>                                      LightingNames;                                           // 0x0258(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash

	public:
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		void GetLocalizedLightingName(const class FString& String, class FText* Text);
		void ChooseTimeOfDay(class UBP_LocalGame_LightingButton_C* NewLightingButton);
		void GetWidgetToFocus(class UWidget** Widget);
		void Construct();
		void TimeOfDayChosen(class UBP_LocalGame_LightingButton_C* LightingButton);
		void ExecuteUbergraph_BP_LocalGame_LightingSelection(int32_t EntryPoint);
		void OnLightingChosen__DelegateSignature(const class FString& LightingNameString, const class FText& LightingNameText);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
