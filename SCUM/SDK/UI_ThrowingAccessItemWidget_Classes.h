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
	 * WidgetBlueprintGeneratedClass UI_ThrowingAccessItemWidget.UI_ThrowingAccessItemWidget_C
	 * Size -> 0x0068 (FullSize[0x0328] - InheritedSize[0x02C0])
	 */
	class UUI_ThrowingAccessItemWidget_C : public UThrowingQuickAccessItemWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              ImageBackground;                                         // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              LeftSquareBracketImage;                                  // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              RightSquareBracketImage;                                 // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SizeBox_1;                                               // 0x02E0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlockItemSlotNumber;                                 // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FLinearColor                                        TextColor;                                               // 0x02F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class FText                                                _itemSlotNumber;                                         // 0x0300(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		struct FLinearColor                                        _alarmColor;                                             // 0x0318(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		ESlateVisibility GetThrowingAccessItemVisibility();
		void GetItemSize(struct FVector2D* itemSize);
		void GetImageBrush(struct FSlateBrush* imageBrush);
		struct FEventReply On__imageWidget_MouseButtonDown_1(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void SetItemSlotNumber(int32_t itemSlotNumber);
		void ActivateNormalColor();
		void ActivateAlarmColor();
		class FText GetItemSlotNumber();
		void SetTextColor(const struct FLinearColor& TextColor);
		void Construct();
		void OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
		void ExecuteUbergraph_UI_ThrowingAccessItemWidget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
