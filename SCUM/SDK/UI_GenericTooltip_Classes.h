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
	 * WidgetBlueprintGeneratedClass UI_GenericTooltip.UI_GenericTooltip_C
	 * Size -> 0x02D0 (FullSize[0x0530] - InheritedSize[0x0260])
	 */
	class UUI_GenericTooltip_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              BackgroundImage;                                         // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UExtendedRichTextBlock*                              DescriptionText;                                         // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_Border_C*                                        UI_Border_23;                                            // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                TextFormat;                                              // 0x0280(0x0018) Edit, BlueprintVisible
		struct FSlateColor                                         Color;                                                   // 0x0298(0x0028) Edit, BlueprintVisible
		struct FTextBlockStyle                                     TextStyle;                                               // 0x02C0(0x0270) Edit, BlueprintVisible

	public:
		void SetText(const class FText& Text);
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_UI_GenericTooltip(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
