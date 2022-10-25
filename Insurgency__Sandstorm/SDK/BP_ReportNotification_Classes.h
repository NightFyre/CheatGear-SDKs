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
	 * WidgetBlueprintGeneratedClass BP_ReportNotification.BP_ReportNotification_C
	 * Size -> 0x00A0 (FullSize[0x02D0] - InheritedSize[0x0230])
	 */
	class UBP_ReportNotification_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_KeyActionButton_C*                               AcceptBtn;                                               // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_KeyActionButton_C*                               ComunityGuideLinesBtn;                                   // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_FeaturesPopUp_C*                                 WarningPopup;                                            // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnContinue;                                              // 0x0250(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bViewedCommunityGuidelines;                              // 0x0260(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DZ8U[0x7];                                   // 0x0261(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<unsigned char, class FText>                           Categories;                                              // 0x0268(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                NewVar_1;                                                // 0x02B8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void ReportReasonToText(unsigned char ForCategory, class FText* OutText);
		void UpdateTextBasedOnAccountStatus(const struct FGetAccountStatusResult& AccountStatus);
		struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		void BndEvt__AcceptBtn_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature();
		void BndEvt__ComunityGuideLinesBtn_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature();
		void OpenLink();
		void ExecuteUbergraph_BP_ReportNotification(int32_t EntryPoint);
		void OnContinue__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
