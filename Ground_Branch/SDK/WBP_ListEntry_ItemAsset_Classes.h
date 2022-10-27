#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * WidgetBlueprintGeneratedClass WBP_ListEntry_ItemAsset.WBP_ListEntry_ItemAsset_C
	 * Size -> 0x00C1 (FullSize[0x0321] - InheritedSize[0x0260])
	 */
	class UWBP_ListEntry_ItemAsset_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    Hover_EditButton;                                        // 0x0268(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    Hover_WholeItem;                                         // 0x0270(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UBorder*                                             Border_Current;                                          // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Button_Edit;                                             // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Button_WholeItem;                                        // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image;                                                   // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_ItemIcon;                                          // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_SolidBorder;                                       // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_ItemName;                                      // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnSelectedItemAsset;                                     // 0x02B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FPrimaryAssetId                                     ItemAssetId;                                             // 0x02C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		struct FSlateColor                                         TextColour_Customised;                                   // 0x02D0(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         TextColour_BaseItem;                                     // 0x02F8(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       bCanEdit;                                                // 0x0320(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn

	public:
		ESlateVisibility Get_Button_Edit_Visibility_1();
		void BndEvt__Button_25_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void Construct();
		void OnAsyncLoadIconComplete_Event(class UObject* LoadedAsset);
		void SetCurrentlySelected();
		void BndEvt__Button_Edit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
		void OnOk_Event_1(class UVaRestJsonObject* KitJsonObj);
		void OnCancel_Event_1();
		void BndEvt__WBP_ListEntry_ItemAsset_Button_WholeItem_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__WBP_ListEntry_ItemAsset_Button_WholeItem_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__WBP_ListEntry_ItemAsset_Button_Edit_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__WBP_ListEntry_ItemAsset_Button_Edit_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
		void ExecuteUbergraph_WBP_ListEntry_ItemAsset(int32_t EntryPoint);
		void OnSelectedItemAsset__DelegateSignature(const struct FPrimaryAssetId& ItemAssetId);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
