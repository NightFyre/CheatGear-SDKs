#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * WidgetBlueprintGeneratedClass BP_ScrollingTextWidget.BP_ScrollingTextWidget_C
	 * Size -> 0x00C0 (FullSize[0x02F0] - InheritedSize[0x0230])
	 */
	class UBP_ScrollingTextWidget_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_ScrollingComponent_C*                            BP_ScrollingComponent;                                   // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBox;                                                 // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                          TextScrollBox;                                           // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                Text;                                                    // 0x0250(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		struct FSlateFontInfo                                      Font;                                                    // 0x0268(0x0050) Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash
		int32_t                                                    FontSize;                                                // 0x02B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           ShadowOffset;                                            // 0x02BC(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        ShadowColorAndOpacity;                                   // 0x02C4(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FStruct_ScrollingComponentData                      ScrollingComponentData;                                  // 0x02D4(0x001C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash

	public:
		void UpdateText(const class FText& newText);
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void ExecuteUbergraph_BP_ScrollingTextWidget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
