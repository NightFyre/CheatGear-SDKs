#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function Challenge_Crew_DLC1.Challenge_Crew_DLC1_C.PlayActivationAudio
	 */
	struct UChallenge_Crew_DLC1_C_PlayActivationAudio_Params
	{	};

	/**
	 * Function Challenge_Crew_DLC1.Challenge_Crew_DLC1_C.ShowTutorialPopup
	 */
	struct UChallenge_Crew_DLC1_C_ShowTutorialPopup_Params
	{
	public:
		class UGameInstance*                                       GameInstance;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AOakPlayerController*                                TargetPlayer;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Challenge_Crew_DLC1.Challenge_Crew_DLC1_C.PlayCompletionAudio
	 */
	struct UChallenge_Crew_DLC1_C_PlayCompletionAudio_Params
	{
	public:
		class AGbxPlayerController*                                InputPin;                                                // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       PlayedAudio;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XCLU[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Challenge_Crew_DLC1.Challenge_Crew_DLC1_C.OnInitChallengeInstance
	 */
	struct UChallenge_Crew_DLC1_C_OnInitChallengeInstance_Params
	{
	public:
		class UChallengesComponent*                                OwningChallenges;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AGbxCharacter*                                       AssociatedCharacter;                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Challenge_Crew_DLC1.Challenge_Crew_DLC1_C.OnChallengeActivated
	 */
	struct UChallenge_Crew_DLC1_C_OnChallengeActivated_Params
	{	};

	/**
	 * Function Challenge_Crew_DLC1.Challenge_Crew_DLC1_C.CompletedChallenge
	 */
	struct UChallenge_Crew_DLC1_C_CompletedChallenge_Params
	{
	public:
		class AGbxPlayerController*                                CompletedPlayer;                                         // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Challenge_Crew_DLC1.Challenge_Crew_DLC1_C.ExecuteUbergraph_Challenge_Crew_DLC1
	 */
	struct UChallenge_Crew_DLC1_C_ExecuteUbergraph_Challenge_Crew_DLC1_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VF8C[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
