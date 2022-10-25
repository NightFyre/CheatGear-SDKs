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
	 * WidgetBlueprintGeneratedClass WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C
	 * Size -> 0x0865 (FullSize[0x0A95] - InheritedSize[0x0230])
	 */
	class UWBP_CreateGameSelectionListEntry_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              ItemBg;                                                  // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            ItemBox;                                                 // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBox*                                           ItemCheckBox;                                            // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ItemSelectionHighlight;                                  // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          ItemSubText;                                             // 0x0258(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          ItemText;                                                // 0x0260(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnSelectionStateChanged;                                 // 0x0268(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FCheckBoxStyle                                      ItemStyle;                                               // 0x0278(0x0580) Edit, BlueprintVisible, ExposeOnSpawn
		struct FFSelectionItemTextStyle                            ItemTextStyle;                                           // 0x07F8(0x0130) Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash
		struct FFSelectionItemTextStyle                            ItemSubTextStyle;                                        // 0x0928(0x0130) Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash
		int32_t                                                    ItemMinWidth;                                            // 0x0A58(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_QS4N[0x4];                                   // 0x0A5C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Text;                                                    // 0x0A60(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		class FText                                                SubText;                                                 // 0x0A78(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		int32_t                                                    ItemMinHeight;                                           // 0x0A90(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                       bSelectionToggle;                                        // 0x0A94(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn

	public:
		void GetBrushWithImageTexture(struct FSlateBrush* Brush, class UTexture2D* Image, struct FSlateBrush* UpdatedBrush);
		void InternalRefreshDimensions();
		void GetItemMinHeight(int32_t* MinHeight);
		void GetItemMinWidth(int32_t* MinWidth);
		void SetItemMinDimensions(int32_t InMinWidth, int32_t InMinHeight);
		void GetItemSubText(class FText* Text);
		void GetItemText(class FText* Text);
		void SetItemSubText(const class FText& InText);
		void SetItemText(const class FText& InText);
		void GetItemSubTextStyle(struct FFSelectionItemTextStyle* TextStyle);
		void GetItemTextStyle(struct FFSelectionItemTextStyle* TextStyle);
		void GetItemStyle(struct FCheckBoxStyle* ItemStyle);
		void SetItemImage(class UTexture2D* InItemImg);
		void SetItemSubTextStyle(const struct FFSelectionItemTextStyle& InItemSubTextStyle);
		void SetItemTextStyle(const struct FFSelectionItemTextStyle& InItemTextStyle);
		void SetItemStyle(const struct FCheckBoxStyle& InItemStyle);
		void InternalUpdateItemBgTintColor(bool bSelected);
		void InternalApplyStyleToText(class UTextBlock* Text, struct FFSelectionItemTextStyle* TextStyle);
		void IsItemSelected(bool* bSelected);
		void GetItemSelectionState(ECheckBoxState* SelectionState);
		void SetItemIsSelected(bool bSelected);
		void SetItemSelectionState(ECheckBoxState InSelectionState);
		void PreConstruct(bool IsDesignTime);
		void BndEvt__ItemCheckBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void ExecuteUbergraph_WBP_CreateGameSelectionListEntry(int32_t EntryPoint);
		void OnSelectionStateChanged__DelegateSignature(class UWBP_CreateGameSelectionListEntry_C* Item, bool bSelected);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
