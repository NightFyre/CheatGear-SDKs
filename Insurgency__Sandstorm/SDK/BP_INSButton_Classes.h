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
	 * WidgetBlueprintGeneratedClass BP_INSButton.BP_INSButton_C
	 * Size -> 0x0184 (FullSize[0x03B4] - InheritedSize[0x0230])
	 */
	class UBP_INSButton_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UButton*                                             Btn;                                                     // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             ButtonBackground;                                        // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             ButtonBorder;                                            // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      ButtonContentsBox;                                       // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ButtonImageWidget;                                       // 0x0258(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScaleBox*                                           ButtonTextBox;                                           // 0x0260(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          ButtonTextLabel;                                         // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USpacer*                                             IconTextSpacer;                                          // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScaleBox*                                           ImageScaleBox;                                           // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            ImageSizeBox;                                            // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USpacer*                                             VariableSpacer;                                          // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnClick;                                                 // 0x0290(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnHover;                                                 // 0x02A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bHovered;                                                // 0x02B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9BR8[0x7];                                   // 0x02B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnUnHover;                                               // 0x02B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FText                                                ButtonText;                                              // 0x02C8(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		int32_t                                                    FontSize;                                                // 0x02E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EHorizontalAlignment                                       TextHorizontalAlignment;                                 // 0x02E4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_1XUP[0x3];                                   // 0x02E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          ButtonImage;                                             // 0x02E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInterface*                                  ButtonMaterial;                                          // 0x02F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bImageUsesTextColor;                                     // 0x02F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MMGX[0x3];                                   // 0x02F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        ButtonImageColor;                                        // 0x02FC(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bSelected;                                               // 0x030C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bToggleButton;                                           // 0x030D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZEGQ[0x2];                                   // 0x030E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        TextColorHovered;                                        // 0x0310(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        TextColor;                                               // 0x0320(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        BorderColorHovered;                                      // 0x0330(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        BorderColor;                                             // 0x0340(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        BackgroundColorHovered;                                  // 0x0350(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        BackgroundColor;                                         // 0x0360(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bPressed;                                                // 0x0370(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_95WG[0x3];                                   // 0x0371(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        BackgroundColorPressed;                                  // 0x0374(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_EQU7[0x4];                                   // 0x0384(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ContextValue;                                            // 0x0388(0x0010) Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnClickWithContext;                                      // 0x0398(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    ContentIntValue;                                         // 0x03A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		float                                                      ButtonBottomPadding;                                     // 0x03AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		float                                                      ButtonBorderMargin;                                      // 0x03B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		void SetButtonMaterial(class UMaterialInterface* NewMaterial);
		void SetButtonImageInternal(class UObject* NewImage, bool bCheckImageColor);
		void SetButtonImage(class UTexture2D* NewTexture);
		void SetText(const class FText& newText);
		void UpdateElementVisibility();
		void SetSelected(bool bNewSelected, bool bCallEvents);
		void UpdateColors();
		void SetTextInternal(const class FText& newText);
		void SetTextShadowAlpha(float Alpha);
		struct FLinearColor GetBorderColor();
		struct FLinearColor GetBackgroundColor();
		struct FSlateColor GetTextColor();
		void PreConstruct(bool IsDesignTime);
		void BndEvt__Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__Btn_K2Node_ComponentBoundEvent_13_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__Btn_K2Node_ComponentBoundEvent_24_OnButtonReleasedEvent__DelegateSignature();
		void BndEvt__Btn_K2Node_ComponentBoundEvent_33_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__Btn_K2Node_ComponentBoundEvent_40_OnButtonHoverEvent__DelegateSignature();
		void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
		void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
		void SimulatePress();
		void ExecuteUbergraph_BP_INSButton(int32_t EntryPoint);
		void OnClickWithContext__DelegateSignature(const class FString& ContextValue, int32_t ContextIntValue, bool bSelected);
		void OnUnHover__DelegateSignature();
		void OnHover__DelegateSignature();
		void OnClick__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
