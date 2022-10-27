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
	 * WidgetBlueprintGeneratedClass WBP_DeathOptions.WBP_DeathOptions_C
	 * Size -> 0x0098 (FullSize[0x02F8] - InheritedSize[0x0260])
	 */
	class UWBP_DeathOptions_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UButton*                                             Button_ReadyRoom;                                        // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Button_Respawn;                                          // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Button_Spectate;                                         // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SizeBox_Buttons;                                         // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_ExpiredMessage;                                // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_Respawn;                                       // 0x0290(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                Respawn;                                                 // 0x0298(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                Retry;                                                   // 0x02B0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                ResettingForPlay;                                        // 0x02C8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                HeadingBackToReadyRoom;                                  // 0x02E0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		class FText Get_Button_ReadyRoom_ToolTipText_1();
		class FText Get_Button_Spectate_ToolTipText_1();
		class FText Get_Button_Respawn_Tool_Tip_Text();
		void AnyLiving(TArray<class AGBPlayerState*>* Array, bool* bOutSomeoneIsAlive);
		struct FSlateColor Get_TextBlock_Respawn_ColorAndOpacity_1();
		bool GetRespawnIsEnabled();
		class FText GetRespawnText();
		ESlateVisibility GetRespawnVisibility();
		void Construct();
		void BndEvt__Button_Respawn_K2Node_ComponentBoundEvent_1012_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__Button_Spectate_K2Node_ComponentBoundEvent_690_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__Button_ReadyRoom_K2Node_ComponentBoundEvent_710_OnButtonClickedEvent__DelegateSignature();
		void Close();
		void ValidateRespawnButton();
		void ValidateReadyRoomButton();
		void ValidateSpectateButton();
		void BindToPlayerControllerState();
		void OnPlayerControllerStateChanged_Event_1(const class FName& OldState, const class FName& NewState);
		void EnableTooltips();
		void ExecuteUbergraph_WBP_DeathOptions(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
