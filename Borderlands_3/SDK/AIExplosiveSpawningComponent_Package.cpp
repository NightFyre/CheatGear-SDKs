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
	 * 		Name   -> Function AIExplosiveSpawningComponent.AIExplosiveSpawningComponent_C.AIExplosive_Spawn
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UAIExplosiveSpawningComponent_C::AIExplosive_Spawn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIExplosiveSpawningComponent.AIExplosiveSpawningComponent_C.AIExplosive_Spawn");
		
		UAIExplosiveSpawningComponent_C_AIExplosive_Spawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function AIExplosiveSpawningComponent.AIExplosiveSpawningComponent_C.AIExplosive_Prime
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UAIExplosiveSpawningComponent_C::AIExplosive_Prime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIExplosiveSpawningComponent.AIExplosiveSpawningComponent_C.AIExplosive_Prime");
		
		UAIExplosiveSpawningComponent_C_AIExplosive_Prime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function AIExplosiveSpawningComponent.AIExplosiveSpawningComponent_C.AIExplosive_Detonate
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               KillSelfOnDetonate                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               RequestNewExplosive                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      InstigatorOverride                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAIExplosiveSpawningComponent_C::AIExplosive_Detonate(bool KillSelfOnDetonate, bool RequestNewExplosive, class AActor* InstigatorOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIExplosiveSpawningComponent.AIExplosiveSpawningComponent_C.AIExplosive_Detonate");
		
		UAIExplosiveSpawningComponent_C_AIExplosive_Detonate_Params params {};
		params.KillSelfOnDetonate = KillSelfOnDetonate;
		params.RequestNewExplosive = RequestNewExplosive;
		params.InstigatorOverride = InstigatorOverride;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function AIExplosiveSpawningComponent.AIExplosiveSpawningComponent_C.AIExplosive_ThrowAtTarget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              ThrowSpeed                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ThrowAnglePercent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        TargetSocket                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     TargetOffset                                               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    ThrowAngleOffset                                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              MaxPrediction                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               RequestNewExplosive                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               SpawnIfDoesn_tExist                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAIExplosiveSpawningComponent_C::AIExplosive_ThrowAtTarget(float ThrowSpeed, float ThrowAnglePercent, const class FName& TargetSocket, const struct FVector& TargetOffset, const struct FRotator& ThrowAngleOffset, float MaxPrediction, bool RequestNewExplosive, bool SpawnIfDoesn_tExist)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIExplosiveSpawningComponent.AIExplosiveSpawningComponent_C.AIExplosive_ThrowAtTarget");
		
		UAIExplosiveSpawningComponent_C_AIExplosive_ThrowAtTarget_Params params {};
		params.ThrowSpeed = ThrowSpeed;
		params.ThrowAnglePercent = ThrowAnglePercent;
		params.TargetSocket = TargetSocket;
		params.TargetOffset = TargetOffset;
		params.ThrowAngleOffset = ThrowAngleOffset;
		params.MaxPrediction = MaxPrediction;
		params.RequestNewExplosive = RequestNewExplosive;
		params.SpawnIfDoesn_tExist = SpawnIfDoesn_tExist;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function AIExplosiveSpawningComponent.AIExplosiveSpawningComponent_C.AIExplosive_Drop
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               RequestNewExplosive                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      InstigatorOverride                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAIExplosiveSpawningComponent_C::AIExplosive_Drop(bool RequestNewExplosive, class AActor* InstigatorOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIExplosiveSpawningComponent.AIExplosiveSpawningComponent_C.AIExplosive_Drop");
		
		UAIExplosiveSpawningComponent_C_AIExplosive_Drop_Params params {};
		params.RequestNewExplosive = RequestNewExplosive;
		params.InstigatorOverride = InstigatorOverride;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function AIExplosiveSpawningComponent.AIExplosiveSpawningComponent_C.AIExplosive_ThrowAtActor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ActorToThrowAt                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ThrowSpeed                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ThrowAnglePercentage                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        ActorSocket                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     ActorOffset                                                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    ThrowAngleOffset                                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              MaxPrediction                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               RequestNewExplosive                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               SpawnIfDoesntExist                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAIExplosiveSpawningComponent_C::AIExplosive_ThrowAtActor(class AActor* ActorToThrowAt, float ThrowSpeed, float ThrowAnglePercentage, const class FName& ActorSocket, const struct FVector& ActorOffset, const struct FRotator& ThrowAngleOffset, float MaxPrediction, bool RequestNewExplosive, bool SpawnIfDoesntExist)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIExplosiveSpawningComponent.AIExplosiveSpawningComponent_C.AIExplosive_ThrowAtActor");
		
		UAIExplosiveSpawningComponent_C_AIExplosive_ThrowAtActor_Params params {};
		params.ActorToThrowAt = ActorToThrowAt;
		params.ThrowSpeed = ThrowSpeed;
		params.ThrowAnglePercentage = ThrowAnglePercentage;
		params.ActorSocket = ActorSocket;
		params.ActorOffset = ActorOffset;
		params.ThrowAngleOffset = ThrowAngleOffset;
		params.MaxPrediction = MaxPrediction;
		params.RequestNewExplosive = RequestNewExplosive;
		params.SpawnIfDoesntExist = SpawnIfDoesntExist;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function AIExplosiveSpawningComponent.AIExplosiveSpawningComponent_C.AIExplosive_ThrowAtLocation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     LocationToThrowAt                                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ThrowSpeed                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ThrowAnglePercentage                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               RequestNewExplosive                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               SpawnIfDoesntExist                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAIExplosiveSpawningComponent_C::AIExplosive_ThrowAtLocation(const struct FVector& LocationToThrowAt, float ThrowSpeed, float ThrowAnglePercentage, bool RequestNewExplosive, bool SpawnIfDoesntExist)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIExplosiveSpawningComponent.AIExplosiveSpawningComponent_C.AIExplosive_ThrowAtLocation");
		
		UAIExplosiveSpawningComponent_C_AIExplosive_ThrowAtLocation_Params params {};
		params.LocationToThrowAt = LocationToThrowAt;
		params.ThrowSpeed = ThrowSpeed;
		params.ThrowAnglePercentage = ThrowAnglePercentage;
		params.RequestNewExplosive = RequestNewExplosive;
		params.SpawnIfDoesntExist = SpawnIfDoesntExist;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function AIExplosiveSpawningComponent.AIExplosiveSpawningComponent_C.AIExplosive_SetNewExplosiveClass
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      NewExplosiveClass                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAIExplosiveSpawningComponent_C::AIExplosive_SetNewExplosiveClass(class UClass* NewExplosiveClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIExplosiveSpawningComponent.AIExplosiveSpawningComponent_C.AIExplosive_SetNewExplosiveClass");
		
		UAIExplosiveSpawningComponent_C_AIExplosive_SetNewExplosiveClass_Params params {};
		params.NewExplosiveClass = NewExplosiveClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function AIExplosiveSpawningComponent.AIExplosiveSpawningComponent_C.ExecuteUbergraph_AIExplosiveSpawningComponent
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAIExplosiveSpawningComponent_C::ExecuteUbergraph_AIExplosiveSpawningComponent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIExplosiveSpawningComponent.AIExplosiveSpawningComponent_C.ExecuteUbergraph_AIExplosiveSpawningComponent");
		
		UAIExplosiveSpawningComponent_C_ExecuteUbergraph_AIExplosiveSpawningComponent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIExplosiveSpawningComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIExplosiveSpawningComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AIExplosiveSpawningComponent.AIExplosiveSpawningComponent_C");
		return ptr;
	}

}


