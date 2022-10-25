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
	 * Function BP_Aircraft_A10.BP_Aircraft_A10_C.UserConstructionScript
	 */
	struct ABP_Aircraft_A10_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Aircraft_A10.BP_Aircraft_A10_C.ReceiveTick
	 */
	struct ABP_Aircraft_A10_C_ReceiveTick_Params
	{
	public:
		float                                                      bpp__DeltaSeconds__pf;                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_Aircraft_A10.BP_Aircraft_A10_C.ReceiveBeginPlay
	 */
	struct ABP_Aircraft_A10_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Aircraft_A10.BP_Aircraft_A10_C.OnStrafeBeginDelegate_Event_1
	 */
	struct ABP_Aircraft_A10_C_OnStrafeBeginDelegate_Event_1_Params
	{
	public:
		class AAircraftBase*                                       bpp__Aircraft__pf;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_Aircraft_A10.BP_Aircraft_A10_C.ExecuteUbergraph_BP_Aircraft_A10_1
	 */
	struct ABP_Aircraft_A10_C_ExecuteUbergraph_BP_Aircraft_A10_1_Params
	{
	public:
		int32_t                                                    bpp__EntryPoint__pf;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BP_Aircraft_A10.BP_Aircraft_A10_C.AircraftEventDelegate__DelegateSignature
	 */
	struct ABP_Aircraft_A10_C_AircraftEventDelegate__DelegateSignature_Params
	{
	public:
		class AAircraftBase*                                       bpp__Aircraft__pf;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
