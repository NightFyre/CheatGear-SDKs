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
	 * WidgetBlueprintGeneratedClass BP_PlaylistBrowser_Row.BP_PlaylistBrowser_Row_C
	 * Size -> 0x0121 (FullSize[0x0351] - InheritedSize[0x0230])
	 */
	class UBP_PlaylistBrowser_Row_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              BonusXPRowHint;                                          // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Button_1;                                                // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              CheckBox;                                                // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             HoverBG;                                                 // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_94;                                                // 0x0258(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ImageLimitedTime;                                        // 0x0260(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ImageRanked;                                             // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             SearchingForOtherPlaylistOverlay;                        // 0x0270(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             SelectedBG;                                              // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             SelectedBGTab;                                           // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextTitle;                                               // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                Text;                                                    // 0x0290(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		struct FSlateColor                                         ColorTextNormal;                                         // 0x02A8(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         ColorTextHover;                                          // 0x02D0(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		class UPlaylist*                                           Playlist;                                                // 0x02F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnSelected;                                              // 0x0300(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bSelected;                                               // 0x0310(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bHovered;                                                // 0x0311(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ANB9[0x6];                                   // 0x0312(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQueryOpenPoolsResultsEntry                         PlaylistData;                                            // 0x0318(0x0020) Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn
		float                                                      CooldownPoolCountQuery;                                  // 0x0338(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_PFCA[0x4];                                   // 0x033C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnHovered;                                               // 0x0340(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bCanBePressed;                                           // 0x0350(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void UpdateXPState();
		struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		ESlateVisibility Get_SearchingForOtherPlaylistOverlay_Visibility_1();
		void UpdateTextStyle();
		void SetSelectedState(bool bState, bool SkipEvent);
		void SetHoverState(bool bHovered);
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void OnMouseLeave(const struct FPointerEvent& MouseEvent);
		void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
		void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
		void OnClicked();
		void ExecuteUbergraph_BP_PlaylistBrowser_Row(int32_t EntryPoint);
		void OnHovered__DelegateSignature(bool bState, class UPlaylist* Playlist, const struct FQueryOpenPoolsResultsEntry& BackendData);
		void OnSelected__DelegateSignature(class UPlaylist* Playlist, const struct FQueryOpenPoolsResultsEntry& BackendData, bool Selected);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
