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
	 * BlueprintGeneratedClass GA_Landed.GA_Landed_C
	 * Size -> 0x0008 (FullSize[0x0560] - InheritedSize[0x0558])
	 */
	class UGA_Landed_C : public UDCGameplayAbilityBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0558(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void OnFinish_1D94117B47876F23FCCE87B3AE08DF1B();
		void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
		void ExecuteUbergraph_GA_Landed(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
