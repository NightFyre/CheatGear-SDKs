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
	 * BlueprintGeneratedClass GA_DrinkPotionActivateBase.GA_DrinkPotionActivateBase_C
	 * Size -> 0x0008 (FullSize[0x0590] - InheritedSize[0x0588])
	 */
	class UGA_DrinkPotionActivateBase_C : public UGA_ActivateItem_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0588(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void OnFinish_17D93366455B3BE35432FCBE8DFC6E4D();
		void Removed_B01C8A3D4B24EB4F232029A52296F212();
		void K2_OnEndAbility(bool bWasCancelled);
		void AbilityActivated(const struct FGameplayEventData& TriggerEventData);
		void ExecuteUbergraph_GA_DrinkPotionActivateBase(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
