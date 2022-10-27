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
	 * Function Proj_Artifact_Sparkplug_Normal.Proj_Artifact_Sparkplug_Normal_C.UserConstructionScript
	 */
	struct AProj_Artifact_Sparkplug_Normal_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Proj_Artifact_Sparkplug_Normal.Proj_Artifact_Sparkplug_Normal_C.BndEvt__OakTrigger_K2Node_ComponentBoundEvent_3_OakTouchedTriggerDelegate__DelegateSignature_Proj_Artifact_Sparkplug
	 */
	struct AProj_Artifact_Sparkplug_Normal_C_BndEvt__OakTrigger_K2Node_ComponentBoundEvent_3_OakTouchedTriggerDelegate__DelegateSignature_Proj_Artifact_Sparkplug_Params
	{
	public:
		class AActor*                                              TouchingActor;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsPlayer;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FJSD[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UActorComponent*                                     ComponentTouched;                                        // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Proj_Artifact_Sparkplug_Normal.Proj_Artifact_Sparkplug_Normal_C.BndEvt__OakTrigger_K2Node_ComponentBoundEvent_4_OakUnTouchedTriggerDelegate__DelegateSignature_Proj_Artifact_Sparkplug
	 */
	struct AProj_Artifact_Sparkplug_Normal_C_BndEvt__OakTrigger_K2Node_ComponentBoundEvent_4_OakUnTouchedTriggerDelegate__DelegateSignature_Proj_Artifact_Sparkplug_Params
	{
	public:
		class AActor*                                              LeavingActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsPlayer;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Proj_Artifact_Sparkplug_Normal.Proj_Artifact_Sparkplug_Normal_C.ReceiveDestroyed
	 */
	struct AProj_Artifact_Sparkplug_Normal_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function Proj_Artifact_Sparkplug_Normal.Proj_Artifact_Sparkplug_Normal_C.ExecuteUbergraph_Proj_Artifact_Sparkplug_Normal
	 */
	struct AProj_Artifact_Sparkplug_Normal_C_ExecuteUbergraph_Proj_Artifact_Sparkplug_Normal_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YZJ2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
