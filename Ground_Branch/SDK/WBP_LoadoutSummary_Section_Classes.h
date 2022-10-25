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
	 * WidgetBlueprintGeneratedClass WBP_LoadoutSummary_Section.WBP_LoadoutSummary_Section_C
	 * Size -> 0x00B8 (FullSize[0x0318] - InheritedSize[0x0260])
	 */
	class UWBP_LoadoutSummary_Section_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTextBlock*                                          TextBlock_SectionTitle;                                  // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VerticalBox_1;                                           // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                Title;                                                   // 0x0278(0x0018) Edit, BlueprintVisible
		TArray<struct FPrimaryAssetType>                           IncludeItemAssetTypes;                                   // 0x0290(0x0010) Edit, BlueprintVisible
		TArray<struct FPrimaryAssetType>                           IgnoreItemAssetTypes;                                    // 0x02A0(0x0010) Edit, BlueprintVisible
		TArray<class AGBItem*>                                     Items;                                                   // 0x02B0(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		TMap<class UClass*, int32_t>                               ItemClassCountMap;                                       // 0x02C0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		class AGBCharacter*                                        CharacterRef;                                            // 0x0310(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Update();
		void AddItem(class AGBItem* ItemToAdd);
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_WBP_LoadoutSummary_Section(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
