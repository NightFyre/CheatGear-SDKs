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
	 * WidgetBlueprintGeneratedClass WB_CustomizeEmoteRadialSlot.WB_CustomizeEmoteRadialSlot_C
	 * Size -> 0x0044 (FullSize[0x03E4] - InheritedSize[0x03A0])
	 */
	class UWB_CustomizeEmoteRadialSlot_C : public UDCCustomizeEmoteRadialSlotWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03A0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              PreviewEmoteIconImage;                                   // 0x03A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VBox_Highlight;                                          // 0x03B0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VBox_SlotArrow;                                          // 0x03B8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_EmoteRadialPointArrow_C*                         WB_EmoteRadialPointArrow;                                // 0x03C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_GameTooltipS_C*                                  TooltipWidgetObject;                                     // 0x03C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FSlateColor                                         TooltipTextColor;                                        // 0x03D0(0x0014) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		class UWidget* Get_Overlay_EmoteSlot_ToolTipWidget();
		void Construct();
		void SetEmoteIconImageAngle(float NewAngle);
		void OnEmoteNameChanged(const class FText& NewEmoteName);
		void ExecuteUbergraph_WB_CustomizeEmoteRadialSlot(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
