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
	 * Class PerceptionExtension.PerceptionExtensionBPLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPerceptionExtensionBPLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_SetVisionAngle(class UAIPerceptionComponent* Perception, float VisionAngle);
		bool STATIC_SetUseLoSHearing(class UAIPerceptionComponent* Perception, bool UseLoSHearing);
		bool STATIC_SetSightRange(class UAIPerceptionComponent* Perception, float SightRange);
		bool STATIC_SetMaxAge(class UAIPerceptionComponent* Perception, class UClass* SenseClass, float MaxAge);
		bool STATIC_SetLoSHearingRange(class UAIPerceptionComponent* Perception, float LoSHearingRange);
		bool STATIC_SetLoseSightRange(class UAIPerceptionComponent* Perception, float LoseSightRange);
		bool STATIC_SetHearingRange(class UAIPerceptionComponent* Perception, float HearingRange);
		bool STATIC_SetDominantSense(class UAIPerceptionComponent* Perception, class UClass* SenseClass);
		bool STATIC_SetDetectionByAffiliation(class UAIPerceptionComponent* Perception, class UClass* SenseClass, bool DetectEnemies, bool DetectNeutrals, bool DetectFriendlies);
		float STATIC_GetVisionAngle(class UAIPerceptionComponent* Perception);
		bool STATIC_GetUseLoSHearing(class UAIPerceptionComponent* Perception);
		float STATIC_GetSightRange(class UAIPerceptionComponent* Perception);
		float STATIC_GetMaxAge(class UAIPerceptionComponent* Perception, class UClass* SenseClass);
		float STATIC_GetLoSHearingRange(class UAIPerceptionComponent* Perception);
		float STATIC_GetLoseSightRange(class UAIPerceptionComponent* Perception);
		float STATIC_GetHearingRange(class UAIPerceptionComponent* Perception);
		class UClass* STATIC_GetDominantSense(class UAIPerceptionComponent* Perception);
		struct FAISenseAffiliationFilter STATIC_GetDetectionByAffiliation(class UAIPerceptionComponent* Perception, class UClass* SenseClass);
		bool STATIC_ForgetAll(class UAIPerceptionComponent* Perception);
		bool STATIC_ForgetActor(class UAIPerceptionComponent* Perception, class AActor* Actor);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
