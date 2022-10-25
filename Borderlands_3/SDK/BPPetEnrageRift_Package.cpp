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
	 * 		Name   -> Function BPPetEnrageRift.BPPetEnrageRift_C.OnRep_Mod3Kills
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPPetEnrageRift_C::OnRep_Mod3Kills()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPPetEnrageRift.BPPetEnrageRift_C.OnRep_Mod3Kills");
		
		ABPPetEnrageRift_C_OnRep_Mod3Kills_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPPetEnrageRift.BPPetEnrageRift_C.RemoveMod3
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABPPetEnrageRift_C::RemoveMod3()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPPetEnrageRift.BPPetEnrageRift_C.RemoveMod3");
		
		ABPPetEnrageRift_C_RemoveMod3_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPPetEnrageRift.BPPetEnrageRift_C.OnCausedDeath
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UDamageComponent*                            DamageReceiver                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCausedDeathDetails                         Details                                                    (BlueprintVisible, Parm, OutParm, ReferenceParm)
	 */
	void ABPPetEnrageRift_C::OnCausedDeath(class UDamageComponent* DamageReceiver, struct FCausedDeathDetails* Details)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPPetEnrageRift.BPPetEnrageRift_C.OnCausedDeath");
		
		ABPPetEnrageRift_C_OnCausedDeath_Params params {};
		params.DamageReceiver = DamageReceiver;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Details != nullptr)
			*Details = params.Details;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPPetEnrageRift.BPPetEnrageRift_C.TrySetupMod3
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UOakActionAbility_HulkOut*                   ActionAbility                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPPetEnrageRift_C::TrySetupMod3(class UOakActionAbility_HulkOut* ActionAbility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPPetEnrageRift.BPPetEnrageRift_C.TrySetupMod3");
		
		ABPPetEnrageRift_C_TrySetupMod3_Params params {};
		params.ActionAbility = ActionAbility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPPetEnrageRift.BPPetEnrageRift_C.RemoveMod2
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPPetEnrageRift_C::RemoveMod2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPPetEnrageRift.BPPetEnrageRift_C.RemoveMod2");
		
		ABPPetEnrageRift_C_RemoveMod2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPPetEnrageRift.BPPetEnrageRift_C.TrySetupMod2
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UOakActionAbility_HulkOut*                   ActionAbility                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPPetEnrageRift_C::TrySetupMod2(class UOakActionAbility_HulkOut* ActionAbility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPPetEnrageRift.BPPetEnrageRift_C.TrySetupMod2");
		
		ABPPetEnrageRift_C_TrySetupMod2_Params params {};
		params.ActionAbility = ActionAbility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPPetEnrageRift.BPPetEnrageRift_C.TrySetupMod1
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UOakActionAbility_HulkOut*                   ActionAbility                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPPetEnrageRift_C::TrySetupMod1(class UOakActionAbility_HulkOut* ActionAbility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPPetEnrageRift.BPPetEnrageRift_C.TrySetupMod1");
		
		ABPPetEnrageRift_C_TrySetupMod1_Params params {};
		params.ActionAbility = ActionAbility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPPetEnrageRift.BPPetEnrageRift_C.SetupPlayerMods
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPPetEnrageRift_C::SetupPlayerMods()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPPetEnrageRift.BPPetEnrageRift_C.SetupPlayerMods");
		
		ABPPetEnrageRift_C_SetupPlayerMods_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPPetEnrageRift.BPPetEnrageRift_C.CreateActionRegisters
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TArray<struct FGbxActionRegister>                  res                                                        (Parm, OutParm, ZeroConstructor)
	 */
	void ABPPetEnrageRift_C::CreateActionRegisters(TArray<struct FGbxActionRegister>* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPPetEnrageRift.BPPetEnrageRift_C.CreateActionRegisters");
		
		ABPPetEnrageRift_C_CreateActionRegisters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPPetEnrageRift.BPPetEnrageRift_C.SetPetResourceLocks
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bLocked                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPPetEnrageRift_C::SetPetResourceLocks(bool bLocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPPetEnrageRift.BPPetEnrageRift_C.SetPetResourceLocks");
		
		ABPPetEnrageRift_C_SetPetResourceLocks_Params params {};
		params.bLocked = bLocked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPPetEnrageRift.BPPetEnrageRift_C.PreparePetPostTeleport
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPPetEnrageRift_C::PreparePetPostTeleport()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPPetEnrageRift.BPPetEnrageRift_C.PreparePetPostTeleport");
		
		ABPPetEnrageRift_C_PreparePetPostTeleport_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPPetEnrageRift.BPPetEnrageRift_C.Cleanup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPPetEnrageRift_C::Cleanup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPPetEnrageRift.BPPetEnrageRift_C.Cleanup");
		
		ABPPetEnrageRift_C_Cleanup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPPetEnrageRift.BPPetEnrageRift_C.PreparePetPreTeleport
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPPetEnrageRift_C::PreparePetPreTeleport()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPPetEnrageRift.BPPetEnrageRift_C.PreparePetPreTeleport");
		
		ABPPetEnrageRift_C_PreparePetPreTeleport_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPPetEnrageRift.BPPetEnrageRift_C.CauseDamageToPet
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABPPetEnrageRift_C::CauseDamageToPet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPPetEnrageRift.BPPetEnrageRift_C.CauseDamageToPet");
		
		ABPPetEnrageRift_C_CauseDamageToPet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPPetEnrageRift.BPPetEnrageRift_C.TeleportPetToCurrentLocation
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABPPetEnrageRift_C::TeleportPetToCurrentLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPPetEnrageRift.BPPetEnrageRift_C.TeleportPetToCurrentLocation");
		
		ABPPetEnrageRift_C_TeleportPetToCurrentLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPPetEnrageRift.BPPetEnrageRift_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPPetEnrageRift_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPPetEnrageRift.BPPetEnrageRift_C.UserConstructionScript");
		
		ABPPetEnrageRift_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPPetEnrageRift.BPPetEnrageRift_C.OnPetResurrected
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABPPetEnrageRift_C::OnPetResurrected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPPetEnrageRift.BPPetEnrageRift_C.OnPetResurrected");
		
		ABPPetEnrageRift_C_OnPetResurrected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPPetEnrageRift.BPPetEnrageRift_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPPetEnrageRift_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPPetEnrageRift.BPPetEnrageRift_C.ReceiveEndPlay");
		
		ABPPetEnrageRift_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPPetEnrageRift.BPPetEnrageRift_C.NotifyPetTeleported
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPPetEnrageRift_C::NotifyPetTeleported()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPPetEnrageRift.BPPetEnrageRift_C.NotifyPetTeleported");
		
		ABPPetEnrageRift_C_NotifyPetTeleported_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPPetEnrageRift.BPPetEnrageRift_C.OnShutdownRequested
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bForced                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPPetEnrageRift_C::OnShutdownRequested(bool bForced)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPPetEnrageRift.BPPetEnrageRift_C.OnShutdownRequested");
		
		ABPPetEnrageRift_C_OnShutdownRequested_Params params {};
		params.bForced = bForced;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPPetEnrageRift.BPPetEnrageRift_C.ExecuteUbergraph_BPPetEnrageRift
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPPetEnrageRift_C::ExecuteUbergraph_BPPetEnrageRift(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPPetEnrageRift.BPPetEnrageRift_C.ExecuteUbergraph_BPPetEnrageRift");
		
		ABPPetEnrageRift_C_ExecuteUbergraph_BPPetEnrageRift_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABPPetEnrageRift_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPPetEnrageRift_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPPetEnrageRift.BPPetEnrageRift_C");
		return ptr;
	}

}


