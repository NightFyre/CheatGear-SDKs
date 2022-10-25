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
	 * 		RVA    -> 0x00CBA850
	 * 		Name   -> Function BP_Prop_PlasterDoll.BP_Prop_PlasterDoll_C.BndEvt__Torso_K2Node_ComponentBoundEvent_2_OnBreakSignature__DelegateSignature
	 * 		Flags  -> (Native, Public)
	 */
	void ABP_Prop_PlasterDoll_C::BndEvt__Torso_K2Node_ComponentBoundEvent_2_OnBreakSignature__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Prop_PlasterDoll.BP_Prop_PlasterDoll_C.BndEvt__Torso_K2Node_ComponentBoundEvent_2_OnBreakSignature__DelegateSignature");
		
		ABP_Prop_PlasterDoll_C_BndEvt__Torso_K2Node_ComponentBoundEvent_2_OnBreakSignature__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB3EA0
	 * 		Name   -> Function BP_Prop_PlasterDoll.BP_Prop_PlasterDoll_C.BndEvt__RightLeg_K2Node_ComponentBoundEvent_1_OnBreakSignature__DelegateSignature
	 * 		Flags  -> (Native, Public)
	 */
	void ABP_Prop_PlasterDoll_C::BndEvt__RightLeg_K2Node_ComponentBoundEvent_1_OnBreakSignature__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Prop_PlasterDoll.BP_Prop_PlasterDoll_C.BndEvt__RightLeg_K2Node_ComponentBoundEvent_1_OnBreakSignature__DelegateSignature");
		
		ABP_Prop_PlasterDoll_C_BndEvt__RightLeg_K2Node_ComponentBoundEvent_1_OnBreakSignature__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB39A0
	 * 		Name   -> Function BP_Prop_PlasterDoll.BP_Prop_PlasterDoll_C.BndEvt__LeftLeg_K2Node_ComponentBoundEvent_0_OnBreakSignature__DelegateSignature
	 * 		Flags  -> (Native, Public)
	 */
	void ABP_Prop_PlasterDoll_C::BndEvt__LeftLeg_K2Node_ComponentBoundEvent_0_OnBreakSignature__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Prop_PlasterDoll.BP_Prop_PlasterDoll_C.BndEvt__LeftLeg_K2Node_ComponentBoundEvent_0_OnBreakSignature__DelegateSignature");
		
		ABP_Prop_PlasterDoll_C_BndEvt__LeftLeg_K2Node_ComponentBoundEvent_0_OnBreakSignature__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Prop_PlasterDoll_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Prop_PlasterDoll_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass BP_Prop_PlasterDoll.BP_Prop_PlasterDoll_C");
		return ptr;
	}

}


