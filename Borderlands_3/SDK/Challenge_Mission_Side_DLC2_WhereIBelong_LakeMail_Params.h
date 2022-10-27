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
	 * Function Challenge_Mission_Side_DLC2_WhereIBelong_LakeMail.Challenge_Mission_Side_DLC2_WhereIBelong_LakeMail_C.CompletedChallenge
	 */
	struct UChallenge_Mission_Side_DLC2_WhereIBelong_LakeMail_C_CompletedChallenge_Params
	{
	public:
		class AGbxPlayerController*                                CompletedPlayer;                                         // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Challenge_Mission_Side_DLC2_WhereIBelong_LakeMail.Challenge_Mission_Side_DLC2_WhereIBelong_LakeMail_C.ExecuteUbergraph_Challenge_Mission_Side_DLC2_WhereIBelong_LakeMail
	 */
	struct UChallenge_Mission_Side_DLC2_WhereIBelong_LakeMail_C_ExecuteUbergraph_Challenge_Mission_Side_DLC2_WhereIBelong_LakeMail_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KXFI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
