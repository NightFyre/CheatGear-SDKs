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
	 * WidgetBlueprintGeneratedClass v2_WB_ItemTooltip_Requirement.v2_WB_ItemTooltip_Requirement_C
	 * Size -> 0x004C (FullSize[0x04BC] - InheritedSize[0x0470])
	 */
	class Uv2_WB_ItemTooltip_Requirement_C : public UDCItemTooltipRequirementWidget
	{
	public:
		class UTextBlock*                                          ContentText;                                             // 0x0470(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TitleText;                                               // 0x0478(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FSlateColor                                         Invald;                                                  // 0x0480(0x0014) Edit, BlueprintVisible
		struct FSlateColor                                         ValidTitle;                                              // 0x0494(0x0014) Edit, BlueprintVisible
		struct FSlateColor                                         ValidContent;                                            // 0x04A8(0x0014) Edit, BlueprintVisible

	public:
		struct FSlateColor Get_TitleText_ColorAndOpacity_1();
		struct FSlateColor Get_ContentText_ColorAndOpacity_1();
		class FText GetContentTextText0();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
