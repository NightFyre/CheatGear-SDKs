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
	 * WidgetBlueprintGeneratedClass BP_Profile_Stats_WeaponsItem.BP_Profile_Stats_WeaponsItem_C
	 * Size -> 0x0150 (FullSize[0x0380] - InheritedSize[0x0230])
	 */
	class UBP_Profile_Stats_WeaponsItem_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UButton*                                             Button_1;                                                // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          ItemAccuracy;                                            // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          ItemAssists;                                             // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          ItemHeadshots;                                           // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ItemIcon;                                                // 0x0258(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          ItemKills;                                               // 0x0260(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          ItemName;                                                // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          ItemShots;                                               // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          ItemTime;                                                // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		int32_t                                                    ItemIndex;                                               // 0x0280(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_TMA9[0x4];                                   // 0x0284(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FStatisticsPlayerWeaponStats                        WeaponStatsRecord;                                       // 0x0288(0x00A8) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<class FString, class FText>                           WeaponAliases;                                           // 0x0330(0x0050) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		void GetWeaponName(const class FString& WeaponNameString, class FText* LocalizedWeaponTextName, class FText* LocalizedWeaponTextDescription);
		void UpdateFromStatRecord(struct FStatisticsPlayerWeaponStats* WeaponStat);
		struct FLinearColor GetBrushColor_1();
		void OnLoaded_279241074EC8FA141D202CAB3BD10C32(class UObject* Loaded);
		void LoadWeaponIcon(const class FString& WeaponName);
		void ExecuteUbergraph_BP_Profile_Stats_WeaponsItem(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
