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
	 * 		Name   -> Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.DoPortalFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Var2Anim                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAction_Beastmaster_RakkAttack_Base_C::DoPortalFX(bool Var2Anim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.DoPortalFX");
		
		UAction_Beastmaster_RakkAttack_Base_C_DoPortalFX_Params params {};
		params.Var2Anim = Var2Anim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.EnsureGoodEnd
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UAction_Beastmaster_RakkAttack_Base_C::EnsureGoodEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.EnsureGoodEnd");
		
		UAction_Beastmaster_RakkAttack_Base_C_EnsureGoodEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.GetNextHomingTarget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_Beastmaster_RakkAttack_Base_C::GetNextHomingTarget(class AActor** res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.GetNextHomingTarget");
		
		UAction_Beastmaster_RakkAttack_Base_C_GetNextHomingTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.HandleRakkSpawn
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AProjectile_RakkAttack_Rakk_C*               NewRakk                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_Beastmaster_RakkAttack_Base_C::HandleRakkSpawn(class AProjectile_RakkAttack_Rakk_C* NewRakk)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.HandleRakkSpawn");
		
		UAction_Beastmaster_RakkAttack_Base_C_HandleRakkSpawn_Params params {};
		params.NewRakk = NewRakk;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.GetRakkSpawnTransform
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FTransform                                  res                                                        (Parm, OutParm, IsPlainOldData, NoDestructor)
	 */
	void UAction_Beastmaster_RakkAttack_Base_C::GetRakkSpawnTransform(struct FTransform* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.GetRakkSpawnTransform");
		
		UAction_Beastmaster_RakkAttack_Base_C_GetRakkSpawnTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.SetMaxNumRakks
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UAction_Beastmaster_RakkAttack_Base_C::SetMaxNumRakks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.SetMaxNumRakks");
		
		UAction_Beastmaster_RakkAttack_Base_C_SetMaxNumRakks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.GbxAsyncRequest_Spawned_244167AD48FDCDF195CF85BCDF0B8202
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InstanceIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_Beastmaster_RakkAttack_Base_C::GbxAsyncRequest_Spawned_244167AD48FDCDF195CF85BCDF0B8202(class AActor* Actor, int32_t InstanceIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.GbxAsyncRequest_Spawned_244167AD48FDCDF195CF85BCDF0B8202");
		
		UAction_Beastmaster_RakkAttack_Base_C_GbxAsyncRequest_Spawned_244167AD48FDCDF195CF85BCDF0B8202_Params params {};
		params.Actor = Actor;
		params.InstanceIndex = InstanceIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.Notify_SpawnRakks
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_Beastmaster_RakkAttack_Base_C::Notify_SpawnRakks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.Notify_SpawnRakks");
		
		UAction_Beastmaster_RakkAttack_Base_C_Notify_SpawnRakks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.OnServerBegin
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_Beastmaster_RakkAttack_Base_C::OnServerBegin(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.OnServerBegin");
		
		UAction_Beastmaster_RakkAttack_Base_C_OnServerBegin_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.FindTargets
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_Beastmaster_RakkAttack_Base_C::FindTargets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.FindTargets");
		
		UAction_Beastmaster_RakkAttack_Base_C_FindTargets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.OnServerEnd
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EGbxActionEndState                                 ActionEndState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_Beastmaster_RakkAttack_Base_C::OnServerEnd(EGbxActionEndState ActionEndState, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.OnServerEnd");
		
		UAction_Beastmaster_RakkAttack_Base_C_OnServerEnd_Params params {};
		params.ActionEndState = ActionEndState;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.Notify_SpawnPortal
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_Beastmaster_RakkAttack_Base_C::Notify_SpawnPortal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.Notify_SpawnPortal");
		
		UAction_Beastmaster_RakkAttack_Base_C_Notify_SpawnPortal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.Notify_SpawnPortal_Var2
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_Beastmaster_RakkAttack_Base_C::Notify_SpawnPortal_Var2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.Notify_SpawnPortal_Var2");
		
		UAction_Beastmaster_RakkAttack_Base_C_Notify_SpawnPortal_Var2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.Notify_Rumble
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_Beastmaster_RakkAttack_Base_C::Notify_Rumble()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.Notify_Rumble");
		
		UAction_Beastmaster_RakkAttack_Base_C_Notify_Rumble_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.Notify_CameraShake
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_Beastmaster_RakkAttack_Base_C::Notify_CameraShake()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.Notify_CameraShake");
		
		UAction_Beastmaster_RakkAttack_Base_C_Notify_CameraShake_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.Notify_CameraShake_Var2
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_Beastmaster_RakkAttack_Base_C::Notify_CameraShake_Var2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.Notify_CameraShake_Var2");
		
		UAction_Beastmaster_RakkAttack_Base_C_Notify_CameraShake_Var2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.ExecuteUbergraph_Action_Beastmaster_RakkAttack_Base
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_Beastmaster_RakkAttack_Base_C::ExecuteUbergraph_Action_Beastmaster_RakkAttack_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.ExecuteUbergraph_Action_Beastmaster_RakkAttack_Base");
		
		UAction_Beastmaster_RakkAttack_Base_C_ExecuteUbergraph_Action_Beastmaster_RakkAttack_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAction_Beastmaster_RakkAttack_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAction_Beastmaster_RakkAttack_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C");
		return ptr;
	}

}


