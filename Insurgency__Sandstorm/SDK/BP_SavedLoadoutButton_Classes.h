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
	 * WidgetBlueprintGeneratedClass BP_SavedLoadoutButton.BP_SavedLoadoutButton_C
	 * Size -> 0x0140 (FullSize[0x0370] - InheritedSize[0x0230])
	 */
	class UBP_SavedLoadoutButton_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTextBlock*                                          LoadoutNameText;                                         // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            NotchContainer;                                          // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            NotchContainer_2;                                        // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            NotchContainer_ActivePreset;                             // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             RemoveButton;                                            // 0x0258(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             RemoveButtonBg;                                          // 0x0260(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     RemoveSwitcher;                                          // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             RenameButton;                                            // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     RenameSwitcher;                                          // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             SelectButton;                                            // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             SelectButtonBg;                                          // 0x0288(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Text_SupplyCost;                                         // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              WeaponIcon;                                              // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		int32_t                                                    LoadoutIndex;                                            // 0x02A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_44PL[0x4];                                   // 0x02A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnLoadoutClicked;                                        // 0x02A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnLoadoutRemoved;                                        // 0x02B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bSupportsRemoval;                                        // 0x02C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_K0FK[0x7];                                   // 0x02C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                PresetNameText;                                          // 0x02D0(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		struct FLinearColor                                        SelectBgColor;                                           // 0x02E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        SelectFgColor;                                           // 0x02F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FSavedLoadout                                       SavedLoadout;                                            // 0x0308(0x0028) Edit, BlueprintVisible, ExposeOnSpawn
		bool                                                       bIsCurrentActiveLoadout;                                 // 0x0330(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6JO9[0x7];                                   // 0x0331(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnRenameClicked;                                         // 0x0338(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    SupplyCost;                                              // 0x0348(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsDefault;                                              // 0x034C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		ESlateVisibility                                           RemoveButtonVisibility;                                  // 0x034D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_UK15[0x2];                                   // 0x034E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnHover;                                                 // 0x0350(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnUnHover;                                               // 0x0360(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void CalculateDefaultSupplyCost(class UPlayerClass* PlayerClass, int32_t* SupplyCost);
		void UpdateSupplyCost(int32_t Value);
		void HighlightActive();
		void CalculateTotalSupplyCost(int32_t* SupplyCost);
		struct FLinearColor Get_RemoveButtonBg_BrushColor_1();
		void BndEvt__SelectButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void PreConstruct(bool IsDesignTime);
		void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void OnMouseLeave(const struct FPointerEvent& MouseEvent);
		void OnHovered();
		void OnUnhovered();
		void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
		void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
		void BndEvt__RenameButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__RemoveButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
		void ExecuteUbergraph_BP_SavedLoadoutButton(int32_t EntryPoint);
		void OnUnHover__DelegateSignature();
		void OnHover__DelegateSignature(int32_t NewParam, bool SupportRemoval);
		void OnRenameClicked__DelegateSignature(int32_t OutLoadoutIndex, const struct FSavedLoadout& Loadout);
		void OnLoadoutRemoved__DelegateSignature(int32_t OutLoadoutIndex, const struct FSavedLoadout& Loadout);
		void OnLoadoutClicked__DelegateSignature(int32_t OutLoadoutIndex);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
