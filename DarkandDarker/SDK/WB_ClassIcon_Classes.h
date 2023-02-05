#pragma once

/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
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
	 * WidgetBlueprintGeneratedClass WB_ClassIcon.WB_ClassIcon_C
	 * Size -> 0x0050 (FullSize[0x0348] - InheritedSize[0x02F8])
	 */
	class UWB_ClassIcon_C : public UClassIconWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02F8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UButton*                                             Btn_ClassTab;                                            // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Img_BtnPress;                                            // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Img_Hover;                                               // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Img_Icon;                                                // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Img_Selected;                                            // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_SmallTooltip_C*                                  WbSmallToolTip;                                          // 0x0328(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                TooltipDescription;                                      // 0x0330(0x0018) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		class UWidget* Get_Overlay_ToolTipWidget_1();
		void Construct();
		void BndEvt__WB_ClassTabBtn_Btn_ClassTab_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__WB_ClassTabBtn_Btn_ClassTab_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
		void BndEvt__WB_ClassTabBtn_Btn_ClassTab_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__WB_ClassTabBtn_Btn_ClassTab_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__WB_ClassTabBtn_Btn_ClassTab_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
		void OnListItemObjectSet(class UObject* ListItemObject);
		void OnLoadArtData(class UObject* InObjectLoaded);
		void OnCreateSmallToolTip();
		void BP_OnItemSelectionChanged(bool bIsSelected);
		void ExecuteUbergraph_WB_ClassIcon(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
