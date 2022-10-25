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
	 * Function Proj_ATL_HW_PodRocket_Master.Proj_ATL_HW_PodRocket_Master_C.ProjectileDisarm
	 */
	struct AProj_ATL_HW_PodRocket_Master_C_ProjectileDisarm_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Proj_ATL_HW_PodRocket_Master.Proj_ATL_HW_PodRocket_Master_C.ProjectileArm
	 */
	struct AProj_ATL_HW_PodRocket_Master_C_ProjectileArm_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Proj_ATL_HW_PodRocket_Master.Proj_ATL_HW_PodRocket_Master_C.ProjectileDetonate
	 */
	struct AProj_ATL_HW_PodRocket_Master_C_ProjectileDetonate_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Proj_ATL_HW_PodRocket_Master.Proj_ATL_HW_PodRocket_Master_C.TargetLockBeam
	 */
	struct AProj_ATL_HW_PodRocket_Master_C_TargetLockBeam_Params
	{
	public:
		class AActor*                                              HomingTarget;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Proj_ATL_HW_PodRocket_Master.Proj_ATL_HW_PodRocket_Master_C.UserConstructionScript
	 */
	struct AProj_ATL_HW_PodRocket_Master_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Proj_ATL_HW_PodRocket_Master.Proj_ATL_HW_PodRocket_Master_C.ReceiveBeginPlay
	 */
	struct AProj_ATL_HW_PodRocket_Master_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Proj_ATL_HW_PodRocket_Master.Proj_ATL_HW_PodRocket_Master_C.ReceiveHit
	 */
	struct AProj_ATL_HW_PodRocket_Master_C_ReceiveHit_Params
	{
	public:
		class UPrimitiveComponent*                                 MyComp;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Other;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bSelfMoved;                                              // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_31TN[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             HitLocation;                                             // 0x001C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             HitNormal;                                               // 0x0028(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0034(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          Hit;                                                     // 0x0040(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Proj_ATL_HW_PodRocket_Master.Proj_ATL_HW_PodRocket_Master_C.OnExplode
	 */
	struct AProj_ATL_HW_PodRocket_Master_C_OnExplode_Params
	{	};

	/**
	 * Function Proj_ATL_HW_PodRocket_Master.Proj_ATL_HW_PodRocket_Master_C.RetyHoming
	 */
	struct AProj_ATL_HW_PodRocket_Master_C_RetyHoming_Params
	{	};

	/**
	 * Function Proj_ATL_HW_PodRocket_Master.Proj_ATL_HW_PodRocket_Master_C.ExecuteUbergraph_Proj_ATL_HW_PodRocket_Master
	 */
	struct AProj_ATL_HW_PodRocket_Master_C_ExecuteUbergraph_Proj_ATL_HW_PodRocket_Master_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_61M1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
