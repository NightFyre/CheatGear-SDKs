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
	 * Function ActionSkill_IronBear.ActionSkill_IronBear_C.GetActionSkillWidgetKeyframe
	 */
	struct UActionSkill_IronBear_C_GetActionSkillWidgetKeyframe_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function ActionSkill_IronBear.ActionSkill_IronBear_C.CalculateAbilityState
	 */
	struct UActionSkill_IronBear_C_CalculateAbilityState_Params
	{
	public:
		EGbxAbilityState                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ActionSkill_IronBear.ActionSkill_IronBear_C.GetIronBearClass
	 */
	struct UActionSkill_IronBear_C_GetIronBearClass_Params
	{
	public:
		class UClass*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function ActionSkill_IronBear.ActionSkill_IronBear_C.GetIronBearSpawnRotation
	 */
	struct UActionSkill_IronBear_C_GetIronBearSpawnRotation_Params
	{
	public:
		struct FRotator                                            ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ActionSkill_IronBear.ActionSkill_IronBear_C.GetIronBearSpawnLocation
	 */
	struct UActionSkill_IronBear_C_GetIronBearSpawnLocation_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ActionSkill_IronBear.ActionSkill_IronBear_C.GetCooldownRestartPercent
	 */
	struct UActionSkill_IronBear_C_GetCooldownRestartPercent_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ActionSkill_IronBear.ActionSkill_IronBear_C.ShouldAbortActivation
	 */
	struct UActionSkill_IronBear_C_ShouldAbortActivation_Params
	{
	public:
		unsigned char                                              OutAbortCode;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ActionSkill_IronBear.ActionSkill_IronBear_C.GetCameraYaw
	 */
	struct UActionSkill_IronBear_C_GetCameraYaw_Params
	{
	public:
		float                                                      res;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LZNI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ActionSkill_IronBear.ActionSkill_IronBear_C.StartSummoningIronCub
	 */
	struct UActionSkill_IronBear_C_StartSummoningIronCub_Params
	{	};

	/**
	 * Function ActionSkill_IronBear.ActionSkill_IronBear_C.ExecuteUbergraph_ActionSkill_IronBear
	 */
	struct UActionSkill_IronBear_C_ExecuteUbergraph_ActionSkill_IronBear_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_55K7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
