/**
 * Name: Dark_and_Darker
 * Version: Playtest_3_Hotfix_1
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x01B2CFE0
	 * 		Name   -> Function GA_PlayerSpellCast.GA_PlayerSpellCast_C.CheckGround
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  HtResult                                                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_PlayerSpellCast_C::CheckGround(const struct FHitResult& HtResult, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_PlayerSpellCast.GA_PlayerSpellCast_C.CheckGround");
		
		UGA_PlayerSpellCast_C_CheckGround_Params params {};
		params.HtResult = HtResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2CFE0
	 * 		Name   -> Function GA_PlayerSpellCast.GA_PlayerSpellCast_C.Cancelled_BD46902F414FE76022DDE5BE621487B9
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayAbilityTargetDataHandle            Data                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UGA_PlayerSpellCast_C::Cancelled_BD46902F414FE76022DDE5BE621487B9(const struct FGameplayAbilityTargetDataHandle& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_PlayerSpellCast.GA_PlayerSpellCast_C.Cancelled_BD46902F414FE76022DDE5BE621487B9");
		
		UGA_PlayerSpellCast_C_Cancelled_BD46902F414FE76022DDE5BE621487B9_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2CFE0
	 * 		Name   -> Function GA_PlayerSpellCast.GA_PlayerSpellCast_C.ValidData_BD46902F414FE76022DDE5BE621487B9
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayAbilityTargetDataHandle            Data                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UGA_PlayerSpellCast_C::ValidData_BD46902F414FE76022DDE5BE621487B9(const struct FGameplayAbilityTargetDataHandle& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_PlayerSpellCast.GA_PlayerSpellCast_C.ValidData_BD46902F414FE76022DDE5BE621487B9");
		
		UGA_PlayerSpellCast_C_ValidData_BD46902F414FE76022DDE5BE621487B9_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2CFE0
	 * 		Name   -> Function GA_PlayerSpellCast.GA_PlayerSpellCast_C.AbilityActivated
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayEventData                          TriggerEventData                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UGA_PlayerSpellCast_C::AbilityActivated(const struct FGameplayEventData& TriggerEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_PlayerSpellCast.GA_PlayerSpellCast_C.AbilityActivated");
		
		UGA_PlayerSpellCast_C_AbilityActivated_Params params {};
		params.TriggerEventData = TriggerEventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2CFE0
	 * 		Name   -> Function GA_PlayerSpellCast.GA_PlayerSpellCast_C.CastingFinishEvent
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FDesignDataSpell                            CurentDesignSpellData                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UGA_PlayerSpellCast_C::CastingFinishEvent(const struct FDesignDataSpell& CurentDesignSpellData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_PlayerSpellCast.GA_PlayerSpellCast_C.CastingFinishEvent");
		
		UGA_PlayerSpellCast_C_CastingFinishEvent_Params params {};
		params.CurentDesignSpellData = CurentDesignSpellData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2CFE0
	 * 		Name   -> Function GA_PlayerSpellCast.GA_PlayerSpellCast_C.SpellFireEvent
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UGA_PlayerSpellCast_C::SpellFireEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_PlayerSpellCast.GA_PlayerSpellCast_C.SpellFireEvent");
		
		UGA_PlayerSpellCast_C_SpellFireEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2CFE0
	 * 		Name   -> Function GA_PlayerSpellCast.GA_PlayerSpellCast_C.ExecuteUbergraph_GA_PlayerSpellCast
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_PlayerSpellCast_C::ExecuteUbergraph_GA_PlayerSpellCast(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_PlayerSpellCast.GA_PlayerSpellCast_C.ExecuteUbergraph_GA_PlayerSpellCast");
		
		UGA_PlayerSpellCast_C_ExecuteUbergraph_GA_PlayerSpellCast_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_PlayerSpellCast_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_PlayerSpellCast_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_PlayerSpellCast.GA_PlayerSpellCast_C");
		return ptr;
	}

}


