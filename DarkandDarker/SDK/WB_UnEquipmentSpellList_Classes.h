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
	 * WidgetBlueprintGeneratedClass WB_UnEquipmentSpellList.WB_UnEquipmentSpellList_C
	 * Size -> 0x0000 (FullSize[0x02F8] - InheritedSize[0x02F8])
	 */
	class UWB_UnEquipmentSpellList_C : public UClassUnEquipmentSpellListWidget
	{
	public:
		struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
