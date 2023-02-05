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
	 * BlueprintGeneratedClass GA_ActivateItem.GA_ActivateItem_C
	 * Size -> 0x0008 (FullSize[0x0588] - InheritedSize[0x0580])
	 */
	class UGA_ActivateItem_C : public UGA_ActivateItemBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0580(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void AbilityActivated(const struct FGameplayEventData& TriggerEventData);
		void ExecuteUbergraph_GA_ActivateItem(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
