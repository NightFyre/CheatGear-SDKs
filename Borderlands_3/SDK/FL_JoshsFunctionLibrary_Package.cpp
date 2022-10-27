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
	 * 		Name   -> Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.ValidateSpawnPoint
	 * 		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USpawnPointComponent*                        PointToValidate                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MaxDropDistance                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_JoshsFunctionLibrary_C::STATIC_ValidateSpawnPoint(class USpawnPointComponent* PointToValidate, float MaxDropDistance, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.ValidateSpawnPoint");
		
		UFL_JoshsFunctionLibrary_C_ValidateSpawnPoint_Params params {};
		params.PointToValidate = PointToValidate;
		params.MaxDropDistance = MaxDropDistance;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.AIScriptedLookAtPlayers
	 * 		Flags  -> (Static, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_JoshsFunctionLibrary_C::STATIC_AIScriptedLookAtPlayers(class AActor* Target, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.AIScriptedLookAtPlayers");
		
		UFL_JoshsFunctionLibrary_C_AIScriptedLookAtPlayers_Params params {};
		params.Target = Target;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.SetBlackboardInt
	 * 		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        BlackboardKey                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      ControlledActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_JoshsFunctionLibrary_C::STATIC_SetBlackboardInt(const class FName& BlackboardKey, class AActor* ControlledActor, int32_t Value, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.SetBlackboardInt");
		
		UFL_JoshsFunctionLibrary_C_SetBlackboardInt_Params params {};
		params.BlackboardKey = BlackboardKey;
		params.ControlledActor = ControlledActor;
		params.Value = Value;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.GetBlackboardInt
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ControlledActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        BlackboardKey                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_JoshsFunctionLibrary_C::STATIC_GetBlackboardInt(class AActor* ControlledActor, const class FName& BlackboardKey, class UObject* __WorldContext, int32_t* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.GetBlackboardInt");
		
		UFL_JoshsFunctionLibrary_C_GetBlackboardInt_Params params {};
		params.ControlledActor = ControlledActor;
		params.BlackboardKey = BlackboardKey;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.TestHitReaction
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		Enum_TestHitReactionType                           Hit_Reaction_Type                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		Enum_TestHitReactionDirection                      Hit_Reaction_Direction                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FForceSelection                             Force                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Display_Text                                               (Parm, OutParm)
	 */
	void UFL_JoshsFunctionLibrary_C::STATIC_TestHitReaction(class AActor* Actor, Enum_TestHitReactionType Hit_Reaction_Type, Enum_TestHitReactionDirection Hit_Reaction_Direction, const struct FForceSelection& Force, class UObject* __WorldContext, class FText* Display_Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.TestHitReaction");
		
		UFL_JoshsFunctionLibrary_C_TestHitReaction_Params params {};
		params.Actor = Actor;
		params.Hit_Reaction_Type = Hit_Reaction_Type;
		params.Hit_Reaction_Direction = Hit_Reaction_Direction;
		params.Force = Force;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Display_Text != nullptr)
			*Display_Text = params.Display_Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.ThrowLightProjectile
	 * 		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      WhoIsThrowing                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      LightProjectileData                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        SourceSocket                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      TargetOverride                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        TargetSocket                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MaxPrediction                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Speed                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              AnglePercent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    DirectionOffset                                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     LocalTargetOffset                                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            DataFlags                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_JoshsFunctionLibrary_C::STATIC_ThrowLightProjectile(class AActor* WhoIsThrowing, class UClass* LightProjectileData, const class FName& SourceSocket, class AActor* TargetOverride, const class FName& TargetSocket, float MaxPrediction, float Speed, float AnglePercent, const struct FRotator& DirectionOffset, const struct FVector& LocalTargetOffset, int32_t DataFlags, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.ThrowLightProjectile");
		
		UFL_JoshsFunctionLibrary_C_ThrowLightProjectile_Params params {};
		params.WhoIsThrowing = WhoIsThrowing;
		params.LightProjectileData = LightProjectileData;
		params.SourceSocket = SourceSocket;
		params.TargetOverride = TargetOverride;
		params.TargetSocket = TargetSocket;
		params.MaxPrediction = MaxPrediction;
		params.Speed = Speed;
		params.AnglePercent = AnglePercent;
		params.DirectionOffset = DirectionOffset;
		params.LocalTargetOffset = LocalTargetOffset;
		params.DataFlags = DataFlags;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.TransformSplat
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FHitResult                                  HitResult                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FTransform                                  SplatTransform                                             (Parm, OutParm, IsPlainOldData, NoDestructor)
	 */
	void UFL_JoshsFunctionLibrary_C::STATIC_TransformSplat(const struct FHitResult& HitResult, class UObject* __WorldContext, struct FTransform* SplatTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.TransformSplat");
		
		UFL_JoshsFunctionLibrary_C_TransformSplat_Params params {};
		params.HitResult = HitResult;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SplatTransform != nullptr)
			*SplatTransform = params.SplatTransform;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.GrantSecondWind
	 * 		Flags  -> (Static, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ActorToGrantSecondWindTo                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_JoshsFunctionLibrary_C::STATIC_GrantSecondWind(class AActor* ActorToGrantSecondWindTo, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.GrantSecondWind");
		
		UFL_JoshsFunctionLibrary_C_GrantSecondWind_Params params {};
		params.ActorToGrantSecondWindTo = ActorToGrantSecondWindTo;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.SimpleScreenParticle
	 * 		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UParticleSystem*                             ScreenParticle                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               AllowMultipleInstances                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               OnlyDrawIfShieldsAreDepleted                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_JoshsFunctionLibrary_C::STATIC_SimpleScreenParticle(class AActor* Target, class UParticleSystem* ScreenParticle, bool AllowMultipleInstances, bool OnlyDrawIfShieldsAreDepleted, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.SimpleScreenParticle");
		
		UFL_JoshsFunctionLibrary_C_SimpleScreenParticle_Params params {};
		params.Target = Target;
		params.ScreenParticle = ScreenParticle;
		params.AllowMultipleInstances = AllowMultipleInstances;
		params.OnlyDrawIfShieldsAreDepleted = OnlyDrawIfShieldsAreDepleted;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.GetElementalTypeFromWeapon
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ActorWithWeapon                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EOakElementalType                                  WeaponElement                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_JoshsFunctionLibrary_C::STATIC_GetElementalTypeFromWeapon(class AActor* ActorWithWeapon, class UObject* __WorldContext, EOakElementalType* WeaponElement)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.GetElementalTypeFromWeapon");
		
		UFL_JoshsFunctionLibrary_C_GetElementalTypeFromWeapon_Params params {};
		params.ActorWithWeapon = ActorWithWeapon;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WeaponElement != nullptr)
			*WeaponElement = params.WeaponElement;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.GetBlackboardObject
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ControlledActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        BlackboardKey                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_JoshsFunctionLibrary_C::STATIC_GetBlackboardObject(class AActor* ControlledActor, const class FName& BlackboardKey, class UObject* __WorldContext, class UObject** Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.GetBlackboardObject");
		
		UFL_JoshsFunctionLibrary_C_GetBlackboardObject_Params params {};
		params.ControlledActor = ControlledActor;
		params.BlackboardKey = BlackboardKey;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.SetBlackboardObject
	 * 		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ControlledActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        BlackboardKey                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_JoshsFunctionLibrary_C::STATIC_SetBlackboardObject(class AActor* ControlledActor, const class FName& BlackboardKey, class UObject* Value, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.SetBlackboardObject");
		
		UFL_JoshsFunctionLibrary_C_SetBlackboardObject_Params params {};
		params.ControlledActor = ControlledActor;
		params.BlackboardKey = BlackboardKey;
		params.Value = Value;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.Setup for Throw Actor At
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class APawn*                                       Who_is_Throwing                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      TargetOverride                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        TargetSocket                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     TargetLocation                                             (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     TargetVelocity                                             (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_JoshsFunctionLibrary_C::STATIC_Setup_for_Throw_Actor_At(class APawn* Who_is_Throwing, class AActor* TargetOverride, const class FName& TargetSocket, class UObject* __WorldContext, struct FVector* TargetLocation, struct FVector* TargetVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.Setup for Throw Actor At");
		
		UFL_JoshsFunctionLibrary_C_Setup_for_Throw_Actor_At_Params params {};
		params.Who_is_Throwing = Who_is_Throwing;
		params.TargetOverride = TargetOverride;
		params.TargetSocket = TargetSocket;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TargetLocation != nullptr)
			*TargetLocation = params.TargetLocation;
		if (TargetVelocity != nullptr)
			*TargetVelocity = params.TargetVelocity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.GetCurrentTarget
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class APawn*                                       Who_s_Target                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Target                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_JoshsFunctionLibrary_C::STATIC_GetCurrentTarget(class APawn* Who_s_Target, class UObject* __WorldContext, class AActor** Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.GetCurrentTarget");
		
		UFL_JoshsFunctionLibrary_C_GetCurrentTarget_Params params {};
		params.Who_s_Target = Who_s_Target;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.GetBlackboardFloat
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ControlledActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        BlackboardKey                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_JoshsFunctionLibrary_C::STATIC_GetBlackboardFloat(class AActor* ControlledActor, const class FName& BlackboardKey, class UObject* __WorldContext, float* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.GetBlackboardFloat");
		
		UFL_JoshsFunctionLibrary_C_GetBlackboardFloat_Params params {};
		params.ControlledActor = ControlledActor;
		params.BlackboardKey = BlackboardKey;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.GetBlackboardBool
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ControlledActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        BlackboardKey                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFL_JoshsFunctionLibrary_C::STATIC_GetBlackboardBool(class AActor* ControlledActor, const class FName& BlackboardKey, class UObject* __WorldContext, bool* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.GetBlackboardBool");
		
		UFL_JoshsFunctionLibrary_C_GetBlackboardBool_Params params {};
		params.ControlledActor = ControlledActor;
		params.BlackboardKey = BlackboardKey;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.SetBlackboardFloat
	 * 		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ControlledActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        BlackboardKey                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_JoshsFunctionLibrary_C::STATIC_SetBlackboardFloat(class AActor* ControlledActor, const class FName& BlackboardKey, float Value, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.SetBlackboardFloat");
		
		UFL_JoshsFunctionLibrary_C_SetBlackboardFloat_Params params {};
		params.ControlledActor = ControlledActor;
		params.BlackboardKey = BlackboardKey;
		params.Value = Value;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.SetBlackboardBool
	 * 		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ControlledActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        BlackboardKey                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_JoshsFunctionLibrary_C::STATIC_SetBlackboardBool(class AActor* ControlledActor, const class FName& BlackboardKey, bool Value, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.SetBlackboardBool");
		
		UFL_JoshsFunctionLibrary_C_SetBlackboardBool_Params params {};
		params.ControlledActor = ControlledActor;
		params.BlackboardKey = BlackboardKey;
		params.Value = Value;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.SetStance
	 * 		Flags  -> (Static, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UOakStanceData*                              New_Stance                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_JoshsFunctionLibrary_C::STATIC_SetStance(class AActor* Target, class UOakStanceData* New_Stance, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.SetStance");
		
		UFL_JoshsFunctionLibrary_C_SetStance_Params params {};
		params.Target = Target;
		params.New_Stance = New_Stance;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.ForciblyResetSpawner
	 * 		Flags  -> (Static, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASpawner*                                    Spawner                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Kill_Existing_Actors                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_JoshsFunctionLibrary_C::STATIC_ForciblyResetSpawner(class ASpawner* Spawner, bool Kill_Existing_Actors, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.ForciblyResetSpawner");
		
		UFL_JoshsFunctionLibrary_C_ForciblyResetSpawner_Params params {};
		params.Spawner = Spawner;
		params.Kill_Existing_Actors = Kill_Existing_Actors;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.ResourceLock
	 * 		Flags  -> (Static, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		Enum_ResourceLockType                              Lock_Type                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Reason                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               LockState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_JoshsFunctionLibrary_C::STATIC_ResourceLock(class AActor* Actor, Enum_ResourceLockType Lock_Type, const class FName& Reason, bool LockState, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.ResourceLock");
		
		UFL_JoshsFunctionLibrary_C_ResourceLock_Params params {};
		params.Actor = Actor;
		params.Lock_Type = Lock_Type;
		params.Reason = Reason;
		params.LockState = LockState;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.GBXActionVariableSetup
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      MySelf                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      MyTarget                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageCauserComponent*                      MyDamageCausingComponent                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ACharacter*                                  MyCharacter                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTeam*                                       MyTeam                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_JoshsFunctionLibrary_C::STATIC_GBXActionVariableSetup(class AActor* Actor, class UObject* __WorldContext, class AActor** MySelf, class AActor** MyTarget, class UDamageCauserComponent** MyDamageCausingComponent, class ACharacter** MyCharacter, class UTeam** MyTeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.GBXActionVariableSetup");
		
		UFL_JoshsFunctionLibrary_C_GBXActionVariableSetup_Params params {};
		params.Actor = Actor;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MySelf != nullptr)
			*MySelf = params.MySelf;
		if (MyTarget != nullptr)
			*MyTarget = params.MyTarget;
		if (MyDamageCausingComponent != nullptr)
			*MyDamageCausingComponent = params.MyDamageCausingComponent;
		if (MyCharacter != nullptr)
			*MyCharacter = params.MyCharacter;
		if (MyTeam != nullptr)
			*MyTeam = params.MyTeam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFL_JoshsFunctionLibrary_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFL_JoshsFunctionLibrary_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C");
		return ptr;
	}

}


