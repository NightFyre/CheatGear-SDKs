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
	 * WidgetBlueprintGeneratedClass UI_WaypointScreenWidget.UI_WaypointScreenWidget_C
	 * Size -> 0x0010 (FullSize[0x02A0] - InheritedSize[0x0290])
	 */
	class UUI_WaypointScreenWidget_C : public UWaypointScreenWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0290(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCanvasPanel*                                        WaypointPanel;                                           // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void AddWaypointWidgetToScreen(class UWaypointWidget* Widget);
		void RemoveWaypointWidgetFromScreen(class UWaypointWidget* Widget);
		void ExecuteUbergraph_UI_WaypointScreenWidget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
