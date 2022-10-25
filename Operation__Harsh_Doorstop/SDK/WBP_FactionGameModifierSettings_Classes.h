#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * WidgetBlueprintGeneratedClass WBP_FactionGameModifierSettings.WBP_FactionGameModifierSettings_C
	 * Size -> 0x0040 (FullSize[0x0270] - InheritedSize[0x0230])
	 */
	class UWBP_FactionGameModifierSettings_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWBP_ModifierSetting_ComboBox_C*                     FactionBlufor;                                           // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_ModifierSetting_ComboBox_C*                     FactionOpfor;                                            // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_GameModifierSettingsSection_C*                  SectionContainer;                                        // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_ModifierSetting_Numeric_C*                      TicketCountBlufor;                                       // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_ModifierSetting_Numeric_C*                      TicketCountOpfor;                                        // 0x0258(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<struct FPrimaryAssetId>                             SelectableFactionAssetIds;                               // 0x0260(0x0010) Edit, BlueprintVisible, Transient, DisableEditOnInstance, HasGetValueTypeHash

	public:
		void GetTravelURLOptions(class FString* Options);
		void IsEnabled(bool* bEnabled);
		void BuildTicketCountURLOption(EHDTeam Team, int32_t Count, class FString* Pair);
		void BuildFactionURLOption(EHDTeam Team, const class FName& PackageName, class FString* Pair);
		void Completed_7DC7FCB348F23B6EEE29D0A8EBA2EF94(TArray<class UClass*> Loaded);
		void SetupModifier(class UWBP_OptionMenu_CreateGame_C* ParentMenu);
		void Destruct();
		void ExecuteUbergraph_WBP_FactionGameModifierSettings(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
