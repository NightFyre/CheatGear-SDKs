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
	 * Function Describables.DescribableComponent.SetTooltipActive
	 */
	struct UDescribableComponent_SetTooltipActive_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Describables.DescribableComponent.OnRep_TooltipActive
	 */
	struct UDescribableComponent_OnRep_TooltipActive_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
