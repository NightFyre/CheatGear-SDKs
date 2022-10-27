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
	 * Function Passive_Beastmaster_Ranged10_NEW.Passive_Beastmaster_Ranged10_NEW_C.GetProjectileComponent
	 */
	struct UPassive_Beastmaster_Ranged10_NEW_C_GetProjectileComponent_Params
	{
	public:
		class AWeapon*                                             InWeapon;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWeaponFireProjectileComponent*                      FireComponent;                                           // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Passive_Beastmaster_Ranged10_NEW.Passive_Beastmaster_Ranged10_NEW_C.RandomChanceByGrade
	 */
	struct UPassive_Beastmaster_Ranged10_NEW_C_RandomChanceByGrade_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_S25X[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Passive_Beastmaster_Ranged10_NEW.Passive_Beastmaster_Ranged10_NEW_C.OnWeaponUsed_Ranged10
	 */
	struct UPassive_Beastmaster_Ranged10_NEW_C_OnWeaponUsed_Ranged10_Params
	{
	public:
		class AWeapon*                                             EventWeapon;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Passive_Beastmaster_Ranged10_NEW.Passive_Beastmaster_Ranged10_NEW_C.OnWeaponChanged_Ranged10
	 */
	struct UPassive_Beastmaster_Ranged10_NEW_C_OnWeaponChanged_Ranged10_Params
	{
	public:
		class AWeapon*                                             NewWeapon;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AWeapon*                                             LastWeapon;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Passive_Beastmaster_Ranged10_NEW.Passive_Beastmaster_Ranged10_NEW_C.OnActivated
	 */
	struct UPassive_Beastmaster_Ranged10_NEW_C_OnActivated_Params
	{	};

	/**
	 * Function Passive_Beastmaster_Ranged10_NEW.Passive_Beastmaster_Ranged10_NEW_C.TryAddProjectileToNextShot
	 */
	struct UPassive_Beastmaster_Ranged10_NEW_C_TryAddProjectileToNextShot_Params
	{
	public:
		class AWeapon*                                             InWeapon;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Passive_Beastmaster_Ranged10_NEW.Passive_Beastmaster_Ranged10_NEW_C.OnPaused
	 */
	struct UPassive_Beastmaster_Ranged10_NEW_C_OnPaused_Params
	{	};

	/**
	 * Function Passive_Beastmaster_Ranged10_NEW.Passive_Beastmaster_Ranged10_NEW_C.OnDeactivated
	 */
	struct UPassive_Beastmaster_Ranged10_NEW_C_OnDeactivated_Params
	{	};

	/**
	 * Function Passive_Beastmaster_Ranged10_NEW.Passive_Beastmaster_Ranged10_NEW_C.ExecuteUbergraph_Passive_Beastmaster_Ranged10_NEW
	 */
	struct UPassive_Beastmaster_Ranged10_NEW_C_ExecuteUbergraph_Passive_Beastmaster_Ranged10_NEW_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
