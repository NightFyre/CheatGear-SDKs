#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * Function InvasionFramework.InvasionBlueprintFunctionLibrary.ShouldEmergentBattleDisplayBanners
	 */
	struct UInvasionBlueprintFunctionLibrary_ShouldEmergentBattleDisplayBanners_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function InvasionFramework.InvasionBlueprintFunctionLibrary.ShouldAggressivePassiveTeleportUseEQS
	 */
	struct UInvasionBlueprintFunctionLibrary_ShouldAggressivePassiveTeleportUseEQS_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function InvasionFramework.InvasionBlueprintFunctionLibrary.GetAggressivePassiveTeleportOffsetDistance
	 */
	struct UInvasionBlueprintFunctionLibrary_GetAggressivePassiveTeleportOffsetDistance_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
