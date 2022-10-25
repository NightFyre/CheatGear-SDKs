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
	 * WidgetBlueprintGeneratedClass RDAMonitor.RDAMonitor_C
	 * Size -> 0x0069 (FullSize[0x0361] - InheritedSize[0x02F8])
	 */
	class URDAMonitor_C : public UMonitoredWindowsContent_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02F8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UMinimizableWidget_C*                                MinimizableWidgetDigestion;                              // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMinimizableWidget_C*                                MinimizableWidgetMinerals;                               // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMinimizableWidget_C*                                MinimizableWidgetNutritions;                             // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMinimizableWidget_C*                                MinimizableWidgetVitamins;                               // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FLinearColor                                        _color;                                                  // 0x0320(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                _defaultTitle;                                           // 0x0330(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		struct FVector2D                                           _localSize;                                              // 0x0348(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             RDASizeChangeEventDispatcher;                            // 0x0350(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       _isAlarmOn;                                              // 0x0360(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void shouldAlarmBeOn(bool* shouldAlarmBeOn);
		void GetContentSize(struct FVector2D* contentSize);
		void SetPrisonerToMonitorOnChildren();
		void Init();
		class FText GetTitleText();
		void GetDefaultTitle(class FText* defaultTitle);
		void SelectCustomColor(struct FLinearColor* Color);
		void OnMinimize(bool shouldMinimize);
		void Construct();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void MinimizableWidgetSizeChanged();
		void RDAMonitorSizeChanged();
		void OnPrisonerSet();
		void OnRDAMonitorContentSizeChanged();
		void WindowContentSizeChanged();
		void ExecuteUbergraph_RDAMonitor(int32_t EntryPoint);
		void RDASizeChangeEventDispatcher__DelegateSignature(const struct FVector2D& newSize);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
