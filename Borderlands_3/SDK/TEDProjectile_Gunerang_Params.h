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
	 * Function TEDProjectile_Gunerang.TEDProjectile_Gunerang_C.UserConstructionScript
	 */
	struct ATEDProjectile_Gunerang_C_UserConstructionScript_Params
	{	};

	/**
	 * Function TEDProjectile_Gunerang.TEDProjectile_Gunerang_C.ReceiveBeginPlay
	 */
	struct ATEDProjectile_Gunerang_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function TEDProjectile_Gunerang.TEDProjectile_Gunerang_C.ReturnToSender
	 */
	struct ATEDProjectile_Gunerang_C_ReturnToSender_Params
	{	};

	/**
	 * Function TEDProjectile_Gunerang.TEDProjectile_Gunerang_C.FindNewFriends
	 */
	struct ATEDProjectile_Gunerang_C_FindNewFriends_Params
	{	};

	/**
	 * Function TEDProjectile_Gunerang.TEDProjectile_Gunerang_C.OnBounce
	 */
	struct ATEDProjectile_Gunerang_C_OnBounce_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
		struct FVector                                             ImpactVelocity;                                          // 0x0090(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TEDProjectile_Gunerang.TEDProjectile_Gunerang_C.BndEvt__ProjectileHoming_K2Node_ComponentBoundEvent_0_ProjectileHomingComponentEvent__DelegateSignature_TEDProjectile_Gunerang
	 */
	struct ATEDProjectile_Gunerang_C_BndEvt__ProjectileHoming_K2Node_ComponentBoundEvent_0_ProjectileHomingComponentEvent__DelegateSignature_TEDProjectile_Gunerang_Params
	{	};

	/**
	 * Function TEDProjectile_Gunerang.TEDProjectile_Gunerang_C.OnBehaviorInitialized
	 */
	struct ATEDProjectile_Gunerang_C_OnBehaviorInitialized_Params
	{
	public:
		class UClass*                                              BehaviorClass;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function TEDProjectile_Gunerang.TEDProjectile_Gunerang_C.OnExplode
	 */
	struct ATEDProjectile_Gunerang_C_OnExplode_Params
	{	};

	/**
	 * Function TEDProjectile_Gunerang.TEDProjectile_Gunerang_C.ExecuteUbergraph_TEDProjectile_Gunerang
	 */
	struct ATEDProjectile_Gunerang_C_ExecuteUbergraph_TEDProjectile_Gunerang_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2HTO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
