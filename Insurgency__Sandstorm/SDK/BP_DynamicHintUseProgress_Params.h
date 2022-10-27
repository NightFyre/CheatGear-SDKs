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
	 * Function BP_DynamicHintUseProgress.BP_DynamicHintUseProgress_C.UpdateProgressFraction
	 */
	struct UBP_DynamicHintUseProgress_C_UpdateProgressFraction_Params
	{
	public:
		float                                                      NewFraction;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DynamicHintUseProgress.BP_DynamicHintUseProgress_C.UpdateHintTexture
	 */
	struct UBP_DynamicHintUseProgress_C_UpdateHintTexture_Params
	{
	public:
		class UTexture2D*                                          NewTexture;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
