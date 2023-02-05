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
	 * WidgetBlueprintGeneratedClass WB_MenuOptionToggleSwitchSlot.WB_MenuOptionToggleSwitchSlot_C
	 * Size -> 0x0028 (FullSize[0x0338] - InheritedSize[0x0310])
	 */
	class UWB_MenuOptionToggleSwitchSlot_C : public UGameMenuOptionToggleSwitchWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0310(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UButton*                                             Btn_Hovering;                                            // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     Switcher_Selected;                                       // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_OptionCheckButton01_C*                           WB_OptionCheckButton_Off;                                // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_OptionCheckButton01_C*                           WB_OptionCheckButton_On;                                 // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void SetButtomText();
		void ChangeButtonActivated(class UWB_OptionCheckButton01_C* ActivateButton, class UWB_OptionCheckButton01_C* DeactivateButton);
		void SetOptionButtonTile(class UWB_OptionCheckButton01_C* OptionButton, const class FText& InTitle);
		void OnInitialized();
		void OnToggleSwitch(bool InSwitch);
		void UpdateButtonText(const class FText& LeftText, const class FText& RightText);
		void ExecuteUbergraph_WB_MenuOptionToggleSwitchSlot(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
