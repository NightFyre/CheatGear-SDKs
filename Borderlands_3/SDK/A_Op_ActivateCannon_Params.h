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
	 * Function A_Op_ActivateCannon.A_Op_ActivateCannon_C.OnServerEnd
	 */
	struct UA_Op_ActivateCannon_C_OnServerEnd_Params
	{
	public:
		EGbxActionEndState                                         ActionEndState;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NHM8[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function A_Op_ActivateCannon.A_Op_ActivateCannon_C.AN_ShowDevice
	 */
	struct UA_Op_ActivateCannon_C_AN_ShowDevice_Params
	{	};

	/**
	 * Function A_Op_ActivateCannon.A_Op_ActivateCannon_C.AN_HideDevice
	 */
	struct UA_Op_ActivateCannon_C_AN_HideDevice_Params
	{	};

	/**
	 * Function A_Op_ActivateCannon.A_Op_ActivateCannon_C.OnEnd
	 */
	struct UA_Op_ActivateCannon_C_OnEnd_Params
	{
	public:
		EGbxActionEndState                                         ActionEndState;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1SBW[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function A_Op_ActivateCannon.A_Op_ActivateCannon_C.OnBeginBringUpWeapon
	 */
	struct UA_Op_ActivateCannon_C_OnBeginBringUpWeapon_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function A_Op_ActivateCannon.A_Op_ActivateCannon_C.Notify_SwapPlaces
	 */
	struct UA_Op_ActivateCannon_C_Notify_SwapPlaces_Params
	{	};

	/**
	 * Function A_Op_ActivateCannon.A_Op_ActivateCannon_C.OnServerBegin
	 */
	struct UA_Op_ActivateCannon_C_OnServerBegin_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function A_Op_ActivateCannon.A_Op_ActivateCannon_C.ExecuteUbergraph_A_Op_ActivateCannon
	 */
	struct UA_Op_ActivateCannon_C_ExecuteUbergraph_A_Op_ActivateCannon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_T7QE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
