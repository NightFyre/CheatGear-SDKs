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
	 * WidgetBlueprintGeneratedClass WBP_Settings_Audio.WBP_Settings_Audio_C
	 * Size -> 0x0234 (FullSize[0x0494] - InheritedSize[0x0260])
	 */
	class UWBP_Settings_Audio_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    Flash;                                                   // 0x0268(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UButton*                                             Button_ApplySettings;                                    // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Button_Default;                                          // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Button_DiscardSettings;                                  // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBox*                                           CheckBox_MicTroubleshooting;                             // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Config_String_C*                                Config_Channels;                                         // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Config_String_C*                                Config_LoopBackVoice;                                    // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Config_String_C*                                Config_Mix;                                              // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Config_String_C*                                Config_ShowRadioIcon;                                    // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Config_String_C*                                Config_ShowVoiceIcon;                                    // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Config_String_C*                                Config_ToggleVoice;                                      // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      HorizontalBox_2;                                         // 0x02C0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      HorizontalBox_88;                                        // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image;                                                   // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_2;                                                 // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_3;                                                 // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_10;                                                // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_153;                                               // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            Overlay;                                                 // 0x02F8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            Overlay_3;                                               // 0x0300(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USlider*                                             Slider_MasterAudio;                                      // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USlider*                                             Slider_Music;                                            // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USlider*                                             Slider_Radio;                                            // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USlider*                                             Slider_SFX;                                              // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USlider*                                             Slider_UnfocusedVolumeMultiplier;                        // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USlider*                                             Slider_Voice;                                            // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Text_VolumeMaster;                                       // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Text_VolumeMusic;                                        // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Text_VolumeRadio;                                        // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Text_VolumeUnfocused;                                    // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_18;                                            // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_20;                                            // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VerticalBox_Settings;                                    // 0x0368(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VerticalBox_Troubleshooting_2;                           // 0x0370(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWebBrowser*                                         WebBrowser_544;                                          // 0x0378(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		float                                                      ConfigValue_Master;                                      // 0x0380(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ConfigValue_Music;                                       // 0x0384(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ConfigValue_SFX;                                         // 0x0388(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ConfigValue_Voice;                                       // 0x038C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     AudioComponent_VolumeTest;                               // 0x0390(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ConfigValue_Radio;                                       // 0x0398(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                MasterAudioVolumeName;                                   // 0x039C(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                MusicAudioVoumeName;                                     // 0x03A4(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                SFXAudioVolumeName;                                      // 0x03AC(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                VoiceAudioVolumeName;                                    // 0x03B4(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                RadioAudioVolumeName;                                    // 0x03BC(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_H0T2[0x4];                                   // 0x03C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              MasterVolumeTestAsset[0x28];                             // 0x03C8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              MusicVolumeTestAsset[0x28];                              // 0x03F0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              SFXVolumeTestAsset[0x28];                                // 0x0418(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              VoiceTestVolumeAsset[0x28];                              // 0x0440(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              RadioTestVolumeAsset[0x28];                              // 0x0468(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		float                                                      ConfigValue_UnfocusedVolumeMultiplier;                   // 0x0490(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		ESlateVisibility GetVisibility_1();
		class UWidget* GetToolTipWidget_1();
		class UWidget* Get_Config_LoopBackVoice_ToolTipWidget_1();
		class UWidget* Get_Config_Mix_ToolTipWidget_1();
		class UWidget* Get_Config_Channels_ToolTipWidget_1();
		class FText GetGetUnfocusedVolumeMultiplierTextValue();
		class FText GetRadioVolumeTextValue();
		class FText Get_Voice_Volume_Text_Value();
		class FText Get_SFX_Volume_Text_Value();
		class FText Get_Music_Volume_Text_Value();
		class FText Get_Master_Volume_Text_Value();
		bool ValuesHaveChanged();
		void Construct();
		void StopTestVolumeSound();
		void StartTestVolumeSound();
		void BndEvt__Slider_Voice_K2Node_ComponentBoundEvent_830_OnMouseCaptureBeginEvent__DelegateSignature();
		void BndEvt__Slider_Voice_K2Node_ComponentBoundEvent_838_OnMouseCaptureEndEvent__DelegateSignature();
		void BndEvt__Slider_Voice_K2Node_ComponentBoundEvent_845_OnFloatValueChangedEvent__DelegateSignature(float Value);
		void BndEvt__Slider_SFX_K2Node_ComponentBoundEvent_854_OnMouseCaptureBeginEvent__DelegateSignature();
		void BndEvt__Slider_SFX_K2Node_ComponentBoundEvent_865_OnMouseCaptureEndEvent__DelegateSignature();
		void BndEvt__Slider_SFX_K2Node_ComponentBoundEvent_875_OnFloatValueChangedEvent__DelegateSignature(float Value);
		void BndEvt__Slider_Music_K2Node_ComponentBoundEvent_884_OnMouseCaptureBeginEvent__DelegateSignature();
		void BndEvt__Slider_Music_K2Node_ComponentBoundEvent_898_OnMouseCaptureEndEvent__DelegateSignature();
		void BndEvt__Slider_Music_K2Node_ComponentBoundEvent_911_OnFloatValueChangedEvent__DelegateSignature(float Value);
		void BndEvt__Slider_MasterAudio_K2Node_ComponentBoundEvent_923_OnMouseCaptureBeginEvent__DelegateSignature();
		void BndEvt__Slider_MasterAudio_K2Node_ComponentBoundEvent_940_OnMouseCaptureEndEvent__DelegateSignature();
		void BndEvt__Slider_MasterAudio_K2Node_ComponentBoundEvent_956_OnFloatValueChangedEvent__DelegateSignature(float Value);
		void BndEvt__Button_ApplySettings_K2Node_ComponentBoundEvent_1439_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__Button_DiscardSettings_K2Node_ComponentBoundEvent_1461_OnButtonClickedEvent__DelegateSignature();
		void SetConfigValues();
		void SetWidgetValuesToConfigValues();
		void SetConfigValuesToWidgetValues();
		void SetAudioAndTestVolumes(const class FName& InName, float InVolume);
		void BndEvt__Slider_Radio_K2Node_ComponentBoundEvent_847_OnMouseCaptureBeginEvent__DelegateSignature();
		void BndEvt__Slider_Radio_K2Node_ComponentBoundEvent_860_OnMouseCaptureEndEvent__DelegateSignature();
		void BndEvt__Slider_Radio_K2Node_ComponentBoundEvent_895_OnFloatValueChangedEvent__DelegateSignature(float Value);
		void OnAudioFinished_Event();
		void BndEvt__Button_Default_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__WBP_Settings_Audio_CheckBox_MicTroubleshooting_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void ExecuteUbergraph_WBP_Settings_Audio(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
