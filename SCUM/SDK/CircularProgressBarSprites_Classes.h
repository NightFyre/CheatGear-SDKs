#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * WidgetBlueprintGeneratedClass CircularProgressBarSprites.CircularProgressBarSprites_C
	 * Size -> 0x010B (FullSize[0x03F0] - InheritedSize[0x02E5])
	 */
	class UCircularProgressBarSprites_C : public UBaseProgressBar_C
	{
	public:
		unsigned char                                              UnknownData_XHUN[0x3];                                   // 0x02E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02E8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    OuterCircleAlarmAnimation;                               // 0x02F0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                              BackgroundGradient;                                      // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              CentralBackgroundDark;                                   // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Fill_Value_BCG;                                          // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Icon;                                                    // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_219;                                               // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ImageSpentFiller;                                        // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              IndicatorOutlinesWhite;                                  // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              OuternWarningIndicator;                                  // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      ProgressTextBox;                                         // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TPercentage;                                             // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TPercentSign;                                            // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TTitle;                                                  // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            CircularMaterial;                                        // 0x0358(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        AlarmColor;                                              // 0x0360(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        normalColor;                                             // 0x0370(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        OuterCircleColor;                                        // 0x0380(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        circularBarColor;                                        // 0x0390(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      _currentPercentageToShow;                                // 0x03A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5XRA[0x4];                                   // 0x03A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          Image;                                                   // 0x03A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ShouldProgressTextBeVisible;                             // 0x03B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VUII[0x3];                                   // 0x03B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        TextColor;                                               // 0x03B4(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      _speedChange;                                            // 0x03C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FSlateColor                                         NewVar_1;                                                // 0x03C8(0x0028) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		class FText GetCurrentPercentageToShowText();
		void GetCurrentPercentageToShow(float* currentPercentageToShow);
		void SetCurrentPercentageToShow(float percentageToShow);
		class FText GetPercentageText();
		void SetTextalarmColorC(class UTextBlock* textWidget);
		void SetTextColor(class UTextBlock* textWidget, const struct FLinearColor& Color);
		void ActivateNormalColor();
		void SetCircularBarColor(const struct FLinearColor& circularBarColor);
		void GetCircularBarColor(struct FLinearColor* circularBarColor);
		void SetOuterCircleColor(const struct FLinearColor& OuterCircleColor);
		void GetOuterCircleColor(struct FLinearColor* OuterCircleColor);
		void GetNormalColor(struct FLinearColor* normalColor);
		void SetNormalColor(const struct FLinearColor& normalColor);
		void GetAlarmColor(struct FLinearColor* AlarmColor);
		void SetAlarmColor(const struct FLinearColor& AlarmColor);
		void ActivateAlarmColor();
		void UpdatePercentageArc();
		void SetImageAlarmColor(class UImage* ImageWidget);
		void OnPercentageChanged();
		void AlarmSwitchOn();
		void AlarmSwitchOff();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void Construct();
		void OnSynchronizeProperties();
		void ExecuteUbergraph_CircularProgressBarSprites(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
