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
	 * WidgetBlueprintGeneratedClass WB_MenuOptionPopup.WB_MenuOptionPopup_C
	 * Size -> 0x0038 (FullSize[0x0348] - InheritedSize[0x0310])
	 */
	class UWB_MenuOptionPopup_C : public UGameMenuOptionPopupWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0310(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UInvalidationBox*                                    InvalidationBox_152;                                     // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_Desc;                                                // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VBox_Btns;                                               // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                DefaultDetailText;                                       // 0x0330(0x0018) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void RefreshDetailText(int32_t InValue);
		void UpdateDetailText(const class FText& InDetailText);
		void UpdateButtonText(const class FText& InLeftText, const class FText& InRightText);
		void ExecuteUbergraph_WB_MenuOptionPopup(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
