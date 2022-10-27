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
	 * WidgetBlueprintGeneratedClass UI_CustomZoneSettings_Region.UI_CustomZoneSettings_Region_C
	 * Size -> 0x0050 (FullSize[0x0400] - InheritedSize[0x03B0])
	 */
	class UUI_CustomZoneSettings_Region_C : public UCustomZoneSettingsRegion
	{
	public:
		class UHorizontalBox*                                      HorizontalBox_99;                                        // 0x03B0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                UnmodifiedToolTipText;                                   // 0x03B8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                ModifiedToolTipText;                                     // 0x03D0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                DeletedToolTipText;                                      // 0x03E8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		class UWidget* GetToolTipWidget();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
