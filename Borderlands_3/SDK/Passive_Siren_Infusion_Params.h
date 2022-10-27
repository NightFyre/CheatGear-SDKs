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
	 * Function Passive_Siren_Infusion.Passive_Siren_Infusion_C.GetShotModifier
	 */
	struct UPassive_Siren_Infusion_C_GetShotModifier_Params
	{
	public:
		class UWeaponShotModifier*                                 res;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Passive_Siren_Infusion.Passive_Siren_Infusion_C.AddShotModifier
	 */
	struct UPassive_Siren_Infusion_C_AddShotModifier_Params
	{	};

	/**
	 * Function Passive_Siren_Infusion.Passive_Siren_Infusion_C.RemoveAllShotModifiers
	 */
	struct UPassive_Siren_Infusion_C_RemoveAllShotModifiers_Params
	{	};

	/**
	 * Function Passive_Siren_Infusion.Passive_Siren_Infusion_C.OnAttunedElementChanged
	 */
	struct UPassive_Siren_Infusion_C_OnAttunedElementChanged_Params
	{	};

	/**
	 * Function Passive_Siren_Infusion.Passive_Siren_Infusion_C.ExecuteUbergraph_Passive_Siren_Infusion
	 */
	struct UPassive_Siren_Infusion_C_ExecuteUbergraph_Passive_Siren_Infusion_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_O3OU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
