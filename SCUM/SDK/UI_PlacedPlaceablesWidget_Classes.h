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
	 * WidgetBlueprintGeneratedClass UI_PlacedPlaceablesWidget.UI_PlacedPlaceablesWidget_C
	 * Size -> 0x0014 (FullSize[0x02E4] - InheritedSize[0x02D0])
	 */
	class UUI_PlacedPlaceablesWidget_C : public UPlacedPlaceableWidget
	{
	public:
		TArray<class UUI_PlacedPlaceableIcon_C*>                   _icons;                                                  // 0x02D0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		int32_t                                                    _placeableIndex;                                         // 0x02E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
