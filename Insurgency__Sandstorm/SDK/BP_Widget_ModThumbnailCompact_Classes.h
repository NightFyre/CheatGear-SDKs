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
	 * WidgetBlueprintGeneratedClass BP_Widget_ModThumbnailCompact.BP_Widget_ModThumbnailCompact_C
	 * Size -> 0x0318 (FullSize[0x0548] - InheritedSize[0x0230])
	 */
	class UBP_Widget_ModThumbnailCompact_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              Image_357;                                               // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_ScrollingTextWidget_C*                           ScrollingModNameText;                                    // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_Widget_StarRating_C*                             StarRating;                                              // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             ThumbButton;                                             // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_Widget_WebImage_C*                               ThumbnailImage;                                          // 0x0258(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnModClicked;                                            // 0x0260(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FModObject                                          ModData;                                                 // 0x0270(0x02D8) Edit, BlueprintVisible, ExposeOnSpawn

	public:
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		void PreConstruct(bool IsDesignTime);
		void BndEvt__ThumbButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void Construct();
		void BndEvt__ThumbButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
		void ExecuteUbergraph_BP_Widget_ModThumbnailCompact(int32_t EntryPoint);
		void OnModClicked__DelegateSignature(const struct FModObject& Mod);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
