/**
 * Name: Ground_Branch
 * Version: 1032
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_WwiseActor.BPI_WwiseActor_C.BanksUnloaded
	 * 		Flags  -> ()
	 */
	void UBPI_WwiseActor_C::BanksUnloaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_WwiseActor.BPI_WwiseActor_C.BanksUnloaded");
		
		UBPI_WwiseActor_C_BanksUnloaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_WwiseActor.BPI_WwiseActor_C.BanksLoaded
	 * 		Flags  -> ()
	 */
	void UBPI_WwiseActor_C::BanksLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_WwiseActor.BPI_WwiseActor_C.BanksLoaded");
		
		UBPI_WwiseActor_C_BanksLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_WwiseActor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_WwiseActor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_WwiseActor.BPI_WwiseActor_C");
		return ptr;
	}

}


