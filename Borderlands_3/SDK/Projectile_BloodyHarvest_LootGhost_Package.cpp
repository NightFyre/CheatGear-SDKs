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
	 * 		Name   -> Function Projectile_BloodyHarvest_LootGhost.Projectile_BloodyHarvest_LootGhost_C.IncrementStats
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProjectile_BloodyHarvest_LootGhost_C::IncrementStats(bool* Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_LootGhost.Projectile_BloodyHarvest_LootGhost_C.IncrementStats");
		
		AProjectile_BloodyHarvest_LootGhost_C_IncrementStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_BloodyHarvest_LootGhost.Projectile_BloodyHarvest_LootGhost_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProjectile_BloodyHarvest_LootGhost_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_LootGhost.Projectile_BloodyHarvest_LootGhost_C.UserConstructionScript");
		
		AProjectile_BloodyHarvest_LootGhost_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_BloodyHarvest_LootGhost.Projectile_BloodyHarvest_LootGhost_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AProjectile_BloodyHarvest_LootGhost_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_LootGhost.Projectile_BloodyHarvest_LootGhost_C.ReceiveBeginPlay");
		
		AProjectile_BloodyHarvest_LootGhost_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_BloodyHarvest_LootGhost.Projectile_BloodyHarvest_LootGhost_C.DoEndSpawnPresentation
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ForceInstantSpawn                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProjectile_BloodyHarvest_LootGhost_C::DoEndSpawnPresentation(bool ForceInstantSpawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_LootGhost.Projectile_BloodyHarvest_LootGhost_C.DoEndSpawnPresentation");
		
		AProjectile_BloodyHarvest_LootGhost_C_DoEndSpawnPresentation_Params params {};
		params.ForceInstantSpawn = ForceInstantSpawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_BloodyHarvest_LootGhost.Projectile_BloodyHarvest_LootGhost_C.SpawnLootBadass
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProjectile_BloodyHarvest_LootGhost_C::SpawnLootBadass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_LootGhost.Projectile_BloodyHarvest_LootGhost_C.SpawnLootBadass");
		
		AProjectile_BloodyHarvest_LootGhost_C_SpawnLootBadass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_BloodyHarvest_LootGhost.Projectile_BloodyHarvest_LootGhost_C.BeginFleeing
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AProjectile_BloodyHarvest_LootGhost_C::BeginFleeing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_LootGhost.Projectile_BloodyHarvest_LootGhost_C.BeginFleeing");
		
		AProjectile_BloodyHarvest_LootGhost_C_BeginFleeing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_BloodyHarvest_LootGhost.Projectile_BloodyHarvest_LootGhost_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_TakeAnyPipelineDamageDelegate__DelegateSignature_Projectile_BloodyHarvest_LootGhost
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UDamageComponent*                            DamageReceiver                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UGbxDamageType*                              DamageType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageSource*                               DamageSource                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AController*                                 InstigatedBy                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageCauserComponent*                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FReceivedDamageDetails                      Details                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	 */
	void AProjectile_BloodyHarvest_LootGhost_C::BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_TakeAnyPipelineDamageDelegate__DelegateSignature_Projectile_BloodyHarvest_LootGhost(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_LootGhost.Projectile_BloodyHarvest_LootGhost_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_TakeAnyPipelineDamageDelegate__DelegateSignature_Projectile_BloodyHarvest_LootGhost");
		
		AProjectile_BloodyHarvest_LootGhost_C_BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_TakeAnyPipelineDamageDelegate__DelegateSignature_Projectile_BloodyHarvest_LootGhost_Params params {};
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
	 * 		Name   -> Function Projectile_BloodyHarvest_LootGhost.Projectile_BloodyHarvest_LootGhost_C.OnExplode
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AProjectile_BloodyHarvest_LootGhost_C::OnExplode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_LootGhost.Projectile_BloodyHarvest_LootGhost_C.OnExplode");
		
		AProjectile_BloodyHarvest_LootGhost_C_OnExplode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_BloodyHarvest_LootGhost.Projectile_BloodyHarvest_LootGhost_C.ExecuteUbergraph_Projectile_BloodyHarvest_LootGhost
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProjectile_BloodyHarvest_LootGhost_C::ExecuteUbergraph_Projectile_BloodyHarvest_LootGhost(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_LootGhost.Projectile_BloodyHarvest_LootGhost_C.ExecuteUbergraph_Projectile_BloodyHarvest_LootGhost");
		
		AProjectile_BloodyHarvest_LootGhost_C_ExecuteUbergraph_Projectile_BloodyHarvest_LootGhost_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProjectile_BloodyHarvest_LootGhost_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProjectile_BloodyHarvest_LootGhost_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Projectile_BloodyHarvest_LootGhost.Projectile_BloodyHarvest_LootGhost_C");
		return ptr;
	}

}


