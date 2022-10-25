#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * Function BP_RadialBackground8Segments.BP_RadialBackground8Segments_C.BindHighlightDirectionChanged
	 */
	struct UBP_RadialBackground8Segments_C_BindHighlightDirectionChanged_Params
	{
	public:
		class UBP_RadialMenuBase_C*                                Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RadialBackground8Segments.BP_RadialBackground8Segments_C.OnDirectionChanged
	 */
	struct UBP_RadialBackground8Segments_C_OnDirectionChanged_Params
	{
	public:
		ERadialMenuDirection                                       Direction;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_X5MX[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_RadialBackground8Segments.BP_RadialBackground8Segments_C.Construct
	 */
	struct UBP_RadialBackground8Segments_C_Construct_Params
	{	};

	/**
	 * Function BP_RadialBackground8Segments.BP_RadialBackground8Segments_C.PreConstruct
	 */
	struct UBP_RadialBackground8Segments_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_RadialBackground8Segments.BP_RadialBackground8Segments_C.ExecuteUbergraph_BP_RadialBackground8Segments
	 */
	struct UBP_RadialBackground8Segments_C_ExecuteUbergraph_BP_RadialBackground8Segments_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
