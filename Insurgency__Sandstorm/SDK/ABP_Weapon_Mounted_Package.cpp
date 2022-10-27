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
	 * 		RVA    -> 0x04DD58C0
	 * 		Name   -> Function ABP_Weapon_Mounted.ABP_Weapon_Mounted_C.SetEquipable
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		class AItemEquipable*                              bpp__Item__pf                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_Mounted_C::SetEquipable(class AItemEquipable* bpp__Item__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon_Mounted.ABP_Weapon_Mounted_C.SetEquipable");
		
		UABP_Weapon_Mounted_C_SetEquipable_Params params {};
		params.bpp__Item__pf = bpp__Item__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD57F0
	 * 		Name   -> Function ABP_Weapon_Mounted.ABP_Weapon_Mounted_C.OnPlayReload
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bpp__Empty__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__HasReload__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_Mounted_C::OnPlayReload(bool bpp__Empty__pf, bool bpp__HasReload__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon_Mounted.ABP_Weapon_Mounted_C.OnPlayReload");
		
		UABP_Weapon_Mounted_C_OnPlayReload_Params params {};
		params.bpp__Empty__pf = bpp__Empty__pf;
		params.bpp__HasReload__pf = bpp__HasReload__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB4B80
	 * 		Name   -> Function ABP_Weapon_Mounted.ABP_Weapon_Mounted_C.OnPlayFireLoop
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UABP_Weapon_Mounted_C::OnPlayFireLoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon_Mounted.ABP_Weapon_Mounted_C.OnPlayFireLoop");
		
		UABP_Weapon_Mounted_C_OnPlayFireLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB3FC0
	 * 		Name   -> Function ABP_Weapon_Mounted.ABP_Weapon_Mounted_C.OnPlayFire
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UABP_Weapon_Mounted_C::OnPlayFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon_Mounted.ABP_Weapon_Mounted_C.OnPlayFire");
		
		UABP_Weapon_Mounted_C_OnPlayFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DC3AA0
	 * 		Name   -> Function ABP_Weapon_Mounted.ABP_Weapon_Mounted_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		float                                              bpp__DeltaTimeX__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_Mounted_C::BlueprintUpdateAnimation(float bpp__DeltaTimeX__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon_Mounted.ABP_Weapon_Mounted_C.BlueprintUpdateAnimation");
		
		UABP_Weapon_Mounted_C_BlueprintUpdateAnimation_Params params {};
		params.bpp__DeltaTimeX__pf = bpp__DeltaTimeX__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB3FE0
	 * 		Name   -> Function ABP_Weapon_Mounted.ABP_Weapon_Mounted_C.BlueprintOnReloadInterrupt
	 * 		Flags  -> (Native, Event, Public)
	 */
	void UABP_Weapon_Mounted_C::BlueprintOnReloadInterrupt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon_Mounted.ABP_Weapon_Mounted_C.BlueprintOnReloadInterrupt");
		
		UABP_Weapon_Mounted_C_BlueprintOnReloadInterrupt_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD54A0
	 * 		Name   -> Function ABP_Weapon_Mounted.ABP_Weapon_Mounted_C.BlueprintOnReload
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		bool                                               bpp__bDryReload__pf__const                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__bSingleReload__pf__const                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__RateMultiplier__pf__const                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_Mounted_C::BlueprintOnReload(bool bpp__bDryReload__pf__const, bool bpp__bSingleReload__pf__const, float bpp__RateMultiplier__pf__const)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon_Mounted.ABP_Weapon_Mounted_C.BlueprintOnReload");
		
		UABP_Weapon_Mounted_C_BlueprintOnReload_Params params {};
		params.bpp__bDryReload__pf__const = bpp__bDryReload__pf__const;
		params.bpp__bSingleReload__pf__const = bpp__bSingleReload__pf__const;
		params.bpp__RateMultiplier__pf__const = bpp__RateMultiplier__pf__const;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB41C0
	 * 		Name   -> Function ABP_Weapon_Mounted.ABP_Weapon_Mounted_C.BlueprintOnFirearmStopFire
	 * 		Flags  -> (Native, Event, Public)
	 */
	void UABP_Weapon_Mounted_C::BlueprintOnFirearmStopFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon_Mounted.ABP_Weapon_Mounted_C.BlueprintOnFirearmStopFire");
		
		UABP_Weapon_Mounted_C_BlueprintOnFirearmStopFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD53B0
	 * 		Name   -> Function ABP_Weapon_Mounted.ABP_Weapon_Mounted_C.BlueprintOnFirearmFired
	 * 		Flags  -> (Native, Event, Public, HasOutParms, HasDefaults)
	 * Parameters:
	 * 		struct FVector                                     bpp__FireOrigin__pf__const                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     bpp__FireDirection__pf__const                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_Mounted_C::BlueprintOnFirearmFired(const struct FVector& bpp__FireOrigin__pf__const, const struct FVector& bpp__FireDirection__pf__const)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon_Mounted.ABP_Weapon_Mounted_C.BlueprintOnFirearmFired");
		
		UABP_Weapon_Mounted_C_BlueprintOnFirearmFired_Params params {};
		params.bpp__FireOrigin__pf__const = bpp__FireOrigin__pf__const;
		params.bpp__FireDirection__pf__const = bpp__FireDirection__pf__const;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB4DE0
	 * 		Name   -> Function ABP_Weapon_Mounted.ABP_Weapon_Mounted_C.BlueprintBeginPlay
	 * 		Flags  -> (Native, Event, Public)
	 */
	void UABP_Weapon_Mounted_C::BlueprintBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon_Mounted.ABP_Weapon_Mounted_C.BlueprintBeginPlay");
		
		UABP_Weapon_Mounted_C_BlueprintBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD5310
	 * 		Name   -> Function ABP_Weapon_Mounted.ABP_Weapon_Mounted_C.AnimGraph
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FPoseLink                                   bpp__AnimGraph__pf                                         (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_Mounted_C::AnimGraph(struct FPoseLink* bpp__AnimGraph__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon_Mounted.ABP_Weapon_Mounted_C.AnimGraph");
		
		UABP_Weapon_Mounted_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__AnimGraph__pf != nullptr)
			*bpp__AnimGraph__pf = params.bpp__AnimGraph__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UABP_Weapon_Mounted_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UABP_Weapon_Mounted_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass ABP_Weapon_Mounted.ABP_Weapon_Mounted_C");
		return ptr;
	}

}


