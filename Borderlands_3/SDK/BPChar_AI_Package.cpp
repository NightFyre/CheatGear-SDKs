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
	 * 		Name   -> Function BPChar_AI.BPChar_AI_C.AIStolenProj_AttemptDetonate
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPChar_AI_C::AIStolenProj_AttemptDetonate(bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_AI.BPChar_AI_C.AIStolenProj_AttemptDetonate");
		
		ABPChar_AI_C_AIStolenProj_AttemptDetonate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_AI.BPChar_AI_C.AIStolenProj_GetElementalTypeFromStolenProjectile
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EOakElementalType                                  StolenProjectileElement                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_AI_C::AIStolenProj_GetElementalTypeFromStolenProjectile(EOakElementalType* StolenProjectileElement)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_AI.BPChar_AI_C.AIStolenProj_GetElementalTypeFromStolenProjectile");
		
		ABPChar_AI_C_AIStolenProj_GetElementalTypeFromStolenProjectile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StolenProjectileElement != nullptr)
			*StolenProjectileElement = params.StolenProjectileElement;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_AI.BPChar_AI_C.AIStolenProj_AttemptDisarm
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPChar_AI_C::AIStolenProj_AttemptDisarm(bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_AI.BPChar_AI_C.AIStolenProj_AttemptDisarm");
		
		ABPChar_AI_C_AIStolenProj_AttemptDisarm_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_AI.BPChar_AI_C.AIStolenProj_AttemptDestroy
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPChar_AI_C::AIStolenProj_AttemptDestroy(bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_AI.BPChar_AI_C.AIStolenProj_AttemptDestroy");
		
		ABPChar_AI_C_AIStolenProj_AttemptDestroy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_AI.BPChar_AI_C.AIStolenProj_AttemptAttach
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        SocketName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPChar_AI_C::AIStolenProj_AttemptAttach(const class FName& SocketName, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_AI.BPChar_AI_C.AIStolenProj_AttemptAttach");
		
		ABPChar_AI_C_AIStolenProj_AttemptAttach_Params params {};
		params.SocketName = SocketName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_AI.BPChar_AI_C.AIStolenProj_AttemptReturnTo
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		Enum_AIThrowAtStyle                                ReturnTo                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        TargetSocket                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MaxPrediction                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Speed                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              AnglePercent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    DirectionOffset                                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     TargetOffset                                               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      SpecifiedActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     WorldLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPChar_AI_C::AIStolenProj_AttemptReturnTo(Enum_AIThrowAtStyle ReturnTo, const class FName& TargetSocket, float MaxPrediction, float Speed, float AnglePercent, const struct FRotator& DirectionOffset, const struct FVector& TargetOffset, class AActor* SpecifiedActor, const struct FVector& WorldLocation, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_AI.BPChar_AI_C.AIStolenProj_AttemptReturnTo");
		
		ABPChar_AI_C_AIStolenProj_AttemptReturnTo_Params params {};
		params.ReturnTo = ReturnTo;
		params.TargetSocket = TargetSocket;
		params.MaxPrediction = MaxPrediction;
		params.Speed = Speed;
		params.AnglePercent = AnglePercent;
		params.DirectionOffset = DirectionOffset;
		params.TargetOffset = TargetOffset;
		params.SpecifiedActor = SpecifiedActor;
		params.WorldLocation = WorldLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_AI.BPChar_AI_C.AIStolenProj_AttemptLerpToSocket
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        SocketToLerpTo                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              LerpDuration                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPChar_AI_C::AIStolenProj_AttemptLerpToSocket(const class FName& SocketToLerpTo, float LerpDuration, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_AI.BPChar_AI_C.AIStolenProj_AttemptLerpToSocket");
		
		ABPChar_AI_C_AIStolenProj_AttemptLerpToSocket_Params params {};
		params.SocketToLerpTo = SocketToLerpTo;
		params.LerpDuration = LerpDuration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_AI.BPChar_AI_C.AIMelee_GetElementalTypeFromMeleeWeapon
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EOakElementalType                                  MeleeWeaponElement                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_AI_C::AIMelee_GetElementalTypeFromMeleeWeapon(EOakElementalType* MeleeWeaponElement)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_AI.BPChar_AI_C.AIMelee_GetElementalTypeFromMeleeWeapon");
		
		ABPChar_AI_C_AIMelee_GetElementalTypeFromMeleeWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MeleeWeaponElement != nullptr)
			*MeleeWeaponElement = params.MeleeWeaponElement;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_AI.BPChar_AI_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_AI_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_AI.BPChar_AI_C.UserConstructionScript");
		
		ABPChar_AI_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_AI.BPChar_AI_C.AIMelee_Drop
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               RequestNewMeleeWeapon                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPChar_AI_C::AIMelee_Drop(bool RequestNewMeleeWeapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_AI.BPChar_AI_C.AIMelee_Drop");
		
		ABPChar_AI_C_AIMelee_Drop_Params params {};
		params.RequestNewMeleeWeapon = RequestNewMeleeWeapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_AI.BPChar_AI_C.AIMelee_Spawn
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_AI_C::AIMelee_Spawn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_AI.BPChar_AI_C.AIMelee_Spawn");
		
		ABPChar_AI_C_AIMelee_Spawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_AI.BPChar_AI_C.AIMelee_ThrowAtTarget
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
	void ABPChar_AI_C::AIMelee_ThrowAtTarget(float ThrowSpeed, float ThrowAnglePercent, const class FName& TargetSocket, const struct FVector& TargetOffset, const struct FRotator& ThrowAngleOffset, float MaxPrediction, bool RequestNewMeleeWeapon, bool SpawnIfDoesntExist)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_AI.BPChar_AI_C.AIMelee_ThrowAtTarget");
		
		ABPChar_AI_C_AIMelee_ThrowAtTarget_Params params {};
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
	 * 		Name   -> Function BPChar_AI.BPChar_AI_C.AIExplosive_Spawn
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_AI_C::AIExplosive_Spawn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_AI.BPChar_AI_C.AIExplosive_Spawn");
		
		ABPChar_AI_C_AIExplosive_Spawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_AI.BPChar_AI_C.AIExplosive_Prime
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_AI_C::AIExplosive_Prime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_AI.BPChar_AI_C.AIExplosive_Prime");
		
		ABPChar_AI_C_AIExplosive_Prime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_AI.BPChar_AI_C.AIExplosive_ThrowAtTarget
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
	void ABPChar_AI_C::AIExplosive_ThrowAtTarget(float ThrowSpeed, float ThrowAnglePercent, const class FName& TargetSocket, const struct FVector& TargetOffset, const struct FRotator& ThrowAngleOffset, float MaxPrediction, bool RequestNewExplosive, bool SpawnIfDoesn_tExist)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_AI.BPChar_AI_C.AIExplosive_ThrowAtTarget");
		
		ABPChar_AI_C_AIExplosive_ThrowAtTarget_Params params {};
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
	 * 		Name   -> Function BPChar_AI.BPChar_AI_C.AIExplosive_Detonate
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               KillSelfOnDetonate                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               RequestNewExplosive                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      InstigatorOverride                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_AI_C::AIExplosive_Detonate(bool KillSelfOnDetonate, bool RequestNewExplosive, class AActor* InstigatorOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_AI.BPChar_AI_C.AIExplosive_Detonate");
		
		ABPChar_AI_C_AIExplosive_Detonate_Params params {};
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
	 * 		Name   -> Function BPChar_AI.BPChar_AI_C.AIExplosive_Drop
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               RequestNewExplosive                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      InstigatorOverride                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_AI_C::AIExplosive_Drop(bool RequestNewExplosive, class AActor* InstigatorOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_AI.BPChar_AI_C.AIExplosive_Drop");
		
		ABPChar_AI_C_AIExplosive_Drop_Params params {};
		params.RequestNewExplosive = RequestNewExplosive;
		params.InstigatorOverride = InstigatorOverride;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_AI.BPChar_AI_C.AIExplosive_ThrowAtActor
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
	void ABPChar_AI_C::AIExplosive_ThrowAtActor(class AActor* ActorToThrowAt, float ThrowSpeed, float ThrowAnglePercentage, const class FName& ActorSocket, const struct FVector& ActorOffset, const struct FRotator& ThrowAngleOffset, float MaxPrediction, bool RequestNewExplosive, bool SpawnIfDoesntExist)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_AI.BPChar_AI_C.AIExplosive_ThrowAtActor");
		
		ABPChar_AI_C_AIExplosive_ThrowAtActor_Params params {};
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
	 * 		Name   -> Function BPChar_AI.BPChar_AI_C.AIExplosive_ThrowAtLocation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     LocationToThrowAt                                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ThrowSpeed                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ThrowAnglePercentage                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               RequestNewExplosive                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               SpawnIfDoesntExist                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPChar_AI_C::AIExplosive_ThrowAtLocation(const struct FVector& LocationToThrowAt, float ThrowSpeed, float ThrowAnglePercentage, bool RequestNewExplosive, bool SpawnIfDoesntExist)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_AI.BPChar_AI_C.AIExplosive_ThrowAtLocation");
		
		ABPChar_AI_C_AIExplosive_ThrowAtLocation_Params params {};
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
	 * 		Name   -> Function BPChar_AI.BPChar_AI_C.AIMelee_ThrowAtActor
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
	void ABPChar_AI_C::AIMelee_ThrowAtActor(class AActor* ActorToThrowAt, float ThrowSpeed, float ThrowAnglePercentage, const class FName& ActorSocket, const struct FVector& ActorOffset, const struct FRotator& ThrowAngleOffset, float MaxPrediction, bool RequestNewMeleeWeapon, bool SpawnIfDoesntExist)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_AI.BPChar_AI_C.AIMelee_ThrowAtActor");
		
		ABPChar_AI_C_AIMelee_ThrowAtActor_Params params {};
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
	 * 		Name   -> Function BPChar_AI.BPChar_AI_C.AIMelee_ThrowAtLocation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     LocationToThrowAt                                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ThrowSpeed                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ThrowAnglePercentage                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               RequestNewMeleeWeapon                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               SpawnIfDoesntExist                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPChar_AI_C::AIMelee_ThrowAtLocation(const struct FVector& LocationToThrowAt, float ThrowSpeed, float ThrowAnglePercentage, bool RequestNewMeleeWeapon, bool SpawnIfDoesntExist)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_AI.BPChar_AI_C.AIMelee_ThrowAtLocation");
		
		ABPChar_AI_C_AIMelee_ThrowAtLocation_Params params {};
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
	 * 		Name   -> Function BPChar_AI.BPChar_AI_C.AIMelee_SetNewMeleeWeaponClass
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      NewMeleeWeaponClass                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_AI_C::AIMelee_SetNewMeleeWeaponClass(class UClass* NewMeleeWeaponClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_AI.BPChar_AI_C.AIMelee_SetNewMeleeWeaponClass");
		
		ABPChar_AI_C_AIMelee_SetNewMeleeWeaponClass_Params params {};
		params.NewMeleeWeaponClass = NewMeleeWeaponClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_AI.BPChar_AI_C.AIExplosive_SetNewExplosiveClass
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      NewExplosiveClass                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_AI_C::AIExplosive_SetNewExplosiveClass(class UClass* NewExplosiveClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_AI.BPChar_AI_C.AIExplosive_SetNewExplosiveClass");
		
		ABPChar_AI_C_AIExplosive_SetNewExplosiveClass_Params params {};
		params.NewExplosiveClass = NewExplosiveClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_AI.BPChar_AI_C.AIShield_SetNewShieldClass
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      NewShieldClass                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_AI_C::AIShield_SetNewShieldClass(class UClass* NewShieldClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_AI.BPChar_AI_C.AIShield_SetNewShieldClass");
		
		ABPChar_AI_C_AIShield_SetNewShieldClass_Params params {};
		params.NewShieldClass = NewShieldClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_AI.BPChar_AI_C.AIShield_Spawn
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_AI_C::AIShield_Spawn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_AI.BPChar_AI_C.AIShield_Spawn");
		
		ABPChar_AI_C_AIShield_Spawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_AI.BPChar_AI_C.AIShield_ThrowAtTarget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              ThrowSpeed                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ThrowAnglePercent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        TargetSocket                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     TargetOffset                                               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    ThrowAngleOffset                                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              MaxPrediction                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               RequestNewShield                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               SpawnIfDoesntExist                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPChar_AI_C::AIShield_ThrowAtTarget(float ThrowSpeed, float ThrowAnglePercent, const class FName& TargetSocket, const struct FVector& TargetOffset, const struct FRotator& ThrowAngleOffset, float MaxPrediction, bool RequestNewShield, bool SpawnIfDoesntExist)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_AI.BPChar_AI_C.AIShield_ThrowAtTarget");
		
		ABPChar_AI_C_AIShield_ThrowAtTarget_Params params {};
		params.ThrowSpeed = ThrowSpeed;
		params.ThrowAnglePercent = ThrowAnglePercent;
		params.TargetSocket = TargetSocket;
		params.TargetOffset = TargetOffset;
		params.ThrowAngleOffset = ThrowAngleOffset;
		params.MaxPrediction = MaxPrediction;
		params.RequestNewShield = RequestNewShield;
		params.SpawnIfDoesntExist = SpawnIfDoesntExist;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_AI.BPChar_AI_C.AIShield_ThrowAtActor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ActorToThrowAt                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ThrowSpeed                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ThrowAnglePercentage                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        ActorSocket                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     ActorOffset                                                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    ThrowAngleOffset                                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              MaxPrediction                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               RequestNewShield                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               SpawnIfDoesntExist                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPChar_AI_C::AIShield_ThrowAtActor(class AActor* ActorToThrowAt, float ThrowSpeed, float ThrowAnglePercentage, const class FName& ActorSocket, const struct FVector& ActorOffset, const struct FRotator& ThrowAngleOffset, float MaxPrediction, bool RequestNewShield, bool SpawnIfDoesntExist)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_AI.BPChar_AI_C.AIShield_ThrowAtActor");
		
		ABPChar_AI_C_AIShield_ThrowAtActor_Params params {};
		params.ActorToThrowAt = ActorToThrowAt;
		params.ThrowSpeed = ThrowSpeed;
		params.ThrowAnglePercentage = ThrowAnglePercentage;
		params.ActorSocket = ActorSocket;
		params.ActorOffset = ActorOffset;
		params.ThrowAngleOffset = ThrowAngleOffset;
		params.MaxPrediction = MaxPrediction;
		params.RequestNewShield = RequestNewShield;
		params.SpawnIfDoesntExist = SpawnIfDoesntExist;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_AI.BPChar_AI_C.AIShield_ThrowAtLocation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     LocationToThrowAt                                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ThrowSpeed                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ThrowAnglePercentage                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               RequestNewShield                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               SpawnIfDoesntExist                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPChar_AI_C::AIShield_ThrowAtLocation(const struct FVector& LocationToThrowAt, float ThrowSpeed, float ThrowAnglePercentage, bool RequestNewShield, bool SpawnIfDoesntExist)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_AI.BPChar_AI_C.AIShield_ThrowAtLocation");
		
		ABPChar_AI_C_AIShield_ThrowAtLocation_Params params {};
		params.LocationToThrowAt = LocationToThrowAt;
		params.ThrowSpeed = ThrowSpeed;
		params.ThrowAnglePercentage = ThrowAnglePercentage;
		params.RequestNewShield = RequestNewShield;
		params.SpawnIfDoesntExist = SpawnIfDoesntExist;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_AI.BPChar_AI_C.AIShield_Drop
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               RequestNewShield                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPChar_AI_C::AIShield_Drop(bool RequestNewShield)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_AI.BPChar_AI_C.AIShield_Drop");
		
		ABPChar_AI_C_AIShield_Drop_Params params {};
		params.RequestNewShield = RequestNewShield;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_AI.BPChar_AI_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABPChar_AI_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_AI.BPChar_AI_C.ReceiveBeginPlay");
		
		ABPChar_AI_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_AI.BPChar_AI_C.ExecuteUbergraph_BPChar_AI
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_AI_C::ExecuteUbergraph_BPChar_AI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_AI.BPChar_AI_C.ExecuteUbergraph_BPChar_AI");
		
		ABPChar_AI_C_ExecuteUbergraph_BPChar_AI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABPChar_AI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPChar_AI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_AI.BPChar_AI_C");
		return ptr;
	}

}


