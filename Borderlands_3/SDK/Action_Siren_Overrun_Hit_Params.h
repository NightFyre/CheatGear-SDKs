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
	 * Function Action_Siren_Overrun_Hit.Action_Siren_Overrun_Hit_C.AN_BlitzHit
	 */
	struct UAction_Siren_Overrun_Hit_C_AN_BlitzHit_Params
	{	};

	/**
	 * Function Action_Siren_Overrun_Hit.Action_Siren_Overrun_Hit_C.OnServerEnd
	 */
	struct UAction_Siren_Overrun_Hit_C_OnServerEnd_Params
	{
	public:
		EGbxActionEndState                                         ActionEndState;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7C5A[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_Siren_Overrun_Hit.Action_Siren_Overrun_Hit_C.OnBeginBringUpWeapon
	 */
	struct UAction_Siren_Overrun_Hit_C_OnBeginBringUpWeapon_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_Siren_Overrun_Hit.Action_Siren_Overrun_Hit_C.OnServerBegin
	 */
	struct UAction_Siren_Overrun_Hit_C_OnServerBegin_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_Siren_Overrun_Hit.Action_Siren_Overrun_Hit_C.AN_PerformBlitzFeedback_Hit
	 */
	struct UAction_Siren_Overrun_Hit_C_AN_PerformBlitzFeedback_Hit_Params
	{	};

	/**
	 * Function Action_Siren_Overrun_Hit.Action_Siren_Overrun_Hit_C.ExecuteUbergraph_Action_Siren_Overrun_Hit
	 */
	struct UAction_Siren_Overrun_Hit_C_ExecuteUbergraph_Action_Siren_Overrun_Hit_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TLBS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
