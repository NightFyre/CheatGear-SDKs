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
	 * 		RVA    -> 0x03C67650
	 * 		Name   -> Function ShantyPuzzle.ShantyPuzzleCompletionComponent.PlayReactions_Net
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		EShantyPuzzleCompletionReactionState               State                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShantyPuzzleCompletionComponent::PlayReactions_Net(EShantyPuzzleCompletionReactionState State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShantyPuzzle.ShantyPuzzleCompletionComponent.PlayReactions_Net");
		
		UShantyPuzzleCompletionComponent_PlayReactions_Net_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShantyPuzzleCompletionComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShantyPuzzleCompletionComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ShantyPuzzle.ShantyPuzzleCompletionComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShantyPuzzleInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShantyPuzzleInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ShantyPuzzle.ShantyPuzzleInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03C67550
	 * 		Name   -> Function ShantyPuzzle.ShantyPuzzleComponent.OnEndOverlap
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class AActor*                                      InActor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         InComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InOtherBodyIndex                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShantyPuzzleComponent::OnEndOverlap(class AActor* InActor, class UPrimitiveComponent* InComponent, int32_t InOtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShantyPuzzle.ShantyPuzzleComponent.OnEndOverlap");
		
		UShantyPuzzleComponent_OnEndOverlap_Params params {};
		params.InActor = InActor;
		params.InComponent = InComponent;
		params.InOtherBodyIndex = InOtherBodyIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03C67380
	 * 		Name   -> Function ShantyPuzzle.ShantyPuzzleComponent.OnBeginOverlap
	 * 		Flags  -> (Final, Native, Public, HasOutParms)
	 * Parameters:
	 * 		class AActor*                                      InActor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         InComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InOtherBodyIndex                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 */
	void UShantyPuzzleComponent::OnBeginOverlap(class AActor* InActor, class UPrimitiveComponent* InComponent, int32_t InOtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShantyPuzzle.ShantyPuzzleComponent.OnBeginOverlap");
		
		UShantyPuzzleComponent_OnBeginOverlap_Params params {};
		params.InActor = InActor;
		params.InComponent = InComponent;
		params.InOtherBodyIndex = InOtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShantyPuzzleComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShantyPuzzleComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ShantyPuzzle.ShantyPuzzleComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShantyPuzzleInteractionZoneComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShantyPuzzleInteractionZoneComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ShantyPuzzle.ShantyPuzzleInteractionZoneComponent");
		return ptr;
	}

}


