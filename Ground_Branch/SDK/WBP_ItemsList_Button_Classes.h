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
	 * WidgetBlueprintGeneratedClass WBP_ItemsList_Button.WBP_ItemsList_Button_C
	 * Size -> 0x0190 (FullSize[0x03F0] - InheritedSize[0x0260])
	 */
	class UWBP_ItemsList_Button_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UButton*                                             Button_Item;                                             // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_48;                                                // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_ItemTitle;                                     // 0x0278(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VerticalBox_Items;                                       // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FName                                                DragDropOperationType;                                   // 0x0288(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class FText                                                Text;                                                    // 0x0290(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		TArray<struct FPrimaryAssetId>                             ItemAssetIdList;                                         // 0x02A8(0x0010) Edit, BlueprintVisible, ExposeOnSpawn
		class AGBItem*                                             RootItem;                                                // 0x02B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class UCanvasPanel*                                        FloatingCanvas;                                          // 0x02C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                       bDoNotSort;                                              // 0x02C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		bool                                                       bListOpen;                                               // 0x02C9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SG6A[0x6];                                   // 0x02CA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         OpenBrush;                                               // 0x02D0(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         ClosedBrush;                                             // 0x0358(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FItemDragDropType>                           ItemDragDropOperations;                                  // 0x03E0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		struct FSlateBrush Get_Image_47_Brush_1();
		ESlateVisibility GetItemListVis();
		void PopulateList();
		void BndEvt__Button_Item_K2Node_ComponentBoundEvent_50_OnButtonClickedEvent__DelegateSignature();
		void OpenList();
		void CloseList();
		void CloseOthers();
		void Construct();
		void ExecuteUbergraph_WBP_ItemsList_Button(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
