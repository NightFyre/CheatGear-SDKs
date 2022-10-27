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
	 * WidgetBlueprintGeneratedClass BP_AdminGameMenu.BP_AdminGameMenu_C
	 * Size -> 0x0038 (FullSize[0x0268] - InheritedSize[0x0230])
	 */
	class UBP_AdminGameMenu_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_OptionsHeading_C*                                BP_OptionsHeading;                                       // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_INSButton_C*                                     CopyPlayers;                                             // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_INSButton_C*                                     EndGameButton;                                           // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_INSButton_C*                                     RestartLevel;                                            // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_INSButton_C*                                     RestartRoundButton;                                      // 0x0258(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_INSButton_C*                                     SwapTeamsButton;                                         // 0x0260(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void GetPlayers(class FString* CSV_Players);
		void BndEvt__RestartRoundButton_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature();
		void BndEvt__SwapTeamsButton_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature();
		void BndEvt__EndGameButton_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature();
		void BndEvt__RestartLevel_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature();
		void BndEvt__CopyPlayers_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature();
		void ExecuteUbergraph_BP_AdminGameMenu(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
