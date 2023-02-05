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
	 * BlueprintGeneratedClass BP_ItemDragDrop.BP_ItemDragDrop_C
	 * Size -> 0x00E0 (FullSize[0x0170] - InheritedSize[0x0090])
	 */
	class UBP_ItemDragDrop_C : public UDragDropOperation
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0090(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FVector2D                                           WidgetSize;                                              // 0x0098(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		struct FItemData                                           ItemData;                                                // 0x00A8(0x0090) Edit, BlueprintVisible, ExposeOnSpawn
		class AActor*                                              ItemOwner;                                               // 0x0138(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		struct FVector2D                                           PointSlotOffset;                                         // 0x0140(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           DragVisualScreenPosition;                                // 0x0150(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           DragVisualScreenPosInBag;                                // 0x0160(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Dragged(const struct FPointerEvent& PointerEvent);
		void ExecuteUbergraph_BP_ItemDragDrop(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
