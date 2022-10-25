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
	 * Function BPChar_IronBear_DakkaBear.BPChar_IronBear_DakkaBear_C.BootGunnersNestOccupant
	 */
	struct ABPChar_IronBear_DakkaBear_C_BootGunnersNestOccupant_Params
	{
	public:
		bool                                                       InputPin;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_F6J9[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Delay;                                                   // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_IronBear_DakkaBear.BPChar_IronBear_DakkaBear_C.KickPlayerOutOfGunnersNest
	 */
	struct ABPChar_IronBear_DakkaBear_C_KickPlayerOutOfGunnersNest_Params
	{
	public:
		bool                                                       zKilled;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5HYX[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Delay;                                                   // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_IronBear_DakkaBear.BPChar_IronBear_DakkaBear_C.UserConstructionScript
	 */
	struct ABPChar_IronBear_DakkaBear_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BPChar_IronBear_DakkaBear.BPChar_IronBear_DakkaBear_C.OnRep_GunnersNestOccupied
	 */
	struct ABPChar_IronBear_DakkaBear_C_OnRep_GunnersNestOccupied_Params
	{	};

	/**
	 * Function BPChar_IronBear_DakkaBear.BPChar_IronBear_DakkaBear_C.OnAttachStateChanged_GunnersNest
	 */
	struct ABPChar_IronBear_DakkaBear_C_OnAttachStateChanged_GunnersNest_Params
	{	};

	/**
	 * Function BPChar_IronBear_DakkaBear.BPChar_IronBear_DakkaBear_C.StartGunnersNestBonus
	 */
	struct ABPChar_IronBear_DakkaBear_C_StartGunnersNestBonus_Params
	{	};

	/**
	 * Function BPChar_IronBear_DakkaBear.BPChar_IronBear_DakkaBear_C.StopGunnersNextBonus
	 */
	struct ABPChar_IronBear_DakkaBear_C_StopGunnersNextBonus_Params
	{	};

	/**
	 * Function BPChar_IronBear_DakkaBear.BPChar_IronBear_DakkaBear_C.CalculateAutoBearDuration
	 */
	struct ABPChar_IronBear_DakkaBear_C_CalculateAutoBearDuration_Params
	{	};

	/**
	 * Function BPChar_IronBear_DakkaBear.BPChar_IronBear_DakkaBear_C.ExecuteUbergraph_BPChar_IronBear_DakkaBear
	 */
	struct ABPChar_IronBear_DakkaBear_C_ExecuteUbergraph_BPChar_IronBear_DakkaBear_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_E638[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
