#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * WidgetBlueprintGeneratedClass WBP_VOIPOwnerChatIndicator.WBP_VOIPOwnerChatIndicator_C
	 * Size -> 0x0061 (FullSize[0x0291] - InheritedSize[0x0230])
	 */
	class UWBP_VOIPOwnerChatIndicator_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    OwnerVOIPInputUIAnim;                                    // 0x0238(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                              IndicatorSpeakerIcon;                                    // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          IndicatorText;                                           // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                IndicatorNameText;                                       // 0x0250(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ExposeOnSpawn
		struct FSlateColor                                         IndicatorColor;                                          // 0x0268(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, ExposeOnSpawn
		bool                                                       bActive;                                                 // 0x0290(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void PreConstruct(bool IsDesignTime);
		void OnInitialized();
		void Activate();
		void Deactivate();
		void InputAnimFinished();
		void ExecuteUbergraph_WBP_VOIPOwnerChatIndicator(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
