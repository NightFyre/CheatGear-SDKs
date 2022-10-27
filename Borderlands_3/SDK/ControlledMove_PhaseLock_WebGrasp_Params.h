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
	 * Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.PlayFeedback
	 */
	struct UControlledMove_PhaseLock_WebGrasp_C_PlayFeedback_Params
	{	};

	/**
	 * Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.SetGraspTimerRunning
	 */
	struct UControlledMove_PhaseLock_WebGrasp_C_SetGraspTimerRunning_Params
	{
	public:
		bool                                                       bRes;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Z806[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.GraspFinishLeech
	 */
	struct UControlledMove_PhaseLock_WebGrasp_C_GraspFinishLeech_Params
	{	};

	/**
	 * Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.OnGraspLeechTarget
	 */
	struct UControlledMove_PhaseLock_WebGrasp_C_OnGraspLeechTarget_Params
	{
	public:
		class UDamageComponent*                                    DamageReceiver;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Damage;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_09O2[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGbxDamageType*                                      DamageType;                                              // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDamageSource*                                       DamageSource;                                            // 0x0018(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AController*                                         InstigatedBy;                                            // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDamageCauserComponent*                              DamageCauser;                                            // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FReceivedDamageDetails                              Details;                                                 // 0x0030(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	};

	/**
	 * Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.DoPhaseTranceEffects
	 */
	struct UControlledMove_PhaseLock_WebGrasp_C_DoPhaseTranceEffects_Params
	{	};

	/**
	 * Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.DispatchGraspTargetDiedEvent
	 */
	struct UControlledMove_PhaseLock_WebGrasp_C_DispatchGraspTargetDiedEvent_Params
	{
	public:
		class AGbxCharacter*                                       Killer;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.UnpackComboData
	 */
	struct UControlledMove_PhaseLock_WebGrasp_C_UnpackComboData_Params
	{	};

	/**
	 * Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.ConfigureEmitters
	 */
	struct UControlledMove_PhaseLock_WebGrasp_C_ConfigureEmitters_Params
	{	};

	/**
	 * Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.DispatchGraspedEvent
	 */
	struct UControlledMove_PhaseLock_WebGrasp_C_DispatchGraspedEvent_Params
	{	};

	/**
	 * Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.RemoveElementalEffect
	 */
	struct UControlledMove_PhaseLock_WebGrasp_C_RemoveElementalEffect_Params
	{	};

	/**
	 * Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.ApplyElementalEffect
	 */
	struct UControlledMove_PhaseLock_WebGrasp_C_ApplyElementalEffect_Params
	{	};

	/**
	 * Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.OnServerStart
	 */
	struct UControlledMove_PhaseLock_WebGrasp_C_OnServerStart_Params
	{
	public:
		float                                                      MoveDuration;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_H6E0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              TargetActor;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Instigator;                                              // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.OnServerStop
	 */
	struct UControlledMove_PhaseLock_WebGrasp_C_OnServerStop_Params
	{
	public:
		bool                                                       bInterrupted;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.ConfigurePhaseLockProperties
	 */
	struct UControlledMove_PhaseLock_WebGrasp_C_ConfigurePhaseLockProperties_Params
	{	};

	/**
	 * Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.OnControlledCharacterDied
	 */
	struct UControlledMove_PhaseLock_WebGrasp_C_OnControlledCharacterDied_Params
	{
	public:
		class AActor*                                              Receiver;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Causer;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.ExecuteUbergraph_ControlledMove_PhaseLock_WebGrasp
	 */
	struct UControlledMove_PhaseLock_WebGrasp_C_ExecuteUbergraph_ControlledMove_PhaseLock_WebGrasp_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_62GH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
