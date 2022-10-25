#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * WidgetBlueprintGeneratedClass UI_TabModeTabsContainer.UI_TabModeTabsContainer_C
	 * Size -> 0x0048 (FullSize[0x02A8] - InheritedSize[0x0260])
	 */
	class UUI_TabModeTabsContainer_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UUI_TabModeTab_C*                                    CraftingTab;                                             // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_TabModeTab_C*                                    EventsTab;                                               // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_TabModeTab_C*                                    InventoryTab;                                            // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_TabModeTab_C*                                    JournalTab;                                              // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_TabModeTab_C*                                    MetabolismTab;                                           // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_TabModeTab_C*                                    SquadTab;                                                // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<class UUI_TabModeTab_C*>                            Tabs;                                                    // 0x0298(0x0010) Edit, BlueprintVisible, ContainsInstancedReference

	public:
		void SetTabAlerted(int32_t Index, bool Alerted);
		void GetTabFromTabMode(ETabMode Tab, class UUI_TabModeTab_C** Result);
		void SetTabEnabled(ETabMode Tab, bool Enabled);
		void OpenSpecifiedTab(class UUI_TabModeTab_C* Tab, ETabMode tabMode);
		void SelectTab(int32_t Index);
		void Construct();
		void BndEvt__UI_TabModeTab_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature();
		void BndEvt__UI_TabModeTab_0_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature();
		void BndEvt__UI_TabModeTab_1_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature();
		void BndEvt__CraftingTab_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature();
		void BndEvt__JournalTab_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature();
		void BndEvt__SquadTab_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature();
		void ExecuteUbergraph_UI_TabModeTabsContainer(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
