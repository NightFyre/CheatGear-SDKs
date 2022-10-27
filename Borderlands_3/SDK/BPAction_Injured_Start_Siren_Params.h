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
	 * Function BPAction_Injured_Start_Siren.BPAction_Injured_Start_Siren_C.OnServerEnd
	 */
	struct UBPAction_Injured_Start_Siren_C_OnServerEnd_Params
	{
	public:
		EGbxActionEndState                                         ActionEndState;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FRBW[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPAction_Injured_Start_Siren.BPAction_Injured_Start_Siren_C.FadeOutArms
	 */
	struct UBPAction_Injured_Start_Siren_C_FadeOutArms_Params
	{	};

	/**
	 * Function BPAction_Injured_Start_Siren.BPAction_Injured_Start_Siren_C.ExecuteUbergraph_BPAction_Injured_Start_Siren
	 */
	struct UBPAction_Injured_Start_Siren_C_ExecuteUbergraph_BPAction_Injured_Start_Siren_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
