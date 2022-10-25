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
	 * WidgetBlueprintGeneratedClass MinimizableWidget.MinimizableWidget_C
	 * Size -> 0x0092 (FullSize[0x034A] - InheritedSize[0x02B8])
	 */
	class UMinimizableWidget_C : public UWindowsContent_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    HeaderImageAnimation;                                    // 0x02C0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UBorder*                                             Border_2;                                                // 0x02C8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              HeaderImage;                                             // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              MaximizeImage;                                           // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              MinimizeImage;                                           // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UNamedSlot*                                          NamedSlotContent;                                        // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TitleTextBlock;                                          // 0x02F0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             WidgetSizeChangedEventDispatcher;                        // 0x02F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       isAlarmOn;                                               // 0x0308(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5DU7[0x7];                                   // 0x0309(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             NotifyAlarmSwitchedOnEventDispatcher;                    // 0x0310(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             NotifyAlarmSwitchedOffEventDispatcher;                   // 0x0320(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FVector2D                                           _minimizableWidgetSize;                                  // 0x0330(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             NotifyMinimizableWidgetSizeChangedEventDispatcher;       // 0x0338(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       _shouldRefreshSize;                                      // 0x0348(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       isMinimized;                                             // 0x0349(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		struct FEventReply OnMouseDoubleClick_1(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void SetMinimizableWidgetSize(const struct FVector2D& newMinWidgetSize);
		void GetMinimizableWidgetSize(struct FVector2D* widgetSize);
		void SetAlarmColor(bool shouldSetAlarmColorOn);
		void SetInitialIconsVisibility();
		void Minimize();
		void Maximize();
		struct FEventReply OnMaximizeImageMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		struct FEventReply OnMinimizeImageMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void AlarmSwitchOff();
		void AlarmSwitchOn();
		void Event_Widget_Size_Changed();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void Event_Widget_Maximized();
		void Construct();
		void Event_Widget_Minimized();
		void OnMinimize(bool shouldMinimize);
		void WindowContentSizeChanged();
		void AlarmOnWindowContent();
		void AlarmOffWindowContent();
		void ExecuteUbergraph_MinimizableWidget(int32_t EntryPoint);
		void NotifyMinimizableWidgetSizeChangedEventDispatcher__DelegateSignature();
		void NotifyAlarmSwitchedOffEventDispatcher__DelegateSignature();
		void NotifyAlarmSwitchedOnEventDispatcher__DelegateSignature();
		void WidgetSizeChangedEventDispatcher__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
