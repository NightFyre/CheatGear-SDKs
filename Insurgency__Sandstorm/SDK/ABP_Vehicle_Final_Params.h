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
	 * Function ABP_Vehicle_Final.ABP_Vehicle_Final_C.OnPlayGearShift
	 */
	struct UABP_Vehicle_Final_C_OnPlayGearShift_Params
	{	};

	/**
	 * Function ABP_Vehicle_Final.ABP_Vehicle_Final_C.OnPlayFireEnd
	 */
	struct UABP_Vehicle_Final_C_OnPlayFireEnd_Params
	{	};

	/**
	 * Function ABP_Vehicle_Final.ABP_Vehicle_Final_C.OnPlayFire
	 */
	struct UABP_Vehicle_Final_C_OnPlayFire_Params
	{	};

	/**
	 * Function ABP_Vehicle_Final.ABP_Vehicle_Final_C.OnGearChange
	 */
	struct UABP_Vehicle_Final_C_OnGearChange_Params
	{	};

	/**
	 * Function ABP_Vehicle_Final.ABP_Vehicle_Final_C.OnFireEnd
	 */
	struct UABP_Vehicle_Final_C_OnFireEnd_Params
	{	};

	/**
	 * Function ABP_Vehicle_Final.ABP_Vehicle_Final_C.OnFire
	 */
	struct UABP_Vehicle_Final_C_OnFire_Params
	{	};

	/**
	 * Function ABP_Vehicle_Final.ABP_Vehicle_Final_C.GetVehicleAnims
	 */
	struct UABP_Vehicle_Final_C_GetVehicleAnims_Params
	{
	public:
		struct FVehicleAnimationStruct                             bpp__VehicleAnimations__pf;                              // 0x0000(0x0028)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Vehicle_Final.ABP_Vehicle_Final_C.CalcFloatInterp
	 */
	struct UABP_Vehicle_Final_C_CalcFloatInterp_Params
	{
	public:
		float                                                      bpp__Current__pf;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      bpp__Target__pf;                                         // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      bpp__Speed__pf;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      bpp__Output__pf;                                         // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Vehicle_Final.ABP_Vehicle_Final_C.BlueprintUpdateAnimation
	 */
	struct UABP_Vehicle_Final_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      bpp__DeltaTimeX__pf;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Vehicle_Final.ABP_Vehicle_Final_C.BlueprintInitializeAnimation
	 */
	struct UABP_Vehicle_Final_C_BlueprintInitializeAnimation_Params
	{	};

	/**
	 * Function ABP_Vehicle_Final.ABP_Vehicle_Final_C.AnimGraph
	 */
	struct UABP_Vehicle_Final_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           bpp__AnimGraph__pf;                                      // 0x0000(0x0010)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
