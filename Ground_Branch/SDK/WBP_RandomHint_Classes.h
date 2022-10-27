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
	 * WidgetBlueprintGeneratedClass WBP_RandomHint.WBP_RandomHint_C
	 * Size -> 0x0050 (FullSize[0x02B0] - InheritedSize[0x0260])
	 */
	class UWBP_RandomHint_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTextBlock*                                          TextBlock_RandomLine1;                                   // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_RandomLine2;                                   // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<class FText>                                        RandomHints;                                             // 0x0278(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                RandomHint;                                              // 0x0288(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<int32_t>                                            UsedRandomHints;                                         // 0x02A0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void SaveUsedHint();
		void LoadUsedHints();
		void UseHint(class FText* Output);
		void Setup();
		void CycleThroughHints(int32_t Start, int32_t End);
		void UpdateText(const class FText& InText);
		void ExecuteUbergraph_WBP_RandomHint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
