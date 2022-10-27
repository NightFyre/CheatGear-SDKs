#pragma once

/**
 * Name: Marauders
 * Version: 642675-attempt2
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
	 * Function masterNodeBot.masterNodeBot_C.UserConstructionScript
	 */
	struct AmasterNodeBot_C_UserConstructionScript_Params
	{	};

	/**
	 * Function masterNodeBot.masterNodeBot_C.ReceiveBeginPlay
	 */
	struct AmasterNodeBot_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function masterNodeBot.masterNodeBot_C.ReceiveTick
	 */
	struct AmasterNodeBot_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function masterNodeBot.masterNodeBot_C.StartActiveEvent
	 */
	struct AmasterNodeBot_C_StartActiveEvent_Params
	{	};

	/**
	 * Function masterNodeBot.masterNodeBot_C.StartDeactiveEvent
	 */
	struct AmasterNodeBot_C_StartDeactiveEvent_Params
	{	};

	/**
	 * Function masterNodeBot.masterNodeBot_C.DismemberEvent
	 */
	struct AmasterNodeBot_C_DismemberEvent_Params
	{
	public:
		class FName                                                BoneHit;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector_NetQuantize                                 ImpactNorm;                                              // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3TWT[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              DamageTypeClass;                                         // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function masterNodeBot.masterNodeBot_C.OnProxyHitReact
	 */
	struct AmasterNodeBot_C_OnProxyHitReact_Params
	{
	public:
		struct FHitResult                                          Impact;                                                  // 0x0000(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function masterNodeBot.masterNodeBot_C.ExecuteUbergraph_masterNodeBot
	 */
	struct AmasterNodeBot_C_ExecuteUbergraph_masterNodeBot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9KTQ[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
