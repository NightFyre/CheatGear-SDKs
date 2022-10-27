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
	 * Function BPChar_Turret_PatMk3.BPChar_Turret_PatMk3_C.UserConstructionScript
	 */
	struct ABPChar_Turret_PatMk3_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BPChar_Turret_PatMk3.BPChar_Turret_PatMk3_C.ReceiveBeginPlay
	 */
	struct ABPChar_Turret_PatMk3_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPChar_Turret_PatMk3.BPChar_Turret_PatMk3_C.Fired
	 */
	struct ABPChar_Turret_PatMk3_C_Fired_Params
	{
	public:
		class AWeapon*                                             EventWeapon;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_Turret_PatMk3.BPChar_Turret_PatMk3_C.ExecuteUbergraph_BPChar_Turret_PatMk3
	 */
	struct ABPChar_Turret_PatMk3_C_ExecuteUbergraph_BPChar_Turret_PatMk3_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4TBO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
