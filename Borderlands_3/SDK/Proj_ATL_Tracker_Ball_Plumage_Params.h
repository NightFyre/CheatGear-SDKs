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
	 * Function Proj_ATL_Tracker_Ball_Plumage.Proj_ATL_Tracker_Ball_Plumage_C.AOE_FindTarget
	 */
	struct AProj_ATL_Tracker_Ball_Plumage_C_AOE_FindTarget_Params
	{	};

	/**
	 * Function Proj_ATL_Tracker_Ball_Plumage.Proj_ATL_Tracker_Ball_Plumage_C.UserConstructionScript
	 */
	struct AProj_ATL_Tracker_Ball_Plumage_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Proj_ATL_Tracker_Ball_Plumage.Proj_ATL_Tracker_Ball_Plumage_C.GbxAsyncRequest_Spawned_EC7096D84CE43BFCBCFD209C516EA52E
	 */
	struct AProj_ATL_Tracker_Ball_Plumage_C_GbxAsyncRequest_Spawned_EC7096D84CE43BFCBCFD209C516EA52E_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InstanceIndex;                                           // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Proj_ATL_Tracker_Ball_Plumage.Proj_ATL_Tracker_Ball_Plumage_C.OnExplode
	 */
	struct AProj_ATL_Tracker_Ball_Plumage_C_OnExplode_Params
	{	};

	/**
	 * Function Proj_ATL_Tracker_Ball_Plumage.Proj_ATL_Tracker_Ball_Plumage_C.ReceiveBeginPlay
	 */
	struct AProj_ATL_Tracker_Ball_Plumage_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Proj_ATL_Tracker_Ball_Plumage.Proj_ATL_Tracker_Ball_Plumage_C.OnHitEnemy
	 */
	struct AProj_ATL_Tracker_Ball_Plumage_C_OnHitEnemy_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Proj_ATL_Tracker_Ball_Plumage.Proj_ATL_Tracker_Ball_Plumage_C.OnHitWorld
	 */
	struct AProj_ATL_Tracker_Ball_Plumage_C_OnHitWorld_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Proj_ATL_Tracker_Ball_Plumage.Proj_ATL_Tracker_Ball_Plumage_C.FuseTriggered
	 */
	struct AProj_ATL_Tracker_Ball_Plumage_C_FuseTriggered_Params
	{	};

	/**
	 * Function Proj_ATL_Tracker_Ball_Plumage.Proj_ATL_Tracker_Ball_Plumage_C.ReceiveHit
	 */
	struct AProj_ATL_Tracker_Ball_Plumage_C_ReceiveHit_Params
	{
	public:
		class UPrimitiveComponent*                                 MyComp;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Other;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bSelfMoved;                                              // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_73D9[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             HitLocation;                                             // 0x001C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             HitNormal;                                               // 0x0028(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0034(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          Hit;                                                     // 0x0040(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Proj_ATL_Tracker_Ball_Plumage.Proj_ATL_Tracker_Ball_Plumage_C.BndEvt__OakTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_Proj_ATL_Tracker_Ball
	 */
	struct AProj_ATL_Tracker_Ball_Plumage_C_BndEvt__OakTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_Proj_ATL_Tracker_Ball_Params
	{
	public:
		class AActor*                                              TouchingActor;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsPlayer;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2EZZ[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UActorComponent*                                     ComponentTouched;                                        // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Proj_ATL_Tracker_Ball_Plumage.Proj_ATL_Tracker_Ball_Plumage_C.AttachedActorDeath
	 */
	struct AProj_ATL_Tracker_Ball_Plumage_C_AttachedActorDeath_Params
	{	};

	/**
	 * Function Proj_ATL_Tracker_Ball_Plumage.Proj_ATL_Tracker_Ball_Plumage_C.MultiTargetActorDeath_Event
	 */
	struct AProj_ATL_Tracker_Ball_Plumage_C_MultiTargetActorDeath_Event_Params
	{
	public:
		class AActor*                                              DamageReceiver;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamageCauser;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Proj_ATL_Tracker_Ball_Plumage.Proj_ATL_Tracker_Ball_Plumage_C.MultiTargetTag
	 */
	struct AProj_ATL_Tracker_Ball_Plumage_C_MultiTargetTag_Params
	{	};

	/**
	 * Function Proj_ATL_Tracker_Ball_Plumage.Proj_ATL_Tracker_Ball_Plumage_C.ExecuteUbergraph_Proj_ATL_Tracker_Ball_Plumage
	 */
	struct AProj_ATL_Tracker_Ball_Plumage_C_ExecuteUbergraph_Proj_ATL_Tracker_Ball_Plumage_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
