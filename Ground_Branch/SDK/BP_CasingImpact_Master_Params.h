#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * Function BP_CasingImpact_Master.BP_CasingImpact_Master_C.ReceiveBeginPlay
	 */
	struct ABP_CasingImpact_Master_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_CasingImpact_Master.BP_CasingImpact_Master_C.PlaySound
	 */
	struct ABP_CasingImpact_Master_C_PlaySound_Params
	{	};

	/**
	 * Function BP_CasingImpact_Master.BP_CasingImpact_Master_C.SpawnParticleFX
	 */
	struct ABP_CasingImpact_Master_C_SpawnParticleFX_Params
	{	};

	/**
	 * Function BP_CasingImpact_Master.BP_CasingImpact_Master_C.OnPlayVoiceCallback_Event
	 */
	struct ABP_CasingImpact_Master_C_OnPlayVoiceCallback_Event_Params
	{
	public:
		EAkCallbackType                                            CallbackType;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KMXV[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAkCallbackInfo*                                     CallbackInfo;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CasingImpact_Master.BP_CasingImpact_Master_C.CheckDestroy
	 */
	struct ABP_CasingImpact_Master_C_CheckDestroy_Params
	{	};

	/**
	 * Function BP_CasingImpact_Master.BP_CasingImpact_Master_C.OnSystemFinished_Event_1
	 */
	struct ABP_CasingImpact_Master_C_OnSystemFinished_Event_1_Params
	{
	public:
		class UParticleSystemComponent*                            PSystem;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CasingImpact_Master.BP_CasingImpact_Master_C.ExecuteUbergraph_BP_CasingImpact_Master
	 */
	struct ABP_CasingImpact_Master_C_ExecuteUbergraph_BP_CasingImpact_Master_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
