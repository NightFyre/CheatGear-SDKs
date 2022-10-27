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
	 * Function Proj_TinyTinaGun.Proj_TinyTinaGun_C.UserConstructionScript
	 */
	struct AProj_TinyTinaGun_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Proj_TinyTinaGun.Proj_TinyTinaGun_C.HNT_Prime
	 */
	struct AProj_TinyTinaGun_C_HNT_Prime_Params
	{	};

	/**
	 * Function Proj_TinyTinaGun.Proj_TinyTinaGun_C.HNT_Drop
	 */
	struct AProj_TinyTinaGun_C_HNT_Drop_Params
	{	};

	/**
	 * Function Proj_TinyTinaGun.Proj_TinyTinaGun_C.HNT_Throw
	 */
	struct AProj_TinyTinaGun_C_HNT_Throw_Params
	{	};

	/**
	 * Function Proj_TinyTinaGun.Proj_TinyTinaGun_C.BndEvt__GbxProjectileMovement_K2Node_ComponentBoundEvent_4_OnProjectileBounceDelegate__DelegateSignature_Proj_PsychoMale_Shared_ThrownMelee
	 */
	struct AProj_TinyTinaGun_C_BndEvt__GbxProjectileMovement_K2Node_ComponentBoundEvent_4_OnProjectileBounceDelegate__DelegateSignature_Proj_PsychoMale_Shared_ThrownMelee_Params
	{
	public:
		struct FHitResult                                          ImpactResult;                                            // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
		struct FVector                                             ImpactVelocity;                                          // 0x0090(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Proj_TinyTinaGun.Proj_TinyTinaGun_C.OnExplode
	 */
	struct AProj_TinyTinaGun_C_OnExplode_Params
	{	};

	/**
	 * Function Proj_TinyTinaGun.Proj_TinyTinaGun_C.ReceiveBeginPlay
	 */
	struct AProj_TinyTinaGun_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Proj_TinyTinaGun.Proj_TinyTinaGun_C.OnTakeDmg
	 */
	struct AProj_TinyTinaGun_C_OnTakeDmg_Params
	{
	public:
		class UDamageComponent*                                    DamageReceiver;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Damage;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_C2VT[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGbxDamageType*                                      DamageType;                                              // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDamageSource*                                       DamageSource;                                            // 0x0018(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AController*                                         InstigatedBy;                                            // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDamageCauserComponent*                              DamageCauser;                                            // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FReceivedDamageDetails                              Details;                                                 // 0x0030(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	};

	/**
	 * Function Proj_TinyTinaGun.Proj_TinyTinaGun_C.BndEvt__GbxProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature_Proj_Sidewinder_old
	 */
	struct AProj_TinyTinaGun_C_BndEvt__GbxProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature_Proj_Sidewinder_old_Params
	{
	public:
		struct FHitResult                                          ImpactResult;                                            // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Proj_TinyTinaGun.Proj_TinyTinaGun_C.ExecuteUbergraph_Proj_TinyTinaGun
	 */
	struct AProj_TinyTinaGun_C_ExecuteUbergraph_Proj_TinyTinaGun_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YD62[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
