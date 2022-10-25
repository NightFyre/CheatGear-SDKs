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
	 * 		RVA    -> 0x04DB4120
	 * 		Name   -> Function BP_Aircraft_A10.BP_Aircraft_A10_C.UserConstructionScript
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 */
	void ABP_Aircraft_A10_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Aircraft_A10.BP_Aircraft_A10_C.UserConstructionScript");
		
		ABP_Aircraft_A10_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DE8B90
	 * 		Name   -> Function BP_Aircraft_A10.BP_Aircraft_A10_C.ReceiveTick
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		float                                              bpp__DeltaSeconds__pf                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Aircraft_A10_C::ReceiveTick(float bpp__DeltaSeconds__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Aircraft_A10.BP_Aircraft_A10_C.ReceiveTick");
		
		ABP_Aircraft_A10_C_ReceiveTick_Params params {};
		params.bpp__DeltaSeconds__pf = bpp__DeltaSeconds__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CBAAA0
	 * 		Name   -> Function BP_Aircraft_A10.BP_Aircraft_A10_C.ReceiveBeginPlay
	 * 		Flags  -> (Native, Event, Public)
	 */
	void ABP_Aircraft_A10_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Aircraft_A10.BP_Aircraft_A10_C.ReceiveBeginPlay");
		
		ABP_Aircraft_A10_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DE8A80
	 * 		Name   -> Function BP_Aircraft_A10.BP_Aircraft_A10_C.OnStrafeBeginDelegate_Event_1
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AAircraftBase*                               bpp__Aircraft__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Aircraft_A10_C::OnStrafeBeginDelegate_Event_1(class AAircraftBase* bpp__Aircraft__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Aircraft_A10.BP_Aircraft_A10_C.OnStrafeBeginDelegate_Event_1");
		
		ABP_Aircraft_A10_C_OnStrafeBeginDelegate_Event_1_Params params {};
		params.bpp__Aircraft__pf = bpp__Aircraft__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DE8900
	 * 		Name   -> Function BP_Aircraft_A10.BP_Aircraft_A10_C.ExecuteUbergraph_BP_Aircraft_A10_1
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		int32_t                                            bpp__EntryPoint__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Aircraft_A10_C::ExecuteUbergraph_BP_Aircraft_A10_1(int32_t bpp__EntryPoint__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Aircraft_A10.BP_Aircraft_A10_C.ExecuteUbergraph_BP_Aircraft_A10_1");
		
		ABP_Aircraft_A10_C_ExecuteUbergraph_BP_Aircraft_A10_1_Params params {};
		params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> DelegateFunction BP_Aircraft_A10.BP_Aircraft_A10_C.AircraftEventDelegate__DelegateSignature
	 * 		Flags  -> (Public, Delegate)
	 * Parameters:
	 * 		class AAircraftBase*                               bpp__Aircraft__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Aircraft_A10_C::AircraftEventDelegate__DelegateSignature(class AAircraftBase* bpp__Aircraft__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BP_Aircraft_A10.BP_Aircraft_A10_C.AircraftEventDelegate__DelegateSignature");
		
		ABP_Aircraft_A10_C_AircraftEventDelegate__DelegateSignature_Params params {};
		params.bpp__Aircraft__pf = bpp__Aircraft__pf;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Aircraft_A10_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Aircraft_A10_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass BP_Aircraft_A10.BP_Aircraft_A10_C");
		return ptr;
	}

}


