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
	 * WidgetBlueprintGeneratedClass PerformanceMonitor.PerformanceMonitor_C
	 * Size -> 0x0019 (FullSize[0x0311] - InheritedSize[0x02F8])
	 */
	class UPerformanceMonitor_C : public UMonitoredWindowsContent_C
	{
	public:
		class UMinimizableWidget_C*                                MinimizableWidgetPerformanceMonitor;                     // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMinimizableWidget_C*                                MinimizableWidgetPerformanceStats;                       // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMinimizableWidget_C*                                MinimizableWidgetSkillModifiers;                         // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       _isAlarmOn;                                              // 0x0310(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void shouldAlarmBeOn(bool* shouldAlarmBeOn);
		void GetContentSize(struct FVector2D* contentSize);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
