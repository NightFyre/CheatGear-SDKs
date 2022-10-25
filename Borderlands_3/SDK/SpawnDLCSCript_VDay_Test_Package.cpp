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
	 * 		Name   -> Function SpawnDLCSCript_VDay_Test.SpawnDLCSCript_VDay_Test_C.OnActorSpawned
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class USpawnerComponent*                           SpawnerComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USpawnDLCSCript_VDay_Test_C::OnActorSpawned(class USpawnerComponent* SpawnerComponent, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnDLCSCript_VDay_Test.SpawnDLCSCript_VDay_Test_C.OnActorSpawned");
		
		USpawnDLCSCript_VDay_Test_C_OnActorSpawned_Params params {};
		params.SpawnerComponent = SpawnerComponent;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpawnDLCSCript_VDay_Test_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpawnDLCSCript_VDay_Test_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SpawnDLCSCript_VDay_Test.SpawnDLCSCript_VDay_Test_C");
		return ptr;
	}

}


