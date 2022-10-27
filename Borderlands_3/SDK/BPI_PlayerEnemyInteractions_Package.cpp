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
	 * 		Name   -> Function BPI_PlayerEnemyInteractions.BPI_PlayerEnemyInteractions_C.Player_SpawnTransfusionProjectile
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      DataBlueprint_Override                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      DamageType_Override                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      SourceActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      TargetActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Causer_Override                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_PlayerEnemyInteractions_C::Player_SpawnTransfusionProjectile(class UClass* DataBlueprint_Override, class UClass* DamageType_Override, class AActor* SourceActor, class AActor* TargetActor, float Damage, class AActor* Causer_Override)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_PlayerEnemyInteractions.BPI_PlayerEnemyInteractions_C.Player_SpawnTransfusionProjectile");
		
		UBPI_PlayerEnemyInteractions_C_Player_SpawnTransfusionProjectile_Params params {};
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
	 * 		Name   -> Function BPI_PlayerEnemyInteractions.BPI_PlayerEnemyInteractions_C.Enemy_OnThoughtLockStop
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPI_PlayerEnemyInteractions_C::Enemy_OnThoughtLockStop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_PlayerEnemyInteractions.BPI_PlayerEnemyInteractions_C.Enemy_OnThoughtLockStop");
		
		UBPI_PlayerEnemyInteractions_C_Enemy_OnThoughtLockStop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPI_PlayerEnemyInteractions.BPI_PlayerEnemyInteractions_C.Enemy_OnThoughtLockStart
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPI_PlayerEnemyInteractions_C::Enemy_OnThoughtLockStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_PlayerEnemyInteractions.BPI_PlayerEnemyInteractions_C.Enemy_OnThoughtLockStart");
		
		UBPI_PlayerEnemyInteractions_C_Enemy_OnThoughtLockStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPI_PlayerEnemyInteractions.BPI_PlayerEnemyInteractions_C.Enemy_OnPhaseLockStop
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPI_PlayerEnemyInteractions_C::Enemy_OnPhaseLockStop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_PlayerEnemyInteractions.BPI_PlayerEnemyInteractions_C.Enemy_OnPhaseLockStop");
		
		UBPI_PlayerEnemyInteractions_C_Enemy_OnPhaseLockStop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPI_PlayerEnemyInteractions.BPI_PlayerEnemyInteractions_C.Enemy_OnPhaseLockStart
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPI_PlayerEnemyInteractions_C::Enemy_OnPhaseLockStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_PlayerEnemyInteractions.BPI_PlayerEnemyInteractions_C.Enemy_OnPhaseLockStart");
		
		UBPI_PlayerEnemyInteractions_C_Enemy_OnPhaseLockStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPI_PlayerEnemyInteractions.BPI_PlayerEnemyInteractions_C.Player_HealthDepleted
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOakCharacter*                               Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_PlayerEnemyInteractions_C::Player_HealthDepleted(class AOakCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_PlayerEnemyInteractions.BPI_PlayerEnemyInteractions_C.Player_HealthDepleted");
		
		UBPI_PlayerEnemyInteractions_C_Player_HealthDepleted_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_PlayerEnemyInteractions_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_PlayerEnemyInteractions_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_PlayerEnemyInteractions.BPI_PlayerEnemyInteractions_C");
		return ptr;
	}

}


