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
	 * WidgetBlueprintGeneratedClass BP_LocalGame_LightingButton.BP_LocalGame_LightingButton_C
	 * Size -> 0x0084 (FullSize[0x02B4] - InheritedSize[0x0230])
	 */
	class UBP_LocalGame_LightingButton_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UButton*                                             LightingButton;                                          // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          LightingText;                                            // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             MapButtonBg;                                             // 0x0248(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             SelectedNotch;                                           // 0x0250(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnLightingChosen;                                        // 0x0258(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FString                                              LightingName;                                            // 0x0268(0x0010) Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash
		class FText                                                LocalizedLightingName;                                   // 0x0278(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		bool                                                       LightingChosen;                                          // 0x0290(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bHovered;                                                // 0x0291(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		ESlateVisibility                                           ChosenNotchVisibility;                                   // 0x0292(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5U4I[0x1];                                   // 0x0293(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        CurrentBackgroundColor;                                  // 0x0294(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        CurrentForegroundColor;                                  // 0x02A4(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		void SetChosen(bool IsChosen);
		void Construct();
		void BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
		void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
		void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
		void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void OnMouseLeave(const struct FPointerEvent& MouseEvent);
		void ExecuteUbergraph_BP_LocalGame_LightingButton(int32_t EntryPoint);
		void OnLightingChosen__DelegateSignature(class UBP_LocalGame_LightingButton_C* LightingButton);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
