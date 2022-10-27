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
	 * WidgetBlueprintGeneratedClass WBP_HDRadialMenuBase.WBP_HDRadialMenuBase_C
	 * Size -> 0x0048 (FullSize[0x0278] - InheritedSize[0x0230])
	 */
	class UWBP_HDRadialMenuBase_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FScriptMulticastDelegate                             SubmenuCommit;                                           // 0x0238(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<struct FKey>                                        SubmitKeys;                                              // 0x0248(0x0010) Edit, BlueprintVisible, HasGetValueTypeHash
		TArray<struct FKey>                                        BackKeys;                                                // 0x0258(0x0010) Edit, BlueprintVisible, HasGetValueTypeHash
		class FScriptMulticastDelegate                             Cancel;                                                  // 0x0268(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		struct FEventReply OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent);
		struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void Submit();
		void GoBack();
		void ExecuteUbergraph_WBP_HDRadialMenuBase(int32_t EntryPoint);
		void Cancel__DelegateSignature();
		void SubmenuCommit__DelegateSignature(const class FName& Category, const class FName& SubItem);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
