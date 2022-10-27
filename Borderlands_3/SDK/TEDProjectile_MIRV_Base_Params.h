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
	 * Function TEDProjectile_MIRV_Base.TEDProjectile_MIRV_Base_C.AIProjectile_CanBeStolen
	 */
	struct ATEDProjectile_MIRV_Base_C_AIProjectile_CanBeStolen_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TEDProjectile_MIRV_Base.TEDProjectile_MIRV_Base_C.FuelOut
	 */
	struct ATEDProjectile_MIRV_Base_C_FuelOut_Params
	{	};

	/**
	 * Function TEDProjectile_MIRV_Base.TEDProjectile_MIRV_Base_C.UserConstructionScript
	 */
	struct ATEDProjectile_MIRV_Base_C_UserConstructionScript_Params
	{	};

	/**
	 * Function TEDProjectile_MIRV_Base.TEDProjectile_MIRV_Base_C.OnBehaviorInitialized
	 */
	struct ATEDProjectile_MIRV_Base_C_OnBehaviorInitialized_Params
	{
	public:
		class UClass*                                              BehaviorClass;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function TEDProjectile_MIRV_Base.TEDProjectile_MIRV_Base_C.ReceiveBeginPlay
	 */
	struct ATEDProjectile_MIRV_Base_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function TEDProjectile_MIRV_Base.TEDProjectile_MIRV_Base_C.ExecuteUbergraph_TEDProjectile_MIRV_Base
	 */
	struct ATEDProjectile_MIRV_Base_C_ExecuteUbergraph_TEDProjectile_MIRV_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0RT2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
