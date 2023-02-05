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
	 * BlueprintGeneratedClass GA_PlayMontageAndWaitForEventBase.GA_PlayMontageAndWaitForEventBase_C
	 * Size -> 0x0000 (FullSize[0x0560] - InheritedSize[0x0560])
	 */
	class UGA_PlayMontageAndWaitForEventBase_C : public UGA_PlayMontageAndWaitForEvent
	{
	public:
		void GetBBTargetActorToMonsterBase(bool* Result, class ABP_DCMonsterBaseWithOptions_C** DCMonsterBaseWithOptions);
		void GetBBTargetActorToCharacterBase(bool* Result, class ADCCharacterBase** AsDCCharacterBase);
		void GetBBTargetActor(bool* Result, class UObject** ReturnValue);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
