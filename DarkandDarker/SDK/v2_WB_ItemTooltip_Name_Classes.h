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
	 * WidgetBlueprintGeneratedClass v2_WB_ItemTooltip_Name.v2_WB_ItemTooltip_Name_C
	 * Size -> 0x0018 (FullSize[0x0490] - InheritedSize[0x0478])
	 */
	class Uv2_WB_ItemTooltip_Name_C : public UDCItemTooltipNameWidget
	{
	public:
		class UImage*                                              ImageRarity;                                             // 0x0480(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Img_NameColorLine;                                       // 0x0488(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		struct FSlateColor GetSoulHeartOwnerNameTextBlockColorAndOpacity();
		ESlateVisibility GetSoulHeartTextBlockVisibility();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
