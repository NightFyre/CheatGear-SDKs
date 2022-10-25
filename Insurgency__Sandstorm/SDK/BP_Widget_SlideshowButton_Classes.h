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
	 * WidgetBlueprintGeneratedClass BP_Widget_SlideshowButton.BP_Widget_SlideshowButton_C
	 * Size -> 0x0031 (FullSize[0x0261] - InheritedSize[0x0230])
	 */
	class UBP_Widget_SlideshowButton_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              ActiveImage;                                             // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             NavigateButton;                                          // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		int32_t                                                    SlideshowIndex;                                          // 0x0248(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_2D7M[0x4];                                   // 0x024C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnSlideshowNavigate;                                     // 0x0250(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bActive;                                                 // 0x0260(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn

	public:
		void UpdateActiveAppearance();
		void SetActive(bool bNewActive);
		void BndEvt__NavigateButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_BP_Widget_SlideshowButton(int32_t EntryPoint);
		void OnSlideshowNavigate__DelegateSignature(int32_t Index);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
