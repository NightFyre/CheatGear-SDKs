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
	 * Function Passive_Beastmaster_HitAndRun8.Passive_Beastmaster_HitAndRun8_C.OnActivated
	 */
	struct UPassive_Beastmaster_HitAndRun8_C_OnActivated_Params
	{	};

	/**
	 * Function Passive_Beastmaster_HitAndRun8.Passive_Beastmaster_HitAndRun8_C.OnReloaded_HitAndRun8
	 */
	struct UPassive_Beastmaster_HitAndRun8_C_OnReloaded_HitAndRun8_Params
	{
	public:
		class AWeapon*                                             EventWeapon;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bCompleted;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Passive_Beastmaster_HitAndRun8.Passive_Beastmaster_HitAndRun8_C.ExecuteUbergraph_Passive_Beastmaster_HitAndRun8
	 */
	struct UPassive_Beastmaster_HitAndRun8_C_ExecuteUbergraph_Passive_Beastmaster_HitAndRun8_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5F03[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
