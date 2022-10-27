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
	 * Function frt_spotlight_movement_function.frt_spotlight_movement_function_C.UserConstructionScript
	 */
	struct Afrt_spotlight_movement_function_C_UserConstructionScript_Params
	{	};

	/**
	 * Function frt_spotlight_movement_function.frt_spotlight_movement_function_C.ReceiveTick
	 */
	struct Afrt_spotlight_movement_function_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function frt_spotlight_movement_function.frt_spotlight_movement_function_C.ExecuteUbergraph_frt_spotlight_movement_function
	 */
	struct Afrt_spotlight_movement_function_C_ExecuteUbergraph_frt_spotlight_movement_function_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
