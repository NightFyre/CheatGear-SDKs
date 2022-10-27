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
	 * WidgetBlueprintGeneratedClass BP_OptionsRow_BaseClass.BP_OptionsRow_BaseClass_C
	 * Size -> 0x0068 (FullSize[0x0298] - InheritedSize[0x0230])
	 */
	class UBP_OptionsRow_BaseClass_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FScriptMulticastDelegate                             OnOptionHovered;                                         // 0x0238(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnOptionUnHovered;                                       // 0x0248(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FText                                                HoverTitle;                                              // 0x0258(0x0018) Edit, BlueprintVisible
		class FText                                                HoverDescription;                                        // 0x0270(0x0018) Edit, BlueprintVisible
		class FScriptMulticastDelegate                             OnOptionModified;                                        // 0x0288(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void CallModifiedEvent();
		void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
		void OnMouseLeave(const struct FPointerEvent& MouseEvent);
		void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
		void ExecuteUbergraph_BP_OptionsRow_BaseClass(int32_t EntryPoint);
		void OnOptionModified__DelegateSignature(class UBP_OptionsRow_BaseClass_C* OptionWidget);
		void OnOptionUnhovered__DelegateSignature(class UBP_OptionsRow_BaseClass_C* OptionWidget);
		void OnOptionHovered__DelegateSignature(const class FText& Title, const class FText& Description, class UBP_OptionsRow_BaseClass_C* OptionWidget);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
