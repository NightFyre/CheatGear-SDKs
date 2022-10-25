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
	 * Function ShortRangeMarkerFramework.ShortRangeMarker.Multicast_OnCleanUp
	 */
	struct AShortRangeMarker_Multicast_OnCleanUp_Params
	{	};

	/**
	 * Function ShortRangeMarkerFramework.ShortRangeMarkerBlueprintFunctionLibrary.RegisterActorsWithShortRangeMarker
	 */
	struct UShortRangeMarkerBlueprintFunctionLibrary_RegisterActorsWithShortRangeMarker_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              InMarker;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class AActor*>                                      InActors;                                                // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
