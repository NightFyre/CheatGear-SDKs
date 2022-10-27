/**
 * Name: Borderlands_3
 * Version: 4.20.3
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronBear_DakkaBear.BPChar_IronBear_DakkaBear_C.BootGunnersNestOccupant
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               InputPin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Delay                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_IronBear_DakkaBear_C::BootGunnersNestOccupant(bool InputPin, float* Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronBear_DakkaBear.BPChar_IronBear_DakkaBear_C.BootGunnersNestOccupant");
		
		ABPChar_IronBear_DakkaBear_C_BootGunnersNestOccupant_Params params {};
		params.InputPin = InputPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Delay != nullptr)
			*Delay = params.Delay;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronBear_DakkaBear.BPChar_IronBear_DakkaBear_C.KickPlayerOutOfGunnersNest
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               zKilled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Delay                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_IronBear_DakkaBear_C::KickPlayerOutOfGunnersNest(bool zKilled, float* Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronBear_DakkaBear.BPChar_IronBear_DakkaBear_C.KickPlayerOutOfGunnersNest");
		
		ABPChar_IronBear_DakkaBear_C_KickPlayerOutOfGunnersNest_Params params {};
		params.zKilled = zKilled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Delay != nullptr)
			*Delay = params.Delay;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronBear_DakkaBear.BPChar_IronBear_DakkaBear_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_IronBear_DakkaBear_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronBear_DakkaBear.BPChar_IronBear_DakkaBear_C.UserConstructionScript");
		
		ABPChar_IronBear_DakkaBear_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronBear_DakkaBear.BPChar_IronBear_DakkaBear_C.OnRep_GunnersNestOccupied
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_IronBear_DakkaBear_C::OnRep_GunnersNestOccupied()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronBear_DakkaBear.BPChar_IronBear_DakkaBear_C.OnRep_GunnersNestOccupied");
		
		ABPChar_IronBear_DakkaBear_C_OnRep_GunnersNestOccupied_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronBear_DakkaBear.BPChar_IronBear_DakkaBear_C.OnAttachStateChanged_GunnersNest
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_IronBear_DakkaBear_C::OnAttachStateChanged_GunnersNest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronBear_DakkaBear.BPChar_IronBear_DakkaBear_C.OnAttachStateChanged_GunnersNest");
		
		ABPChar_IronBear_DakkaBear_C_OnAttachStateChanged_GunnersNest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronBear_DakkaBear.BPChar_IronBear_DakkaBear_C.StartGunnersNestBonus
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_IronBear_DakkaBear_C::StartGunnersNestBonus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronBear_DakkaBear.BPChar_IronBear_DakkaBear_C.StartGunnersNestBonus");
		
		ABPChar_IronBear_DakkaBear_C_StartGunnersNestBonus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronBear_DakkaBear.BPChar_IronBear_DakkaBear_C.StopGunnersNextBonus
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_IronBear_DakkaBear_C::StopGunnersNextBonus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronBear_DakkaBear.BPChar_IronBear_DakkaBear_C.StopGunnersNextBonus");
		
		ABPChar_IronBear_DakkaBear_C_StopGunnersNextBonus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronBear_DakkaBear.BPChar_IronBear_DakkaBear_C.CalculateAutoBearDuration
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_IronBear_DakkaBear_C::CalculateAutoBearDuration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronBear_DakkaBear.BPChar_IronBear_DakkaBear_C.CalculateAutoBearDuration");
		
		ABPChar_IronBear_DakkaBear_C_CalculateAutoBearDuration_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_IronBear_DakkaBear.BPChar_IronBear_DakkaBear_C.ExecuteUbergraph_BPChar_IronBear_DakkaBear
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_IronBear_DakkaBear_C::ExecuteUbergraph_BPChar_IronBear_DakkaBear(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_IronBear_DakkaBear.BPChar_IronBear_DakkaBear_C.ExecuteUbergraph_BPChar_IronBear_DakkaBear");
		
		ABPChar_IronBear_DakkaBear_C_ExecuteUbergraph_BPChar_IronBear_DakkaBear_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABPChar_IronBear_DakkaBear_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPChar_IronBear_DakkaBear_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_IronBear_DakkaBear.BPChar_IronBear_DakkaBear_C");
		return ptr;
	}

}


