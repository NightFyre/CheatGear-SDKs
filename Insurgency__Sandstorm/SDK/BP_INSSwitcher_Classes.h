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
	 * WidgetBlueprintGeneratedClass BP_INSSwitcher.BP_INSSwitcher_C
	 * Size -> 0x00C8 (FullSize[0x02F8] - InheritedSize[0x0230])
	 */
	class UBP_INSSwitcher_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_PartyMemberContextMenuButton_C*                  BP_PlatformButtonFirst;                                  // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_PartyMemberContextMenuButton_C*                  BP_PlatformButtonSecond;                                 // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            ContextMenuArrowBox_2;                                   // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ExtendedClickImage_2;                                    // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image;                                                   // 0x0258(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Name;                                                    // 0x0260(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        PlatformOptionsBox;                                      // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FLinearColor                                        InactiveColor;                                           // 0x0270(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        ActiveColor;                                             // 0x0280(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                InFirstStateText;                                        // 0x0290(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		class FText                                                InSecondStateText;                                       // 0x02A8(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		bool                                                       bIsFirstSelected;                                        // 0x02C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_36L2[0x7];                                   // 0x02C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBP_MenuPartyWidget_C*                               BP_MenuPartyWidget;                                      // 0x02C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnPlatformSelected;                                      // 0x02D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FText                                                TitleText;                                               // 0x02E0(0x0018) Edit, BlueprintVisible, ExposeOnSpawn

	public:
		void PreConstruct(bool IsDesignTime);
		void BndEvt__BP_PlatformButtonSteam_K2Node_ComponentBoundEvent_3_OnCicked__DelegateSignature();
		void BndEvt__BP_PlatformButtonSecond_K2Node_ComponentBoundEvent_4_OnCicked__DelegateSignature();
		void ExecuteUbergraph_BP_INSSwitcher(int32_t EntryPoint);
		void OnPlatformSelected__DelegateSignature(const class FText& SelectedText);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
