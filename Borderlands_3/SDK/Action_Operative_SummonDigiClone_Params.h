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
	 * Function Action_Operative_SummonDigiClone.Action_Operative_SummonDigiClone_C.Failure_264F849F461DE8AE8A8C7B98070E4B60
	 */
	struct UAction_Operative_SummonDigiClone_C_Failure_264F849F461DE8AE8A8C7B98070E4B60_Params
	{
	public:
		struct FEnvQueryResult                                     QueryResult;                                             // 0x0000(0x0040)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FVector                                             Location;                                                // 0x0040(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VHHJ[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x0050(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_Operative_SummonDigiClone.Action_Operative_SummonDigiClone_C.Success_264F849F461DE8AE8A8C7B98070E4B60
	 */
	struct UAction_Operative_SummonDigiClone_C_Success_264F849F461DE8AE8A8C7B98070E4B60_Params
	{
	public:
		struct FEnvQueryResult                                     QueryResult;                                             // 0x0000(0x0040)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FVector                                             Location;                                                // 0x0040(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_R068[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x0050(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_Operative_SummonDigiClone.Action_Operative_SummonDigiClone_C.OnBegin
	 */
	struct UAction_Operative_SummonDigiClone_C_OnBegin_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_Operative_SummonDigiClone.Action_Operative_SummonDigiClone_C.AnimNotify_SpawnClones
	 */
	struct UAction_Operative_SummonDigiClone_C_AnimNotify_SpawnClones_Params
	{	};

	/**
	 * Function Action_Operative_SummonDigiClone.Action_Operative_SummonDigiClone_C.ExecuteUbergraph_Action_Operative_SummonDigiClone
	 */
	struct UAction_Operative_SummonDigiClone_C_ExecuteUbergraph_Action_Operative_SummonDigiClone_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7588[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
