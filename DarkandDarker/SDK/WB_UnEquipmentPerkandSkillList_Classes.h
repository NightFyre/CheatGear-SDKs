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
	 * WidgetBlueprintGeneratedClass WB_UnEquipmentPerkandSkillList.WB_UnEquipmentPerkandSkillList_C
	 * Size -> 0x0000 (FullSize[0x0300] - InheritedSize[0x0300])
	 */
	class UWB_UnEquipmentPerkandSkillList_C : public UClassUnEquipmentPerkandSkillListWidget
	{
	public:
		struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
