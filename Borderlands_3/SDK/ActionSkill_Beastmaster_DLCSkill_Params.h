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
	 * Function ActionSkill_Beastmaster_DLCSkill.ActionSkill_Beastmaster_DLCSkill_C.TrapFailedToSpawn
	 */
	struct UActionSkill_Beastmaster_DLCSkill_C_TrapFailedToSpawn_Params
	{
	public:
		bool                                                       res;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ActionSkill_Beastmaster_DLCSkill.ActionSkill_Beastmaster_DLCSkill_C.EndTrapEarly
	 */
	struct UActionSkill_Beastmaster_DLCSkill_C_EndTrapEarly_Params
	{
	public:
		bool                                                       res;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ActionSkill_Beastmaster_DLCSkill.ActionSkill_Beastmaster_DLCSkill_C.GetCooldownRestartPercent
	 */
	struct UActionSkill_Beastmaster_DLCSkill_C_GetCooldownRestartPercent_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ActionSkill_Beastmaster_DLCSkill.ActionSkill_Beastmaster_DLCSkill_C.OnActivated
	 */
	struct UActionSkill_Beastmaster_DLCSkill_C_OnActivated_Params
	{	};

	/**
	 * Function ActionSkill_Beastmaster_DLCSkill.ActionSkill_Beastmaster_DLCSkill_C.BeastmasterDLCSkill_OnTakeAnyDamage
	 */
	struct UActionSkill_Beastmaster_DLCSkill_C_BeastmasterDLCSkill_OnTakeAnyDamage_Params
	{
	public:
		class UDamageComponent*                                    DamageReceiver;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Damage;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_64PO[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGbxDamageType*                                      DamageType;                                              // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDamageSource*                                       DamageSource;                                            // 0x0018(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AController*                                         InstigatedBy;                                            // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDamageCauserComponent*                              DamageCauser;                                            // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FReceivedDamageDetails                              Details;                                                 // 0x0030(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	};

	/**
	 * Function ActionSkill_Beastmaster_DLCSkill.ActionSkill_Beastmaster_DLCSkill_C.OnStartActionAbility
	 */
	struct UActionSkill_Beastmaster_DLCSkill_C_OnStartActionAbility_Params
	{	};

	/**
	 * Function ActionSkill_Beastmaster_DLCSkill.ActionSkill_Beastmaster_DLCSkill_C.ExecuteUbergraph_ActionSkill_Beastmaster_DLCSkill
	 */
	struct UActionSkill_Beastmaster_DLCSkill_C_ExecuteUbergraph_ActionSkill_Beastmaster_DLCSkill_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KPAA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
