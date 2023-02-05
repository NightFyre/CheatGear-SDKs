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
	 * WidgetBlueprintGeneratedClass WB_ClassSpellCurrentSkill.WB_ClassSpellCurrentSkill_C
	 * Size -> 0x0028 (FullSize[0x0370] - InheritedSize[0x0348])
	 */
	class UWB_ClassSpellCurrentSkill_C : public UClassSpellSkillListWidgetBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0348(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWB_SpellSkillSlotInventory_C*                       WB_SpellSkillSlotInventory_6;                            // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_SpellSkillSlotInventory_C*                       WB_SpellSkillSlotInventory_7;                            // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<class UWB_SpellSkillSlotInventory_C*>               SkillSlotArray;                                          // 0x0360(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference

	public:
		void OnInitialized();
		void OnFMsgWidgetClassLevelNotifyBlueprint(const struct FMsgWidgetClassLevelNotify& InMsg);
		void OnFMsgWidgetClassSlotUnLockLevelNotifyBlueprint(const struct FMsgWidgetClassSlotUnLockLevelNotify& InMsg);
		void ExecuteUbergraph_WB_ClassSpellCurrentSkill(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
