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
	 * WidgetBlueprintGeneratedClass v2_WB_ItemTooltip.v2_WB_ItemTooltip_C
	 * Size -> 0x0018 (FullSize[0x04B0] - InheritedSize[0x0498])
	 */
	class Uv2_WB_ItemTooltip_C : public UDCItemTooltipWidget
	{
	public:
		class UHorizontalBox*                                      HBox_AbilityListStatDline;                               // 0x0498(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      HBox_MainStatDline;                                      // 0x04A0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_89;                                                // 0x04A8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		ESlateVisibility Get_DescTextBlock_Visibility_1();
		ESlateVisibility Get_StatWidget_Visibility_1();
		ESlateVisibility Get_AbilityWidget_Visibility_1();
		ESlateVisibility Get_RequirementWidget_Visibility_1();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
