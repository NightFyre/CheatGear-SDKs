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
	 * Function BP_Challenge_ValentinesDayEvent_Tier1.BP_Challenge_ValentinesDayEvent_Tier1_C.PlayCompletionAudio
	 */
	struct UBP_Challenge_ValentinesDayEvent_Tier1_C_PlayCompletionAudio_Params
	{
	public:
		class AGbxPlayerController*                                InputPin;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       PlayedAudio;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Challenge_ValentinesDayEvent_Tier1.BP_Challenge_ValentinesDayEvent_Tier1_C.OnInitChallengeInstance
	 */
	struct UBP_Challenge_ValentinesDayEvent_Tier1_C_OnInitChallengeInstance_Params
	{
	public:
		class UChallengesComponent*                                OwningChallenges;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AGbxCharacter*                                       AssociatedCharacter;                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Challenge_ValentinesDayEvent_Tier1.BP_Challenge_ValentinesDayEvent_Tier1_C.CompletedChallenge
	 */
	struct UBP_Challenge_ValentinesDayEvent_Tier1_C_CompletedChallenge_Params
	{
	public:
		class AGbxPlayerController*                                CompletedPlayer;                                         // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Challenge_ValentinesDayEvent_Tier1.BP_Challenge_ValentinesDayEvent_Tier1_C.ExecuteUbergraph_BP_Challenge_ValentinesDayEvent_Tier1
	 */
	struct UBP_Challenge_ValentinesDayEvent_Tier1_C_ExecuteUbergraph_BP_Challenge_ValentinesDayEvent_Tier1_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Y9XO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
