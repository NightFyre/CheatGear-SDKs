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
	 * Function BPFistOverMatterActor.BPFistOverMatterActor_C.OnRep_GroundLocation
	 */
	struct ABPFistOverMatterActor_C_OnRep_GroundLocation_Params
	{	};

	/**
	 * Function BPFistOverMatterActor.BPFistOverMatterActor_C.PerformFeedback
	 */
	struct ABPFistOverMatterActor_C_PerformFeedback_Params
	{	};

	/**
	 * Function BPFistOverMatterActor.BPFistOverMatterActor_C.DoSlamDamage
	 */
	struct ABPFistOverMatterActor_C_DoSlamDamage_Params
	{
	public:
		struct FVector                                             SlamLocation;                                            // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPFistOverMatterActor.BPFistOverMatterActor_C.GetfindGroundVectorLocations
	 */
	struct ABPFistOverMatterActor_C_GetfindGroundVectorLocations_Params
	{
	public:
		struct FVector                                             Start;                                                   // 0x0000(0x000C)  (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             End;                                                     // 0x000C(0x000C)  (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPFistOverMatterActor.BPFistOverMatterActor_C.GetMaxTime
	 */
	struct ABPFistOverMatterActor_C_GetMaxTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPFistOverMatterActor.BPFistOverMatterActor_C.UserConstructionScript
	 */
	struct ABPFistOverMatterActor_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BPFistOverMatterActor.BPFistOverMatterActor_C.GbxAsyncRequest_Miss_63BA0B474B62AE3C6ACDD8B4712D6DD9
	 */
	struct ABPFistOverMatterActor_C_GbxAsyncRequest_Miss_63BA0B474B62AE3C6ACDD8B4712D6DD9_Params
	{
	public:
		struct FHitResult                                          Result;                                                  // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BPFistOverMatterActor.BPFistOverMatterActor_C.GbxAsyncRequest_Hit_63BA0B474B62AE3C6ACDD8B4712D6DD9
	 */
	struct ABPFistOverMatterActor_C_GbxAsyncRequest_Hit_63BA0B474B62AE3C6ACDD8B4712D6DD9_Params
	{
	public:
		struct FHitResult                                          Result;                                                  // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BPFistOverMatterActor.BPFistOverMatterActor_C.SpawnSlamEmitter
	 */
	struct ABPFistOverMatterActor_C_SpawnSlamEmitter_Params
	{	};

	/**
	 * Function BPFistOverMatterActor.BPFistOverMatterActor_C.WebSlamParticleSystemEvent
	 */
	struct ABPFistOverMatterActor_C_WebSlamParticleSystemEvent_Params
	{
	public:
		class FName                                                EventName;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      EmitterTime;                                             // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Location;                                                // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Velocity;                                                // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPFistOverMatterActor.BPFistOverMatterActor_C.StartRightHandTimer
	 */
	struct ABPFistOverMatterActor_C_StartRightHandTimer_Params
	{	};

	/**
	 * Function BPFistOverMatterActor.BPFistOverMatterActor_C.StartLeftHandTimer
	 */
	struct ABPFistOverMatterActor_C_StartLeftHandTimer_Params
	{	};

	/**
	 * Function BPFistOverMatterActor.BPFistOverMatterActor_C.ReceiveBeginPlay
	 */
	struct ABPFistOverMatterActor_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPFistOverMatterActor.BPFistOverMatterActor_C.FindGroundLocationAsync
	 */
	struct ABPFistOverMatterActor_C_FindGroundLocationAsync_Params
	{	};

	/**
	 * Function BPFistOverMatterActor.BPFistOverMatterActor_C.BeginWebSlam
	 */
	struct ABPFistOverMatterActor_C_BeginWebSlam_Params
	{	};

	/**
	 * Function BPFistOverMatterActor.BPFistOverMatterActor_C.EndWebSlam
	 */
	struct ABPFistOverMatterActor_C_EndWebSlam_Params
	{	};

	/**
	 * Function BPFistOverMatterActor.BPFistOverMatterActor_C.DoWebSlamLeftDamage
	 */
	struct ABPFistOverMatterActor_C_DoWebSlamLeftDamage_Params
	{	};

	/**
	 * Function BPFistOverMatterActor.BPFistOverMatterActor_C.DoWebSlamRightDamage
	 */
	struct ABPFistOverMatterActor_C_DoWebSlamRightDamage_Params
	{	};

	/**
	 * Function BPFistOverMatterActor.BPFistOverMatterActor_C.ReceiveEndPlay
	 */
	struct ABPFistOverMatterActor_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPFistOverMatterActor.BPFistOverMatterActor_C.ExecuteUbergraph_BPFistOverMatterActor
	 */
	struct ABPFistOverMatterActor_C_ExecuteUbergraph_BPFistOverMatterActor_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
