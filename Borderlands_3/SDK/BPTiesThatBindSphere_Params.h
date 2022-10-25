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
	 * Function BPTiesThatBindSphere.BPTiesThatBindSphere_C.GetBeamSourceSceneComponent
	 */
	struct ABPTiesThatBindSphere_C_GetBeamSourceSceneComponent_Params
	{
	public:
		class USceneComponent*                                     res;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPTiesThatBindSphere.BPTiesThatBindSphere_C.GetBeamDataForLinkedTarget
	 */
	struct ABPTiesThatBindSphere_C_GetBeamDataForLinkedTarget_Params
	{
	public:
		class AOakCharacter*                                       LinkedTarget;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FOakPhaseWebSphereBeamData                          outBeamData;                                             // 0x0008(0x0030)  (Parm, OutParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BPTiesThatBindSphere.BPTiesThatBindSphere_C.GetBeamSystem
	 */
	struct ABPTiesThatBindSphere_C_GetBeamSystem_Params
	{
	public:
		class UParticleSystem*                                     res;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPTiesThatBindSphere.BPTiesThatBindSphere_C.GetSharedDamageData
	 */
	struct ABPTiesThatBindSphere_C_GetSharedDamageData_Params
	{
	public:
		class AOakCharacter*                                       LinkedTarget;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Damage;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EUAU[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              DamageSourceClass;                                       // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		struct FOakPhaseWebSphere_SharedDamageData                 SharedDamageData;                                        // 0x0018(0x0018)  (Parm, OutParm, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JSA7[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPTiesThatBindSphere.BPTiesThatBindSphere_C.GetMaxTime
	 */
	struct ABPTiesThatBindSphere_C_GetMaxTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPTiesThatBindSphere.BPTiesThatBindSphere_C.UserConstructionScript
	 */
	struct ABPTiesThatBindSphere_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BPTiesThatBindSphere.BPTiesThatBindSphere_C.ReceiveBeginPlay
	 */
	struct ABPTiesThatBindSphere_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPTiesThatBindSphere.BPTiesThatBindSphere_C.OnWebTargetAdded
	 */
	struct ABPTiesThatBindSphere_C_OnWebTargetAdded_Params
	{
	public:
		class AOakCharacter*                                       Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPTiesThatBindSphere.BPTiesThatBindSphere_C.OnGraspedTargetDied
	 */
	struct ABPTiesThatBindSphere_C_OnGraspedTargetDied_Params
	{
	public:
		class AActor*                                              DamageReceiver;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamageCauser;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPTiesThatBindSphere.BPTiesThatBindSphere_C.ApplySapRefund
	 */
	struct ABPTiesThatBindSphere_C_ApplySapRefund_Params
	{
	public:
		float                                                      RawAccumulateDamage;                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPTiesThatBindSphere.BPTiesThatBindSphere_C.ExecuteUbergraph_BPTiesThatBindSphere
	 */
	struct ABPTiesThatBindSphere_C_ExecuteUbergraph_BPTiesThatBindSphere_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_J7DZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
