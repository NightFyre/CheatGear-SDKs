#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * Class TinkerUI.TBButton
	 * Size -> 0x0038 (FullSize[0x0460] - InheritedSize[0x0428])
	 */
	class UTBButton : public UButton
	{
	public:
		class FScriptMulticastDelegate                             OnDoubleClicked;                                         // 0x0428(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AXPB[0x10];                                  // 0x0438(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              UnknownData_1IS5 : 2;                                    // 0x0448(0x0001) BIT_FIELD (PADDING)
		unsigned char                                              bStopDoubleClickPropagation : 1;                         // 0x0448(0x0001) BIT_FIELD Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_20FV[0x17];                                  // 0x0449(0x0017) MISSED OFFSET (PADDING)

	public:
		void StopDoubleClickPropagation();
		void SetIsInteractionEnabled(bool bInIsInteractionEnabled);
		void SetIsFocusable(bool bInIsFocusable);
		bool IsInteractionEnabled();
		bool GetIsFocusable();
		static UClass* StaticClass();
	};

	/**
	 * Class TinkerUI.TBListView
	 * Size -> 0x0010 (FullSize[0x0378] - InheritedSize[0x0368])
	 */
	class UTBListView : public UListView
	{
	public:
		class FScriptMulticastDelegate                             BP_OnPreviewItemCreated;                                 // 0x0368(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TinkerUI.TBSlider
	 * Size -> 0x0010 (FullSize[0x0508] - InheritedSize[0x04F8])
	 */
	class UTBSlider : public USlider
	{
	public:
		struct FLinearColor                                        SliderFgBarColor;                                        // 0x04F8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void SetSliderFgBarColor(const struct FLinearColor& InValue);
		void SetMouseUsesStep(bool bInValue);
		static UClass* StaticClass();
	};

	/**
	 * Class TinkerUI.TBSliderWidgetStyle
	 * Size -> 0x0340 (FullSize[0x0370] - InheritedSize[0x0030])
	 */
	class UTBSliderWidgetStyle : public USlateWidgetStyleContainerBase
	{
	public:
		struct FSliderStyle                                        SliderStyle;                                             // 0x0030(0x0340) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
