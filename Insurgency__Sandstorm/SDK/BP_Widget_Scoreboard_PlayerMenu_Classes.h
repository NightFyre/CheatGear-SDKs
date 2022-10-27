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
	 * WidgetBlueprintGeneratedClass BP_Widget_Scoreboard_PlayerMenu.BP_Widget_Scoreboard_PlayerMenu_C
	 * Size -> 0x0100 (FullSize[0x0330] - InheritedSize[0x0230])
	 */
	class UBP_Widget_Scoreboard_PlayerMenu_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_GenericDialog_C*                                 BP_GenericDialog;                                        // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_INSButton_C*                                     BtnCopyUniqueID;                                         // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_INSButton_C*                                     BtnMutePlayer;                                           // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_INSButton_C*                                     BtnReportPlayer;                                         // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_INSButton_C*                                     BtnSpectatePlayer;                                       // 0x0258(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_INSButton_C*                                     BtnViewProfile;                                          // 0x0260(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VerticalBox_1;                                           // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		unsigned char                                              PlayerState[0x28];                                       // 0x0270(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UBP_INSButton_C*                                     ActiveButton;                                            // 0x0298(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnButtonPresed;                                          // 0x02A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                              PlatformImages[0x50];                                    // 0x02B0(0x0050) UNKNOWN PROPERTY: MapProperty
		class FString                                              ReportedPlayerNetId;                                     // 0x0300(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              ReportingPlayerNetId;                                    // 0x0310(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              ReportedPlayerName;                                      // 0x0320(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash

	public:
		struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void UpdateButtonVisibility();
		bool Get_BtnSpectatePlayer_bIsEnabled_1();
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		void Construct();
		void BndEvt__BtnCopyUniqueID_K2Node_ComponentBoundEvent_126_OnClick__DelegateSignature();
		void BndEvt__BtnViewProfile_K2Node_ComponentBoundEvent_137_OnClick__DelegateSignature();
		void BndEvt__BP_GenericDialog_K2Node_ComponentBoundEvent_0_OnCanceled__DelegateSignature();
		void BndEvt__BtnSpectatePlayer_K2Node_ComponentBoundEvent_37_OnClick__DelegateSignature();
		void BndEvt__BtnSpectatePlayer_K2Node_ComponentBoundEvent_0_OnHover__DelegateSignature();
		void BndEvt__BtnCopyUniqueID_K2Node_ComponentBoundEvent_1_OnHover__DelegateSignature();
		void BndEvt__BtnViewProfile_K2Node_ComponentBoundEvent_2_OnHover__DelegateSignature();
		void BndEvt__BtnReportPlayer_K2Node_ComponentBoundEvent_3_OnHover__DelegateSignature();
		void BndEvt__BtnReportPlayer_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature();
		void BndEvt__BtnMutePlayer_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature();
		void BndEvt__BtnMutePlayer_K2Node_ComponentBoundEvent_12_OnHover__DelegateSignature();
		void OnHideWidget();
		void OnShowRoundOver(const struct FPlayerRoundOverData& UIData);
		void ExecuteUbergraph_BP_Widget_Scoreboard_PlayerMenu(int32_t EntryPoint);
		void OnButtonPresed__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
