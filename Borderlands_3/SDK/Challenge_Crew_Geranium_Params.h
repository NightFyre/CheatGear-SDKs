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
	 * Function Challenge_Crew_Geranium.Challenge_Crew_Geranium_C.PlayActivationAudio
	 */
	struct UChallenge_Crew_Geranium_C_PlayActivationAudio_Params
	{	};

	/**
	 * Function Challenge_Crew_Geranium.Challenge_Crew_Geranium_C.ShowTutorialPopup
	 */
	struct UChallenge_Crew_Geranium_C_ShowTutorialPopup_Params
	{
	public:
		class UGameInstance*                                       GameInstance;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AOakPlayerController*                                TargetPlayer;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       NewParam;                                                // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VJBI[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Challenge_Crew_Geranium.Challenge_Crew_Geranium_C.PlayCompletionAudio
	 */
	struct UChallenge_Crew_Geranium_C_PlayCompletionAudio_Params
	{
	public:
		class AGbxPlayerController*                                CompletedPlayer;                                         // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       PlayedAudio;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_73MC[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Challenge_Crew_Geranium.Challenge_Crew_Geranium_C.OnInitChallengeInstance
	 */
	struct UChallenge_Crew_Geranium_C_OnInitChallengeInstance_Params
	{
	public:
		class UChallengesComponent*                                OwningChallenges;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AGbxCharacter*                                       AssociatedCharacter;                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Challenge_Crew_Geranium.Challenge_Crew_Geranium_C.OnChallengeActivated
	 */
	struct UChallenge_Crew_Geranium_C_OnChallengeActivated_Params
	{	};

	/**
	 * Function Challenge_Crew_Geranium.Challenge_Crew_Geranium_C.CompletedChallenge
	 */
	struct UChallenge_Crew_Geranium_C_CompletedChallenge_Params
	{
	public:
		class AGbxPlayerController*                                CompletedPlayer;                                         // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Challenge_Crew_Geranium.Challenge_Crew_Geranium_C.ExecuteUbergraph_Challenge_Crew_Geranium
	 */
	struct UChallenge_Crew_Geranium_C_ExecuteUbergraph_Challenge_Crew_Geranium_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
