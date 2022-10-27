#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * Function GameplayDebugger.GameplayDebuggingComponent.ServerReplicateData
	 */
	struct UGameplayDebuggingComponent_ServerReplicateData_Params
	{
	public:
		uint32_t                                                   InMessage;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint32_t                                                   DataView;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GameplayDebugger.GameplayDebuggingComponent.ServerDiscardNavmeshData
	 */
	struct UGameplayDebuggingComponent_ServerDiscardNavmeshData_Params
	{	};

	/**
	 * Function GameplayDebugger.GameplayDebuggingComponent.ServerCollectNavmeshData
	 */
	struct UGameplayDebuggingComponent_ServerCollectNavmeshData_Params
	{
	public:
		struct FVector_NetQuantize10                               TargetLocation;                                          // 0x0000(0x000C)  (Parm)
	};

	/**
	 * Function GameplayDebugger.GameplayDebuggingComponent.OnRep_UpdateNavmesh
	 */
	struct UGameplayDebuggingComponent_OnRep_UpdateNavmesh_Params
	{	};

	/**
	 * Function GameplayDebugger.GameplayDebuggingComponent.OnRep_UpdateEQS
	 */
	struct UGameplayDebuggingComponent_OnRep_UpdateEQS_Params
	{	};

	/**
	 * Function GameplayDebugger.GameplayDebuggingComponent.OnRep_UpdateBlackboard
	 */
	struct UGameplayDebuggingComponent_OnRep_UpdateBlackboard_Params
	{	};

	/**
	 * Function GameplayDebugger.GameplayDebuggingComponent.OnRep_PathCorridorData
	 */
	struct UGameplayDebuggingComponent_OnRep_PathCorridorData_Params
	{	};

	/**
	 * Function GameplayDebugger.GameplayDebuggingComponent.OnCycleDetailsView
	 */
	struct UGameplayDebuggingComponent_OnCycleDetailsView_Params
	{	};

	/**
	 * Function GameplayDebugger.GameplayDebuggingComponent.ClientEnableTargetSelection
	 */
	struct UGameplayDebuggingComponent_ClientEnableTargetSelection_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GameplayDebugger.GameplayDebuggingReplicator.ServerSetActorToDebug
	 */
	struct AGameplayDebuggingReplicator_ServerSetActorToDebug_Params
	{
	public:
		class AActor*                                              InActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GameplayDebugger.GameplayDebuggingReplicator.ServerReplicateMessage
	 */
	struct AGameplayDebuggingReplicator_ServerReplicateMessage_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint32_t                                                   InMessage;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint32_t                                                   DataView;                                                // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GameplayDebugger.GameplayDebuggingReplicator.OnRep_AutoActivate
	 */
	struct AGameplayDebuggingReplicator_OnRep_AutoActivate_Params
	{	};

	/**
	 * Function GameplayDebugger.GameplayDebuggingReplicator.ClientReplicateMessage
	 */
	struct AGameplayDebuggingReplicator_ClientReplicateMessage_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint32_t                                                   InMessage;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint32_t                                                   DataView;                                                // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GameplayDebugger.GameplayDebuggingReplicator.ClientEnableTargetSelection
	 */
	struct AGameplayDebuggingReplicator_ClientEnableTargetSelection_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YAPD[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APlayerController*                                   Context;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GameplayDebugger.GameplayDebuggingReplicator.ClientAutoActivate
	 */
	struct AGameplayDebuggingReplicator_ClientAutoActivate_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
