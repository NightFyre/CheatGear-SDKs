#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * WidgetBlueprintGeneratedClass BP_DynamicHint.BP_DynamicHint_C
	 * Size -> 0x0060 (FullSize[0x0388] - InheritedSize[0x0328])
	 */
	class UBP_DynamicHint_C : public UDynamicHintWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0328(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_DynamicHintUseProgress_C*                        BP_DynamicHintUseProgress;                               // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        HintBox;                                                 // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_DynamicHintRow_C*                                PrimaryRow;                                              // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             RowSeperator;                                            // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_DynamicHintRow_C*                                SecondaryRow;                                            // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     Switcher;                                                // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FSlateColor                                         Color;                                                   // 0x0360(0x0028) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void Update_Use_Progress();
		float Get_Dynamic_Hint_Opacity();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void UpdateVisibility();
		void OnFillRowWithInformation(bool IsPrimaryRow, const class FText& AdditionalText, class UTexture2D* HintTexture, const class FName& ActionName, const struct FVector& Location, float Timeout);
		void OnFillRowWithInformationMultipleActions(bool IsPrimaryRow, const class FText& AdditionalText, class UTexture2D* HintTexture, TArray<class FName> ActionNames, const struct FVector& Location, float Timeout);
		void ExecuteUbergraph_BP_DynamicHint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
