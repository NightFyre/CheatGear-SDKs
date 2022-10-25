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
	 * WidgetBlueprintGeneratedClass WBP_QuickPlayerAdmin.WBP_QuickPlayerAdmin_C
	 * Size -> 0x0140 (FullSize[0x03A0] - InheritedSize[0x0260])
	 */
	class UWBP_QuickPlayerAdmin_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UButton*                                             Button_Combo;                                            // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_3;                                                 // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMenuAnchor*                                         MenuAnchor_Content;                                      // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                QuickPlayerAdminTooltip;                                 // 0x0280(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      QuickPlayerAdminCommands;                                // 0x0298(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FString                                              CommandToExecute;                                        // 0x02A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              PlayerName;                                              // 0x02B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              UniqueId;                                                // 0x02C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		TArray<class FString>                                      ValidCommands;                                           // 0x02D8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FString                                              BanReason;                                               // 0x02E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		int32_t                                                    BanDuration;                                             // 0x02F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CMHH[0x4];                                   // 0x02FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                BanReasonTitle;                                          // 0x0300(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                BanDurationTitle;                                        // 0x0318(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                BanDurationMessage;                                      // 0x0330(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                KickReasonTitle;                                         // 0x0348(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                NeedReasonMessage;                                       // 0x0360(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FString                                              KickReason;                                              // 0x0378(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FText                                                NeedReasonTitle;                                         // 0x0388(0x0018) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		class UUserWidget* On_Get_User_Menu_Content();
		class UWidget* GetToolTipWidget_1();
		void OnGetMenuContent_1();
		void Construct();
		void BndEvt__Button_Combo_K2Node_ComponentBoundEvent_584_OnButtonClickedEvent__DelegateSignature();
		void SetupContent(class UWBP_ComboBox_Content_C* MenuDropdownContent);
		void OnIndexChanged_Event(int32_t Index);
		void BndEvt__MenuAnchor_Content_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);
		void OnBanReason_Event(const class FString& Filename);
		void OnBanDuration_Event(const class FString& Filename);
		void BanPlayer();
		void KickPlayer();
		void OnKickReason_Event(const class FString& Filename);
		void OnNoKickReason_Event(class UWBP_DialogueBox_C* Dialogue);
		void ExecuteUbergraph_WBP_QuickPlayerAdmin(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
