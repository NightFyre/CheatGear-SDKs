#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * WidgetBlueprintGeneratedClass UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C
	 * Size -> 0x0090 (FullSize[0x02F0] - InheritedSize[0x0260])
	 */
	class UUI_GameEventTeamInfoWidget_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBorder*                                             StatTextContainer;                                       // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             TeamHeader;                                              // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                          TeamRows;                                                // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_GameEventTeamHeaderWidget_C*                     HeaderWidget;                                            // 0x0280(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              ParticipantStatClass;                                    // 0x0288(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		struct FGameEventTeamColours                               TeamColours;                                             // 0x0290(0x0060) Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn

	public:
		void GetStatWidgetCount(int32_t* Count);
		void GetStatWidget(int32_t Index, class UGameEventParticipantStatsWidget** Widget);
		void SetTeamScore(float Score);
		void ClearWinCounters();
		void AddWinCounter();
		void RemoveStatWidget(class UGameEventParticipantStatsWidget* Widget);
		void AddStatWidget(class UGameEventParticipantStatsWidget* Widget);
		void AddHeader(class UUI_GameEventTeamHeaderWidget_C* Header);
		void Construct();
		void ExecuteUbergraph_UI_GameEventTeamInfoWidget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
