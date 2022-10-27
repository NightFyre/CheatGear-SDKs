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
	 * Function Proj_MAL_SG_DeathGrip.Proj_MAL_SG_DeathGrip_C.UserConstructionScript
	 */
	struct AProj_MAL_SG_DeathGrip_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Proj_MAL_SG_DeathGrip.Proj_MAL_SG_DeathGrip_C.ReceiveBeginPlay
	 */
	struct AProj_MAL_SG_DeathGrip_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Proj_MAL_SG_DeathGrip.Proj_MAL_SG_DeathGrip_C.ReceiveHit
	 */
	struct AProj_MAL_SG_DeathGrip_C_ReceiveHit_Params
	{
	public:
		class UPrimitiveComponent*                                 MyComp;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Other;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bSelfMoved;                                              // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_T6MY[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             HitLocation;                                             // 0x001C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             HitNormal;                                               // 0x0028(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0034(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          Hit;                                                     // 0x0040(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Proj_MAL_SG_DeathGrip.Proj_MAL_SG_DeathGrip_C.OnExplode
	 */
	struct AProj_MAL_SG_DeathGrip_C_OnExplode_Params
	{	};

	/**
	 * Function Proj_MAL_SG_DeathGrip.Proj_MAL_SG_DeathGrip_C.OnHitWorld
	 */
	struct AProj_MAL_SG_DeathGrip_C_OnHitWorld_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Proj_MAL_SG_DeathGrip.Proj_MAL_SG_DeathGrip_C.ExecuteUbergraph_Proj_MAL_SG_DeathGrip
	 */
	struct AProj_MAL_SG_DeathGrip_C_ExecuteUbergraph_Proj_MAL_SG_DeathGrip_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
