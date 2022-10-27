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
	 * WidgetBlueprintGeneratedClass WBP_SwitchScreen_Tab.WBP_SwitchScreen_Tab_C
	 * Size -> 0x00AF (FullSize[0x03A0] - InheritedSize[0x02F1])
	 */
	class UWBP_SwitchScreen_Tab_C : public UWBP_Tab_Master_C
	{
	public:
		unsigned char                                              UnknownData_04D4[0x7];                                   // 0x02F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02F8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCheckBox*                                           CheckBox_Tab;                                            // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_1;                                                 // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_Tab;                                           // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                ScreenName;                                              // 0x0318(0x0018) Edit, BlueprintVisible
		unsigned char                                              Screen[0x28];                                            // 0x0330(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              Icon[0x28];                                              // 0x0358(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class FName                                                WidgetSwitcherName;                                      // 0x0380(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnSelected;                                              // 0x0388(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UClass*                                              ScreenClass;                                             // 0x0398(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		struct FSlateColor Get_Color_and_Opacity();
		struct FLinearColor GetColorAndOpacity_1();
		void OnLoaded_A47AE17D484D464500C86CA4B88BCE06(class UClass* Loaded);
		void OnLoaded_3B85CAF4457E7152C609BAA5141C88D6(class UObject* Loaded);
		void BndEvt__CheckBox_Tab_K2Node_ComponentBoundEvent_1034_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void InternalSetSelected(bool IsSelected);
		void InternalOnSelected();
		void Construct();
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_WBP_SwitchScreen_Tab(int32_t EntryPoint);
		void OnSelected__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
