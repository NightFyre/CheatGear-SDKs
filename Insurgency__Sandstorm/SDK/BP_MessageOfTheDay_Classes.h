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
	 * WidgetBlueprintGeneratedClass BP_MessageOfTheDay.BP_MessageOfTheDay_C
	 * Size -> 0x0150 (FullSize[0x03D8] - InheritedSize[0x0288])
	 */
	class UBP_MessageOfTheDay_C : public UMainMenuPanelWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0288(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    IdlePulse;                                               // 0x0290(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UBP_INSButton_C*                                     CallToActionButton;                                      // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                          ModScrollBox;                                            // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URichTextBlock*                                      MotdBodyText;                                            // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             MotdContainer;                                           // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          MotdDate;                                                // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_Widget_WebImage_C*                               MotdImage;                                               // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScaleBox*                                           MotdImageScaleBox;                                       // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_INSButton_C*                                     MotdLinkButton;                                          // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_ScrollingTextWidget_C*                           MotdTitle;                                               // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             UpdateInfoContainer;                                     // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          UpdateMessageBody;                                       // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_Widget_WebImage_C*                               UpdateMessageImage;                                      // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_ScrollingTextWidget_C*                           UpdateMessageTitle;                                      // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                BodyText;                                                // 0x0300(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                TitleText;                                               // 0x0318(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FString                                              ExternalLink;                                            // 0x0330(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		struct FMotdUpdateMessage                                  UpdateMessage;                                           // 0x0340(0x0068) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       bVisibleMotdContainer;                                   // 0x03A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bVisibleMessageImage;                                    // 0x03A9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_44JY[0x6];                                   // 0x03AA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBP_GenericDialog_C*                                 WaitingDialogWidget;                                     // 0x03B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBP_GenericDialog_C*                                 WaitingDialogWidgetUserPrivilege;                        // 0x03B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                ConfirmationText;                                        // 0x03C0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void OnRestrictionDialogClosed();
		void ReactOnPrivilageResult(EUserPrivilegeResult Privilege_Result);
		void CheckUserPrivileges();
		void Set_Navigation();
		struct FEventReply OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent);
		void SetUpdateInfo(const struct FMotdUpdateMessage& NewUpdateMessage);
		void InitDefaultUpdateInfo();
		void OnMotdReceived_895ACECF4668C5074215349445AF6748(const struct FMotdData& Motd);
		void BndEvt__MotdLinkButton_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature();
		void BndEvt__ReviewButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__CallToActionButton_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature();
		void OnPlatformConnectionStatusChangedDelegate_Event(bool bConnected);
		void Destruct();
		void BndEvt__CloseButton_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature();
		void Construct();
		void DisplayRestrictionDialog(EUserPrivilegeResult PrivilageRestriction);
		void ExecuteUbergraph_BP_MessageOfTheDay(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
