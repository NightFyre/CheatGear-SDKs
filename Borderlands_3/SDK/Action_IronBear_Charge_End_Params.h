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
	 * Function Action_IronBear_Charge_End.Action_IronBear_Charge_End_C.OnAnimEnd_B40E293946052D568378BF989B320782
	 */
	struct UAction_IronBear_Charge_End_C_OnAnimEnd_B40E293946052D568378BF989B320782_Params
	{	};

	/**
	 * Function Action_IronBear_Charge_End.Action_IronBear_Charge_End_C.OnEnd_B40E293946052D568378BF989B320782
	 */
	struct UAction_IronBear_Charge_End_C_OnEnd_B40E293946052D568378BF989B320782_Params
	{
	public:
		EGbxActionEndState                                         EndState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JYQ0[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_IronBear_Charge_End.Action_IronBear_Charge_End_C.OnBegin
	 */
	struct UAction_IronBear_Charge_End_C_OnBegin_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_IronBear_Charge_End.Action_IronBear_Charge_End_C.OnEnd
	 */
	struct UAction_IronBear_Charge_End_C_OnEnd_Params
	{
	public:
		EGbxActionEndState                                         ActionEndState;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LAIY[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_IronBear_Charge_End.Action_IronBear_Charge_End_C.ExecuteUbergraph_Action_IronBear_Charge_End
	 */
	struct UAction_IronBear_Charge_End_C_ExecuteUbergraph_Action_IronBear_Charge_End_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_112T[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
