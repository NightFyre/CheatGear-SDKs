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
	 * Function Base_LockedDoor.Base_LockedDoor_C.ActiveCalled
	 */
	struct ABase_LockedDoor_C_ActiveCalled_Params
	{	};

	/**
	 * Function Base_LockedDoor.Base_LockedDoor_C.DeActiveCalled
	 */
	struct ABase_LockedDoor_C_DeActiveCalled_Params
	{	};

	/**
	 * Function Base_LockedDoor.Base_LockedDoor_C.OnUnlocked
	 */
	struct ABase_LockedDoor_C_OnUnlocked_Params
	{	};

	/**
	 * Function Base_LockedDoor.Base_LockedDoor_C.OnTriedToOpenButLocked
	 */
	struct ABase_LockedDoor_C_OnTriedToOpenButLocked_Params
	{	};

	/**
	 * Function Base_LockedDoor.Base_LockedDoor_C.ExecuteUbergraph_Base_LockedDoor
	 */
	struct ABase_LockedDoor_C_ExecuteUbergraph_Base_LockedDoor_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
