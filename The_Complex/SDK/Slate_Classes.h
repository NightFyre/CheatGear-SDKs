#pragma once

/**
 * Name: The_Complex
 * Version: 9349459
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
	 * Size -> 0x03F0 (FullSize[0x0420] - InheritedSize[0x0030])
	 */
	class UButtonWidgetStyle : public USlateWidgetStyleContainerBase
	{
	public:
		struct FButtonStyle                                        ButtonStyle;                                             // 0x0030(0x03F0) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Slate.CheckBoxWidgetStyle
	 * Size -> 0x0AD0 (FullSize[0x0B00] - InheritedSize[0x0030])
	 */
	class UCheckBoxWidgetStyle : public USlateWidgetStyleContainerBase
	{
	public:
		struct FCheckBoxStyle                                      CheckBoxStyle;                                           // 0x0030(0x0AD0) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Slate.ComboBoxWidgetStyle
	 * Size -> 0x0660 (FullSize[0x0690] - InheritedSize[0x0030])
	 */
	class UComboBoxWidgetStyle : public USlateWidgetStyleContainerBase
	{
	public:
		struct FComboBoxStyle                                      ComboBoxStyle;                                           // 0x0030(0x0660) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Slate.ComboButtonWidgetStyle
	 * Size -> 0x0600 (FullSize[0x0630] - InheritedSize[0x0030])
	 */
	class UComboButtonWidgetStyle : public USlateWidgetStyleContainerBase
	{
	public:
		struct FComboButtonStyle                                   ComboButtonStyle;                                        // 0x0030(0x0600) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Slate.EditableTextBoxWidgetStyle
	 * Size -> 0x0BA0 (FullSize[0x0BD0] - InheritedSize[0x0030])
	 */
	class UEditableTextBoxWidgetStyle : public USlateWidgetStyleContainerBase
	{
	public:
		struct FEditableTextBoxStyle                               EditableTextBoxStyle;                                    // 0x0030(0x0BA0) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Slate.EditableTextWidgetStyle
	 * Size -> 0x02F0 (FullSize[0x0320] - InheritedSize[0x0030])
	 */
	class UEditableTextWidgetStyle : public USlateWidgetStyleContainerBase
	{
	public:
		struct FEditableTextStyle                                  EditableTextStyle;                                       // 0x0030(0x02F0) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Slate.ProgressWidgetStyle
	 * Size -> 0x0290 (FullSize[0x02C0] - InheritedSize[0x0030])
	 */
	class UProgressWidgetStyle : public USlateWidgetStyleContainerBase
	{
	public:
		struct FProgressBarStyle                                   ProgressBarStyle;                                        // 0x0030(0x0290) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Slate.ScrollBarWidgetStyle
	 * Size -> 0x0770 (FullSize[0x07A0] - InheritedSize[0x0030])
	 */
	class UScrollBarWidgetStyle : public USlateWidgetStyleContainerBase
	{
	public:
		struct FScrollBarStyle                                     ScrollBarStyle;                                          // 0x0030(0x0770) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Slate.ScrollBoxWidgetStyle
	 * Size -> 0x0350 (FullSize[0x0380] - InheritedSize[0x0030])
	 */
	class UScrollBoxWidgetStyle : public USlateWidgetStyleContainerBase
	{
	public:
		struct FScrollBoxStyle                                     ScrollBoxStyle;                                          // 0x0030(0x0350) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Slate.SlateSettings
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class USlateSettings : public UObject
	{
	public:
		bool                                                       bExplicitCanvasChildZOrder;                              // 0x0028(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_95ET[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Slate.SpinBoxWidgetStyle
	 * Size -> 0x0600 (FullSize[0x0630] - InheritedSize[0x0030])
	 */
	class USpinBoxWidgetStyle : public USlateWidgetStyleContainerBase
	{
	public:
		struct FSpinBoxStyle                                       SpinBoxStyle;                                            // 0x0030(0x0600) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Slate.TextBlockWidgetStyle
	 * Size -> 0x0340 (FullSize[0x0370] - InheritedSize[0x0030])
	 */
	class UTextBlockWidgetStyle : public USlateWidgetStyleContainerBase
	{
	public:
		struct FTextBlockStyle                                     TextBlockStyle;                                          // 0x0030(0x0340) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Slate.ToolMenuBase
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UToolMenuBase : public UObject
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
