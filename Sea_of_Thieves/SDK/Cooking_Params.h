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
	 * Function Cooking.CookerComponent.OnRep_CookingState
	 */
	struct UCookerComponent_OnRep_CookingState_Params
	{
	public:
		struct FCookingClientRepresentation                        OldRepresentation;                                       // 0x0000(0x0068)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
