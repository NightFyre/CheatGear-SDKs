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
	 * Function BP_Challenge_ValentinesDayEvent_Repeatable.BP_Challenge_ValentinesDayEvent_Repeatable_C.OnInitChallengeInstance
	 */
	struct UBP_Challenge_ValentinesDayEvent_Repeatable_C_OnInitChallengeInstance_Params
	{
	public:
		class UChallengesComponent*                                OwningChallenges;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AGbxCharacter*                                       AssociatedCharacter;                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Challenge_ValentinesDayEvent_Repeatable.BP_Challenge_ValentinesDayEvent_Repeatable_C.OnChallengeActivated
	 */
	struct UBP_Challenge_ValentinesDayEvent_Repeatable_C_OnChallengeActivated_Params
	{	};

	/**
	 * Function BP_Challenge_ValentinesDayEvent_Repeatable.BP_Challenge_ValentinesDayEvent_Repeatable_C.CompletedChallenge
	 */
	struct UBP_Challenge_ValentinesDayEvent_Repeatable_C_CompletedChallenge_Params
	{
	public:
		class AGbxPlayerController*                                CompletedPlayer;                                         // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Challenge_ValentinesDayEvent_Repeatable.BP_Challenge_ValentinesDayEvent_Repeatable_C.ExecuteUbergraph_BP_Challenge_ValentinesDayEvent_Repeatable
	 */
	struct UBP_Challenge_ValentinesDayEvent_Repeatable_C_ExecuteUbergraph_BP_Challenge_ValentinesDayEvent_Repeatable_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5137[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
