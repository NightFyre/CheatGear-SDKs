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
	 * WidgetBlueprintGeneratedClass UI_TooltipOverviewTextElement.UI_TooltipOverviewTextElement_C
	 * Size -> 0x02D0 (FullSize[0x0550] - InheritedSize[0x0280])
	 */
	class UUI_TooltipOverviewTextElement_C : public UItemTooltipPanelElement
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UExtendedRichTextBlock*                              ExtendedRichTextBlock_1;                                 // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                TextFormat;                                              // 0x0290(0x0018) Edit, BlueprintVisible
		struct FTextBlockStyle                                     TextStyle;                                               // 0x02A8(0x0270) Edit, BlueprintVisible
		struct FSlateColor                                         Color;                                                   // 0x0518(0x0028) Edit, BlueprintVisible
		int32_t                                                    MinimumIntegralDigits;                                   // 0x0540(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaximumIntegralDigits;                                   // 0x0544(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MinimumFractionalDigits;                                 // 0x0548(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaximumFractionalDigits;                                 // 0x054C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnTextDataChanged(const class FText& Value);
		void PreConstruct(bool IsDesignTime);
		void OnNumberDataChanged(float Value);
		void ExecuteUbergraph_UI_TooltipOverviewTextElement(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
