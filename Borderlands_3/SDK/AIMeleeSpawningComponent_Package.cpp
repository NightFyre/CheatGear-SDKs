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
	 * 		Name   -> Function AIMeleeSpawningComponent.AIMeleeSpawningComponent_C.AIMelee_GetElementalTypeFromMeleeWeapon
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EOakElementalType                                  MeleeWeaponElement                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAIMeleeSpawningComponent_C::AIMelee_GetElementalTypeFromMeleeWeapon(EOakElementalType* MeleeWeaponElement)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIMeleeSpawningComponent.AIMeleeSpawningComponent_C.AIMelee_GetElementalTypeFromMeleeWeapon");
		
		UAIMeleeSpawningComponent_C_AIMelee_GetElementalTypeFromMeleeWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MeleeWeaponElement != nullptr)
			*MeleeWeaponElement = params.MeleeWeaponElement;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function AIMeleeSpawningComponent.AIMeleeSpawningComponent_C.AIMelee_Drop
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               RequestNewMeleeWeapon                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAIMeleeSpawningComponent_C::AIMelee_Drop(bool RequestNewMeleeWeapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIMeleeSpawningComponent.AIMeleeSpawningComponent_C.AIMelee_Drop");
		
		UAIMeleeSpawningComponent_C_AIMelee_Drop_Params params {};
		params.RequestNewMeleeWeapon = RequestNewMeleeWeapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function AIMeleeSpawningComponent.AIMeleeSpawningComponent_C.AIMelee_ThrowAtTarget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              ThrowSpeed                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ThrowAnglePercent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        TargetSocket                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     TargetOffset                                               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    ThrowAngleOffset                                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              MaxPrediction                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               RequestNewMeleeWeapon                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               SpawnIfDoesntExist                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAIMeleeSpawningComponent_C::AIMelee_ThrowAtTarget(float ThrowSpeed, float ThrowAnglePercent, const class FName& TargetSocket, const struct FVector& TargetOffset, const struct FRotator& ThrowAngleOffset, float MaxPrediction, bool RequestNewMeleeWeapon, bool SpawnIfDoesntExist)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIMeleeSpawningComponent.AIMeleeSpawningComponent_C.AIMelee_ThrowAtTarget");
		
		UAIMeleeSpawningComponent_C_AIMelee_ThrowAtTarget_Params params {};
		params.ThrowSpeed = ThrowSpeed;
		params.ThrowAnglePercent = ThrowAnglePercent;
		params.TargetSocket = TargetSocket;
		params.TargetOffset = TargetOffset;
		params.ThrowAngleOffset = ThrowAngleOffset;
		params.MaxPrediction = MaxPrediction;
		params.RequestNewMeleeWeapon = RequestNewMeleeWeapon;
		params.SpawnIfDoesntExist = SpawnIfDoesntExist;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function AIMeleeSpawningComponent.AIMeleeSpawningComponent_C.AIMelee_Spawn
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UAIMeleeSpawningComponent_C::AIMelee_Spawn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIMeleeSpawningComponent.AIMeleeSpawningComponent_C.AIMelee_Spawn");
		
		UAIMeleeSpawningComponent_C_AIMelee_Spawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function AIMeleeSpawningComponent.AIMeleeSpawningComponent_C.AIMelee_ThrowAtActor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ActorToThrowAt                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ThrowSpeed                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ThrowAnglePercentage                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        ActorSocket                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     ActorOffset                                                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    ThrowAngleOffset                                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              MaxPrediction                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               RequestNewMeleeWeapon                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               SpawnIfDoesntExist                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAIMeleeSpawningComponent_C::AIMelee_ThrowAtActor(class AActor* ActorToThrowAt, float ThrowSpeed, float ThrowAnglePercentage, const class FName& ActorSocket, const struct FVector& ActorOffset, const struct FRotator& ThrowAngleOffset, float MaxPrediction, bool RequestNewMeleeWeapon, bool SpawnIfDoesntExist)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIMeleeSpawningComponent.AIMeleeSpawningComponent_C.AIMelee_ThrowAtActor");
		
		UAIMeleeSpawningComponent_C_AIMelee_ThrowAtActor_Params params {};
		params.ActorToThrowAt = ActorToThrowAt;
		params.ThrowSpeed = ThrowSpeed;
		params.ThrowAnglePercentage = ThrowAnglePercentage;
		params.ActorSocket = ActorSocket;
		params.ActorOffset = ActorOffset;
		params.ThrowAngleOffset = ThrowAngleOffset;
		params.MaxPrediction = MaxPrediction;
		params.RequestNewMeleeWeapon = RequestNewMeleeWeapon;
		params.SpawnIfDoesntExist = SpawnIfDoesntExist;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function AIMeleeSpawningComponent.AIMeleeSpawningComponent_C.AIMelee_ThrowAtLocation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     LocationToThrowAt                                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ThrowSpeed                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ThrowAnglePercentage                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               RequestNewMeleeWeapon                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               SpawnIfDoesntExist                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAIMeleeSpawningComponent_C::AIMelee_ThrowAtLocation(const struct FVector& LocationToThrowAt, float ThrowSpeed, float ThrowAnglePercentage, bool RequestNewMeleeWeapon, bool SpawnIfDoesntExist)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIMeleeSpawningComponent.AIMeleeSpawningComponent_C.AIMelee_ThrowAtLocation");
		
		UAIMeleeSpawningComponent_C_AIMelee_ThrowAtLocation_Params params {};
		params.LocationToThrowAt = LocationToThrowAt;
		params.ThrowSpeed = ThrowSpeed;
		params.ThrowAnglePercentage = ThrowAnglePercentage;
		params.RequestNewMeleeWeapon = RequestNewMeleeWeapon;
		params.SpawnIfDoesntExist = SpawnIfDoesntExist;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function AIMeleeSpawningComponent.AIMeleeSpawningComponent_C.AIMelee_SetNewMeleeWeaponClass
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      NewMeleeWeaponClass                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAIMeleeSpawningComponent_C::AIMelee_SetNewMeleeWeaponClass(class UClass* NewMeleeWeaponClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIMeleeSpawningComponent.AIMeleeSpawningComponent_C.AIMelee_SetNewMeleeWeaponClass");
		
		UAIMeleeSpawningComponent_C_AIMelee_SetNewMeleeWeaponClass_Params params {};
		params.NewMeleeWeaponClass = NewMeleeWeaponClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function AIMeleeSpawningComponent.AIMeleeSpawningComponent_C.OnHeldActorNativeDrop
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAIMeleeSpawningComponent_C::OnHeldActorNativeDrop(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIMeleeSpawningComponent.AIMeleeSpawningComponent_C.OnHeldActorNativeDrop");
		
		UAIMeleeSpawningComponent_C_OnHeldActorNativeDrop_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function AIMeleeSpawningComponent.AIMeleeSpawningComponent_C.ExecuteUbergraph_AIMeleeSpawningComponent
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAIMeleeSpawningComponent_C::ExecuteUbergraph_AIMeleeSpawningComponent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIMeleeSpawningComponent.AIMeleeSpawningComponent_C.ExecuteUbergraph_AIMeleeSpawningComponent");
		
		UAIMeleeSpawningComponent_C_ExecuteUbergraph_AIMeleeSpawningComponent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIMeleeSpawningComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIMeleeSpawningComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AIMeleeSpawningComponent.AIMeleeSpawningComponent_C");
		return ptr;
	}

}


