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
	 * Class UMGExtensions.ComboBoxText
	 * Size -> 0x0CF8 (FullSize[0x0E00] - InheritedSize[0x0108])
	 */
	class UComboBoxText : public UWidget
	{
	public:
		TArray<class FText>                                        DefaultOptions;                                          // 0x0108(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FText                                                SelectedOption;                                          // 0x0118(0x0018) Edit, NativeAccessSpecifierPrivate
		struct FComboBoxStyle                                      WidgetStyle;                                             // 0x0130(0x03F0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FTableRowStyle                                      ItemStyle;                                               // 0x0520(0x07C8) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FMargin                                             ContentPadding;                                          // 0x0CE8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      MaxListHeight;                                           // 0x0CF8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HasDownArrow;                                            // 0x0CFC(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EnableGamepadNavigationMode;                             // 0x0CFD(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C67V[0x2];                                   // 0x0CFE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateFontInfo                                      Font;                                                    // 0x0D00(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSlateColor                                         ForegroundColor;                                         // 0x0D50(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		bool                                                       bIsFocusable;                                            // 0x0D78(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D3JZ[0x3];                                   // 0x0D79(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      OnGenerateWidgetEvent;                                   // 0x0D7C(0x0010) Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BKDA[0x4];                                   // 0x0D8C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnSelectionChanged;                                      // 0x0D90(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnOpening;                                               // 0x0DA0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TRK7[0x50];                                  // 0x0DB0(0x0050) MISSED OFFSET (PADDING)

	public:
		void SetSelectedOption(const class FText& Option);
		void SetSelectedIndex(int32_t Index);
		bool RemoveOption(const class FText& Option);
		void RefreshOptions();
		void OnSelectionChangedEvent__DelegateSignature(const class FText& SelectedItem, ESelectInfo SelectionType);
		void OnOpeningEvent__DelegateSignature();
		class FText GetSelectedOption();
		int32_t GetSelectedIndex();
		int32_t GetOptionCount();
		class FText GetOptionAtIndex(int32_t Index);
		int32_t FindOptionIndex(const class FText& Option);
		void ClearSelection();
		void ClearOptions();
		void AddOption(const class FText& Option);
		static UClass* StaticClass();
	};

	/**
	 * Class UMGExtensions.NWIUMGStatics
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNWIUMGStatics : public UBlueprintFunctionLibrary
	{
	public:
		TArray<class UWidget*> STATIC_GetAllChildrenRecursive(class UPanelWidget* Panel);
		static UClass* StaticClass();
	};

	/**
	 * Class UMGExtensions.SaberInvalidationBox
	 * Size -> 0x0018 (FullSize[0x0138] - InheritedSize[0x0120])
	 */
	class USaberInvalidationBox : public UContentWidget
	{
	public:
		bool                                                       bCanCache;                                               // 0x0120(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       CacheRelativeTransforms;                                 // 0x0121(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_X629[0x16];                                  // 0x0122(0x0016) MISSED OFFSET (PADDING)

	public:
		void SetCanCache(bool CanCache);
		void InvalidateCache();
		bool GetCanCache();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
