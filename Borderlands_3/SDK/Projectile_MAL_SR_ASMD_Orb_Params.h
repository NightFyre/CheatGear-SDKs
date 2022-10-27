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
	 * Function Projectile_MAL_SR_ASMD_Orb.Projectile_MAL_SR_ASMD_Orb_C.UserConstructionScript
	 */
	struct AProjectile_MAL_SR_ASMD_Orb_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Projectile_MAL_SR_ASMD_Orb.Projectile_MAL_SR_ASMD_Orb_C.BndEvt__ProjOverlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Projectile_MAL_SR_ASMD_Orb
	 */
	struct AProjectile_MAL_SR_ASMD_Orb_C_BndEvt__ProjOverlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Projectile_MAL_SR_ASMD_Orb_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PQPA[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Projectile_MAL_SR_ASMD_Orb.Projectile_MAL_SR_ASMD_Orb_C.ReceiveBeginPlay
	 */
	struct AProjectile_MAL_SR_ASMD_Orb_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Projectile_MAL_SR_ASMD_Orb.Projectile_MAL_SR_ASMD_Orb_C.ExecuteUbergraph_Projectile_MAL_SR_ASMD_Orb
	 */
	struct AProjectile_MAL_SR_ASMD_Orb_C_ExecuteUbergraph_Projectile_MAL_SR_ASMD_Orb_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
