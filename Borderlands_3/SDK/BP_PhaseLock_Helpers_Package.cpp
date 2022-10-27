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
	 * 		Name   -> Function BP_PhaseLock_Helpers.BP_PhaseLock_Helpers_C.IsPhaselocked
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bRes                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_PhaseLock_Helpers_C::STATIC_IsPhaselocked(class AActor* Target, class UObject* __WorldContext, bool* bRes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PhaseLock_Helpers.BP_PhaseLock_Helpers_C.IsPhaselocked");
		
		UBP_PhaseLock_Helpers_C_IsPhaselocked_Params params {};
		params.Target = Target;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bRes != nullptr)
			*bRes = params.bRes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_PhaseLock_Helpers.BP_PhaseLock_Helpers_C.GetAdjustedPhaseLockSpeed
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              NewSpeed                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PhaseLock_Helpers_C::STATIC_GetAdjustedPhaseLockSpeed(class AActor* Target, class UObject* __WorldContext, float* NewSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PhaseLock_Helpers.BP_PhaseLock_Helpers_C.GetAdjustedPhaseLockSpeed");
		
		UBP_PhaseLock_Helpers_C_GetAdjustedPhaseLockSpeed_Params params {};
		params.Target = Target;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewSpeed != nullptr)
			*NewSpeed = params.NewSpeed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_PhaseLock_Helpers.BP_PhaseLock_Helpers_C.ApplyPhaseLockToTarget
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      PhaseLockClass                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Instigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Speed                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     TargetLocation                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bRes                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_PhaseLock_Helpers_C::STATIC_ApplyPhaseLockToTarget(class AActor* Target, class UClass* PhaseLockClass, class AActor* Instigator, float Duration, float Speed, const struct FVector& TargetLocation, class UObject* __WorldContext, bool* bRes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PhaseLock_Helpers.BP_PhaseLock_Helpers_C.ApplyPhaseLockToTarget");
		
		UBP_PhaseLock_Helpers_C_ApplyPhaseLockToTarget_Params params {};
		params.Target = Target;
		params.PhaseLockClass = PhaseLockClass;
		params.Instigator = Instigator;
		params.Duration = Duration;
		params.Speed = Speed;
		params.TargetLocation = TargetLocation;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bRes != nullptr)
			*bRes = params.bRes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_PhaseLock_Helpers_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PhaseLock_Helpers_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PhaseLock_Helpers.BP_PhaseLock_Helpers_C");
		return ptr;
	}

}


