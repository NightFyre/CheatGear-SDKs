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
	 * WidgetBlueprintGeneratedClass WBP_OptionsMenuItem_Slider.WBP_OptionsMenuItem_Slider_C
	 * Size -> 0x0130 (FullSize[0x0360] - InheritedSize[0x0230])
	 */
	class UWBP_OptionsMenuItem_Slider_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTBSlider*                                           OptionSlider;                                            // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          OptionText;                                              // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          SliderValueText;                                         // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                Text;                                                    // 0x0250(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		class FText                                                TextDescription;                                         // 0x0268(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		float                                                      InitialValue;                                            // 0x0280(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_VGOH[0x4];                                   // 0x0284(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             ValueChanged;                                            // 0x0288(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		float                                                      ValueMin;                                                // 0x0298(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		float                                                      ValueMax;                                                // 0x029C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		float                                                      ValueStepSize;                                           // 0x02A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_UOY3[0x4];                                   // 0x02A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<float, class FText>                                   SpecialValues;                                           // 0x02A8(0x0050) Edit, BlueprintVisible, ExposeOnSpawn
		bool                                                       bStepValuesOnly;                                         // 0x02F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		bool                                                       bMouseUsesStep;                                          // 0x02F9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, ExposeOnSpawn
		bool                                                       bSnapToStepValue;                                        // 0x02FA(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_4VPG[0x1];                                   // 0x02FB(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TextIntegralDigitsMin;                                   // 0x02FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		int32_t                                                    TextIntegralDigitsMax;                                   // 0x0300(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		int32_t                                                    TextFractionalDigitsMin;                                 // 0x0304(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		int32_t                                                    TextFractionalDigitsMax;                                 // 0x0308(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                       bTextUsesGrouping;                                       // 0x030C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		ERoundingMode                                              TextRoundingMode;                                        // 0x030D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_AFPB[0x2];                                   // 0x030E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                TextSuffix;                                              // 0x0310(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		class FText                                                TextPrefix;                                              // 0x0328(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		struct FMargin                                             SliderPadding;                                           // 0x0340(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		struct FMargin                                             OptionTextPadding;                                       // 0x0350(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn

	public:
		void SetValueInternal(float InValue, bool bDirectSet);
		void DoesMouseUseStep(bool* bOutMouseUsesStep);
		void SetMouseUsesStep(bool bInMouseUsesStep);
		void SetValueStepSize(float NewStepSize);
		void SetValueMax(float NewMax);
		void SetValueMin(float NewMin);
		void UpdateSliderText(float NewValue);
		void GetNormalizedValue(float* ValueNormalized);
		void SetNormalizedValue(float InNormValue);
		void SetLocked(bool bInLocked);
		void IsLocked(bool* bOutLocked);
		void SetValue(float InValue);
		void GetValue(float* Value);
		void PreConstruct(bool IsDesignTime);
		void BndEvt__OptionSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value);
		void ExecuteUbergraph_WBP_OptionsMenuItem_Slider(int32_t EntryPoint);
		void ValueChanged__DelegateSignature(float Value);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
