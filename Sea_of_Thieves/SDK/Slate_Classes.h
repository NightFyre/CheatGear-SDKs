#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * Class Slate.ButtonWidgetStyle
	 * Size -> 0x02A8 (FullSize[0x02D8] - InheritedSize[0x0030])
	 */
	class UButtonWidgetStyle : public USlateWidgetStyleContainerBase
	{
	public:
		struct FButtonStyle                                        ButtonStyle;                                             // 0x0030(0x02A8) Edit, BlueprintVisible

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Slate.CheckBoxWidgetStyle
	 * Size -> 0x05F0 (FullSize[0x0620] - InheritedSize[0x0030])
	 */
	class UCheckBoxWidgetStyle : public USlateWidgetStyleContainerBase
	{
	public:
		struct FCheckBoxStyle                                      CheckBoxStyle;                                           // 0x0030(0x05F0) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Slate.ComboBoxWidgetStyle
	 * Size -> 0x0428 (FullSize[0x0458] - InheritedSize[0x0030])
	 */
	class UComboBoxWidgetStyle : public USlateWidgetStyleContainerBase
	{
	public:
		struct FComboBoxStyle                                      ComboBoxStyle;                                           // 0x0030(0x0428) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Slate.ComboButtonWidgetStyle
	 * Size -> 0x03E0 (FullSize[0x0410] - InheritedSize[0x0030])
	 */
	class UComboButtonWidgetStyle : public USlateWidgetStyleContainerBase
	{
	public:
		struct FComboButtonStyle                                   ComboButtonStyle;                                        // 0x0030(0x03E0) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Slate.EditableTextBoxWidgetStyle
	 * Size -> 0x0860 (FullSize[0x0890] - InheritedSize[0x0030])
	 */
	class UEditableTextBoxWidgetStyle : public USlateWidgetStyleContainerBase
	{
	public:
		struct FEditableTextBoxStyle                               EditableTextBoxStyle;                                    // 0x0030(0x0860) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Slate.EditableTextWidgetStyle
	 * Size -> 0x0228 (FullSize[0x0258] - InheritedSize[0x0030])
	 */
	class UEditableTextWidgetStyle : public USlateWidgetStyleContainerBase
	{
	public:
		struct FEditableTextStyle                                  EditableTextStyle;                                       // 0x0030(0x0228) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Slate.ProgressWidgetStyle
	 * Size -> 0x01B8 (FullSize[0x01E8] - InheritedSize[0x0030])
	 */
	class UProgressWidgetStyle : public USlateWidgetStyleContainerBase
	{
	public:
		struct FProgressBarStyle                                   ProgressBarStyle;                                        // 0x0030(0x01B8) Edit, BlueprintVisible

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Slate.ScrollBarWidgetStyle
	 * Size -> 0x0518 (FullSize[0x0548] - InheritedSize[0x0030])
	 */
	class UScrollBarWidgetStyle : public USlateWidgetStyleContainerBase
	{
	public:
		struct FScrollBarStyle                                     ScrollBarStyle;                                          // 0x0030(0x0518) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Slate.ScrollBoxWidgetStyle
	 * Size -> 0x0248 (FullSize[0x0278] - InheritedSize[0x0030])
	 */
	class UScrollBoxWidgetStyle : public USlateWidgetStyleContainerBase
	{
	public:
		struct FScrollBoxStyle                                     ScrollBoxStyle;                                          // 0x0030(0x0248) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Slate.SpinBoxWidgetStyle
	 * Size -> 0x0318 (FullSize[0x0348] - InheritedSize[0x0030])
	 */
	class USpinBoxWidgetStyle : public USlateWidgetStyleContainerBase
	{
	public:
		struct FSpinBoxStyle                                       SpinBoxStyle;                                            // 0x0030(0x0318) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Slate.TextBlockWidgetStyle
	 * Size -> 0x0160 (FullSize[0x0190] - InheritedSize[0x0030])
	 */
	class UTextBlockWidgetStyle : public USlateWidgetStyleContainerBase
	{
	public:
		struct FTextBlockStyle                                     TextBlockStyle;                                          // 0x0030(0x0160) Edit

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
