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
	 * Function BP_TEDBehavior_Horizon.BP_TEDBehavior_Horizon_C.K2_OnComboTargetTriggered
	 */
	struct UBP_TEDBehavior_Horizon_C_K2_OnComboTargetTriggered_Params
	{
	public:
		class ATedioreProjectile*                                  Projectile;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TEDBehavior_Horizon.BP_TEDBehavior_Horizon_C.K2_ComboTargetTriggeredEvent
	 */
	struct UBP_TEDBehavior_Horizon_C_K2_ComboTargetTriggeredEvent_Params
	{
	public:
		class ATedioreProjectile*                                  Projectile;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TEDBehavior_Horizon.BP_TEDBehavior_Horizon_C.ExecuteUbergraph_BP_TEDBehavior_Horizon
	 */
	struct UBP_TEDBehavior_Horizon_C_ExecuteUbergraph_BP_TEDBehavior_Horizon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TNKA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
