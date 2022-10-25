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
	 * WidgetBlueprintGeneratedClass WBP_InventoryBar_PrimaryItem.WBP_InventoryBar_PrimaryItem_C
	 * Size -> 0x008F (FullSize[0x0380] - InheritedSize[0x02F1])
	 */
	class UWBP_InventoryBar_PrimaryItem_C : public UWBP_Tab_Master_C
	{
	public:
		unsigned char                                              UnknownData_1FOR[0x7];                                   // 0x02F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02F8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCanvasPanel*                                        CanvasPanel_1;                                           // 0x0300(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBox*                                           CheckBox_Tab;                                            // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_Item;                                              // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_Sling;                                             // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_Entry;                                         // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FName                                                SlingPoint;                                              // 0x0328(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class AGBItem*                                             SlingItem;                                               // 0x0330(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                BackLeftSling;                                           // 0x0338(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                BackRightSling;                                          // 0x0350(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                ChestSling;                                              // 0x0368(0x0018) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		struct FLinearColor Get_Image_Sling_ColorAndOpacity_1();
		ESlateVisibility GetVisibility_1();
		void SetInventorySlotItem(class AGBItem* InItem);
		void BndEvt__CheckBox_Tab_K2Node_ComponentBoundEvent_1034_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void InternalSetSelected(bool IsSelected);
		void Construct();
		void EquipInventorySlotItem(bool bMainhand, bool bImmediate);
		void OnIconLoaded(class UObject* LoadedAsset);
		void ExecuteUbergraph_WBP_InventoryBar_PrimaryItem(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
