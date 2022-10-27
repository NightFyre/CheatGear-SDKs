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
	 * Function ActionSkill_PetEnrage.ActionSkill_PetEnrage_C.ShouldStopAbilityOnPawnSlotComponentAttach
	 */
	struct UActionSkill_PetEnrage_C_ShouldStopAbilityOnPawnSlotComponentAttach_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ActionSkill_PetEnrage.ActionSkill_PetEnrage_C.CalculateAbilityState
	 */
	struct UActionSkill_PetEnrage_C_CalculateAbilityState_Params
	{
	public:
		EGbxAbilityState                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ActionSkill_PetEnrage.ActionSkill_PetEnrage_C.GetActionRegisters
	 */
	struct UActionSkill_PetEnrage_C_GetActionRegisters_Params
	{
	public:
		struct FVector                                             InLocation;                                              // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KYY5[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FGbxActionRegister>                          res;                                                     // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function ActionSkill_PetEnrage.ActionSkill_PetEnrage_C.GetCooldownRestartPercent
	 */
	struct UActionSkill_PetEnrage_C_GetCooldownRestartPercent_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ActionSkill_PetEnrage.ActionSkill_PetEnrage_C.GetMaxCooldownModifier
	 */
	struct UActionSkill_PetEnrage_C_GetMaxCooldownModifier_Params
	{
	public:
		EGbxAttributeModifierType                                  ModifierType;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1E25[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Value;                                                   // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ActionSkill_PetEnrage.ActionSkill_PetEnrage_C.GbxAsyncRequest_Miss_6ABA4D30415493C4454273ADF8C3540A
	 */
	struct UActionSkill_PetEnrage_C_GbxAsyncRequest_Miss_6ABA4D30415493C4454273ADF8C3540A_Params
	{
	public:
		struct FHitResult                                          Result;                                                  // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function ActionSkill_PetEnrage.ActionSkill_PetEnrage_C.GbxAsyncRequest_Hit_6ABA4D30415493C4454273ADF8C3540A
	 */
	struct UActionSkill_PetEnrage_C_GbxAsyncRequest_Hit_6ABA4D30415493C4454273ADF8C3540A_Params
	{
	public:
		struct FHitResult                                          Result;                                                  // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function ActionSkill_PetEnrage.ActionSkill_PetEnrage_C.OnStartActionAbility
	 */
	struct UActionSkill_PetEnrage_C_OnStartActionAbility_Params
	{	};

	/**
	 * Function ActionSkill_PetEnrage.ActionSkill_PetEnrage_C.FindTargetLocationAsync
	 */
	struct UActionSkill_PetEnrage_C_FindTargetLocationAsync_Params
	{	};

	/**
	 * Function ActionSkill_PetEnrage.ActionSkill_PetEnrage_C.LocationQueryComplete
	 */
	struct UActionSkill_PetEnrage_C_LocationQueryComplete_Params
	{
	public:
		struct FVector                                             TargetLocation;                                          // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ActionSkill_PetEnrage.ActionSkill_PetEnrage_C.OnStopActionAbility
	 */
	struct UActionSkill_PetEnrage_C_OnStopActionAbility_Params
	{	};

	/**
	 * Function ActionSkill_PetEnrage.ActionSkill_PetEnrage_C.ExecuteUbergraph_ActionSkill_PetEnrage
	 */
	struct UActionSkill_PetEnrage_C_ExecuteUbergraph_ActionSkill_PetEnrage_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OBP7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
