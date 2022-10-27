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
	 * Function BPI_TinkSuicide_ExplosiveBomb.BPI_TinkSuicide_ExplosiveBomb_C.TinkSuicideBomb_StartSuicide
	 */
	struct UBPI_TinkSuicide_ExplosiveBomb_C_TinkSuicideBomb_StartSuicide_Params
	{	};

	/**
	 * Function BPI_TinkSuicide_ExplosiveBomb.BPI_TinkSuicide_ExplosiveBomb_C.TinkSuicideBomb_SetCurrentHealth
	 */
	struct UBPI_TinkSuicide_ExplosiveBomb_C_TinkSuicideBomb_SetCurrentHealth_Params
	{
	public:
		float                                                      NewCurrentHealth;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_TinkSuicide_ExplosiveBomb.BPI_TinkSuicide_ExplosiveBomb_C.TinkSuicideBomb_SetFuseTimer
	 */
	struct UBPI_TinkSuicide_ExplosiveBomb_C_TinkSuicideBomb_SetFuseTimer_Params
	{
	public:
		float                                                      NewFuseTime;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
