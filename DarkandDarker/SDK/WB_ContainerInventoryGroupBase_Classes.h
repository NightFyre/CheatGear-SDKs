#pragma once

/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
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
	 * WidgetBlueprintGeneratedClass WB_ContainerInventoryGroupBase.WB_ContainerInventoryGroupBase_C
	 * Size -> 0x0000 (FullSize[0x03A8] - InheritedSize[0x03A8])
	 */
	class UWB_ContainerInventoryGroupBase_C : public UContainerInventoryGroupWidget
	{
	public:
		bool OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
