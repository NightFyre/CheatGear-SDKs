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
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct WidgetCarousel.WidgetCarouselNavigationButtonStyle
	 * Size -> 0x0598 (FullSize[0x05A0] - InheritedSize[0x0008])
	 */
	struct FWidgetCarouselNavigationButtonStyle : public FSlateWidgetStyle
	{
	public:
		unsigned char                                              UnknownData_GU4E[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FButtonStyle                                        InnerButtonStyle;                                        // 0x0010(0x03F0) NativeAccessSpecifierPublic
		struct FSlateBrush                                         NavigationButtonLeftImage;                               // 0x0400(0x00D0) NativeAccessSpecifierPublic
		struct FSlateBrush                                         NavigationButtonRightImage;                              // 0x04D0(0x00D0) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WidgetCarousel.WidgetCarouselNavigationBarStyle
	 * Size -> 0x0CA8 (FullSize[0x0CB0] - InheritedSize[0x0008])
	 */
	struct FWidgetCarouselNavigationBarStyle : public FSlateWidgetStyle
	{
	public:
		unsigned char                                              UnknownData_5DQP[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         HighlightBrush;                                          // 0x0010(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FButtonStyle                                        LeftButtonStyle;                                         // 0x00E0(0x03F0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FButtonStyle                                        CenterButtonStyle;                                       // 0x04D0(0x03F0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FButtonStyle                                        RightButtonStyle;                                        // 0x08C0(0x03F0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
