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
	 * Function Passive_Beastmaster_Ranged11.Passive_Beastmaster_Ranged11_C.NewFunction_1
	 */
	struct UPassive_Beastmaster_Ranged11_C_NewFunction_1_Params
	{	};

	/**
	 * Function Passive_Beastmaster_Ranged11.Passive_Beastmaster_Ranged11_C.CalculateAbilityState
	 */
	struct UPassive_Beastmaster_Ranged11_C_CalculateAbilityState_Params
	{
	public:
		EGbxAbilityState                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Passive_Beastmaster_Ranged11.Passive_Beastmaster_Ranged11_C.RandomChanceByGrade
	 */
	struct UPassive_Beastmaster_Ranged11_C_RandomChanceByGrade_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_T2EV[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Passive_Beastmaster_Ranged11.Passive_Beastmaster_Ranged11_C.OnResumed
	 */
	struct UPassive_Beastmaster_Ranged11_C_OnResumed_Params
	{	};

	/**
	 * Function Passive_Beastmaster_Ranged11.Passive_Beastmaster_Ranged11_C.OnCausedDamage_Ranged11
	 */
	struct UPassive_Beastmaster_Ranged11_C_OnCausedDamage_Ranged11_Params
	{
	public:
		class AActor*                                              DamageInstigator;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Damage;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_W0V6[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGbxDamageType*                                      DamageType;                                              // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDamageSource*                                       DamageSource;                                            // 0x0018(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamagedActor;                                            // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCausedDamageDetails                                Details;                                                 // 0x0028(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	};

	/**
	 * Function Passive_Beastmaster_Ranged11.Passive_Beastmaster_Ranged11_C.OnActivated
	 */
	struct UPassive_Beastmaster_Ranged11_C_OnActivated_Params
	{	};

	/**
	 * Function Passive_Beastmaster_Ranged11.Passive_Beastmaster_Ranged11_C.ExecuteUbergraph_Passive_Beastmaster_Ranged11
	 */
	struct UPassive_Beastmaster_Ranged11_C_ExecuteUbergraph_Passive_Beastmaster_Ranged11_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
