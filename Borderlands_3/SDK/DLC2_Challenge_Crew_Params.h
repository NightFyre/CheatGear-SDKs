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
	 * Function DLC2_Challenge_Crew.DLC2_Challenge_Crew_C.ShowInvalidOwnerMessage
	 */
	struct UDLC2_Challenge_Crew_C_ShowInvalidOwnerMessage_Params
	{	};

	/**
	 * Function DLC2_Challenge_Crew.DLC2_Challenge_Crew_C.PlayActivationAudio
	 */
	struct UDLC2_Challenge_Crew_C_PlayActivationAudio_Params
	{	};

	/**
	 * Function DLC2_Challenge_Crew.DLC2_Challenge_Crew_C.ShowTutorialPopup
	 */
	struct UDLC2_Challenge_Crew_C_ShowTutorialPopup_Params
	{
	public:
		class UGameInstance*                                       GameInstance;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AOakPlayerController*                                TargetPlayer;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DLC2_Challenge_Crew.DLC2_Challenge_Crew_C.PlayCompletionAudio
	 */
	struct UDLC2_Challenge_Crew_C_PlayCompletionAudio_Params
	{
	public:
		class AGbxPlayerController*                                InputPin;                                                // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       PlayedAudio;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Y3VB[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DLC2_Challenge_Crew.DLC2_Challenge_Crew_C.OnInitChallengeInstance
	 */
	struct UDLC2_Challenge_Crew_C_OnInitChallengeInstance_Params
	{
	public:
		class UChallengesComponent*                                OwningChallenges;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AGbxCharacter*                                       AssociatedCharacter;                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DLC2_Challenge_Crew.DLC2_Challenge_Crew_C.OnChallengeActivated
	 */
	struct UDLC2_Challenge_Crew_C_OnChallengeActivated_Params
	{	};

	/**
	 * Function DLC2_Challenge_Crew.DLC2_Challenge_Crew_C.CompletedChallenge
	 */
	struct UDLC2_Challenge_Crew_C_CompletedChallenge_Params
	{
	public:
		class AGbxPlayerController*                                CompletedPlayer;                                         // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DLC2_Challenge_Crew.DLC2_Challenge_Crew_C.ExecuteUbergraph_DLC2_Challenge_Crew
	 */
	struct UDLC2_Challenge_Crew_C_ExecuteUbergraph_DLC2_Challenge_Crew_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
