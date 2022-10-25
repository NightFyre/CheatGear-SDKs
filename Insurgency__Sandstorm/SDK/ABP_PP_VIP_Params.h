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
	 * Function ABP_PP_VIP.ABP_PP_VIP_C.ExecuteUbergraph_ABP_PP_VIP
	 */
	struct UABP_PP_VIP_C_ExecuteUbergraph_ABP_PP_VIP_Params
	{
	public:
		int32_t                                                    bpp__EntryPoint__pf;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_PP_VIP.ABP_PP_VIP_C.AnimGraph
	 */
	struct UABP_PP_VIP_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           bpp__InPose__pf;                                         // 0x0000(0x0010)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FPoseLink                                           bpp__AnimGraph__pf;                                      // 0x0010(0x0010)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
