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
	 * 		RVA    -> 0x00CBAAC0
	 * 		Name   -> Function BP_Prop_Sprinkler_Big_01.BP_Prop_Sprinkler_Big_01_C.UserConstructionScript
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 */
	void ABP_Prop_Sprinkler_Big_01_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Prop_Sprinkler_Big_01.BP_Prop_Sprinkler_Big_01_C.UserConstructionScript");
		
		ABP_Prop_Sprinkler_Big_01_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009DAA00
	 * 		Name   -> Function BP_Prop_Sprinkler_Big_01.BP_Prop_Sprinkler_Big_01_C.SprinklerOff
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void ABP_Prop_Sprinkler_Big_01_C::SprinklerOff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Prop_Sprinkler_Big_01.BP_Prop_Sprinkler_Big_01_C.SprinklerOff");
		
		ABP_Prop_Sprinkler_Big_01_C_SprinklerOff_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E7D770
	 * 		Name   -> Function BP_Prop_Sprinkler_Big_01.BP_Prop_Sprinkler_Big_01_C.ReceiveActorBeginOverlap
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		class AActor*                                      bpp__OtherActor__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Prop_Sprinkler_Big_01_C::ReceiveActorBeginOverlap(class AActor* bpp__OtherActor__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Prop_Sprinkler_Big_01.BP_Prop_Sprinkler_Big_01_C.ReceiveActorBeginOverlap");
		
		ABP_Prop_Sprinkler_Big_01_C_ReceiveActorBeginOverlap_Params params {};
		params.bpp__OtherActor__pf = bpp__OtherActor__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CBAAA0
	 * 		Name   -> Function BP_Prop_Sprinkler_Big_01.BP_Prop_Sprinkler_Big_01_C.CheckExtinguish
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void ABP_Prop_Sprinkler_Big_01_C::CheckExtinguish()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Prop_Sprinkler_Big_01.BP_Prop_Sprinkler_Big_01_C.CheckExtinguish");
		
		ABP_Prop_Sprinkler_Big_01_C_CheckExtinguish_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CBA790
	 * 		Name   -> Function BP_Prop_Sprinkler_Big_01.BP_Prop_Sprinkler_Big_01_C.BlueprintOnBreak
	 * 		Flags  -> (Native, Event, Public)
	 */
	void ABP_Prop_Sprinkler_Big_01_C::BlueprintOnBreak()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Prop_Sprinkler_Big_01.BP_Prop_Sprinkler_Big_01_C.BlueprintOnBreak");
		
		ABP_Prop_Sprinkler_Big_01_C_BlueprintOnBreak_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Prop_Sprinkler_Big_01_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Prop_Sprinkler_Big_01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass BP_Prop_Sprinkler_Big_01.BP_Prop_Sprinkler_Big_01_C");
		return ptr;
	}

}


