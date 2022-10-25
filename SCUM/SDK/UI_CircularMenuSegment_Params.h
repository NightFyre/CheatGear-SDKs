#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * Function UI_CircularMenuSegment.UI_CircularMenuSegment_C.PreConstruct
	 */
	struct UUI_CircularMenuSegment_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CircularMenuSegment.UI_CircularMenuSegment_C.Construct
	 */
	struct UUI_CircularMenuSegment_C_Construct_Params
	{	};

	/**
	 * Function UI_CircularMenuSegment.UI_CircularMenuSegment_C.ExecuteUbergraph_UI_CircularMenuSegment
	 */
	struct UUI_CircularMenuSegment_C_ExecuteUbergraph_UI_CircularMenuSegment_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
