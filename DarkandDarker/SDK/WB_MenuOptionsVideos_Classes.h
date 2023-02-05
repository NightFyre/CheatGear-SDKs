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
	 * WidgetBlueprintGeneratedClass WB_MenuOptionsVideos.WB_MenuOptionsVideos_C
	 * Size -> 0x00B0 (FullSize[0x03F8] - InheritedSize[0x0348])
	 */
	class UWB_MenuOptionsVideos_C : public UGameMenuOptionsVideoWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0348(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWB_MenuPotionsConfirmBtn_C*                         ApplyButton;                                             // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_MenuPotionsConfirmBtn_C*                         ResetButton;                                             // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          VideoOptionDetailDesc;                                   // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          VideoOptionDetailTitle;                                  // 0x0368(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_VideoOptionSlot_C*                               AntiAliasingSlot;                                        // 0x0370(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWB_VideoOptionSlot_C*                               EffectsSlot;                                             // 0x0378(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWB_VideoOptionSlot_C*                               PostProcessSlot;                                         // 0x0380(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWB_VideoOptionSlot_C*                               ShadowSlot;                                              // 0x0388(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWB_VideoOptionSlot_C*                               TextureSlot;                                             // 0x0390(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWB_MenuOptionSlot_ComboBox_C*                       DisplayMode;                                             // 0x0398(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWB_MenuOptionSlot_ComboBox_C*                       DisplayResolusion;                                       // 0x03A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWB_MenuOptionSlot_Slider_C*                         MaxFrameRateLimit;                                       // 0x03A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWB_MenuOptionToggleSwitchSlot_C*                    FrameRateOption;                                         // 0x03B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWB_MenuOptionPopup_C*                               DisplayPopup;                                            // 0x03B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    RemainTime;                                              // 0x03C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_C8G8[0x4];                                   // 0x03C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        PopupTimerHandle;                                        // 0x03C8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UWB_MenuOptionSlot_Slider_C*                         Brightness;                                              // 0x03D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWB_VideoOptionSlot_C*                               ResolutionQuality;                                       // 0x03D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UWidgetSwitcher*>                             HoveredList;                                             // 0x03E0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class UWB_MenuOptionSlot_Slider_C*                         RenderScale;                                             // 0x03F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetPopupText(int32_t RemainTime);
		void SetActivateHover(class UWidgetSwitcher* ActivateHoveer, const class FText& Title, const class FText& DetailDesc);
		void OnDisplayOptionInitialized();
		void OnQualityLevelInitialized();
		void OnApplyResetButtionInitialized();
		void OnMessageReceived_E792FD8C4A9CB0949DDA36A51D3D5965(class UMsgBaseNode* ProxyObject);
		void OnInitialized();
		void OnAntiAliasingHovered();
		void OnEffectHovered();
		void OnTextureHovered();
		void OnShadowHovered();
		void OnPostProcessHovered();
		void OnDisplayModeHovered();
		void OnDisplayResolusionHovered();
		void OnFrameRateLimitHovered();
		void OnDisplayModeSelected(int32_t SelIndex);
		void OnDisplayOptionChangePopup();
		void OnBrighthnessHovered();
		void OnChangeGammaValue(float SliderValue);
		void EventFMsgWidgetOptionVideoDisplayApplyedNotify(const struct FMsgWidgetOptionVideoDisplayApplyedNotify& Msg);
		void OnRenderScaleHovered();
		void ExecuteUbergraph_WB_MenuOptionsVideos(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
