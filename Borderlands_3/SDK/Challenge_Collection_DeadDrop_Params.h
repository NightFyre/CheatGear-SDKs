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
	 * Function Challenge_Collection_DeadDrop.Challenge_Collection_DeadDrop_C.OnChallengeActivated
	 */
	struct UChallenge_Collection_DeadDrop_C_OnChallengeActivated_Params
	{	};

	/**
	 * Function Challenge_Collection_DeadDrop.Challenge_Collection_DeadDrop_C.ExecuteUbergraph_Challenge_Collection_DeadDrop
	 */
	struct UChallenge_Collection_DeadDrop_C_ExecuteUbergraph_Challenge_Collection_DeadDrop_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QBR5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
