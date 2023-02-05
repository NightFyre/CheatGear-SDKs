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
	 * WidgetBlueprintGeneratedClass WB_ItemTooltipRequirementClass.WB_ItemTooltipRequirementClass_C
	 * Size -> 0x0031 (FullSize[0x0369] - InheritedSize[0x0338])
	 */
	class UWB_ItemTooltipRequirementClass_C : public UWB_ItemTooltipRequirementWidgetBase_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0338(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTextBlock*                                          ClassListText;                                           // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          ColonText;                                               // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          RequirementNameText;                                     // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<struct FPrimaryAssetId>                             RequiredClassList;                                       // 0x0358(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ExposeOnSpawn
		bool                                                       bFulfilled;                                              // 0x0368(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void InitializeList(bool bFulfilled);
		void Construct();
		void OnChangedRequirementStatus(bool bFulfilled);
		void ExecuteUbergraph_WB_ItemTooltipRequirementClass(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
