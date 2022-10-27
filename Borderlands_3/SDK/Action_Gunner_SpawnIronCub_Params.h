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
	 * Function Action_Gunner_SpawnIronCub.Action_Gunner_SpawnIronCub_C.AN_SpawnIronCub
	 */
	struct UAction_Gunner_SpawnIronCub_C_AN_SpawnIronCub_Params
	{	};

	/**
	 * Function Action_Gunner_SpawnIronCub.Action_Gunner_SpawnIronCub_C.OnServerEnd
	 */
	struct UAction_Gunner_SpawnIronCub_C_OnServerEnd_Params
	{
	public:
		EGbxActionEndState                                         ActionEndState;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_02NR[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_Gunner_SpawnIronCub.Action_Gunner_SpawnIronCub_C.AN_EnableDevice
	 */
	struct UAction_Gunner_SpawnIronCub_C_AN_EnableDevice_Params
	{	};

	/**
	 * Function Action_Gunner_SpawnIronCub.Action_Gunner_SpawnIronCub_C.AN_DisableDevice
	 */
	struct UAction_Gunner_SpawnIronCub_C_AN_DisableDevice_Params
	{	};

	/**
	 * Function Action_Gunner_SpawnIronCub.Action_Gunner_SpawnIronCub_C.OnBegin
	 */
	struct UAction_Gunner_SpawnIronCub_C_OnBegin_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_Gunner_SpawnIronCub.Action_Gunner_SpawnIronCub_C.AN_EnableHologram
	 */
	struct UAction_Gunner_SpawnIronCub_C_AN_EnableHologram_Params
	{	};

	/**
	 * Function Action_Gunner_SpawnIronCub.Action_Gunner_SpawnIronCub_C.AN_DisableHologram
	 */
	struct UAction_Gunner_SpawnIronCub_C_AN_DisableHologram_Params
	{	};

	/**
	 * Function Action_Gunner_SpawnIronCub.Action_Gunner_SpawnIronCub_C.ExecuteUbergraph_Action_Gunner_SpawnIronCub
	 */
	struct UAction_Gunner_SpawnIronCub_C_ExecuteUbergraph_Action_Gunner_SpawnIronCub_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5UD2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
