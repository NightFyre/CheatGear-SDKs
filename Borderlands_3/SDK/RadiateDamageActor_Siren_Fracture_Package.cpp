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
	 * 		Name   -> Function RadiateDamageActor_Siren_Fracture.RadiateDamageActor_Siren_Fracture_C.DoDamageToEnemy
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Enemy                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARadiateDamageActor_Siren_Fracture_C::DoDamageToEnemy(class AActor* Enemy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadiateDamageActor_Siren_Fracture.RadiateDamageActor_Siren_Fracture_C.DoDamageToEnemy");
		
		ARadiateDamageActor_Siren_Fracture_C_DoDamageToEnemy_Params params {};
		params.Enemy = Enemy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function RadiateDamageActor_Siren_Fracture.RadiateDamageActor_Siren_Fracture_C.GetFractureDamage
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARadiateDamageActor_Siren_Fracture_C::GetFractureDamage(float* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadiateDamageActor_Siren_Fracture.RadiateDamageActor_Siren_Fracture_C.GetFractureDamage");
		
		ARadiateDamageActor_Siren_Fracture_C_GetFractureDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function RadiateDamageActor_Siren_Fracture.RadiateDamageActor_Siren_Fracture_C.OnRep_PhasetranceCombo
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ARadiateDamageActor_Siren_Fracture_C::OnRep_PhasetranceCombo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadiateDamageActor_Siren_Fracture.RadiateDamageActor_Siren_Fracture_C.OnRep_PhasetranceCombo");
		
		ARadiateDamageActor_Siren_Fracture_C_OnRep_PhasetranceCombo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function RadiateDamageActor_Siren_Fracture.RadiateDamageActor_Siren_Fracture_C.SetupModData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARadiateDamageActor_Siren_Fracture_C::SetupModData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadiateDamageActor_Siren_Fracture.RadiateDamageActor_Siren_Fracture_C.SetupModData");
		
		ARadiateDamageActor_Siren_Fracture_C_SetupModData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function RadiateDamageActor_Siren_Fracture.RadiateDamageActor_Siren_Fracture_C.DoAreaDamage
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ARadiateDamageActor_Siren_Fracture_C::DoAreaDamage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadiateDamageActor_Siren_Fracture.RadiateDamageActor_Siren_Fracture_C.DoAreaDamage");
		
		ARadiateDamageActor_Siren_Fracture_C_DoAreaDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function RadiateDamageActor_Siren_Fracture.RadiateDamageActor_Siren_Fracture_C.K2_GetOwnedActionAbility
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	class UOakActionAbility* ARadiateDamageActor_Siren_Fracture_C::K2_GetOwnedActionAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadiateDamageActor_Siren_Fracture.RadiateDamageActor_Siren_Fracture_C.K2_GetOwnedActionAbility");
		
		ARadiateDamageActor_Siren_Fracture_C_K2_GetOwnedActionAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function RadiateDamageActor_Siren_Fracture.RadiateDamageActor_Siren_Fracture_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARadiateDamageActor_Siren_Fracture_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadiateDamageActor_Siren_Fracture.RadiateDamageActor_Siren_Fracture_C.UserConstructionScript");
		
		ARadiateDamageActor_Siren_Fracture_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function RadiateDamageActor_Siren_Fracture.RadiateDamageActor_Siren_Fracture_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ARadiateDamageActor_Siren_Fracture_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadiateDamageActor_Siren_Fracture.RadiateDamageActor_Siren_Fracture_C.ReceiveBeginPlay");
		
		ARadiateDamageActor_Siren_Fracture_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function RadiateDamageActor_Siren_Fracture.RadiateDamageActor_Siren_Fracture_C.OnHitEnemy
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      EnemyActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARadiateDamageActor_Siren_Fracture_C::OnHitEnemy(class AActor* EnemyActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadiateDamageActor_Siren_Fracture.RadiateDamageActor_Siren_Fracture_C.OnHitEnemy");
		
		ARadiateDamageActor_Siren_Fracture_C_OnHitEnemy_Params params {};
		params.EnemyActor = EnemyActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function RadiateDamageActor_Siren_Fracture.RadiateDamageActor_Siren_Fracture_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARadiateDamageActor_Siren_Fracture_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadiateDamageActor_Siren_Fracture.RadiateDamageActor_Siren_Fracture_C.ReceiveEndPlay");
		
		ARadiateDamageActor_Siren_Fracture_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function RadiateDamageActor_Siren_Fracture.RadiateDamageActor_Siren_Fracture_C.OnPerformRadiateDamageTasks
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ARadiateDamageActor_Siren_Fracture_C::OnPerformRadiateDamageTasks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadiateDamageActor_Siren_Fracture.RadiateDamageActor_Siren_Fracture_C.OnPerformRadiateDamageTasks");
		
		ARadiateDamageActor_Siren_Fracture_C_OnPerformRadiateDamageTasks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function RadiateDamageActor_Siren_Fracture.RadiateDamageActor_Siren_Fracture_C.ExecuteUbergraph_RadiateDamageActor_Siren_Fracture
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARadiateDamageActor_Siren_Fracture_C::ExecuteUbergraph_RadiateDamageActor_Siren_Fracture(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadiateDamageActor_Siren_Fracture.RadiateDamageActor_Siren_Fracture_C.ExecuteUbergraph_RadiateDamageActor_Siren_Fracture");
		
		ARadiateDamageActor_Siren_Fracture_C_ExecuteUbergraph_RadiateDamageActor_Siren_Fracture_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARadiateDamageActor_Siren_Fracture_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARadiateDamageActor_Siren_Fracture_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RadiateDamageActor_Siren_Fracture.RadiateDamageActor_Siren_Fracture_C");
		return ptr;
	}

}


