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
	 * 		Name   -> Function SpawnDLCScript_BloodyHarvest.SpawnDLCScript_BloodyHarvest_C.GetSpawnTransform
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class AActor*                                      ActorThatDied                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FTransform                                  Output                                                     (Parm, OutParm, IsPlainOldData, NoDestructor)
	 */
	void USpawnDLCScript_BloodyHarvest_C::GetSpawnTransform(class AActor* ActorThatDied, struct FTransform* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnDLCScript_BloodyHarvest.SpawnDLCScript_BloodyHarvest_C.GetSpawnTransform");
		
		USpawnDLCScript_BloodyHarvest_C_GetSpawnTransform_Params params {};
		params.ActorThatDied = ActorThatDied;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output != nullptr)
			*Output = params.Output;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function SpawnDLCScript_BloodyHarvest.SpawnDLCScript_BloodyHarvest_C.SpawnEnemyAsHaunted
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class AActor*                                      Enemy                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USpawnDLCScript_BloodyHarvest_C::SpawnEnemyAsHaunted(class AActor* Enemy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnDLCScript_BloodyHarvest.SpawnDLCScript_BloodyHarvest_C.SpawnEnemyAsHaunted");
		
		USpawnDLCScript_BloodyHarvest_C_SpawnEnemyAsHaunted_Params params {};
		params.Enemy = Enemy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function SpawnDLCScript_BloodyHarvest.SpawnDLCScript_BloodyHarvest_C.OnActorSpawned
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class USpawnerComponent*                           SpawnerComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USpawnDLCScript_BloodyHarvest_C::OnActorSpawned(class USpawnerComponent* SpawnerComponent, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnDLCScript_BloodyHarvest.SpawnDLCScript_BloodyHarvest_C.OnActorSpawned");
		
		USpawnDLCScript_BloodyHarvest_C_OnActorSpawned_Params params {};
		params.SpawnerComponent = SpawnerComponent;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function SpawnDLCScript_BloodyHarvest.SpawnDLCScript_BloodyHarvest_C.OnActorDied
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class USpawnerComponent*                           SpawnerComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USpawnDLCScript_BloodyHarvest_C::OnActorDied(class USpawnerComponent* SpawnerComponent, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnDLCScript_BloodyHarvest.SpawnDLCScript_BloodyHarvest_C.OnActorDied");
		
		USpawnDLCScript_BloodyHarvest_C_OnActorDied_Params params {};
		params.SpawnerComponent = SpawnerComponent;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpawnDLCScript_BloodyHarvest_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpawnDLCScript_BloodyHarvest_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SpawnDLCScript_BloodyHarvest.SpawnDLCScript_BloodyHarvest_C");
		return ptr;
	}

}


