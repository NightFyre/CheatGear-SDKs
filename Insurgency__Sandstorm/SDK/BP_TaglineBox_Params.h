#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * Function BP_TaglineBox.BP_TaglineBox_C.SetUpdateRankIcon
	 */
	struct UBP_TaglineBox_C_SetUpdateRankIcon_Params
	{
	public:
		class AINSPlayerState*                                     Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Experience;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TaglineBox.BP_TaglineBox_C.SetTagline
	 */
	struct UBP_TaglineBox_C_SetTagline_Params
	{
	public:
		struct FOtherPlayerAwardedTagline                          EarnedTagline;                                           // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_TaglineBox.BP_TaglineBox_C.Construct
	 */
	struct UBP_TaglineBox_C_Construct_Params
	{	};

	/**
	 * Function BP_TaglineBox.BP_TaglineBox_C.ExecuteUbergraph_BP_TaglineBox
	 */
	struct UBP_TaglineBox_C_ExecuteUbergraph_BP_TaglineBox_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_684Y[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
