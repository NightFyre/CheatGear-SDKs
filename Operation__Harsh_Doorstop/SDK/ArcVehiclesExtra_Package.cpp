/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AArcVehicleSampleCharacter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AArcVehicleSampleCharacter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ArcVehiclesExtra.ArcVehicleSampleCharacter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BEC80
	 * 		Name   -> Function ArcVehiclesExtra.ArcVehicleSpawner.SpawnVehicleTimerEnd
	 * 		Flags  -> (Native, Public)
	 */
	void AArcVehicleSpawner::SpawnVehicleTimerEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ArcVehiclesExtra.ArcVehicleSpawner.SpawnVehicleTimerEnd");
		
		AArcVehicleSpawner_SpawnVehicleTimerEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007F9450
	 * 		Name   -> Function ArcVehiclesExtra.ArcVehicleSpawner.OnVehicleDestroyed
	 * 		Flags  -> (Native, Public)
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AArcVehicleSpawner::OnVehicleDestroyed(class AActor* DestroyedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ArcVehiclesExtra.ArcVehicleSpawner.OnVehicleDestroyed");
		
		AArcVehicleSpawner_OnVehicleDestroyed_Params params {};
		params.DestroyedActor = DestroyedActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AArcVehicleSpawner.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AArcVehicleSpawner::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ArcVehiclesExtra.ArcVehicleSpawner");
		return ptr;
	}

}


