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
	 * Function Entry.Entry_C.ReceiveBeginPlay
	 */
	struct AEntry_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Entry.Entry_C.ExecuteUbergraph_Entry
	 */
	struct AEntry_C_ExecuteUbergraph_Entry_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
