#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * Class TaleNotes.TaleNote
	 * Size -> 0x0230 (FullSize[0x09B0] - InheritedSize[0x0780])
	 */
	class ATaleNote : public ASkeletalMeshWieldableItem
	{
	public:
		unsigned char                                              UnknownData_GZUZ[0x10];                                  // 0x0780(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CanvasWidth;                                             // 0x0790(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CanvasHeight;                                            // 0x0794(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FontScale;                                               // 0x0798(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_NHZ4[0x4];                                   // 0x079C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UFont*                                               Font;                                                    // 0x07A0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTreasureMapWidgetStreamedTexture                   Image;                                                   // 0x07A8(0x0030) Edit, DisableEditOnInstance
		struct FTreasureMapWidgetText                              TitleWidgetText;                                         // 0x07D8(0x0038) Edit, DisableEditOnInstance
		struct FTreasureMapWidgetText                              BodyWidgetText;                                          // 0x0810(0x0038) Edit, DisableEditOnInstance
		float                                                      NoteWidth;                                               // 0x0848(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      NoteLineSpacingMultiplier;                               // 0x084C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                Title;                                                   // 0x0850(0x0018) ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance
		unsigned char                                              UnknownData_SKB5[0x20];                                  // 0x0868(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FText                                                Body;                                                    // 0x0888(0x0018) ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance
		unsigned char                                              UnknownData_ROH3[0x20];                                  // 0x08A0(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class UMaybeCompressedCanvasRenderTarget2D*                RenderTarget;                                            // 0x08C0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		class UUsableWieldableComponent*                           UsableWieldableComponent;                                // 0x08C8(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		class UInventoryItemComponent*                             InventoryItemComponent;                                  // 0x08D0(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		class UZoomInOnWieldableItemComponent*                     ZoomInOnWieldableComponent;                              // 0x08D8(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_H49Q[0xD0];                                  // 0x08E0(0x00D0) MISSED OFFSET (PADDING)

	public:
		void OnTextCanvasUpdate(class UCanvas* InCanvas, int32_t InWidth, int32_t InHeight);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
