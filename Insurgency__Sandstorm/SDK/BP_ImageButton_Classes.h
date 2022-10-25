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
	 * WidgetBlueprintGeneratedClass BP_ImageButton.BP_ImageButton_C
	 * Size -> 0x00A0 (FullSize[0x02D0] - InheritedSize[0x0230])
	 */
	class UBP_ImageButton_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UButton*                                             ActionButton;                                            // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             ButtonBorder;                                            // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ButtonImage;                                             // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            RootSizeBox;                                             // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FVector2D                                           ImageSize;                                               // 0x0258(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnClicked;                                               // 0x0260(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UTexture2D*                                          IconTexture2D;                                           // 0x0270(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        IconColorDefault;                                        // 0x0278(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        IconColorActive;                                         // 0x0288(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           ButtonDesiredSize;                                       // 0x0298(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        ButtonNormalBackgroundColor;                             // 0x02A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        ButtonHoveredBackgroundColor;                            // 0x02B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        ButtonPressedBackgroundColor;                            // 0x02C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetupButtonColors();
		void PreConstruct(bool IsDesignTime);
		void BndEvt__ActionButton_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__ActionButton_K2Node_ComponentBoundEvent_109_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__ActionButton_K2Node_ComponentBoundEvent_117_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__ActionButton_K2Node_ComponentBoundEvent_126_OnButtonReleasedEvent__DelegateSignature();
		void BndEvt__ActionButton_K2Node_ComponentBoundEvent_134_OnButtonHoverEvent__DelegateSignature();
		void Construct();
		void ExecuteUbergraph_BP_ImageButton(int32_t EntryPoint);
		void OnClicked__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
