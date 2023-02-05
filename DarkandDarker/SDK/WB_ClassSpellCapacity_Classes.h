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
	 * WidgetBlueprintGeneratedClass WB_ClassSpellCapacity.WB_ClassSpellCapacity_C
	 * Size -> 0x0058 (FullSize[0x0468] - InheritedSize[0x0410])
	 */
	class UWB_ClassSpellCapacity_C : public UClassSpellCapacityWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0410(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USizeBox*                                            CapacitySizeBox;                                         // 0x0418(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UProgressBar*                                        Gauge_Limit;                                             // 0x0420(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USlider*                                             Slider_Limit;                                            // 0x0428(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          SpellCurrentCapacityText;                                // 0x0430(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          SpellMaxCapacityText;                                    // 0x0438(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_CommonInfoBtn_C*                                 WB_CommonInfoBtn;                                        // 0x0440(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		double                                                     SpellCapacityRatio;                                      // 0x0448(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SpellListCount;                                          // 0x0450(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_U15A[0x4];                                   // 0x0454(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSpellData>                                  InSpellDataArray;                                        // 0x0458(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		struct FVector2D GetSpellCapacityImageSize(const struct FVector2D& InVec, int32_t SpellTier, double SpellCapacityToUse);
		void OnMessageReceived_19F7A0BB4FA330B0CBE1ADB130D8E6F2(class UMsgBaseNode* ProxyObject);
		void OnSpellCapacityChanged(float InSpellCurrentCapacity, float InSpellMaxCapacity);
		void OnSpellListChanged(TArray<struct FSpellData> InSpellDataArray);
		void Construct();
		void OnClickedCommonInfoBtn();
		void ExecuteUbergraph_WB_ClassSpellCapacity(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
