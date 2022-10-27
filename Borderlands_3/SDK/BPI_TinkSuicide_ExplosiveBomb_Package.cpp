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
	 * 		Name   -> Function BPI_TinkSuicide_ExplosiveBomb.BPI_TinkSuicide_ExplosiveBomb_C.TinkSuicideBomb_StartSuicide
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPI_TinkSuicide_ExplosiveBomb_C::TinkSuicideBomb_StartSuicide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_TinkSuicide_ExplosiveBomb.BPI_TinkSuicide_ExplosiveBomb_C.TinkSuicideBomb_StartSuicide");
		
		UBPI_TinkSuicide_ExplosiveBomb_C_TinkSuicideBomb_StartSuicide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPI_TinkSuicide_ExplosiveBomb.BPI_TinkSuicide_ExplosiveBomb_C.TinkSuicideBomb_SetCurrentHealth
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewCurrentHealth                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_TinkSuicide_ExplosiveBomb_C::TinkSuicideBomb_SetCurrentHealth(float NewCurrentHealth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_TinkSuicide_ExplosiveBomb.BPI_TinkSuicide_ExplosiveBomb_C.TinkSuicideBomb_SetCurrentHealth");
		
		UBPI_TinkSuicide_ExplosiveBomb_C_TinkSuicideBomb_SetCurrentHealth_Params params {};
		params.NewCurrentHealth = NewCurrentHealth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPI_TinkSuicide_ExplosiveBomb.BPI_TinkSuicide_ExplosiveBomb_C.TinkSuicideBomb_SetFuseTimer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewFuseTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_TinkSuicide_ExplosiveBomb_C::TinkSuicideBomb_SetFuseTimer(float NewFuseTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_TinkSuicide_ExplosiveBomb.BPI_TinkSuicide_ExplosiveBomb_C.TinkSuicideBomb_SetFuseTimer");
		
		UBPI_TinkSuicide_ExplosiveBomb_C_TinkSuicideBomb_SetFuseTimer_Params params {};
		params.NewFuseTime = NewFuseTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_TinkSuicide_ExplosiveBomb_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_TinkSuicide_ExplosiveBomb_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_TinkSuicide_ExplosiveBomb.BPI_TinkSuicide_ExplosiveBomb_C");
		return ptr;
	}

}


