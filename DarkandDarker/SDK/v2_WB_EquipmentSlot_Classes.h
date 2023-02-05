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
	 * WidgetBlueprintGeneratedClass v2_WB_EquipmentSlot.v2_WB_EquipmentSlot_C
	 * Size -> 0x0030 (FullSize[0x04E0] - InheritedSize[0x04B0])
	 */
	class Uv2_WB_EquipmentSlot_C : public UDCEquipmentSlotWidget
	{
	public:
		class UTextBlock*                                          CountText;                                               // 0x04B0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              DropPreviewColor;                                        // 0x04B8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              FrameImage;                                              // 0x04C0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UProgressBar*                                        Gauge;                                                   // 0x04C8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            Overlay;                                                 // 0x04D0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            WearingArea;                                             // 0x04D8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		ESlateVisibility GetOverlayVisibilityonDragging();
		ESlateVisibility GetFrameImageVisibility();
		struct FLinearColor GetItemImageOpacity();
		struct FLinearColor GetDropPreviewImageOpacity();
		struct FLinearColor GetDropPreviewColorandOpacity();
		ESlateVisibility GetGaugeVisibility();
		float GetGaugePercent();
		class FText GetCountText();
		ESlateVisibility GetCountVisibility();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
