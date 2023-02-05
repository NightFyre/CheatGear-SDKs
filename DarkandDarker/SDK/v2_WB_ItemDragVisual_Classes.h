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
	 * WidgetBlueprintGeneratedClass v2_WB_ItemDragVisual.v2_WB_ItemDragVisual_C
	 * Size -> 0x0008 (FullSize[0x0490] - InheritedSize[0x0488])
	 */
	class Uv2_WB_ItemDragVisual_C : public UDCItemDragVisualWidget
	{
	public:
		class UTextBlock*                                          CountText;                                               // 0x0488(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		class FText GetCountText();
		ESlateVisibility GetCountVisibility();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
