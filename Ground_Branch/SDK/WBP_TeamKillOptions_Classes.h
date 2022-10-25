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
	 * WidgetBlueprintGeneratedClass WBP_TeamKillOptions.WBP_TeamKillOptions_C
	 * Size -> 0x00E0 (FullSize[0x0340] - InheritedSize[0x0260])
	 */
	class UWBP_TeamKillOptions_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UButton*                                             Button_Forgive;                                          // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Button_Report;                                           // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      HorizontalBox_Buttons;                                   // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_830;                                               // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_5;                                             // 0x0288(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_Message;                                       // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_PrevCount;                                     // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_TeamKillerName;                                // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_TeamKillerName_3;                              // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                PlayerNameTeamKilledYou;                                 // 0x02B0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                PrevCountMessage;                                        // 0x02C8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                Forgive;                                                 // 0x02E0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                YouHaveForgivenPlayerName;                               // 0x02F8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                Report;                                                  // 0x0310(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                YouHaveReportedPlayerName;                               // 0x0328(0x0018) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void BndEvt__Button_Forgive_K2Node_ComponentBoundEvent_85_OnButtonClickedEvent__DelegateSignature();
		void ShowMessage(const class FText& InText);
		void BndEvt__Button_Report_K2Node_ComponentBoundEvent_81_OnButtonClickedEvent__DelegateSignature();
		void Init();
		void ExecuteUbergraph_WBP_TeamKillOptions(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
