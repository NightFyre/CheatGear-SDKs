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
	 * Function BP_OSSStatus_Hover.BP_OSSStatus_Hover_C.GetPlatformIcon
	 */
	struct UBP_OSSStatus_Hover_C_GetPlatformIcon_Params
	{
	public:
		class UTexture2D*                                          IconTexture;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OSSStatus_Hover.BP_OSSStatus_Hover_C.Construct
	 */
	struct UBP_OSSStatus_Hover_C_Construct_Params
	{	};

	/**
	 * Function BP_OSSStatus_Hover.BP_OSSStatus_Hover_C.ExecuteUbergraph_BP_OSSStatus_Hover
	 */
	struct UBP_OSSStatus_Hover_C_ExecuteUbergraph_BP_OSSStatus_Hover_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
