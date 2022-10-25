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
	 * 		RVA    -> 0x009DAA00
	 * 		Name   -> Function BP_BreakableWoodWindow_02.BP_BreakableWoodWindow_02_C.UserConstructionScript
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 */
	void ABP_BreakableWoodWindow_02_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BreakableWoodWindow_02.BP_BreakableWoodWindow_02_C.UserConstructionScript");
		
		ABP_BreakableWoodWindow_02_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DEF270
	 * 		Name   -> Function BP_BreakableWoodWindow_02.BP_BreakableWoodWindow_02_C.ExecuteUbergraph_BP_BreakableWoodWindow_02_1
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		int32_t                                            bpp__EntryPoint__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_BreakableWoodWindow_02_C::ExecuteUbergraph_BP_BreakableWoodWindow_02_1(int32_t bpp__EntryPoint__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BreakableWoodWindow_02.BP_BreakableWoodWindow_02_C.ExecuteUbergraph_BP_BreakableWoodWindow_02_1");
		
		ABP_BreakableWoodWindow_02_C_ExecuteUbergraph_BP_BreakableWoodWindow_02_1_Params params {};
		params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DEF140
	 * 		Name   -> Function BP_BreakableWoodWindow_02.BP_BreakableWoodWindow_02_C.DelegateOnUse
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class APawn*                                       bpp__User__pf                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  bpp__HitResult__pf__const                                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void ABP_BreakableWoodWindow_02_C::DelegateOnUse(class APawn* bpp__User__pf, const struct FHitResult& bpp__HitResult__pf__const)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BreakableWoodWindow_02.BP_BreakableWoodWindow_02_C.DelegateOnUse");
		
		ABP_BreakableWoodWindow_02_C_DelegateOnUse_Params params {};
		params.bpp__User__pf = bpp__User__pf;
		params.bpp__HitResult__pf__const = bpp__HitResult__pf__const;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB39A0
	 * 		Name   -> Function BP_BreakableWoodWindow_02.BP_BreakableWoodWindow_02_C.BndEvt__Window_Frame_Lower_K2Node_ComponentBoundEvent_3_OnBreakSignature__DelegateSignature
	 * 		Flags  -> (Native, Public)
	 */
	void ABP_BreakableWoodWindow_02_C::BndEvt__Window_Frame_Lower_K2Node_ComponentBoundEvent_3_OnBreakSignature__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BreakableWoodWindow_02.BP_BreakableWoodWindow_02_C.BndEvt__Window_Frame_Lower_K2Node_ComponentBoundEvent_3_OnBreakSignature__DelegateSignature");
		
		ABP_BreakableWoodWindow_02_C_BndEvt__Window_Frame_Lower_K2Node_ComponentBoundEvent_3_OnBreakSignature__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB3EA0
	 * 		Name   -> Function BP_BreakableWoodWindow_02.BP_BreakableWoodWindow_02_C.BndEvt__RoundReset_K2Node_ComponentBoundEvent_1_OnRoundResetDelegate__DelegateSignature
	 * 		Flags  -> (Native, Public)
	 */
	void ABP_BreakableWoodWindow_02_C::BndEvt__RoundReset_K2Node_ComponentBoundEvent_1_OnRoundResetDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BreakableWoodWindow_02.BP_BreakableWoodWindow_02_C.BndEvt__RoundReset_K2Node_ComponentBoundEvent_1_OnRoundResetDelegate__DelegateSignature");
		
		ABP_BreakableWoodWindow_02_C_BndEvt__RoundReset_K2Node_ComponentBoundEvent_1_OnRoundResetDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_BreakableWoodWindow_02_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_BreakableWoodWindow_02_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass BP_BreakableWoodWindow_02.BP_BreakableWoodWindow_02_C");
		return ptr;
	}

}


