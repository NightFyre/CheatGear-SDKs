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
	 * Function CustomMaps.CustomMap.OnRep_FontUpdated
	 */
	struct ACustomMap_OnRep_FontUpdated_Params
	{	};

	/**
	 * Function CustomMaps.CustomMap.OnRep_DisplayItem
	 */
	struct ACustomMap_OnRep_DisplayItem_Params
	{	};

	/**
	 * Function CustomMaps.CustomMap.OnMapItemsUpdate
	 */
	struct ACustomMap_OnMapItemsUpdate_Params
	{
	public:
		class UCanvas*                                             Canvas;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Width;                                                   // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Height;                                                  // 0x000C(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
