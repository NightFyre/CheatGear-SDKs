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
	 * 		Name   -> Function BP_ZoneMap_Planet.BP_ZoneMap_Planet_C.Initialize
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ZoneMap_Planet_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ZoneMap_Planet.BP_ZoneMap_Planet_C.Initialize");
		
		ABP_ZoneMap_Planet_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_ZoneMap_Planet.BP_ZoneMap_Planet_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ZoneMap_Planet_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ZoneMap_Planet.BP_ZoneMap_Planet_C.UserConstructionScript");
		
		ABP_ZoneMap_Planet_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_ZoneMap_Planet.BP_ZoneMap_Planet_C.Animate Orbital Components__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_ZoneMap_Planet_C::Animate_Orbital_Components__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ZoneMap_Planet.BP_ZoneMap_Planet_C.Animate Orbital Components__FinishedFunc");
		
		ABP_ZoneMap_Planet_C_Animate_Orbital_Components__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_ZoneMap_Planet.BP_ZoneMap_Planet_C.Animate Orbital Components__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_ZoneMap_Planet_C::Animate_Orbital_Components__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ZoneMap_Planet.BP_ZoneMap_Planet_C.Animate Orbital Components__UpdateFunc");
		
		ABP_ZoneMap_Planet_C_Animate_Orbital_Components__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_ZoneMap_Planet.BP_ZoneMap_Planet_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_ZoneMap_Planet_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ZoneMap_Planet.BP_ZoneMap_Planet_C.ReceiveBeginPlay");
		
		ABP_ZoneMap_Planet_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_ZoneMap_Planet.BP_ZoneMap_Planet_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ZoneMap_Planet_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ZoneMap_Planet.BP_ZoneMap_Planet_C.ReceiveTick");
		
		ABP_ZoneMap_Planet_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_ZoneMap_Planet.BP_ZoneMap_Planet_C.Transition In
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ZoneMap_Planet_C::Transition_In()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ZoneMap_Planet.BP_ZoneMap_Planet_C.Transition In");
		
		ABP_ZoneMap_Planet_C_Transition_In_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_ZoneMap_Planet.BP_ZoneMap_Planet_C.Interrupt Transition In
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ZoneMap_Planet_C::Interrupt_Transition_In()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ZoneMap_Planet.BP_ZoneMap_Planet_C.Interrupt Transition In");
		
		ABP_ZoneMap_Planet_C_Interrupt_Transition_In_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_ZoneMap_Planet.BP_ZoneMap_Planet_C.Transition Out
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ZoneMap_Planet_C::Transition_Out()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ZoneMap_Planet.BP_ZoneMap_Planet_C.Transition Out");
		
		ABP_ZoneMap_Planet_C_Transition_Out_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_ZoneMap_Planet.BP_ZoneMap_Planet_C.Interrupt Transition Out
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ZoneMap_Planet_C::Interrupt_Transition_Out()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ZoneMap_Planet.BP_ZoneMap_Planet_C.Interrupt Transition Out");
		
		ABP_ZoneMap_Planet_C_Interrupt_Transition_Out_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_ZoneMap_Planet.BP_ZoneMap_Planet_C.ReceiveDestroyed
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_ZoneMap_Planet_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ZoneMap_Planet.BP_ZoneMap_Planet_C.ReceiveDestroyed");
		
		ABP_ZoneMap_Planet_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_ZoneMap_Planet.BP_ZoneMap_Planet_C.Initialize Planet
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ZoneMap_Planet_C::Initialize_Planet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ZoneMap_Planet.BP_ZoneMap_Planet_C.Initialize Planet");
		
		ABP_ZoneMap_Planet_C_Initialize_Planet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_ZoneMap_Planet.BP_ZoneMap_Planet_C.Update
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ZoneMap_Planet_C::Update()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ZoneMap_Planet.BP_ZoneMap_Planet_C.Update");
		
		ABP_ZoneMap_Planet_C_Update_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_ZoneMap_Planet.BP_ZoneMap_Planet_C.Stop Animation
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ZoneMap_Planet_C::Stop_Animation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ZoneMap_Planet.BP_ZoneMap_Planet_C.Stop Animation");
		
		ABP_ZoneMap_Planet_C_Stop_Animation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_ZoneMap_Planet.BP_ZoneMap_Planet_C.ExecuteUbergraph_BP_ZoneMap_Planet
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ZoneMap_Planet_C::ExecuteUbergraph_BP_ZoneMap_Planet(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ZoneMap_Planet.BP_ZoneMap_Planet_C.ExecuteUbergraph_BP_ZoneMap_Planet");
		
		ABP_ZoneMap_Planet_C_ExecuteUbergraph_BP_ZoneMap_Planet_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_ZoneMap_Planet_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ZoneMap_Planet_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ZoneMap_Planet.BP_ZoneMap_Planet_C");
		return ptr;
	}

}


