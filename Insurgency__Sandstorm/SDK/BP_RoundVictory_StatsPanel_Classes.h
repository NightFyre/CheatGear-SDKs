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
	 * WidgetBlueprintGeneratedClass BP_RoundVictory_StatsPanel.BP_RoundVictory_StatsPanel_C
	 * Size -> 0x0078 (FullSize[0x02A8] - InheritedSize[0x0230])
	 */
	class UBP_RoundVictory_StatsPanel_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetSwitcher*                                     DurationTextSwitcher;                                    // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          LevelLabel;                                              // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          ModeLabel;                                               // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          RoundDuration;                                           // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUniformGridPanel*                                   StatGridPanel;                                           // 0x0258(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_RoundVictory_StatsPanelEntry_C*                  StatKillDeaths;                                          // 0x0260(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_RoundVictory_StatsPanelEntry_C*                  StatObjCaptureTime;                                      // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_RoundVictory_StatsPanelEntry_C*                  StatObjsSecured;                                         // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_RoundVictory_StatsPanelEntry_C*                  StatPreferredClass;                                      // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_RoundVictory_StatsPanelEntry_C*                  StatWeaponOfChoice;                                      // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_RoundVictory_StatsPanelEntry_C*                  StatXPGained;                                            // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TypeLabel;                                               // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		int32_t                                                    LastStatPanelID;                                         // 0x0298(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsRoundPanel;                                           // 0x029C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_NCVB[0x3];                                   // 0x029D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTextBlock*                                          RoundDuration_1;                                         // 0x02A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnBackendReceivedXP(int32_t EarnedXP);
		void UpdateObjectivesCasptureTime(struct FGameStatsSummary* Summary);
		void UpdateObjectivesSecured(struct FGameStatsSummary* Summary);
		void UpdateKDR(struct FGameStatsSummary* Summary);
		void ClearStatPanels();
		void GetNextStatPanelColumn(int32_t* NewID);
		void AppendNewStatPanelText(const class FText& StatHeader, const class FText& CenterText, const class FText& StatFooter);
		void AppendNewStatPanelIcon(const class FText& StatHeader, class UTexture2D* Icon, const class FText& StatFooter);
		void UpdateMostUsedWeapon(struct FGameStatsSummary* Summary);
		void UpdateMostUsedClass(struct FGameStatsSummary* Summary);
		void Update_Top_Labels(int32_t LengthSeconds, const class FText& CategoryName, const class FText& GameModeName);
		void BuildPanel(const struct FGameStatsSummary& Summary, int32_t LengthSeconds, const class FText& CategoryName, const class FText& GameModeName);
		void Construct();
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_BP_RoundVictory_StatsPanel(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
