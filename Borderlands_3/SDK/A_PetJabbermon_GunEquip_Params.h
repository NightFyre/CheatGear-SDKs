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
	 * Function A_PetJabbermon_GunEquip.A_PetJabbermon_GunEquip_C.Notify_Equip
	 */
	struct UA_PetJabbermon_GunEquip_C_Notify_Equip_Params
	{	};

	/**
	 * Function A_PetJabbermon_GunEquip.A_PetJabbermon_GunEquip_C.OnServerEnd
	 */
	struct UA_PetJabbermon_GunEquip_C_OnServerEnd_Params
	{
	public:
		EGbxActionEndState                                         ActionEndState;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8KQS[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function A_PetJabbermon_GunEquip.A_PetJabbermon_GunEquip_C.ExecuteUbergraph_A_PetJabbermon_GunEquip
	 */
	struct UA_PetJabbermon_GunEquip_C_ExecuteUbergraph_A_PetJabbermon_GunEquip_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
