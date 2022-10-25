#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * Function BP_BlackHawk_RemoveBoltInsertBolt.BP_BlackHawk_RemoveBoltInsertBolt_C.CanExecuteUsingData
	 */
	struct UBP_BlackHawk_RemoveBoltInsertBolt_C_CanExecuteUsingData_Params
	{
	public:
		struct FWeaponReloadData                                   Data;                                                    // 0x0000(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_BlackHawk_RemoveBoltInsertBolt.BP_BlackHawk_RemoveBoltInsertBolt_C.OnActionAnimNotify
	 */
	struct UBP_BlackHawk_RemoveBoltInsertBolt_C_OnActionAnimNotify_Params
	{
	public:
		ECharacterActionNotifyType                                 notifyType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BlackHawk_RemoveBoltInsertBolt.BP_BlackHawk_RemoveBoltInsertBolt_C.ExecuteUbergraph_BP_BlackHawk_RemoveBoltInsertBolt
	 */
	struct UBP_BlackHawk_RemoveBoltInsertBolt_C_ExecuteUbergraph_BP_BlackHawk_RemoveBoltInsertBolt_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
