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
	 * Function BPWeap_AR_COV.BPWeap_AR_COV_C.UserConstructionScript
	 */
	struct ABPWeap_AR_COV_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BPWeap_AR_COV.BPWeap_AR_COV_C.ReceiveBeginPlay
	 */
	struct ABPWeap_AR_COV_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPWeap_AR_COV.BPWeap_AR_COV_C.Weapon_NotifyEquipped
	 */
	struct ABPWeap_AR_COV_C_Weapon_NotifyEquipped_Params
	{	};

	/**
	 * Function BPWeap_AR_COV.BPWeap_AR_COV_C.ExecuteUbergraph_BPWeap_AR_COV
	 */
	struct ABPWeap_AR_COV_C_ExecuteUbergraph_BPWeap_AR_COV_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6WS1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
