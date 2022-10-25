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
	 * Function BPWeap_PS_VLA.BPWeap_PS_VLA_C.UserConstructionScript
	 */
	struct ABPWeap_PS_VLA_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BPWeap_PS_VLA.BPWeap_PS_VLA_C.ModeSwitchStarted
	 */
	struct ABPWeap_PS_VLA_C_ModeSwitchStarted_Params
	{	};

	/**
	 * Function BPWeap_PS_VLA.BPWeap_PS_VLA_C.Notify_ReloadStarted
	 */
	struct ABPWeap_PS_VLA_C_Notify_ReloadStarted_Params
	{
	public:
		bool                                                       bAutoReload;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPWeap_PS_VLA.BPWeap_PS_VLA_C.ExecuteUbergraph_BPWeap_PS_VLA
	 */
	struct ABPWeap_PS_VLA_C_ExecuteUbergraph_BPWeap_PS_VLA_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
