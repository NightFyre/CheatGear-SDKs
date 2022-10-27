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
	 * WidgetBlueprintGeneratedClass WBP_DragItem_Entry.WBP_DragItem_Entry_C
	 * Size -> 0x00A0 (FullSize[0x0300] - InheritedSize[0x0260])
	 */
	class UWBP_DragItem_Entry_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBorder*                                             Border_1;                                                // 0x0268(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_ItemIcon;                                          // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_ItemName;                                      // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FPrimaryAssetId                                     ItemAssetId;                                             // 0x0280(0x0010) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class FName                                                DragDropOperationType;                                   // 0x0290(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class AGBItem*                                             RootItem;                                                // 0x0298(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class UCanvasPanel*                                        FloatingCanvas;                                          // 0x02A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		TArray<struct FItemDragDropType>                           ItemDragDropOperations;                                  // 0x02A8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		unsigned char                                              DragDropOperatoinClassPtr[0x28];                         // 0x02B8(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		class FText                                                Drag;                                                    // 0x02E0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class UClass*                                              DragDropOperationClass;                                  // 0x02F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		struct FLinearColor GetBrushColor_1();
		class UWidget* GetToolTip();
		void OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation);
		struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void OnLoaded_1CF40394485F0C6B18142C92575A301C(class UClass* Loaded);
		void OnAsyncLoadAssetComplete_Event0(class UObject* LoadedAsset);
		void Construct();
		void Setup();
		void ExecuteUbergraph_WBP_DragItem_Entry(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
