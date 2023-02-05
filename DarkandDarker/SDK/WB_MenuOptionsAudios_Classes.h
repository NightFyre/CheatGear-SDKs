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
	 * WidgetBlueprintGeneratedClass WB_MenuOptionsAudios.WB_MenuOptionsAudios_C
	 * Size -> 0x0048 (FullSize[0x0378] - InheritedSize[0x0330])
	 */
	class UWB_MenuOptionsAudios_C : public UGameMenuOptionsAudioWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0330(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWB_MenuPotionsConfirmBtn_C*                         ApplyButton;                                             // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          AudioOptionDetailDesc;                                   // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          AudioOptionDetailTitle;                                  // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_MenuPotionsConfirmBtn_C*                         ResetButton;                                             // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_MenuOptionSlot_Slider_C*                         TotalVolume;                                             // 0x0358(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWB_MenuOptionSlot_Slider_C*                         EffectVolume;                                            // 0x0360(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWB_MenuOptionSlot_Slider_C*                         MusicVolume;                                             // 0x0368(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWB_MenuOptionToggleSwitchSlot_C*                    BackgroundVolume;                                        // 0x0370(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void onAudioOptionInitialized();
		void OnButtonInitialized();
		void SetActivateSlotHoverDetailText(const class FText& Title, const class FText& Descript);
		void SetActivateSlotHover(class UWidgetSwitcher* ActivateSwitcherSelected);
		void OnInitialized();
		void OnTotalVolumeHovered();
		void OnEffectVolumeHovered();
		void OnMusicVolumeHovered();
		void OnBackgroundVolumeHovered();
		void OnGameUserSettingAudios(const struct FGameUserSettingAudios& NewValue, const struct FGameUserSettingAudios& OldValue);
		void UpdateWindowFocusChanged(bool IsFocus, bool IsBackgroundOption, float TotalVolume);
		void ExecuteUbergraph_WB_MenuOptionsAudios(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
