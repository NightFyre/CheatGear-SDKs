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
	 * BlueprintGeneratedClass GA_PotionConsumeBase.GA_PotionConsumeBase_C
	 * Size -> 0x0010 (FullSize[0x0638] - InheritedSize[0x0628])
	 */
	class UGA_PotionConsumeBase_C : public UGA_ItemConsume_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0628(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ABP_DrinkPotionActor_C*                              DrinkPotionActor;                                        // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void K2_OnEndAbility(bool bWasCancelled);
		void AbilityActivated(const struct FGameplayEventData& TriggerEventData);
		void OnConsumeStartEventReceived(float ConsumeDuration);
		void OnConsumeEndEventReceived();
		void ExecuteUbergraph_GA_PotionConsumeBase(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
