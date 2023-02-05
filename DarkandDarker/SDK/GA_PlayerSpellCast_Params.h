#pragma once

/**
 * Name: Dark_and_Darker
 * Version: Playtest_3_Hotfix_1
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
	 * Function GA_PlayerSpellCast.GA_PlayerSpellCast_C.CheckGround
	 */
	struct UGA_PlayerSpellCast_C_CheckGround_Params
	{
	public:
		struct FHitResult                                          HtResult;                                                // 0x0000(0x00E8)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
		bool                                                       Result;                                                  // 0x00E8(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GA_PlayerSpellCast.GA_PlayerSpellCast_C.Cancelled_BD46902F414FE76022DDE5BE621487B9
	 */
	struct UGA_PlayerSpellCast_C_Cancelled_BD46902F414FE76022DDE5BE621487B9_Params
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    Data;                                                    // 0x0000(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GA_PlayerSpellCast.GA_PlayerSpellCast_C.ValidData_BD46902F414FE76022DDE5BE621487B9
	 */
	struct UGA_PlayerSpellCast_C_ValidData_BD46902F414FE76022DDE5BE621487B9_Params
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    Data;                                                    // 0x0000(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GA_PlayerSpellCast.GA_PlayerSpellCast_C.AbilityActivated
	 */
	struct UGA_PlayerSpellCast_C_AbilityActivated_Params
	{
	public:
		struct FGameplayEventData                                  TriggerEventData;                                        // 0x0000(0x00B0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function GA_PlayerSpellCast.GA_PlayerSpellCast_C.CastingFinishEvent
	 */
	struct UGA_PlayerSpellCast_C_CastingFinishEvent_Params
	{
	public:
		struct FDesignDataSpell                                    CurentDesignSpellData;                                   // 0x0000(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function GA_PlayerSpellCast.GA_PlayerSpellCast_C.SpellFireEvent
	 */
	struct UGA_PlayerSpellCast_C_SpellFireEvent_Params
	{	};

	/**
	 * Function GA_PlayerSpellCast.GA_PlayerSpellCast_C.ExecuteUbergraph_GA_PlayerSpellCast
	 */
	struct UGA_PlayerSpellCast_C_ExecuteUbergraph_GA_PlayerSpellCast_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
