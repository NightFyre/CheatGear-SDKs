/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function WeaponAnimInterface.WeaponAnimInterface_C.UpdateRevolverChamberState
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<ERevolverChamberState>                      bpp__Chambers__pf__const                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWeaponAnimInterface_C::UpdateRevolverChamberState(TArray<ERevolverChamberState> bpp__Chambers__pf__const)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponAnimInterface.WeaponAnimInterface_C.UpdateRevolverChamberState");
		
		UWeaponAnimInterface_C_UpdateRevolverChamberState_Params params {};
		params.bpp__Chambers__pf__const = bpp__Chambers__pf__const;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function WeaponAnimInterface.WeaponAnimInterface_C.ToggleOpticState
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bpp__Enable__pf                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWeaponAnimInterface_C::ToggleOpticState(bool bpp__Enable__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponAnimInterface.WeaponAnimInterface_C.ToggleOpticState");
		
		UWeaponAnimInterface_C_ToggleOpticState_Params params {};
		params.bpp__Enable__pf = bpp__Enable__pf;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function WeaponAnimInterface.WeaponAnimInterface_C.StopToggleOpticMontage
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWeaponAnimInterface_C::StopToggleOpticMontage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponAnimInterface.WeaponAnimInterface_C.StopToggleOpticMontage");
		
		UWeaponAnimInterface_C_StopToggleOpticMontage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function WeaponAnimInterface.WeaponAnimInterface_C.InterfaceUpdateSimulationBlend
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              bpp__State__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWeaponAnimInterface_C::InterfaceUpdateSimulationBlend(float bpp__State__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponAnimInterface.WeaponAnimInterface_C.InterfaceUpdateSimulationBlend");
		
		UWeaponAnimInterface_C_InterfaceUpdateSimulationBlend_Params params {};
		params.bpp__State__pf = bpp__State__pf;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function WeaponAnimInterface.WeaponAnimInterface_C.ForceToggleOpticState
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bpp__bEnable__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWeaponAnimInterface_C::ForceToggleOpticState(bool bpp__bEnable__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponAnimInterface.WeaponAnimInterface_C.ForceToggleOpticState");
		
		UWeaponAnimInterface_C_ForceToggleOpticState_Params params {};
		params.bpp__bEnable__pf = bpp__bEnable__pf;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function WeaponAnimInterface.WeaponAnimInterface_C.ForceRevolverChamberVisibility
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            bpp__RemainingAmmo__pf                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWeaponAnimInterface_C::ForceRevolverChamberVisibility(int32_t bpp__RemainingAmmo__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponAnimInterface.WeaponAnimInterface_C.ForceRevolverChamberVisibility");
		
		UWeaponAnimInterface_C_ForceRevolverChamberVisibility_Params params {};
		params.bpp__RemainingAmmo__pf = bpp__RemainingAmmo__pf;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeaponAnimInterface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponAnimInterface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass WeaponAnimInterface.WeaponAnimInterface_C");
		return ptr;
	}

}


