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
	 * WidgetBlueprintGeneratedClass BP_SaveNewLoadoutPresetButton.BP_SaveNewLoadoutPresetButton_C
	 * Size -> 0x0070 (FullSize[0x02A0] - InheritedSize[0x0230])
	 */
	class UBP_SaveNewLoadoutPresetButton_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              PlusIcon;                                                // 0x0238(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             SaveNewButton;                                           // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             SaveNewButtonBg;                                         // 0x0248(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnNewPresetClicked;                                      // 0x0250(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FLinearColor                                        SelectBgColor;                                           // 0x0260(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        SelectFgColor;                                           // 0x0270(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnNewPresetHovered;                                      // 0x0280(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnNewPresetUnhovered;                                    // 0x0290(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		void BndEvt__SelectButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void OnMouseLeave(const struct FPointerEvent& MouseEvent);
		void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
		void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
		void ExecuteUbergraph_BP_SaveNewLoadoutPresetButton(int32_t EntryPoint);
		void OnNewPresetUnhovered__DelegateSignature();
		void OnNewPresetHovered__DelegateSignature();
		void OnNewPresetClicked__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
