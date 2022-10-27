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
	 * 		Name   -> Function BPI_IO_Combat_Barrel.BPI_IO_Combat_Barrel_C.BPI_SetNavPainterEnabled
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_IO_Combat_Barrel_C::BPI_SetNavPainterEnabled(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_IO_Combat_Barrel.BPI_IO_Combat_Barrel_C.BPI_SetNavPainterEnabled");
		
		UBPI_IO_Combat_Barrel_C_BPI_SetNavPainterEnabled_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPI_IO_Combat_Barrel.BPI_IO_Combat_Barrel_C.BPI_ResetHealth
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPI_IO_Combat_Barrel_C::BPI_ResetHealth()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_IO_Combat_Barrel.BPI_IO_Combat_Barrel_C.BPI_ResetHealth");
		
		UBPI_IO_Combat_Barrel_C_BPI_ResetHealth_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPI_IO_Combat_Barrel.BPI_IO_Combat_Barrel_C.BPI_ImpulseThrow
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     ThrowVector                                                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Force                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    RotatorForSpin                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              FuseSpeedScale                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     AdditiveVector                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_IO_Combat_Barrel_C::BPI_ImpulseThrow(const struct FVector& ThrowVector, float Force, const struct FRotator& RotatorForSpin, float FuseSpeedScale, const struct FVector& AdditiveVector)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_IO_Combat_Barrel.BPI_IO_Combat_Barrel_C.BPI_ImpulseThrow");
		
		UBPI_IO_Combat_Barrel_C_BPI_ImpulseThrow_Params params {};
		params.ThrowVector = ThrowVector;
		params.Force = Force;
		params.RotatorForSpin = RotatorForSpin;
		params.FuseSpeedScale = FuseSpeedScale;
		params.AdditiveVector = AdditiveVector;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPI_IO_Combat_Barrel.BPI_IO_Combat_Barrel_C.BPI_SetSimulatePhysics
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               PhysicsOn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_IO_Combat_Barrel_C::BPI_SetSimulatePhysics(bool PhysicsOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_IO_Combat_Barrel.BPI_IO_Combat_Barrel_C.BPI_SetSimulatePhysics");
		
		UBPI_IO_Combat_Barrel_C_BPI_SetSimulatePhysics_Params params {};
		params.PhysicsOn = PhysicsOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPI_IO_Combat_Barrel.BPI_IO_Combat_Barrel_C.BPI_Explode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPI_IO_Combat_Barrel_C::BPI_Explode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_IO_Combat_Barrel.BPI_IO_Combat_Barrel_C.BPI_Explode");
		
		UBPI_IO_Combat_Barrel_C_BPI_Explode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPI_IO_Combat_Barrel.BPI_IO_Combat_Barrel_C.BPI_StartFuse
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPI_IO_Combat_Barrel_C::BPI_StartFuse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_IO_Combat_Barrel.BPI_IO_Combat_Barrel_C.BPI_StartFuse");
		
		UBPI_IO_Combat_Barrel_C_BPI_StartFuse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_IO_Combat_Barrel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_IO_Combat_Barrel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_IO_Combat_Barrel.BPI_IO_Combat_Barrel_C");
		return ptr;
	}

}


