#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * WidgetBlueprintGeneratedClass WBP_InGameMenu_AdminDropDown.WBP_InGameMenu_AdminDropDown_C
	 * Size -> 0x0068 (FullSize[0x02C8] - InheritedSize[0x0260])
	 */
	class UWBP_InGameMenu_AdminDropDown_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UButton*                                             Button_Combo;                                            // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_3;                                                 // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMenuAnchor*                                         MenuAnchor_Content;                                      // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<class FString>                                      QuickAdminCommands;                                      // 0x0280(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      AdminCommands;                                           // 0x0290(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FString                                              CommandToExecute;                                        // 0x02A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		TArray<class FString>                                      ValidCommands;                                           // 0x02B0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FName                                                AdminCommandsRequestType;                                // 0x02C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		class UUserWidget* OnGetUserMenuContent_1();
		class UWidget* GetToolTipWidget_1();
		void Construct();
		void BndEvt__Button_Combo_K2Node_ComponentBoundEvent_584_OnButtonClickedEvent__DelegateSignature();
		void SetupContent(class UWBP_ComboBox_Content_C* MenuDropdownContent);
		void OnIndexChanged_Event(int32_t Index);
		void OnAdminRequestFilled_Event(const struct FZKReplicatedContent& Content);
		void ExecuteUbergraph_WBP_InGameMenu_AdminDropDown(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
