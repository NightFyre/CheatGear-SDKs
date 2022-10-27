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
	 * WidgetBlueprintGeneratedClass UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C
	 * Size -> 0x0040 (FullSize[0x02D0] - InheritedSize[0x0290])
	 */
	class UUI_ItemSelectionSlotWidget_C : public UItemSelectionSlotWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0290(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTextBlock*                                          TextBlock_1;                                             // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VerticalBox_1;                                           // 0x02A0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                Name;                                                    // 0x02A8(0x0018) Edit, BlueprintVisible
		class FScriptMulticastDelegate                             OnClicked;                                               // 0x02C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void OnSynchronizeProperties();
		void ExecuteUbergraph_UI_ItemSelectionSlotWidget(int32_t EntryPoint);
		void OnClicked__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
