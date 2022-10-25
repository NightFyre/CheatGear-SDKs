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
	 * WidgetBlueprintGeneratedClass BP_Widget_Scoreboard_PlayerRow.BP_Widget_Scoreboard_PlayerRow_C
	 * Size -> 0x0058 (FullSize[0x04A8] - InheritedSize[0x0450])
	 */
	class UBP_Widget_Scoreboard_PlayerRow_C : public UWidget_Scoreboard_PlayerRow
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0450(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UButton*                                             HoverButton;                                             // 0x0458(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            KADSizeBox;                                              // 0x0460(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            ObjSizeBox;                                              // 0x0468(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_Widget_Scoreboard_PlayerBadge_C*                 PlayerBadge;                                             // 0x0470(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            ScrSizeBox;                                              // 0x0478(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		unsigned char                                              TacticalMapReference[0x28];                              // 0x0480(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		void UpdateCompetitiveObjectiveVisibility();
		void BoolToVisibility(bool Show, ESlateVisibility* Visibility);
		void UpdateColumnVisibilityFromScoreboardConfig();
		void OpenPlayerMenu();
		struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void GetControllerFromState(class AINSPlayerController** PlayerController);
		void BndEvt__HoverButton_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__HoverButton_K2Node_ComponentBoundEvent_43_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__MuteButton_K2Node_ComponentBoundEvent_74_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__HoverButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void OnHoverStateChange();
		void UpdateDeveloperStatus(class AINSPlayerState* InPlayerState, bool bDeveloperStatus);
		void UpdatePlayerExperience(class AINSPlayerState* InPlayerState, int32_t NewExperience);
		void DoSetDefaultsToPlayerBadge(class AINSPlayerState* InPlayerState);
		void UpdateExtendedColumnVisiblity(bool bNewVisibility);
		void Construct();
		void OnFocusLost(const struct FFocusEvent& InFocusEvent);
		void OnClickedMuteButton();
		void ExecuteUbergraph_BP_Widget_Scoreboard_PlayerRow(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
