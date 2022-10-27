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
	 * WidgetBlueprintGeneratedClass WBP_SpectatorButton_PlayerNamePlates.WBP_SpectatorButton_PlayerNamePlates_C
	 * Size -> 0x0070 (FullSize[0x02D0] - InheritedSize[0x0260])
	 */
	class UWBP_SpectatorButton_PlayerNamePlates_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UButton*                                             Button_PlayerNamePlates;                                 // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_2;                                             // 0x0270(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                ShowPlayerNames;                                         // 0x0278(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                HidePlayerNames;                                         // 0x0290(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       bShowPlayerNames;                                        // 0x02A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SQN4[0x7];                                   // 0x02A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AGBPlayerState*>                              PlayerList;                                              // 0x02B0(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		class FString                                              PlayerNamesConfigKey;                                    // 0x02C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash

	public:
		class FText Get_TextBlock_1_Text_1();
		void BndEvt__Button_Respawn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void Construct();
		void OnUpdate_Event_1(class UWBP_Spectator_Overlay_C* SpectatorOverlay);
		void ExecuteUbergraph_WBP_SpectatorButton_PlayerNamePlates(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
