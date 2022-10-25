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
	 * WidgetBlueprintGeneratedClass ResizableWindow.ResizableWindow_C
	 * Size -> 0x0380 (FullSize[0x0618] - InheritedSize[0x0298])
	 */
	class UResizableWindow_C : public UCustomGUIWindow_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0298(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBorderFilled_C*                                     BorderFilled;                                            // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorderFilled_C*                                     BorderOutlineFilled;                                     // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             BorderOutlineUpperPart;                                  // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        ContentArea;                                             // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UNamedSlot*                                          ContentAreaSlot;                                         // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFooterV2_C*                                         FooterV2;                                                // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             HeaderArea;                                              // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          HeaderTextWidget;                                        // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              IRMaximize;                                              // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              IRMinimize;                                              // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             ResizeArea;                                              // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            ResizeAreaBox;                                           // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ResizeImage;                                             // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHoveredEventWidget_C*                               ResizeWidget;                                            // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       DragEnabled;                                             // 0x0310(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YQA9[0x7];                                   // 0x0311(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateFontInfo                                      HeaderFont;                                              // 0x0318(0x0058) Edit, BlueprintVisible, HasGetValueTypeHash
		bool                                                       IsMouseButtonDown;                                       // 0x0370(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_B956[0x3];                                   // 0x0371(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           LastMousePosition;                                       // 0x0374(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       MouseDownAndMoving;                                      // 0x037C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsDrag;                                                  // 0x037D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsResize;                                                // 0x037E(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5L5U[0x1];                                   // 0x037F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCanvasPanelSlot*                                    ParentSlot;                                              // 0x0380(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ResizeEnabled;                                           // 0x0388(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_36BS[0x3];                                   // 0x0389(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        ResizeColorHover;                                        // 0x038C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        ResizeColorNormal;                                       // 0x039C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        HeaderColorNormal;                                       // 0x03AC(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        HeaderColorHovered;                                      // 0x03BC(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsResizeColoredHover;                                    // 0x03CC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsHeaderColoredHover;                                    // 0x03CD(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsResizeColoredNormal;                                   // 0x03CE(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsHeaderColoredNormal;                                   // 0x03CF(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector2D                                           PreResizeAlignment;                                      // 0x03D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           PreResizeOffset;                                         // 0x03D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsAlignmentAccountedFor;                                 // 0x03E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WQFH[0x3];                                   // 0x03E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           PreDragSize;                                             // 0x03E4(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsResizeHovered;                                         // 0x03EC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsHeaderHovered;                                         // 0x03ED(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_P0K2[0x2];                                   // 0x03EE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           ResizeAreaSize;                                          // 0x03F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FSlateBrush                                         ResizeAreaBrush;                                         // 0x03F8(0x0088) Edit, BlueprintVisible
		struct FSlateBrush                                         DragAppearanceBrush;                                     // 0x0480(0x0088) Edit, BlueprintVisible
		struct FLinearColor                                        DragAppearanceColor;                                     // 0x0508(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                HeaderText;                                              // 0x0518(0x0018) Edit, BlueprintVisible
		float                                                      SafetyZoneY;                                             // 0x0530(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SafetyZoneX;                                             // 0x0534(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinWidth;                                                // 0x0538(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinHeight;                                               // 0x053C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxWidth;                                                // 0x0540(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxHeight;                                               // 0x0544(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        HeaderContentNormal;                                     // 0x0548(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FSlateColor                                         HeaderTextColorNormal;                                   // 0x0558(0x0028) Edit, BlueprintVisible
		struct FSlateColor                                         HeaderTextColorHovered;                                  // 0x0580(0x0028) Edit, BlueprintVisible
		bool                                                       isMinimized;                                             // 0x05A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7HNN[0x7];                                   // 0x05A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              _contentWidgetClass;                                     // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		struct FVector2D                                           _curentContentAreaSlotSize;                              // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             ContentSizeChangedEventDispatcher;                       // 0x05C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       isFooterV2Active;                                        // 0x05D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CW29[0x7];                                   // 0x05D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWindowsContent_C*                                   _windowsContentWidget;                                   // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ResizeEnabledLocked;                                     // 0x05E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ISUV[0x7];                                   // 0x05E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             ContentMaximizedEventDispatcher;                         // 0x05E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       _shouldRefreshSize;                                      // 0x05F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RGM8[0x7];                                   // 0x05F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnHeaderDoubleClickDispatcher;                           // 0x0600(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UHUD_C*                                              parentHUD;                                               // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void InitializeHUDMonitor(const class FString& displayLabelName, bool footerV2Activity, bool enableResizability, const class FText& titleToSet, class UHUD_C* parentHUDRef);
		void SaveHUDLayout();
		void GetParentHUD(class UHUD_C** parentHUD);
		void SetParentHUD(class UHUD_C* parentHUD);
		struct FVector2D GetSize();
		struct FVector2D GetPosition();
		void AdjustPosition(const struct FVector2D& positionToAdjust, const struct FGeometry& LocalGeometry, struct FVector2D* Output);
		void MaximizeMinimizableWidgets();
		bool HasAnyChildren(class UPanelWidget* PanelWidget);
		struct FEventReply OnHeaderDoubleClick(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void SetUpResizableWindowWithChildRef(class UWindowsContent_C* contentWidgetRef, const class FText& titleToSet);
		void AdjustSizeToContent();
		void SetSize(const struct FVector2D& newSize);
		void GetContentSize(struct FVector2D* contentSize);
		void SetResizeEnableLocked(bool enableResizability);
		void ActivateAlarmColor(bool shouldActivateAlarmColor);
		void ShowBorder();
		bool isResizableWindowSkills();
		void GetWindowsContentWidget(class UWindowsContent_C** windowsContentWidget);
		void SetWindowsContentWidget(class UWindowsContent_C* windowsContentWidget);
		void SetFooterV2Activity(bool shouldBeActive);
		void ResetFlags();
		void Maximize();
		void Minimize();
		struct FVector2D GetContentAreaSlotDesiredSize();
		void SaveCurrentContentAreaSlotSize();
		void SetUpResizableWindow(class UClass* contentWidgetClass, const class FText& titleToSet);
		void Init();
		void SetContentWidgetClass(class UClass* WindowsContentClass);
		void AttachContentWidgetRef(class UWindowsContent_C* contentWidgetRef);
		void AttachContentWidget(class UClass* contentWidgetClass);
		struct FVector2D CalculateMouseDelta(const struct FPointerEvent& LocalMouseEvent, const struct FVector2D& LastMousePosition);
		bool IsOffscreen(const struct FPointerEvent& Input);
		struct FEventReply OnMouseButtonDownOnIRMinimize(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void SetResizeColorHover(const struct FLinearColor& Color);
		void ToggleDragEnabled(bool DragEnabled);
		void ToggleResizeEnabled(bool ResizeEnabled);
		void DetermineNewSize(const struct FVector2D& Original, const struct FVector2D& Delta, struct FVector2D* New);
		void MouseButtonUpEvent();
		void ResetVariablesToDefault();
		struct FEventReply OnResizeAreaMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		struct FEventReply OnHeaderMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		struct FEventReply OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void Event_RDA_Monitor_Size_Changed();
		void AlarmOnWindowContent();
		void AlarmOffWindowContent();
		void OnHeaderDoubleClickEvent(const struct FGeometry& Geometry, const struct FPointerEvent& MouseEvent);
		void OnMaximized();
		void SaveLayout();
		void LoadLayout();
		void ResetLayout();
		void BndEvt__HoveredEventWidget_K2Node_ComponentBoundEvent_72_MouseLeft__DelegateSignature();
		void BndEvt__HoveredEventWidget_K2Node_ComponentBoundEvent_67_MouseEntered__DelegateSignature();
		void OnMouseLeave(const struct FPointerEvent& MouseEvent);
		void Construct();
		void SetTitle(const class FText& titleToSet);
		void ExecuteUbergraph_ResizableWindow(int32_t EntryPoint);
		void OnHeaderDoubleClickDispatcher__DelegateSignature(const struct FGeometry& Geometry, const struct FPointerEvent& MouseEvent);
		void ContentMaximizedEventDispatcher__DelegateSignature();
		void ContentSizeChangedEventDispatcher__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
