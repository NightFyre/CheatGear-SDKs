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
	 * WidgetBlueprintGeneratedClass UI_CraftingRecipe.UI_CraftingRecipe_C
	 * Size -> 0x0040 (FullSize[0x0308] - InheritedSize[0x02C8])
	 */
	class UUI_CraftingRecipe_C : public UCraftingRecipeWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              BackgroundImage;                                         // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_EmptySlot_C*                                     EmptySlot;                                               // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              HighlightBox;                                            // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URetainerBox*                                        MainRetainerBox;                                         // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              SelectionBox;                                            // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_Border_C*                                        UI_Border;                                               // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UAkAudioEvent*                                       ClickSound;                                              // 0x0300(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void SetTooltipFromClass(class UClass* ItemClass);
		void Construct();
		void SetAvailabilityState(ERecipeAvailabilityState State);
		void SetIsSelected(bool isSelected);
		void SetTooltipFromCaptionAndDescription(const class FText& Caption, const class FText& Description);
		void SetIsHighlighted(bool isHighligted);
		void SetIsGrayedOut(bool isGrayedOut);
		void ExecuteUbergraph_UI_CraftingRecipe(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
