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
	 * WidgetBlueprintGeneratedClass BP_TextWithReplaceableText.BP_TextWithReplaceableText_C
	 * Size -> 0x005A (FullSize[0x028A] - InheritedSize[0x0230])
	 */
	class UBP_TextWithReplaceableText_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    NewAnimation;                                            // 0x0238(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_77;                                            // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                InputText;                                               // 0x0248(0x0018) Edit, BlueprintVisible
		class FString                                              Match;                                                   // 0x0260(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class FText                                                ReplacementText;                                         // 0x0270(0x0018) Edit, BlueprintVisible
		ESearchCase                                                SearchCase;                                              // 0x0288(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETextJustify                                               Justification;                                           // 0x0289(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		class FText GetOutputText();
		void UpdateJustification(ETextJustify Justification);
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_BP_TextWithReplaceableText(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
