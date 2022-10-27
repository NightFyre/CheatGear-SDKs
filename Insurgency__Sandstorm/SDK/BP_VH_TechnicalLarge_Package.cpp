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
	 * 		Name   -> DelegateFunction BP_VH_TechnicalLarge.BP_VH_TechnicalLarge_C.OnGearChange__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void ABP_VH_TechnicalLarge_C::OnGearChange__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BP_VH_TechnicalLarge.BP_VH_TechnicalLarge_C.OnGearChange__DelegateSignature");
		
		ABP_VH_TechnicalLarge_C_OnGearChange__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB4E20
	 * 		Name   -> Function BP_VH_TechnicalLarge.BP_VH_TechnicalLarge_C.UserConstructionScript
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 */
	void ABP_VH_TechnicalLarge_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VH_TechnicalLarge.BP_VH_TechnicalLarge_C.UserConstructionScript");
		
		ABP_VH_TechnicalLarge_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB43A0
	 * 		Name   -> Function BP_VH_TechnicalLarge.BP_VH_TechnicalLarge_C.OnGearChanged
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void ABP_VH_TechnicalLarge_C::OnGearChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VH_TechnicalLarge.BP_VH_TechnicalLarge_C.OnGearChanged");
		
		ABP_VH_TechnicalLarge_C_OnGearChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F236E0
	 * 		Name   -> Function BP_VH_TechnicalLarge.BP_VH_TechnicalLarge_C.OnBrakelightToggled
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		bool                                               bpp__bEnabled__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_VH_TechnicalLarge_C::OnBrakelightToggled(bool bpp__bEnabled__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VH_TechnicalLarge.BP_VH_TechnicalLarge_C.OnBrakelightToggled");
		
		ABP_VH_TechnicalLarge_C_OnBrakelightToggled_Params params {};
		params.bpp__bEnabled__pf = bpp__bEnabled__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F23610
	 * 		Name   -> Function BP_VH_TechnicalLarge.BP_VH_TechnicalLarge_C.BndEvt__EnginePart_K2Node_ComponentBoundEvent_2_VehiclePartDamagedDelegate__DelegateSignature
	 * 		Flags  -> (Native, Public)
	 * Parameters:
	 * 		class UVehiclePartComponent*                       bpp__VehiclePart__pf                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__Damage__pf                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_VH_TechnicalLarge_C::BndEvt__EnginePart_K2Node_ComponentBoundEvent_2_VehiclePartDamagedDelegate__DelegateSignature(class UVehiclePartComponent* bpp__VehiclePart__pf, float bpp__Damage__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VH_TechnicalLarge.BP_VH_TechnicalLarge_C.BndEvt__EnginePart_K2Node_ComponentBoundEvent_2_VehiclePartDamagedDelegate__DelegateSignature");
		
		ABP_VH_TechnicalLarge_C_BndEvt__EnginePart_K2Node_ComponentBoundEvent_2_VehiclePartDamagedDelegate__DelegateSignature_Params params {};
		params.bpp__VehiclePart__pf = bpp__VehiclePart__pf;
		params.bpp__Damage__pf = bpp__Damage__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB53C0
	 * 		Name   -> Function BP_VH_TechnicalLarge.BP_VH_TechnicalLarge_C.BndEvt__EnginePart_K2Node_ComponentBoundEvent_0_VehiclePart_DestroyedDelegate__DelegateSignature
	 * 		Flags  -> (Native, Public)
	 */
	void ABP_VH_TechnicalLarge_C::BndEvt__EnginePart_K2Node_ComponentBoundEvent_0_VehiclePart_DestroyedDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VH_TechnicalLarge.BP_VH_TechnicalLarge_C.BndEvt__EnginePart_K2Node_ComponentBoundEvent_0_VehiclePart_DestroyedDelegate__DelegateSignature");
		
		ABP_VH_TechnicalLarge_C_BndEvt__EnginePart_K2Node_ComponentBoundEvent_0_VehiclePart_DestroyedDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_VH_TechnicalLarge_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_VH_TechnicalLarge_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass BP_VH_TechnicalLarge.BP_VH_TechnicalLarge_C");
		return ptr;
	}

}


