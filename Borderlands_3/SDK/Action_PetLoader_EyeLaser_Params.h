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
	 * Function Action_PetLoader_EyeLaser.Action_PetLoader_EyeLaser_C.AttackCommandUsed
	 */
	struct UAction_PetLoader_EyeLaser_C_AttackCommandUsed_Params
	{	};

	/**
	 * Function Action_PetLoader_EyeLaser.Action_PetLoader_EyeLaser_C.CustomEvent
	 */
	struct UAction_PetLoader_EyeLaser_C_CustomEvent_Params
	{	};

	/**
	 * Function Action_PetLoader_EyeLaser.Action_PetLoader_EyeLaser_C.OnServerEnd
	 */
	struct UAction_PetLoader_EyeLaser_C_OnServerEnd_Params
	{
	public:
		EGbxActionEndState                                         ActionEndState;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TMHA[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_PetLoader_EyeLaser.Action_PetLoader_EyeLaser_C.OnEnd
	 */
	struct UAction_PetLoader_EyeLaser_C_OnEnd_Params
	{
	public:
		EGbxActionEndState                                         ActionEndState;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9UJP[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_PetLoader_EyeLaser.Action_PetLoader_EyeLaser_C.Start_EyeLaser
	 */
	struct UAction_PetLoader_EyeLaser_C_Start_EyeLaser_Params
	{	};

	/**
	 * Function Action_PetLoader_EyeLaser.Action_PetLoader_EyeLaser_C.Stop_EyeLaser
	 */
	struct UAction_PetLoader_EyeLaser_C_Stop_EyeLaser_Params
	{	};

	/**
	 * Function Action_PetLoader_EyeLaser.Action_PetLoader_EyeLaser_C.CustomEvent_4
	 */
	struct UAction_PetLoader_EyeLaser_C_CustomEvent_4_Params
	{	};

	/**
	 * Function Action_PetLoader_EyeLaser.Action_PetLoader_EyeLaser_C.Start_EyeLaserCharge
	 */
	struct UAction_PetLoader_EyeLaser_C_Start_EyeLaserCharge_Params
	{	};

	/**
	 * Function Action_PetLoader_EyeLaser.Action_PetLoader_EyeLaser_C.OnServerBegin
	 */
	struct UAction_PetLoader_EyeLaser_C_OnServerBegin_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_PetLoader_EyeLaser.Action_PetLoader_EyeLaser_C.Audio_EyeBeam_Charge
	 */
	struct UAction_PetLoader_EyeLaser_C_Audio_EyeBeam_Charge_Params
	{	};

	/**
	 * Function Action_PetLoader_EyeLaser.Action_PetLoader_EyeLaser_C.ExecuteUbergraph_Action_PetLoader_EyeLaser
	 */
	struct UAction_PetLoader_EyeLaser_C_ExecuteUbergraph_Action_PetLoader_EyeLaser_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VQDD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
