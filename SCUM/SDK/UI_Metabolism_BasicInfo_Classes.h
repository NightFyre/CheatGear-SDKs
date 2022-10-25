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
	 * WidgetBlueprintGeneratedClass UI_Metabolism_BasicInfo.UI_Metabolism_BasicInfo_C
	 * Size -> 0x0008 (FullSize[0x02B0] - InheritedSize[0x02A8])
	 */
	class UUI_Metabolism_BasicInfo_C : public UMetabolismBasicInfoPanel
	{
	public:
		class UUI_CollapsableContainer_C*                          UI_CollapsableContainer;                                 // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		class UWidget* GetBloodVolumeToolTip();
		class UWidget* GetBloodTypeToolTip();
		class UWidget* GetStatTeetToolTip();
		class UWidget* GetStatTemperatureToolTip();
		class UWidget* GetStatWeightToolTip();
		class UWidget* GetStatLifetimeToolTip();
		class UWidget* GetStatAgeToolTip();
		class UWidget* GetStatHealthToolTip();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
