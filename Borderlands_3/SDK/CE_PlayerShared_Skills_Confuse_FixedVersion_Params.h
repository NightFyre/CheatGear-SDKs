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
	 * Function CE_PlayerShared_Skills_Confuse_FixedVersion.CE_PlayerShared_Skills_Confuse_FixedVersion_C.On Confuse Target death
	 */
	struct UCE_PlayerShared_Skills_Confuse_FixedVersion_C_On_Confuse_Target_death_Params
	{
	public:
		class AActor*                                              DamageReceiver;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamageCauser;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CE_PlayerShared_Skills_Confuse_FixedVersion.CE_PlayerShared_Skills_Confuse_FixedVersion_C.ExecuteUbergraph_CE_PlayerShared_Skills_Confuse_FixedVersion
	 */
	struct UCE_PlayerShared_Skills_Confuse_FixedVersion_C_ExecuteUbergraph_CE_PlayerShared_Skills_Confuse_FixedVersion_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
