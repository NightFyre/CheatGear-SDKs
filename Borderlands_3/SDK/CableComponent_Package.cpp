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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACableActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACableActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CableComponent.CableActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00944010
	 * 		Name   -> Function CableComponent.CableComponent.SetAttachEndTo
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ComponentProperty                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        SocketName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCableComponent::SetAttachEndTo(class AActor* Actor, const class FName& ComponentProperty, const class FName& SocketName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CableComponent.CableComponent.SetAttachEndTo");
		
		UCableComponent_SetAttachEndTo_Params params {};
		params.Actor = Actor;
		params.ComponentProperty = ComponentProperty;
		params.SocketName = SocketName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00943F00
	 * 		Name   -> Function CableComponent.CableComponent.GetTransformAtRatio
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		float                                              Ratio                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     RefUp                                                      (ConstParm, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTransform UCableComponent::GetTransformAtRatio(float Ratio, const struct FVector& RefUp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CableComponent.CableComponent.GetTransformAtRatio");
		
		UCableComponent_GetTransformAtRatio_Params params {};
		params.Ratio = Ratio;
		params.RefUp = RefUp;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00943D90
	 * 		Name   -> Function CableComponent.CableComponent.GetTransformAtDistance
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     RefUp                                                      (ConstParm, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bOutIsAtEnd                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTransform UCableComponent::GetTransformAtDistance(float Distance, const struct FVector& RefUp, bool* bOutIsAtEnd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CableComponent.CableComponent.GetTransformAtDistance");
		
		UCableComponent_GetTransformAtDistance_Params params {};
		params.Distance = Distance;
		params.RefUp = RefUp;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bOutIsAtEnd != nullptr)
			*bOutIsAtEnd = params.bOutIsAtEnd;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00943D60
	 * 		Name   -> Function CableComponent.CableComponent.GetSimulatedCableLength
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UCableComponent::GetSimulatedCableLength()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CableComponent.CableComponent.GetSimulatedCableLength");
		
		UCableComponent_GetSimulatedCableLength_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00943CB0
	 * 		Name   -> Function CableComponent.CableComponent.GetCableParticleLocations
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		TArray<struct FVector>                             Locations                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UCableComponent::GetCableParticleLocations(TArray<struct FVector>* Locations)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CableComponent.CableComponent.GetCableParticleLocations");
		
		UCableComponent_GetCableParticleLocations_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Locations != nullptr)
			*Locations = params.Locations;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00943C80
	 * 		Name   -> Function CableComponent.CableComponent.GetAttachedComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class USceneComponent* UCableComponent::GetAttachedComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CableComponent.CableComponent.GetAttachedComponent");
		
		UCableComponent_GetAttachedComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00943C50
	 * 		Name   -> Function CableComponent.CableComponent.GetAttachedActor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class AActor* UCableComponent::GetAttachedActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CableComponent.CableComponent.GetAttachedActor");
		
		UCableComponent_GetAttachedActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCableComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCableComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CableComponent.CableComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00943B80
	 * 		Name   -> Function CableComponent.FollowCableMovementComponent.EnableMovement
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bResetPosition                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFollowCableMovementComponent::EnableMovement(bool bEnable, bool bResetPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CableComponent.FollowCableMovementComponent.EnableMovement");
		
		UFollowCableMovementComponent_EnableMovement_Params params {};
		params.bEnable = bEnable;
		params.bResetPosition = bResetPosition;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFollowCableMovementComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFollowCableMovementComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CableComponent.FollowCableMovementComponent");
		return ptr;
	}

}


