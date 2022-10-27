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
	 * 		Name   -> Function BPI_ProjectileHoldAndThrow.BPI_ProjectileHoldAndThrow_C.HNT_Throw
	 * 		Flags  -> (Net, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPI_ProjectileHoldAndThrow_C::HNT_Throw()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_ProjectileHoldAndThrow.BPI_ProjectileHoldAndThrow_C.HNT_Throw");
		
		UBPI_ProjectileHoldAndThrow_C_HNT_Throw_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPI_ProjectileHoldAndThrow.BPI_ProjectileHoldAndThrow_C.HNT_Drop
	 * 		Flags  -> (Net, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPI_ProjectileHoldAndThrow_C::HNT_Drop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_ProjectileHoldAndThrow.BPI_ProjectileHoldAndThrow_C.HNT_Drop");
		
		UBPI_ProjectileHoldAndThrow_C_HNT_Drop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPI_ProjectileHoldAndThrow.BPI_ProjectileHoldAndThrow_C.HNT_Prime
	 * 		Flags  -> (Net, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPI_ProjectileHoldAndThrow_C::HNT_Prime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_ProjectileHoldAndThrow.BPI_ProjectileHoldAndThrow_C.HNT_Prime");
		
		UBPI_ProjectileHoldAndThrow_C_HNT_Prime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_ProjectileHoldAndThrow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_ProjectileHoldAndThrow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_ProjectileHoldAndThrow.BPI_ProjectileHoldAndThrow_C");
		return ptr;
	}

}


