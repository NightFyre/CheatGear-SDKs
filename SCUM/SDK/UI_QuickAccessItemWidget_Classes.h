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
	 * WidgetBlueprintGeneratedClass UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C
	 * Size -> 0x00B0 (FullSize[0x0430] - InheritedSize[0x0380])
	 */
	class UUI_QuickAccessItemWidget_C : public UQuickAccessItemWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0380(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    ShowAdditionalIconAnimation;                             // 0x0388(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    ShowLowerLeftBoxAnimation;                               // 0x0390(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AdditionalIconFadeOut;                                   // 0x0398(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AdditionalIconFadeIn;                                    // 0x03A0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    BlinkingBackground;                                      // 0x03A8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    LowerLeftBoxFadeOut;                                     // 0x03B0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    LowerLeftBoxFadeIn;                                      // 0x03B8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                              _imageBackground;                                        // 0x03C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              AmmoIcon;                                                // 0x03C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              LeftSquareBracketImage;                                  // 0x03D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            Overlay_5;                                               // 0x03D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              RightSquareBracketImage;                                 // 0x03E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SizeBox_1;                                               // 0x03E8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlockItemSlotNumber;                                 // 0x03F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FLinearColor                                        TextColor;                                               // 0x03F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class FText                                                _itemSlotNumber;                                         // 0x0408(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		struct FLinearColor                                        _alarmColor;                                             // 0x0420(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		class UWidgetAnimation* GetAdditionalIconShowAnimation();
		class UWidgetAnimation* GetLowerLeftBoxShowAnimation();
		ESlateVisibility GetQuickAccessItemVisibility();
		class UWidgetAnimation* GetAdditionalIconFadeOutAnimation();
		class UWidgetAnimation* GetAdditionalIconFadeInAnimation();
		class UWidgetAnimation* GetBlinkingBackgroundAnimation();
		class UWidgetAnimation* GetLowerLeftBoxFadeOutAnimation();
		class UWidgetAnimation* GetLowerLeftBoxFadeInAnimation();
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
		void ExecuteUbergraph_UI_QuickAccessItemWidget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
