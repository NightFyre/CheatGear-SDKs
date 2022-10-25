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
	 * WidgetBlueprintGeneratedClass BP_Widget_Scoreboard_PlayerBadge.BP_Widget_Scoreboard_PlayerBadge_C
	 * Size -> 0x01EA (FullSize[0x041A] - InheritedSize[0x0230])
	 */
	class UBP_Widget_Scoreboard_PlayerBadge_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USizeBox*                                            BotContainer;                                            // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USaberInvalidationBox*                               BotInvalidationBox;                                      // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_RankIcon_C*                                      BP_RankIcon;                                             // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USaberInvalidationBox*                               DevInvalidationBox;                                      // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            DevTagContainer;                                         // 0x0258(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     PlayerBadgeSwitcher;                                     // 0x0260(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             RankBorder;                                              // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            RankContainer;                                           // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USaberInvalidationBox*                               RankInvalidationBox;                                     // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          RankNumber;                                              // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          RankNumberOverlay;                                       // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             StartingRankBorder;                                      // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		int32_t                                                    PlayerExperience;                                        // 0x0298(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WJRW[0x4];                                   // 0x029C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              AssociatedPlayerState[0x28];                             // 0x02A0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       bAssignedRank;                                           // 0x02C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_U2HY[0x7];                                   // 0x02C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateColor                                         CurrentBorderColor;                                      // 0x02D0(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         RankColorGreen;                                          // 0x02F8(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         RankColorYellow;                                         // 0x0320(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         RankColorBronze;                                         // 0x0348(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         RankColorSilver;                                         // 0x0370(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         RankColorGold;                                           // 0x0398(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         RankColorDiamond;                                        // 0x03C0(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         RankColorPlatinum;                                       // 0x03E8(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      BorderAlphaFrac;                                         // 0x0410(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      StartingRankProgress;                                    // 0x0414(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsBot;                                                  // 0x0418(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsDev;                                                  // 0x0419(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void UpdateDevStatus(bool bNewDevStatus);
		void UpdateActiveWidget();
		void UpdateExperience(int32_t NewExperience);
		void SetRankColors();
		void SetRankNumberText();
		void GetRankNumber(int32_t* RankNumber);
		void SetDefaultsFromPlayerState();
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_BP_Widget_Scoreboard_PlayerBadge(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
