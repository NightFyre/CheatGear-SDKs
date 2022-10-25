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
	 * WidgetBlueprintGeneratedClass UI_YesNoMenuConfirmation.UI_YesNoMenuConfirmation_C
	 * Size -> 0x0038 (FullSize[0x02D0] - InheritedSize[0x0298])
	 */
	class UUI_YesNoMenuConfirmation_C : public UUI_ConfirmationBase_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0298(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              Image_11;                                                // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          MainText;                                                // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_TrashMenuButton_C*                               NoButton;                                                // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_TrashMenuButton_C*                               YesButton;                                               // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             YesClicked;                                              // 0x02C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void AdjustPosition(const struct FVector2D& adjustment);
		void Init(class UCanvasPanel* CanvasPanel, const class FText& Message);
		void BndEvt__UI_MenuButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature();
		void BndEvt__UI_MenuButton_0_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature();
		void OnYes();
		void ExecuteUbergraph_UI_YesNoMenuConfirmation(int32_t EntryPoint);
		void YesClicked__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
