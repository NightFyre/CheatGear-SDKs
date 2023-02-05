#pragma once

/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
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
	 * WidgetBlueprintGeneratedClass WB_ClassTabMenu.WB_ClassTabMenu_C
	 * Size -> 0x0031 (FullSize[0x0331] - InheritedSize[0x0300])
	 */
	class UWB_ClassTabMenu_C : public UClassTabMenuWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0300(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWB_ClassTabBtn_C*                                   ClassTabMenuBtnLevel;                                    // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_ClassTabBtn_C*                                   ClassTabMenuBtnPerkandSkill;                             // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_ClassTabBtn_C*                                   ClassTabMenuBtnSpell;                                    // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_TabWingLeft_S_C*                                 WB_TabWingLeft_S;                                        // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_TabWingRight_S_C*                                WB_TabWingRight_S;                                       // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		EWidgetClassGroupType                                      LastSelectedTap;                                         // 0x0330(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Construct();
		void TapMenuPerkandSkillButtonClicked();
		void UpdateTapMenuSwitch(EWidgetClassGroupType CurrentTapType);
		void TapMenuLevelButtonClicked();
		void TapMenuSpellButtonClicked();
		void OnLobbyCharacterInfoUpdated_BP(const struct FPrimaryAssetId& CharacterClassId);
		void ExecuteUbergraph_WB_ClassTabMenu(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
