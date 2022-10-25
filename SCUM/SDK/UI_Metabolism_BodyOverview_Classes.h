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
	 * WidgetBlueprintGeneratedClass UI_Metabolism_BodyOverview.UI_Metabolism_BodyOverview_C
	 * Size -> 0x0008 (FullSize[0x0578] - InheritedSize[0x0570])
	 */
	class UUI_Metabolism_BodyOverview_C : public UMetabolismBodyOverviewPanel
	{
	public:
		class UImage*                                              BackgroundSymptomList;                                   // 0x0570(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		class UWidget* Get__rpb_Blood_ToolTipWidget_1();
		class UWidget* GetHitpointsToolTip();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
