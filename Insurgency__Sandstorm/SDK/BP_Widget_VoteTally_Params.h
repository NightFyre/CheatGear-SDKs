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
	 * Function BP_Widget_VoteTally.BP_Widget_VoteTally_C.UpdateCountLabel
	 */
	struct UBP_Widget_VoteTally_C_UpdateCountLabel_Params
	{	};

	/**
	 * Function BP_Widget_VoteTally.BP_Widget_VoteTally_C.UpdateCount
	 */
	struct UBP_Widget_VoteTally_C_UpdateCount_Params
	{
	public:
		int32_t                                                    NewCount;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Widget_VoteTally.BP_Widget_VoteTally_C.Construct
	 */
	struct UBP_Widget_VoteTally_C_Construct_Params
	{	};

	/**
	 * Function BP_Widget_VoteTally.BP_Widget_VoteTally_C.ExecuteUbergraph_BP_Widget_VoteTally
	 */
	struct UBP_Widget_VoteTally_C_ExecuteUbergraph_BP_Widget_VoteTally_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7VFL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
