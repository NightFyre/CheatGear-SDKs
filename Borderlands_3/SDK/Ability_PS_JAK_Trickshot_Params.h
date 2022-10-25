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
	 * Function Ability_PS_JAK_Trickshot.Ability_PS_JAK_Trickshot_C.OnRegistered
	 */
	struct UAbility_PS_JAK_Trickshot_C_OnRegistered_Params
	{	};

	/**
	 * Function Ability_PS_JAK_Trickshot.Ability_PS_JAK_Trickshot_C.OnCausedDamage
	 */
	struct UAbility_PS_JAK_Trickshot_C_OnCausedDamage_Params
	{
	public:
		class AActor*                                              DamageInstigator;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Damage;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2C9R[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGbxDamageType*                                      DamageType;                                              // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDamageSource*                                       DamageSource;                                            // 0x0018(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamagedActor;                                            // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCausedDamageDetails                                Details;                                                 // 0x0028(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	};

	/**
	 * Function Ability_PS_JAK_Trickshot.Ability_PS_JAK_Trickshot_C.ReloadEndedDelegate
	 */
	struct UAbility_PS_JAK_Trickshot_C_ReloadEndedDelegate_Params
	{
	public:
		class AWeapon*                                             EventWeapon;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bCompleted;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ability_PS_JAK_Trickshot.Ability_PS_JAK_Trickshot_C.OnDeactivated
	 */
	struct UAbility_PS_JAK_Trickshot_C_OnDeactivated_Params
	{	};

	/**
	 * Function Ability_PS_JAK_Trickshot.Ability_PS_JAK_Trickshot_C.OnUnregistered
	 */
	struct UAbility_PS_JAK_Trickshot_C_OnUnregistered_Params
	{	};

	/**
	 * Function Ability_PS_JAK_Trickshot.Ability_PS_JAK_Trickshot_C.OnPaused
	 */
	struct UAbility_PS_JAK_Trickshot_C_OnPaused_Params
	{	};

	/**
	 * Function Ability_PS_JAK_Trickshot.Ability_PS_JAK_Trickshot_C.ExecuteUbergraph_Ability_PS_JAK_Trickshot
	 */
	struct UAbility_PS_JAK_Trickshot_C_ExecuteUbergraph_Ability_PS_JAK_Trickshot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WARU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
