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
	 * Function Init_IronBearHardpoint_DamageCalc.Init_IronBearHardpoint_DamageCalc_C.GetStrengthThroughBalanceScalar
	 */
	struct UInit_IronBearHardpoint_DamageCalc_C_GetStrengthThroughBalanceScalar_Params
	{
	public:
		class AOakCharacter_IronBear*                              InIronBear;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      res;                                                     // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
