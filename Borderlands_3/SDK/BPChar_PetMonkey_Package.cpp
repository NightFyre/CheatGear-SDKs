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
	 * 		Name   -> Function BPChar_PetMonkey.BPChar_PetMonkey_C.GetPetJabberIngenuityBarrel
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Barrel                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_PetMonkey_C::GetPetJabberIngenuityBarrel(class AActor** Barrel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetMonkey.BPChar_PetMonkey_C.GetPetJabberIngenuityBarrel");
		
		ABPChar_PetMonkey_C_GetPetJabberIngenuityBarrel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Barrel != nullptr)
			*Barrel = params.Barrel;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetMonkey.BPChar_PetMonkey_C.ClearBarrelStanceAndBB
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_PetMonkey_C::ClearBarrelStanceAndBB()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetMonkey.BPChar_PetMonkey_C.ClearBarrelStanceAndBB");
		
		ABPChar_PetMonkey_C_ClearBarrelStanceAndBB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetMonkey.BPChar_PetMonkey_C.OnRep_Ape_Barrel_Held
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_PetMonkey_C::OnRep_Ape_Barrel_Held()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetMonkey.BPChar_PetMonkey_C.OnRep_Ape_Barrel_Held");
		
		ABPChar_PetMonkey_C_OnRep_Ape_Barrel_Held_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetMonkey.BPChar_PetMonkey_C.ReturnJabbermonGunWeapon
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AWeapon*                                     NewWeapon                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_PetMonkey_C::ReturnJabbermonGunWeapon(class AWeapon** NewWeapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetMonkey.BPChar_PetMonkey_C.ReturnJabbermonGunWeapon");
		
		ABPChar_PetMonkey_C_ReturnJabbermonGunWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewWeapon != nullptr)
			*NewWeapon = params.NewWeapon;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetMonkey.BPChar_PetMonkey_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_PetMonkey_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetMonkey.BPChar_PetMonkey_C.UserConstructionScript");
		
		ABPChar_PetMonkey_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetMonkey.BPChar_PetMonkey_C.AlignBarrelClient
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_PetMonkey_C::AlignBarrelClient()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetMonkey.BPChar_PetMonkey_C.AlignBarrelClient");
		
		ABPChar_PetMonkey_C_AlignBarrelClient_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetMonkey.BPChar_PetMonkey_C.AttachBarrelClient
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_PetMonkey_C::AttachBarrelClient()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetMonkey.BPChar_PetMonkey_C.AttachBarrelClient");
		
		ABPChar_PetMonkey_C_AttachBarrelClient_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetMonkey.BPChar_PetMonkey_C.ClientBarrelThrow
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_PetMonkey_C::ClientBarrelThrow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetMonkey.BPChar_PetMonkey_C.ClientBarrelThrow");
		
		ABPChar_PetMonkey_C_ClientBarrelThrow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetMonkey.BPChar_PetMonkey_C.PetJabbermon_BarrelAlign
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      NewBarrel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_PetMonkey_C::PetJabbermon_BarrelAlign(class AActor* NewBarrel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetMonkey.BPChar_PetMonkey_C.PetJabbermon_BarrelAlign");
		
		ABPChar_PetMonkey_C_PetJabbermon_BarrelAlign_Params params {};
		params.NewBarrel = NewBarrel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetMonkey.BPChar_PetMonkey_C.PetJabbermon_BarrelSet
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      NewBarrel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_PetMonkey_C::PetJabbermon_BarrelSet(class AActor* NewBarrel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetMonkey.BPChar_PetMonkey_C.PetJabbermon_BarrelSet");
		
		ABPChar_PetMonkey_C_PetJabbermon_BarrelSet_Params params {};
		params.NewBarrel = NewBarrel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetMonkey.BPChar_PetMonkey_C.PetJabbermon_BarrelThrow
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_PetMonkey_C::PetJabbermon_BarrelThrow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetMonkey.BPChar_PetMonkey_C.PetJabbermon_BarrelThrow");
		
		ABPChar_PetMonkey_C_PetJabbermon_BarrelThrow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetMonkey.BPChar_PetMonkey_C.PetJabbermon_BarrelDrop
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_PetMonkey_C::PetJabbermon_BarrelDrop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetMonkey.BPChar_PetMonkey_C.PetJabbermon_BarrelDrop");
		
		ABPChar_PetMonkey_C_PetJabbermon_BarrelDrop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetMonkey.BPChar_PetMonkey_C.CleanupBarrel
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_PetMonkey_C::CleanupBarrel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetMonkey.BPChar_PetMonkey_C.CleanupBarrel");
		
		ABPChar_PetMonkey_C_CleanupBarrel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetMonkey.BPChar_PetMonkey_C.OnTakeDamage_PetJabbermonBarrel
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UDamageComponent*                            DamageReceiver                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UGbxDamageType*                              DamageType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageSource*                               DamageSource                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AController*                                 InstigatedBy                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageCauserComponent*                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FReceivedDamageDetails                      Details                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	 */
	void ABPChar_PetMonkey_C::OnTakeDamage_PetJabbermonBarrel(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetMonkey.BPChar_PetMonkey_C.OnTakeDamage_PetJabbermonBarrel");
		
		ABPChar_PetMonkey_C_OnTakeDamage_PetJabbermonBarrel_Params params {};
		params.DamageReceiver = DamageReceiver;
		params.Damage = Damage;
		params.DamageType = DamageType;
		params.DamageSource = DamageSource;
		params.InstigatedBy = InstigatedBy;
		params.DamageCauser = DamageCauser;
		params.Details = Details;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetMonkey.BPChar_PetMonkey_C.Pet_DownStateStart
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_PetMonkey_C::Pet_DownStateStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetMonkey.BPChar_PetMonkey_C.Pet_DownStateStart");
		
		ABPChar_PetMonkey_C_Pet_DownStateStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetMonkey.BPChar_PetMonkey_C.PetJabb_CancelBarrelPickup
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_PetMonkey_C::PetJabb_CancelBarrelPickup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetMonkey.BPChar_PetMonkey_C.PetJabb_CancelBarrelPickup");
		
		ABPChar_PetMonkey_C_PetJabb_CancelBarrelPickup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetMonkey.BPChar_PetMonkey_C.PetJabbermon_HeldBarrelExplode
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_PetMonkey_C::PetJabbermon_HeldBarrelExplode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetMonkey.BPChar_PetMonkey_C.PetJabbermon_HeldBarrelExplode");
		
		ABPChar_PetMonkey_C_PetJabbermon_HeldBarrelExplode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetMonkey.BPChar_PetMonkey_C.OnPetReleased
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bForced                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EPetReleaseReason                                  Reason                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_PetMonkey_C::OnPetReleased(bool bForced, EPetReleaseReason Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetMonkey.BPChar_PetMonkey_C.OnPetReleased");
		
		ABPChar_PetMonkey_C_OnPetReleased_Params params {};
		params.bForced = bForced;
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetMonkey.BPChar_PetMonkey_C.BndEvt__AIHeldActor_K2Node_ComponentBoundEvent_0_GbxChildActorSpawnedSignature__DelegateSignature_BPChar_PetMonkey
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ChildActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_PetMonkey_C::BndEvt__AIHeldActor_K2Node_ComponentBoundEvent_0_GbxChildActorSpawnedSignature__DelegateSignature_BPChar_PetMonkey(class AActor* ChildActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetMonkey.BPChar_PetMonkey_C.BndEvt__AIHeldActor_K2Node_ComponentBoundEvent_0_GbxChildActorSpawnedSignature__DelegateSignature_BPChar_PetMonkey");
		
		ABPChar_PetMonkey_C_BndEvt__AIHeldActor_K2Node_ComponentBoundEvent_0_GbxChildActorSpawnedSignature__DelegateSignature_BPChar_PetMonkey_Params params {};
		params.ChildActor = ChildActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetMonkey.BPChar_PetMonkey_C.PetJabbermon_ChangeGunVis
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NewVisibility                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPChar_PetMonkey_C::PetJabbermon_ChangeGunVis(bool NewVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetMonkey.BPChar_PetMonkey_C.PetJabbermon_ChangeGunVis");
		
		ABPChar_PetMonkey_C_PetJabbermon_ChangeGunVis_Params params {};
		params.NewVisibility = NewVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetMonkey.BPChar_PetMonkey_C.OnEnrageBegin
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_PetMonkey_C::OnEnrageBegin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetMonkey.BPChar_PetMonkey_C.OnEnrageBegin");
		
		ABPChar_PetMonkey_C_OnEnrageBegin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetMonkey.BPChar_PetMonkey_C.OnEnrageEnd
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_PetMonkey_C::OnEnrageEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetMonkey.BPChar_PetMonkey_C.OnEnrageEnd");
		
		ABPChar_PetMonkey_C_OnEnrageEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetMonkey.BPChar_PetMonkey_C.ExecuteUbergraph_BPChar_PetMonkey
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_PetMonkey_C::ExecuteUbergraph_BPChar_PetMonkey(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetMonkey.BPChar_PetMonkey_C.ExecuteUbergraph_BPChar_PetMonkey");
		
		ABPChar_PetMonkey_C_ExecuteUbergraph_BPChar_PetMonkey_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABPChar_PetMonkey_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPChar_PetMonkey_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_PetMonkey.BPChar_PetMonkey_C");
		return ptr;
	}

}


