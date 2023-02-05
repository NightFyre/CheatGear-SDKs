#pragma once

/**
 * Name: Dark_and_Darker
 * Version: Playtest_3_Hotfix_1
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
	 * BlueprintGeneratedClass GA_PlayerSpellCast.GA_PlayerSpellCast_C
	 * Size -> 0x0010 (FullSize[0x0798] - InheritedSize[0x0788])
	 */
	class UGA_PlayerSpellCast_C : public UGA_PlayerSpellCastBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0788(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAbilityTask_WaitTargetData*                         WaitTargetDataTask;                                      // 0x0790(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void CheckGround(const struct FHitResult& HtResult, bool* Result);
		void Cancelled_BD46902F414FE76022DDE5BE621487B9(const struct FGameplayAbilityTargetDataHandle& Data);
		void ValidData_BD46902F414FE76022DDE5BE621487B9(const struct FGameplayAbilityTargetDataHandle& Data);
		void AbilityActivated(const struct FGameplayEventData& TriggerEventData);
		void CastingFinishEvent(const struct FDesignDataSpell& CurentDesignSpellData);
		void SpellFireEvent();
		void ExecuteUbergraph_GA_PlayerSpellCast(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
