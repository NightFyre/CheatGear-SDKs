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
	 * Function BPPetEnrageRift_Mod4.BPPetEnrageRift_Mod4_C.PlayFeedback
	 */
	struct ABPPetEnrageRift_Mod4_C_PlayFeedback_Params
	{
	public:
		class AActor*                                              InLinkedTarget;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPPetEnrageRift_Mod4.BPPetEnrageRift_Mod4_C.GetOverlapComponent
	 */
	struct ABPPetEnrageRift_Mod4_C_GetOverlapComponent_Params
	{
	public:
		class UPrimitiveComponent*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPPetEnrageRift_Mod4.BPPetEnrageRift_Mod4_C.UserConstructionScript
	 */
	struct ABPPetEnrageRift_Mod4_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BPPetEnrageRift_Mod4.BPPetEnrageRift_Mod4_C.OnShutdownRequested
	 */
	struct ABPPetEnrageRift_Mod4_C_OnShutdownRequested_Params
	{
	public:
		bool                                                       bForced;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPPetEnrageRift_Mod4.BPPetEnrageRift_Mod4_C.OnLinkedTargetAdded
	 */
	struct ABPPetEnrageRift_Mod4_C_OnLinkedTargetAdded_Params
	{
	public:
		class AOakCharacter*                                       InLinkedTarget;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPPetEnrageRift_Mod4.BPPetEnrageRift_Mod4_C.OnLinkedTargetRemoved
	 */
	struct ABPPetEnrageRift_Mod4_C_OnLinkedTargetRemoved_Params
	{
	public:
		class AOakCharacter*                                       InLinkedTarget;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPPetEnrageRift_Mod4.BPPetEnrageRift_Mod4_C.ExecuteUbergraph_BPPetEnrageRift_Mod4
	 */
	struct ABPPetEnrageRift_Mod4_C_ExecuteUbergraph_BPPetEnrageRift_Mod4_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MCGM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
