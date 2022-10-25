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
	 * 		RVA    -> 0x04DB39A0
	 * 		Name   -> Function BP_Prop_Vehicle_Base.BP_Prop_Vehicle_Base_C.UserConstructionScript
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 */
	void ABP_Prop_Vehicle_Base_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Prop_Vehicle_Base.BP_Prop_Vehicle_Base_C.UserConstructionScript");
		
		ABP_Prop_Vehicle_Base_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009DAA00
	 * 		Name   -> Function BP_Prop_Vehicle_Base.BP_Prop_Vehicle_Base_C.ResetMaterials
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void ABP_Prop_Vehicle_Base_C::ResetMaterials()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Prop_Vehicle_Base.BP_Prop_Vehicle_Base_C.ResetMaterials");
		
		ABP_Prop_Vehicle_Base_C_ResetMaterials_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB3DC0
	 * 		Name   -> Function BP_Prop_Vehicle_Base.BP_Prop_Vehicle_Base_C.K2_OnReset
	 * 		Flags  -> (Native, Event, Public)
	 */
	void ABP_Prop_Vehicle_Base_C::K2_OnReset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Prop_Vehicle_Base.BP_Prop_Vehicle_Base_C.K2_OnReset");
		
		ABP_Prop_Vehicle_Base_C_K2_OnReset_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04EB0190
	 * 		Name   -> Function BP_Prop_Vehicle_Base.BP_Prop_Vehicle_Base_C.CreateDynamicMaterials
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            bpp__Index__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Prop_Vehicle_Base_C::CreateDynamicMaterials(int32_t bpp__Index__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Prop_Vehicle_Base.BP_Prop_Vehicle_Base_C.CreateDynamicMaterials");
		
		ABP_Prop_Vehicle_Base_C_CreateDynamicMaterials_Params params {};
		params.bpp__Index__pf = bpp__Index__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CBA850
	 * 		Name   -> Function BP_Prop_Vehicle_Base.BP_Prop_Vehicle_Base_C.BndEvt__RoundReset_K2Node_ComponentBoundEvent_1_OnRoundResetDelegate__DelegateSignature
	 * 		Flags  -> (Native, Public)
	 */
	void ABP_Prop_Vehicle_Base_C::BndEvt__RoundReset_K2Node_ComponentBoundEvent_1_OnRoundResetDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Prop_Vehicle_Base.BP_Prop_Vehicle_Base_C.BndEvt__RoundReset_K2Node_ComponentBoundEvent_1_OnRoundResetDelegate__DelegateSignature");
		
		ABP_Prop_Vehicle_Base_C_BndEvt__RoundReset_K2Node_ComponentBoundEvent_1_OnRoundResetDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB3EA0
	 * 		Name   -> Function BP_Prop_Vehicle_Base.BP_Prop_Vehicle_Base_C.BndEvt__EnginePart_K2Node_ComponentBoundEvent_0_Engine_BlowUpDelegate__DelegateSignature
	 * 		Flags  -> (Native, Public)
	 */
	void ABP_Prop_Vehicle_Base_C::BndEvt__EnginePart_K2Node_ComponentBoundEvent_0_Engine_BlowUpDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Prop_Vehicle_Base.BP_Prop_Vehicle_Base_C.BndEvt__EnginePart_K2Node_ComponentBoundEvent_0_Engine_BlowUpDelegate__DelegateSignature");
		
		ABP_Prop_Vehicle_Base_C_BndEvt__EnginePart_K2Node_ComponentBoundEvent_0_Engine_BlowUpDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Prop_Vehicle_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Prop_Vehicle_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass BP_Prop_Vehicle_Base.BP_Prop_Vehicle_Base_C");
		return ptr;
	}

}


