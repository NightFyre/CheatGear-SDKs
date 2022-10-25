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
	 * WidgetBlueprintGeneratedClass BP_KitSelect_WeaponButtonEmpty.BP_KitSelect_WeaponButtonEmpty_C
	 * Size -> 0x0059 (FullSize[0x0289] - InheritedSize[0x0230])
	 */
	class UBP_KitSelect_WeaponButtonEmpty_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBorder*                                             Background;                                              // 0x0238(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Button_1;                                                // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             LeftSelectHighlight;                                     // 0x0248(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          LeftTextWidget;                                          // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       bSelected;                                               // 0x0258(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_M76P[0x7];                                   // 0x0259(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                WeaponName;                                              // 0x0260(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		class FScriptMulticastDelegate                             OnWeaponClicked;                                         // 0x0278(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bHovered;                                                // 0x0288(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		class FText Get_LeftTextWidget_Text_1();
		struct FSlateColor GetButtonFg_ColorAndOpacity();
		void GetColor(bool Foreground, struct FLinearColor* Color);
		ESlateVisibility Get_LeftSelectHighlight_Visibility_1();
		struct FSlateColor Get_ButtonBg_ColorAndOpacity();
		void PreConstruct(bool IsDesignTime);
		void BndEvt__Button_0_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature();
		void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
		void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
		void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void OnMouseLeave(const struct FPointerEvent& MouseEvent);
		void ExecuteUbergraph_BP_KitSelect_WeaponButtonEmpty(int32_t EntryPoint);
		void OnWeaponClicked__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
