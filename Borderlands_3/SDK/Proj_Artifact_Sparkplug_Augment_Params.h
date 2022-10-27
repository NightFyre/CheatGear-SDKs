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
	 * Function Proj_Artifact_Sparkplug_Augment.Proj_Artifact_Sparkplug_Augment_C.UserConstructionScript
	 */
	struct AProj_Artifact_Sparkplug_Augment_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Proj_Artifact_Sparkplug_Augment.Proj_Artifact_Sparkplug_Augment_C.BndEvt__OakTrigger_K2Node_ComponentBoundEvent_3_OakTouchedTriggerDelegate__DelegateSignature_Proj_Artifact_Sparkplug
	 */
	struct AProj_Artifact_Sparkplug_Augment_C_BndEvt__OakTrigger_K2Node_ComponentBoundEvent_3_OakTouchedTriggerDelegate__DelegateSignature_Proj_Artifact_Sparkplug_Params
	{
	public:
		class AActor*                                              TouchingActor;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsPlayer;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VYUS[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UActorComponent*                                     ComponentTouched;                                        // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Proj_Artifact_Sparkplug_Augment.Proj_Artifact_Sparkplug_Augment_C.BndEvt__OakTrigger_K2Node_ComponentBoundEvent_4_OakUnTouchedTriggerDelegate__DelegateSignature_Proj_Artifact_Sparkplug
	 */
	struct AProj_Artifact_Sparkplug_Augment_C_BndEvt__OakTrigger_K2Node_ComponentBoundEvent_4_OakUnTouchedTriggerDelegate__DelegateSignature_Proj_Artifact_Sparkplug_Params
	{
	public:
		class AActor*                                              LeavingActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsPlayer;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Proj_Artifact_Sparkplug_Augment.Proj_Artifact_Sparkplug_Augment_C.ReceiveDestroyed
	 */
	struct AProj_Artifact_Sparkplug_Augment_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function Proj_Artifact_Sparkplug_Augment.Proj_Artifact_Sparkplug_Augment_C.ExecuteUbergraph_Proj_Artifact_Sparkplug_Augment
	 */
	struct AProj_Artifact_Sparkplug_Augment_C_ExecuteUbergraph_Proj_Artifact_Sparkplug_Augment_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UA31[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
