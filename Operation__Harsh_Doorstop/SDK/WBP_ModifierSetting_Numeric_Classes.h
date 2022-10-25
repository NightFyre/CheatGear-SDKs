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
	 * WidgetBlueprintGeneratedClass WBP_ModifierSetting_Numeric.WBP_ModifierSetting_Numeric_C
	 * Size -> 0x0130 (FullSize[0x0360] - InheritedSize[0x0230])
	 */
	class UWBP_ModifierSetting_Numeric_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWBP_ModifierSettingBox_C*                           ModifierSetting;                                         // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          NumericHintText;                                         // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USpinBox*                                            NumericSpinBox;                                          // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                SettingText;                                             // 0x0250(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		TMap<float, class FText>                                   MagicValues;                                             // 0x0268(0x0050) Edit, BlueprintVisible, ExposeOnSpawn
		class FText                                                MagicValueText;                                          // 0x02B8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      ValueInitial;                                            // 0x02D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		struct FFNumericModifierValueBound                         ValueMinInitial;                                         // 0x02D4(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		struct FFNumericModifierValueBound                         ValueMaxInitial;                                         // 0x02DC(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_YMI4[0x4];                                   // 0x02E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateColor                                         VisibleSpinBoxForegroundColor;                           // 0x02E8(0x0028) Edit, BlueprintVisible, ExposeOnSpawn
		int32_t                                                    MinFractionalDigitsInitial;                              // 0x0310(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		int32_t                                                    MaxFractionalDigitsInitial;                              // 0x0314(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		struct FSlateColor                                         HiddenSpinBoxForegroundColor;                            // 0x0318(0x0028) Edit, BlueprintVisible, ExposeOnSpawn
		class FScriptMulticastDelegate                             OnValueChanged;                                          // 0x0340(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnValueCommitted;                                        // 0x0350(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void UpdateMagicValueState();
		void GetValue(float* Value);
		void SetValue(float InValue);
		void GetMagicValueText(class FText* MagicValueText);
		void SetMagicValueText(const class FText& InMagicValueText);
		void GetSettingText(class FText* SettingText);
		void SetSettingText(const class FText& InSettingText);
		void PreConstruct(bool IsDesignTime);
		void BndEvt__NumericSpinBox_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
		void BndEvt__NumericSpinBox_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod);
		void ExecuteUbergraph_WBP_ModifierSetting_Numeric(int32_t EntryPoint);
		void OnValueCommitted__DelegateSignature(float InValue, ETextCommit CommitMethod);
		void OnValueChanged__DelegateSignature(float InValue);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
