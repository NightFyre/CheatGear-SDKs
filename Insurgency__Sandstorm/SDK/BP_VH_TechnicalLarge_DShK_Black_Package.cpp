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
	 * 		RVA    -> 0x04DB4920
	 * 		Name   -> Function BP_VH_TechnicalLarge_DShK_Black.BP_VH_TechnicalLarge_DShK_Black_C.BndEvt__EnginePart_K2Node_ComponentBoundEvent_0_VehiclePartDestroyedDelegate__DelegateSignature
	 * 		Flags  -> (Native, Public)
	 */
	void ABP_VH_TechnicalLarge_DShK_Black_C::BndEvt__EnginePart_K2Node_ComponentBoundEvent_0_VehiclePartDestroyedDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VH_TechnicalLarge_DShK_Black.BP_VH_TechnicalLarge_DShK_Black_C.BndEvt__EnginePart_K2Node_ComponentBoundEvent_0_VehiclePartDestroyedDelegate__DelegateSignature");
		
		ABP_VH_TechnicalLarge_DShK_Black_C_BndEvt__EnginePart_K2Node_ComponentBoundEvent_0_VehiclePartDestroyedDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_VH_TechnicalLarge_DShK_Black_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_VH_TechnicalLarge_DShK_Black_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass BP_VH_TechnicalLarge_DShK_Black.BP_VH_TechnicalLarge_DShK_Black_C");
		return ptr;
	}

}


