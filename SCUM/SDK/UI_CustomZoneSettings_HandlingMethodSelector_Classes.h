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
	 * WidgetBlueprintGeneratedClass UI_CustomZoneSettings_HandlingMethodSelector.UI_CustomZoneSettings_HandlingMethodSelector_C
	 * Size -> 0x0000 (FullSize[0x02C0] - InheritedSize[0x02C0])
	 */
	class UUI_CustomZoneSettings_HandlingMethodSelector_C : public UCustomZoneSettingsHandlingMethodSelector
	{
	public:
		class UWidget* GetToolTipWidget();
		class UWidget* GetBlockToolTipWidget();
		class UWidget* GetAllowToolTipWidget();
		class UWidget* GetIgnoreToolTipWidget();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
