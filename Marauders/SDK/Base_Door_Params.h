#pragma once

/**
 * Name: Marauders
 * Version: 642675-attempt2
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
	 * Function Base_Door.Base_Door_C.ActiveCalled
	 */
	struct ABase_Door_C_ActiveCalled_Params
	{	};

	/**
	 * Function Base_Door.Base_Door_C.DeActiveCalled
	 */
	struct ABase_Door_C_DeActiveCalled_Params
	{	};

	/**
	 * Function Base_Door.Base_Door_C.ExecuteUbergraph_Base_Door
	 */
	struct ABase_Door_C_ExecuteUbergraph_Base_Door_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
