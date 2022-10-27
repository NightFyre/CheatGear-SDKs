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
	 * 		Name   -> Function Proj_Weapon_TOR_HW_Swarm.Proj_Weapon_TOR_HW_Swarm_C.GenerateEndLocation
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FVector AProj_Weapon_TOR_HW_Swarm_C::GenerateEndLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Weapon_TOR_HW_Swarm.Proj_Weapon_TOR_HW_Swarm_C.GenerateEndLocation");
		
		AProj_Weapon_TOR_HW_Swarm_C_GenerateEndLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Weapon_TOR_HW_Swarm.Proj_Weapon_TOR_HW_Swarm_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProj_Weapon_TOR_HW_Swarm_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Weapon_TOR_HW_Swarm.Proj_Weapon_TOR_HW_Swarm_C.UserConstructionScript");
		
		AProj_Weapon_TOR_HW_Swarm_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Weapon_TOR_HW_Swarm.Proj_Weapon_TOR_HW_Swarm_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AProj_Weapon_TOR_HW_Swarm_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Weapon_TOR_HW_Swarm.Proj_Weapon_TOR_HW_Swarm_C.ReceiveBeginPlay");
		
		AProj_Weapon_TOR_HW_Swarm_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Weapon_TOR_HW_Swarm.Proj_Weapon_TOR_HW_Swarm_C.FindHomingTarget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Delay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProj_Weapon_TOR_HW_Swarm_C::FindHomingTarget(float Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Weapon_TOR_HW_Swarm.Proj_Weapon_TOR_HW_Swarm_C.FindHomingTarget");
		
		AProj_Weapon_TOR_HW_Swarm_C_FindHomingTarget_Params params {};
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Weapon_TOR_HW_Swarm.Proj_Weapon_TOR_HW_Swarm_C.TargetFound
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AProj_Weapon_TOR_HW_Swarm_C::TargetFound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Weapon_TOR_HW_Swarm.Proj_Weapon_TOR_HW_Swarm_C.TargetFound");
		
		AProj_Weapon_TOR_HW_Swarm_C_TargetFound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Weapon_TOR_HW_Swarm.Proj_Weapon_TOR_HW_Swarm_C.InitSwarm
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AProj_Weapon_TOR_HW_Swarm_C::InitSwarm()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Weapon_TOR_HW_Swarm.Proj_Weapon_TOR_HW_Swarm_C.InitSwarm");
		
		AProj_Weapon_TOR_HW_Swarm_C_InitSwarm_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Weapon_TOR_HW_Swarm.Proj_Weapon_TOR_HW_Swarm_C.ExecuteUbergraph_Proj_Weapon_TOR_HW_Swarm
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProj_Weapon_TOR_HW_Swarm_C::ExecuteUbergraph_Proj_Weapon_TOR_HW_Swarm(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Weapon_TOR_HW_Swarm.Proj_Weapon_TOR_HW_Swarm_C.ExecuteUbergraph_Proj_Weapon_TOR_HW_Swarm");
		
		AProj_Weapon_TOR_HW_Swarm_C_ExecuteUbergraph_Proj_Weapon_TOR_HW_Swarm_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProj_Weapon_TOR_HW_Swarm_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProj_Weapon_TOR_HW_Swarm_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Proj_Weapon_TOR_HW_Swarm.Proj_Weapon_TOR_HW_Swarm_C");
		return ptr;
	}

}


