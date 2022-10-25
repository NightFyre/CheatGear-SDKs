#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * WidgetBlueprintGeneratedClass WBP_Tab_Master.WBP_Tab_Master_C
	 * Size -> 0x0091 (FullSize[0x02F1] - InheritedSize[0x0260])
	 */
	class UWBP_Tab_Master_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FSlateColor                                         DefaultFontColour;                                       // 0x0268(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         SelectedFontColour;                                      // 0x0290(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FLinearColor                                        DefaultFontShadowColour;                                 // 0x02B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        SelectedFontShadowColour;                                // 0x02C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       AlwaysCallOnSelected;                                    // 0x02D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9158[0x7];                                   // 0x02D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      ValidTabClasses;                                         // 0x02E0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       IsChecked;                                               // 0x02F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void IsValidClass(class UWidget* ChildWidget, bool* IsValid);
		struct FLinearColor GetTabTextFontShadowColour();
		struct FSlateColor GetTabTextFontColour();
		void SetSelected(bool IsSelected);
		void InternalOnSelected();
		void InternalStateChanged(bool IsChecked);
		void InternalSetSelected(bool IsSelected);
		void SetInitiallySelected(float SelectionDelay);
		void ExecuteUbergraph_WBP_Tab_Master(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
