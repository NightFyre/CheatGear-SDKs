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
	 * 		Name   -> Function TEDProjectile_Earthbound.TEDProjectile_Earthbound_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATEDProjectile_Earthbound_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TEDProjectile_Earthbound.TEDProjectile_Earthbound_C.UserConstructionScript");
		
		ATEDProjectile_Earthbound_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function TEDProjectile_Earthbound.TEDProjectile_Earthbound_C.GbxAsyncRequest_Spawned_61EB909044413242335576A9096A5F33
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InstanceIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATEDProjectile_Earthbound_C::GbxAsyncRequest_Spawned_61EB909044413242335576A9096A5F33(class AActor* Actor, int32_t InstanceIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TEDProjectile_Earthbound.TEDProjectile_Earthbound_C.GbxAsyncRequest_Spawned_61EB909044413242335576A9096A5F33");
		
		ATEDProjectile_Earthbound_C_GbxAsyncRequest_Spawned_61EB909044413242335576A9096A5F33_Params params {};
		params.Actor = Actor;
		params.InstanceIndex = InstanceIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function TEDProjectile_Earthbound.TEDProjectile_Earthbound_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ATEDProjectile_Earthbound_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TEDProjectile_Earthbound.TEDProjectile_Earthbound_C.ReceiveBeginPlay");
		
		ATEDProjectile_Earthbound_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function TEDProjectile_Earthbound.TEDProjectile_Earthbound_C.OnExplode
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ATEDProjectile_Earthbound_C::OnExplode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TEDProjectile_Earthbound.TEDProjectile_Earthbound_C.OnExplode");
		
		ATEDProjectile_Earthbound_C_OnExplode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function TEDProjectile_Earthbound.TEDProjectile_Earthbound_C.ExecuteUbergraph_TEDProjectile_Earthbound
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATEDProjectile_Earthbound_C::ExecuteUbergraph_TEDProjectile_Earthbound(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TEDProjectile_Earthbound.TEDProjectile_Earthbound_C.ExecuteUbergraph_TEDProjectile_Earthbound");
		
		ATEDProjectile_Earthbound_C_ExecuteUbergraph_TEDProjectile_Earthbound_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATEDProjectile_Earthbound_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATEDProjectile_Earthbound_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TEDProjectile_Earthbound.TEDProjectile_Earthbound_C");
		return ptr;
	}

}


