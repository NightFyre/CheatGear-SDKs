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
	 * WidgetBlueprintGeneratedClass UI_ItemTooltip.UI_ItemTooltip_C
	 * Size -> 0x0008 (FullSize[0x02C8] - InheritedSize[0x02C0])
	 */
	class UUI_ItemTooltip_C : public UItemTooltip
	{
	public:
		class UUI_Border_C*                                        UI_Border;                                               // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		ESlateVisibility GetVisibilityForPageBorder();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
