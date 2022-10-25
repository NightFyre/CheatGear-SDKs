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
	 * WidgetBlueprintGeneratedClass BP_InGameMenuOptionRow.BP_InGameMenuOptionRow_C
	 * Size -> 0x00F8 (FullSize[0x0328] - InheritedSize[0x0230])
	 */
	class UBP_InGameMenuOptionRow_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    MouseEnter;                                              // 0x0238(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UTextBlock*                                          SectionText;                                             // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             SelectionBackground;                                     // 0x0248(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                Text;                                                    // 0x0250(0x0018) Edit, BlueprintVisible
		class FScriptMulticastDelegate                             OnPressed;                                               // 0x0268(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnHovered;                                               // 0x0278(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnUnhovered;                                             // 0x0288(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FLinearColor                                        SectionTextShadow;                                       // 0x0298(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                HoverText;                                               // 0x02A8(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		struct FLinearColor                                        SectionTextShadowHover;                                  // 0x02C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bHovered;                                                // 0x02D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AQYC[0x7];                                   // 0x02D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateFontInfo                                      FontInfo;                                                // 0x02D8(0x0050) Edit, BlueprintVisible, HasGetValueTypeHash

	public:
		struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		void Select();
		void SetHovered(bool bSelected);
		struct FEventReply On_SelectionBackground_MouseButtonUp_1(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent);
		struct FEventReply On_SelectionBackground_MouseButtonDown_1(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent);
		struct FSlateBrush Get_SelectionBackground_Background_1();
		struct FLinearColor Get_SectionText_ShadowColorAndOpacity_1();
		struct FSlateColor GetTextColor();
		void PreConstruct(bool IsDesignTime);
		void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void OnMouseLeave(const struct FPointerEvent& MouseEvent);
		void OnFocusLost(const struct FFocusEvent& InFocusEvent);
		void ExecuteUbergraph_BP_InGameMenuOptionRow(int32_t EntryPoint);
		void OnUnhovered__DelegateSignature();
		void OnHovered__DelegateSignature(const class FText& HoverText, class UWidget* Ref);
		void OnPressed__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
