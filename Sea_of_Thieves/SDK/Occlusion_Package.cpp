/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * 		Name   -> PredefinedFunction UOcclusionInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOcclusionInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Occlusion.OcclusionInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03581AB0
	 * 		Name   -> Function Occlusion.OcclusionService.OnPrimaryActorEndPlay
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AActor*                                      InActor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOcclusionService::OnPrimaryActorEndPlay(class AActor* InActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Occlusion.OcclusionService.OnPrimaryActorEndPlay");
		
		UOcclusionService_OnPrimaryActorEndPlay_Params params {};
		params.InActor = InActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03581A30
	 * 		Name   -> Function Occlusion.OcclusionService.OnIgnoredActorEndPlay
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AActor*                                      InActor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOcclusionService::OnIgnoredActorEndPlay(class AActor* InActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Occlusion.OcclusionService.OnIgnoredActorEndPlay");
		
		UOcclusionService_OnIgnoredActorEndPlay_Params params {};
		params.InActor = InActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x035819A0
	 * 		Name   -> Function Occlusion.OcclusionService.AutomationSetShouldDisableAsync
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               InShouldDisableAsync                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOcclusionService::AutomationSetShouldDisableAsync(bool InShouldDisableAsync)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Occlusion.OcclusionService.AutomationSetShouldDisableAsync");
		
		UOcclusionService_AutomationSetShouldDisableAsync_Params params {};
		params.InShouldDisableAsync = InShouldDisableAsync;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03581970
	 * 		Name   -> Function Occlusion.OcclusionService.AutomationGetShouldDisableAsync
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UOcclusionService::AutomationGetShouldDisableAsync()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Occlusion.OcclusionService.AutomationGetShouldDisableAsync");
		
		UOcclusionService_AutomationGetShouldDisableAsync_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOcclusionService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOcclusionService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Occlusion.OcclusionService");
		return ptr;
	}

}


