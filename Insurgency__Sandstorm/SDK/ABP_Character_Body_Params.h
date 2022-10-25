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
	 * Function ABP_Character_Body.ABP_Character_Body_C.OnDoorKick
	 */
	struct UABP_Character_Body_C_OnDoorKick_Params
	{
	public:
		bool                                                       bpp__bKickWillSucceed__pf;                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Character_Body.ABP_Character_Body_C.BlueprintUpdateAnimation
	 */
	struct UABP_Character_Body_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      bpp__DeltaTimeX__pf;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Character_Body.ABP_Character_Body_C.AnimGraph
	 */
	struct UABP_Character_Body_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           bpp__AnimGraph__pf;                                      // 0x0000(0x0010)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction ABP_Character_Body.ABP_Character_Body_C.DelegateDoorKick__DelegateSignature
	 */
	struct UABP_Character_Body_C_DelegateDoorKick__DelegateSignature_Params
	{
	public:
		bool                                                       bpp__bKickWillSucceed__pf;                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
