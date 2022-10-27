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
	 * Function Action_Siren_PhaseCast_Projectile_Flourish.Action_Siren_PhaseCast_Projectile_Flourish_C.OnBegin
	 */
	struct UAction_Siren_PhaseCast_Projectile_Flourish_C_OnBegin_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_Siren_PhaseCast_Projectile_Flourish.Action_Siren_PhaseCast_Projectile_Flourish_C.OnEnd
	 */
	struct UAction_Siren_PhaseCast_Projectile_Flourish_C_OnEnd_Params
	{
	public:
		EGbxActionEndState                                         ActionEndState;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IX7T[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_Siren_PhaseCast_Projectile_Flourish.Action_Siren_PhaseCast_Projectile_Flourish_C.Unhide
	 */
	struct UAction_Siren_PhaseCast_Projectile_Flourish_C_Unhide_Params
	{	};

	/**
	 * Function Action_Siren_PhaseCast_Projectile_Flourish.Action_Siren_PhaseCast_Projectile_Flourish_C.ExecuteUbergraph_Action_Siren_PhaseCast_Projectile_Flourish
	 */
	struct UAction_Siren_PhaseCast_Projectile_Flourish_C_ExecuteUbergraph_Action_Siren_PhaseCast_Projectile_Flourish_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0KLC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
