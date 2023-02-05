#pragma once

/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
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
	 * BlueprintGeneratedClass BP_ItemRichTextBlockDecorator.BP_ItemRichTextBlockDecorator_C
	 * Size -> 0x0050 (FullSize[0x0088] - InheritedSize[0x0038])
	 */
	class UBP_ItemRichTextBlockDecorator_C : public UItemRichTextBlockDecorator
	{
	public:
		TMap<struct FGameplayTag, struct FSlateColor>              SlateColorMap;                                           // 0x0038(0x0050) Edit, BlueprintVisible

	public:
		struct FTextBlockStyle GetItemTextBlockStyle(const struct FGameplayTag& InRarityType);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
