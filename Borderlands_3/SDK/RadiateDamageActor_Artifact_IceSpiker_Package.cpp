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
	 * 		Name   -> Function RadiateDamageActor_Artifact_IceSpiker.RadiateDamageActor_Artifact_IceSpiker_C.DoDamageToEnemy
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Enemy                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARadiateDamageActor_Artifact_IceSpiker_C::DoDamageToEnemy(class AActor* Enemy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadiateDamageActor_Artifact_IceSpiker.RadiateDamageActor_Artifact_IceSpiker_C.DoDamageToEnemy");
		
		ARadiateDamageActor_Artifact_IceSpiker_C_DoDamageToEnemy_Params params {};
		params.Enemy = Enemy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function RadiateDamageActor_Artifact_IceSpiker.RadiateDamageActor_Artifact_IceSpiker_C.DoAreaDamage
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ARadiateDamageActor_Artifact_IceSpiker_C::DoAreaDamage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadiateDamageActor_Artifact_IceSpiker.RadiateDamageActor_Artifact_IceSpiker_C.DoAreaDamage");
		
		ARadiateDamageActor_Artifact_IceSpiker_C_DoAreaDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function RadiateDamageActor_Artifact_IceSpiker.RadiateDamageActor_Artifact_IceSpiker_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARadiateDamageActor_Artifact_IceSpiker_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadiateDamageActor_Artifact_IceSpiker.RadiateDamageActor_Artifact_IceSpiker_C.UserConstructionScript");
		
		ARadiateDamageActor_Artifact_IceSpiker_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function RadiateDamageActor_Artifact_IceSpiker.RadiateDamageActor_Artifact_IceSpiker_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ARadiateDamageActor_Artifact_IceSpiker_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadiateDamageActor_Artifact_IceSpiker.RadiateDamageActor_Artifact_IceSpiker_C.ReceiveBeginPlay");
		
		ARadiateDamageActor_Artifact_IceSpiker_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function RadiateDamageActor_Artifact_IceSpiker.RadiateDamageActor_Artifact_IceSpiker_C.OnHitEnemy
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      EnemyActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARadiateDamageActor_Artifact_IceSpiker_C::OnHitEnemy(class AActor* EnemyActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadiateDamageActor_Artifact_IceSpiker.RadiateDamageActor_Artifact_IceSpiker_C.OnHitEnemy");
		
		ARadiateDamageActor_Artifact_IceSpiker_C_OnHitEnemy_Params params {};
		params.EnemyActor = EnemyActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function RadiateDamageActor_Artifact_IceSpiker.RadiateDamageActor_Artifact_IceSpiker_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARadiateDamageActor_Artifact_IceSpiker_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadiateDamageActor_Artifact_IceSpiker.RadiateDamageActor_Artifact_IceSpiker_C.ReceiveEndPlay");
		
		ARadiateDamageActor_Artifact_IceSpiker_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function RadiateDamageActor_Artifact_IceSpiker.RadiateDamageActor_Artifact_IceSpiker_C.OnPerformRadiateDamageTasks
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ARadiateDamageActor_Artifact_IceSpiker_C::OnPerformRadiateDamageTasks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadiateDamageActor_Artifact_IceSpiker.RadiateDamageActor_Artifact_IceSpiker_C.OnPerformRadiateDamageTasks");
		
		ARadiateDamageActor_Artifact_IceSpiker_C_OnPerformRadiateDamageTasks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function RadiateDamageActor_Artifact_IceSpiker.RadiateDamageActor_Artifact_IceSpiker_C.ExecuteUbergraph_RadiateDamageActor_Artifact_IceSpiker
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARadiateDamageActor_Artifact_IceSpiker_C::ExecuteUbergraph_RadiateDamageActor_Artifact_IceSpiker(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadiateDamageActor_Artifact_IceSpiker.RadiateDamageActor_Artifact_IceSpiker_C.ExecuteUbergraph_RadiateDamageActor_Artifact_IceSpiker");
		
		ARadiateDamageActor_Artifact_IceSpiker_C_ExecuteUbergraph_RadiateDamageActor_Artifact_IceSpiker_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARadiateDamageActor_Artifact_IceSpiker_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARadiateDamageActor_Artifact_IceSpiker_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RadiateDamageActor_Artifact_IceSpiker.RadiateDamageActor_Artifact_IceSpiker_C");
		return ptr;
	}

}


