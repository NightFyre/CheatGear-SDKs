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
	 * Function ControlledMove_Beastmaster_Antigrav.ControlledMove_Beastmaster_Antigrav_C.OnServerStart
	 */
	struct UControlledMove_Beastmaster_Antigrav_C_OnServerStart_Params
	{
	public:
		float                                                      MoveDuration;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_J41H[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              TargetActor;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Instigator;                                              // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ControlledMove_Beastmaster_Antigrav.ControlledMove_Beastmaster_Antigrav_C.SpawnLoot
	 */
	struct UControlledMove_Beastmaster_Antigrav_C_SpawnLoot_Params
	{	};

	/**
	 * Function ControlledMove_Beastmaster_Antigrav.ControlledMove_Beastmaster_Antigrav_C.ExecuteUbergraph_ControlledMove_Beastmaster_Antigrav
	 */
	struct UControlledMove_Beastmaster_Antigrav_C_ExecuteUbergraph_ControlledMove_Beastmaster_Antigrav_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YBCL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
