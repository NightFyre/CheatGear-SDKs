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
	 * WidgetBlueprintGeneratedClass BP_MainMenu_AnnouncementPanel.BP_MainMenu_AnnouncementPanel_C
	 * Size -> 0x0034 (FullSize[0x02BC] - InheritedSize[0x0288])
	 */
	class UBP_MainMenu_AnnouncementPanel_C : public UMainMenuPanelWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0288(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetSwitcher*                                     AnnouncementSwitcher;                                    // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_PatchNotification_C*                             BP_PatchNotification;                                    // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_ReportNotification_C*                            BP_ReportNotification;                                   // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnContinue;                                              // 0x02A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		float                                                      WorldTimeShown;                                          // 0x02B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void DidUserClickLink(bool* ClickedLink);
		void GetTimeShown(float* TimeShown);
		void OnMadeVisible();
		void SwitchToReportNotification(const struct FGetAccountStatusResult& AccountStatus);
		void BuildDataFromPopupData(const struct FMotdData& Data);
		void BndEvt__BP_PatchNotification_K2Node_ComponentBoundEvent_0_OnContinue__DelegateSignature();
		void BndEvt__BP_ReportNotification_K2Node_ComponentBoundEvent_3_OnContinue__DelegateSignature();
		void OnUserContinue();
		void ExecuteUbergraph_BP_MainMenu_AnnouncementPanel(int32_t EntryPoint);
		void OnContinue__DelegateSignature(bool bFromNewsAnnouncement, float TimeOnScreen, bool bClickedLink);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
