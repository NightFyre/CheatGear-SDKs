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
	 * WidgetBlueprintGeneratedClass BP_MainMenu_LanguagePanel.BP_MainMenu_LanguagePanel_C
	 * Size -> 0x0029 (FullSize[0x02B1] - InheritedSize[0x0288])
	 */
	class UBP_MainMenu_LanguagePanel_C : public UMainMenuPanelWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0288(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_LanguageSelect_C*                                BP_LanguageSelect;                                       // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     WidgetSwitcher_1;                                        // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnContinue;                                              // 0x02A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       IsNewCulture;                                            // 0x02B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		void BndEvt__BP_LanguageSelect_K2Node_ComponentBoundEvent_1_LanguageApplied__DelegateSignature(bool IsNewCulture);
		void ExecuteUbergraph_BP_MainMenu_LanguagePanel(int32_t EntryPoint);
		void OnContinue__DelegateSignature(bool IsNewCulture);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
