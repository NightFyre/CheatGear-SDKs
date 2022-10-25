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
	 * WidgetBlueprintGeneratedClass PieProgressBar.PieProgressBar_C
	 * Size -> 0x0073 (FullSize[0x0358] - InheritedSize[0x02E5])
	 */
	class UPieProgressBar_C : public UBaseProgressBar_C
	{
	public:
		unsigned char                                              UnknownData_EJEI[0x3];                                   // 0x02E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02E8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              ImageAttribute_0NoSkill;                                 // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ImageAttribute_1Basic;                                   // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ImageAttribute_2Medium;                                  // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ImageAttribute_3Advanced;                                // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ImageAttribute_4Full;                                    // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FLinearColor                                        AlarmColor;                                              // 0x0318(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        normalColor;                                             // 0x0328(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        OuterCircleColor;                                        // 0x0338(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        circularBarColor;                                        // 0x0348(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void HidePieImages();
		class FText GetPercentageText();
		void SetImageColor(class UImage* Image, const struct FLinearColor& Color);
		void SetTextColor(class UTextBlock* textWidget, const struct FLinearColor& Color);
		void SetCircularBarColor(const struct FLinearColor& circularBarColor);
		void GetCircularBarColor(struct FLinearColor* circularBarColor);
		void SetOuterCircleColor(const struct FLinearColor& OuterCircleColor);
		void GetOuterCircleColor(struct FLinearColor* OuterCircleColor);
		void GetNormalColor(struct FLinearColor* normalColor);
		void SetNormalColor(const struct FLinearColor& normalColor);
		void UpdatePercentageArc();
		void OnPercentageChanged();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void Construct();
		void OnSynchronizeProperties();
		void ExecuteUbergraph_PieProgressBar(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
