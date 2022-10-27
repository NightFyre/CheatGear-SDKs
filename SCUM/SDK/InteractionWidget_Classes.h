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
	 * WidgetBlueprintGeneratedClass InteractionWidget.InteractionWidget_C
	 * Size -> 0x0008 (FullSize[0x02F0] - InheritedSize[0x02E8])
	 */
	class UInteractionWidget_C : public UInteractionUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02E8(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void BndEvt___actionButton_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature();
		void BndEvt___actionButton_K2Node_ComponentBoundEvent_42_OnButtonHoverEvent__DelegateSignature();
		void ExecuteUbergraph_InteractionWidget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
