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
	 * 		Name   -> Function BPChar_Enemy.BPChar_Enemy_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_Enemy_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Enemy.BPChar_Enemy_C.UserConstructionScript");
		
		ABPChar_Enemy_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Enemy.BPChar_Enemy_C.Enemy_OnThoughtLockStart
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_Enemy_C::Enemy_OnThoughtLockStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Enemy.BPChar_Enemy_C.Enemy_OnThoughtLockStart");
		
		ABPChar_Enemy_C_Enemy_OnThoughtLockStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Enemy.BPChar_Enemy_C.Enemy_OnThoughtLockStop
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_Enemy_C::Enemy_OnThoughtLockStop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Enemy.BPChar_Enemy_C.Enemy_OnThoughtLockStop");
		
		ABPChar_Enemy_C_Enemy_OnThoughtLockStop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Enemy.BPChar_Enemy_C.Player_SpawnTransfusionProjectile
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      DataBlueprint_Override                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      DamageType_Override                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      SourceActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      TargetActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Causer_Override                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_Enemy_C::Player_SpawnTransfusionProjectile(class UClass* DataBlueprint_Override, class UClass* DamageType_Override, class AActor* SourceActor, class AActor* TargetActor, float Damage, class AActor* Causer_Override)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Enemy.BPChar_Enemy_C.Player_SpawnTransfusionProjectile");
		
		ABPChar_Enemy_C_Player_SpawnTransfusionProjectile_Params params {};
		params.DataBlueprint_Override = DataBlueprint_Override;
		params.DamageType_Override = DamageType_Override;
		params.SourceActor = SourceActor;
		params.TargetActor = TargetActor;
		params.Damage = Damage;
		params.Causer_Override = Causer_Override;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Enemy.BPChar_Enemy_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABPChar_Enemy_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Enemy.BPChar_Enemy_C.ReceiveBeginPlay");
		
		ABPChar_Enemy_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Enemy.BPChar_Enemy_C.Enemy_OnPhaseLockStop
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_Enemy_C::Enemy_OnPhaseLockStop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Enemy.BPChar_Enemy_C.Enemy_OnPhaseLockStop");
		
		ABPChar_Enemy_C_Enemy_OnPhaseLockStop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Enemy.BPChar_Enemy_C.BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_ElementalDeathDelegate__DelegateSignature_BPChar_Enemy
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		EOakElementalType                                  Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_Enemy_C::BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_ElementalDeathDelegate__DelegateSignature_BPChar_Enemy(EOakElementalType Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Enemy.BPChar_Enemy_C.BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_ElementalDeathDelegate__DelegateSignature_BPChar_Enemy");
		
		ABPChar_Enemy_C_BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_ElementalDeathDelegate__DelegateSignature_BPChar_Enemy_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Enemy.BPChar_Enemy_C.Enemy_OnPhaseLockStart
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_Enemy_C::Enemy_OnPhaseLockStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Enemy.BPChar_Enemy_C.Enemy_OnPhaseLockStart");
		
		ABPChar_Enemy_C_Enemy_OnPhaseLockStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Enemy.BPChar_Enemy_C.Radation_DeathExplosion
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DamageReceiver                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_Enemy_C::Radation_DeathExplosion(class AActor* DamageReceiver, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Enemy.BPChar_Enemy_C.Radation_DeathExplosion");
		
		ABPChar_Enemy_C_Radation_DeathExplosion_Params params {};
		params.DamageReceiver = DamageReceiver;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Enemy.BPChar_Enemy_C.Player_HealthDepleted
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOakCharacter*                               Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_Enemy_C::Player_HealthDepleted(class AOakCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Enemy.BPChar_Enemy_C.Player_HealthDepleted");
		
		ABPChar_Enemy_C_Player_HealthDepleted_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Enemy.BPChar_Enemy_C.ExecuteUbergraph_BPChar_Enemy
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_Enemy_C::ExecuteUbergraph_BPChar_Enemy(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Enemy.BPChar_Enemy_C.ExecuteUbergraph_BPChar_Enemy");
		
		ABPChar_Enemy_C_ExecuteUbergraph_BPChar_Enemy_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABPChar_Enemy_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPChar_Enemy_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_Enemy.BPChar_Enemy_C");
		return ptr;
	}

}


