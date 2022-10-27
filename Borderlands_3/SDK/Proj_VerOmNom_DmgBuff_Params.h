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
	 * Function Proj_VerOmNom_DmgBuff.Proj_VerOmNom_DmgBuff_C.UserConstructionScript
	 */
	struct AProj_VerOmNom_DmgBuff_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Proj_VerOmNom_DmgBuff.Proj_VerOmNom_DmgBuff_C.ReceiveDestroyed
	 */
	struct AProj_VerOmNom_DmgBuff_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function Proj_VerOmNom_DmgBuff.Proj_VerOmNom_DmgBuff_C.ReceiveBeginPlay
	 */
	struct AProj_VerOmNom_DmgBuff_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Proj_VerOmNom_DmgBuff.Proj_VerOmNom_DmgBuff_C.OnHitWorld
	 */
	struct AProj_VerOmNom_DmgBuff_C_OnHitWorld_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Proj_VerOmNom_DmgBuff.Proj_VerOmNom_DmgBuff_C.ReceiveHit
	 */
	struct AProj_VerOmNom_DmgBuff_C_ReceiveHit_Params
	{
	public:
		class UPrimitiveComponent*                                 MyComp;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Other;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bSelfMoved;                                              // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2GCK[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             HitLocation;                                             // 0x001C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             HitNormal;                                               // 0x0028(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0034(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          Hit;                                                     // 0x0040(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Proj_VerOmNom_DmgBuff.Proj_VerOmNom_DmgBuff_C.OnExplode
	 */
	struct AProj_VerOmNom_DmgBuff_C_OnExplode_Params
	{	};

	/**
	 * Function Proj_VerOmNom_DmgBuff.Proj_VerOmNom_DmgBuff_C.ExecuteUbergraph_Proj_VerOmNom_DmgBuff
	 */
	struct AProj_VerOmNom_DmgBuff_C_ExecuteUbergraph_Proj_VerOmNom_DmgBuff_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_L9WY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
