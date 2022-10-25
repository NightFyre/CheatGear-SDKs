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
	 * WidgetBlueprintGeneratedClass BCU_Body_Monitor.BCU_Body_Monitor_C
	 * Size -> 0x0069 (FullSize[0x0361] - InheritedSize[0x02F8])
	 */
	class UBCU_Body_Monitor_C : public UMonitoredWindowsContent_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02F8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UVerticalBox*                                        BodyMonitorMainVerticalBox;                              // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMinimizableWidget_C*                                MinimizableWidgetBodyMonitor;                            // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMinimizableWidget_C*                                MinimizableWidgetLevelAttributes;                        // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMinimizableWidget_C*                                MinimizableWidgetSickness;                               // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FLinearColor                                        _color;                                                  // 0x0320(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                _defaultTitle;                                           // 0x0330(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		struct FTimerHandle                                        _updateNutritionsTimer;                                  // 0x0348(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             BCUBodyMonitorSizeChangedEventDispatcher;                // 0x0350(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       _isAlarmOn;                                              // 0x0360(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void shouldAlarmBeOn(bool* shouldAlarmBeOn);
		void GetContentSize(struct FVector2D* contentSize);
		void SetPrisonerToMonitorOnChildren();
		void SetSubTitles();
		class FText GetTitleText();
		void GetDefaultTitle(class FText* defaultTitle);
		void SelectCustomColor(struct FLinearColor* Color);
		void OnMinimize(bool shouldMinimize);
		void ExecuteUbergraph_BCU_Body_Monitor(int32_t EntryPoint);
		void BCUBodyMonitorSizeChangedEventDispatcher__DelegateSignature(const struct FVector2D& Size);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
