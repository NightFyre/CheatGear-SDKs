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
	 * WidgetBlueprintGeneratedClass WBP_JoinServerListing.WBP_JoinServerListing_C
	 * Size -> 0x05A0 (FullSize[0x0870] - InheritedSize[0x02D0])
	 */
	class UWBP_JoinServerListing_C : public UTBServerListing
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UButton*                                             FavoriteBtn;                                             // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTBButton*                                           ListingBtn;                                              // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       bSelected;                                               // 0x02E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_K3CQ[0x7];                                   // 0x02E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             ListingSelected;                                         // 0x02F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FButtonStyle                                        SelectedButtonStyle;                                     // 0x0300(0x0278) Edit, BlueprintVisible, DisableEditOnInstance
		struct FButtonStyle                                        DeselectedButtonStyle;                                   // 0x0578(0x0278) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         TextColor;                                               // 0x07F0(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         TextColorHoveredWhileDeselected;                         // 0x0818(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         TextColorSelected;                                       // 0x0840(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		class UTBServerListItemData*                               Item;                                                    // 0x0868(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UpdateAppearance();
		void SetSelected(bool bNewSelected);
		void BP_OnItemExpansionChanged(bool bIsExpanded);
		void PreConstruct(bool IsDesignTime);
		void BndEvt__ListingBtn_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__ListingBtn_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__ListingBtn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
		void BP_OnItemSelectionChanged(bool bIsSelected);
		void OnListItemObjectSet(class UObject* ListItemObject);
		void BP_OnEntryReleased();
		void ExecuteUbergraph_WBP_JoinServerListing(int32_t EntryPoint);
		void ListingSelected__DelegateSignature(class UWBP_JoinServerListing_C* SelectedListing);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
