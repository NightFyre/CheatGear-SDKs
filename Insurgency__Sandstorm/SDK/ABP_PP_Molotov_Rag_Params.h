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
	 * Function ABP_PP_Molotov_Rag.ABP_PP_Molotov_Rag_C.UpdateRevolverChamberState
	 */
	struct UABP_PP_Molotov_Rag_C_UpdateRevolverChamberState_Params
	{
	public:
		TArray<ERevolverChamberState>                              bpp__Chambers__pf__const;                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_PP_Molotov_Rag.ABP_PP_Molotov_Rag_C.ToggleOpticState
	 */
	struct UABP_PP_Molotov_Rag_C_ToggleOpticState_Params
	{
	public:
		bool                                                       bpp__Enable__pf;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_PP_Molotov_Rag.ABP_PP_Molotov_Rag_C.StopToggleOpticMontage
	 */
	struct UABP_PP_Molotov_Rag_C_StopToggleOpticMontage_Params
	{	};

	/**
	 * Function ABP_PP_Molotov_Rag.ABP_PP_Molotov_Rag_C.InterfaceUpdateSimulationBlend
	 */
	struct UABP_PP_Molotov_Rag_C_InterfaceUpdateSimulationBlend_Params
	{
	public:
		float                                                      bpp__State__pf;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_PP_Molotov_Rag.ABP_PP_Molotov_Rag_C.ForceToggleOpticState
	 */
	struct UABP_PP_Molotov_Rag_C_ForceToggleOpticState_Params
	{
	public:
		bool                                                       bpp__bEnable__pf;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_PP_Molotov_Rag.ABP_PP_Molotov_Rag_C.ForceRevolverChamberVisibility
	 */
	struct UABP_PP_Molotov_Rag_C_ForceRevolverChamberVisibility_Params
	{
	public:
		int32_t                                                    bpp__RemainingAmmo__pf;                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_PP_Molotov_Rag.ABP_PP_Molotov_Rag_C.BlueprintUpdateAnimation
	 */
	struct UABP_PP_Molotov_Rag_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      bpp__DeltaTimeX__pf;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_PP_Molotov_Rag.ABP_PP_Molotov_Rag_C.BlueprintInitializeAnimation
	 */
	struct UABP_PP_Molotov_Rag_C_BlueprintInitializeAnimation_Params
	{	};

	/**
	 * Function ABP_PP_Molotov_Rag.ABP_PP_Molotov_Rag_C.AnimGraph
	 */
	struct UABP_PP_Molotov_Rag_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           bpp__InPose__pf;                                         // 0x0000(0x0010)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FPoseLink                                           bpp__AnimGraph__pf;                                      // 0x0010(0x0010)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
