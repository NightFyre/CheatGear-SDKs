#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
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
	 * Function BPFiringComponent_TOR_Contained.BPFiringComponent_TOR_Contained_C.ReceiveBeginPlay
	 */
	struct UBPFiringComponent_TOR_Contained_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPFiringComponent_TOR_Contained.BPFiringComponent_TOR_Contained_C.NotifyReloadStarted_Event
	 */
	struct UBPFiringComponent_TOR_Contained_C_NotifyReloadStarted_Event_Params
	{
	public:
		class AWeapon*                                             EventWeapon;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bAutoReload;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPFiringComponent_TOR_Contained.BPFiringComponent_TOR_Contained_C.K2_OnDeactivated
	 */
	struct UBPFiringComponent_TOR_Contained_C_K2_OnDeactivated_Params
	{	};

	/**
	 * Function BPFiringComponent_TOR_Contained.BPFiringComponent_TOR_Contained_C.ExecuteUbergraph_BPFiringComponent_TOR_Contained
	 */
	struct UBPFiringComponent_TOR_Contained_C_ExecuteUbergraph_BPFiringComponent_TOR_Contained_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5O3S[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
