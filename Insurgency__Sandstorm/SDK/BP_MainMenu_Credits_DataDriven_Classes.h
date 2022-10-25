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
	 * WidgetBlueprintGeneratedClass BP_MainMenu_Credits_DataDriven.BP_MainMenu_Credits_DataDriven_C
	 * Size -> 0x00E0 (FullSize[0x0310] - InheritedSize[0x0230])
	 */
	class UBP_MainMenu_Credits_DataDriven_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_KeyActionButton_C*                               BackButton;                                              // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_KeyActionButton_C*                               BackButton_2;                                            // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_KeyActionButton_C*                               BackButton_3;                                            // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_KeyActionButton_C*                               BackButton_4;                                            // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        CreditContainer;                                         // 0x0258(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                          CreditsScrollBox;                                        // 0x0260(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Logo;                                                    // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USafeZone*                                           SafeZone_5;                                              // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          VersionNumberText;                                       // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              VivoxHorizontalLogo;                                     // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnNavigateBack;                                          // 0x0288(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		float                                                      ScrollAccumulator;                                       // 0x0298(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AutoScrollSpeed;                                         // 0x029C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PreScrollTime;                                           // 0x02A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ScrollElapsedTime;                                       // 0x02A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bManualScroll;                                           // 0x02A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZI7J[0x7];                                   // 0x02A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDataTable*                                          Data;                                                    // 0x02B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<class FString, class UDataTable*>                     Map_VersionCredit;                                       // 0x02B8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      TimeSinceManualScroll;                                   // 0x0308(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AutoScrollResumeTime;                                    // 0x030C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void CreateSplitRowListFromStrings(TArray<class FString>* Names);
		void StringArrayToText(TArray<class FString>* String, TArray<class FText>* Text);
		void CreatePersonelList(TArray<class FString>* Names, TArray<class FString>* Roles, bool bUseRoles);
		void CreateSubHeaderFromString(const class FString& Header);
		void CreateHeaderFromString(const class FString& Header);
		void PopulateCreditFromVersion(const class FString& Version, const class FText& DisplayText);
		struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		struct FEventReply OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent);
		void ResetScroll();
		void OnPageSelected(EnumMainMenuPage NewPage);
		void BndEvt__CreditsScrollBox_K2Node_ComponentBoundEvent_1_OnUserScrolledEvent__DelegateSignature(float CurrentOffset);
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature();
		void Construct();
		void ExecuteUbergraph_BP_MainMenu_Credits_DataDriven(int32_t EntryPoint);
		void OnNavigateBack__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
