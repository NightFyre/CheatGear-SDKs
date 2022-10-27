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
	 * Function ControlledMove_PhaseLock_Base.ControlledMove_PhaseLock_Base_C.PlayDetach
	 */
	struct UControlledMove_PhaseLock_Base_C_PlayDetach_Params
	{	};

	/**
	 * Function ControlledMove_PhaseLock_Base.ControlledMove_PhaseLock_Base_C.ConfigurePhaseLockProperties
	 */
	struct UControlledMove_PhaseLock_Base_C_ConfigurePhaseLockProperties_Params
	{	};

	/**
	 * Function ControlledMove_PhaseLock_Base.ControlledMove_PhaseLock_Base_C.TryDestroyComponent
	 */
	struct UControlledMove_PhaseLock_Base_C_TryDestroyComponent_Params
	{
	public:
		class UParticleSystemComponent*                            Comp;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ControlledMove_PhaseLock_Base.ControlledMove_PhaseLock_Base_C.OnStart
	 */
	struct UControlledMove_PhaseLock_Base_C_OnStart_Params
	{
	public:
		float                                                      MoveDuration;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KU3H[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              TargetActor;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ControlledMove_PhaseLock_Base.ControlledMove_PhaseLock_Base_C.OnStop
	 */
	struct UControlledMove_PhaseLock_Base_C_OnStop_Params
	{
	public:
		bool                                                       bInterrupted;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ControlledMove_PhaseLock_Base.ControlledMove_PhaseLock_Base_C.OnServerStart
	 */
	struct UControlledMove_PhaseLock_Base_C_OnServerStart_Params
	{
	public:
		float                                                      MoveDuration;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_J306[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              TargetActor;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Instigator;                                              // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ControlledMove_PhaseLock_Base.ControlledMove_PhaseLock_Base_C.OnServerStop
	 */
	struct UControlledMove_PhaseLock_Base_C_OnServerStop_Params
	{
	public:
		bool                                                       bInterrupted;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ControlledMove_PhaseLock_Base.ControlledMove_PhaseLock_Base_C.ExecuteUbergraph_ControlledMove_PhaseLock_Base
	 */
	struct UControlledMove_PhaseLock_Base_C_ExecuteUbergraph_ControlledMove_PhaseLock_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
