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
	 * 		RVA    -> 0x03745FC0
	 * 		Name   -> Function ActorOfInterestFramework.ActorOfInterestBlueprintFunctionLibrary.GetActorsOfInterestFromIds
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UClass*>                              ActorOfInterestIds                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, UObjectWrapper)
	 * 		TArray<class AActor*>                              Actors                                                     (Parm, OutParm, ZeroConstructor)
	 */
	void UActorOfInterestBlueprintFunctionLibrary::STATIC_GetActorsOfInterestFromIds(class UObject* WorldContextObject, TArray<class UClass*> ActorOfInterestIds, TArray<class AActor*>* Actors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActorOfInterestFramework.ActorOfInterestBlueprintFunctionLibrary.GetActorsOfInterestFromIds");
		
		UActorOfInterestBlueprintFunctionLibrary_GetActorsOfInterestFromIds_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ActorOfInterestIds = ActorOfInterestIds;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Actors != nullptr)
			*Actors = params.Actors;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03745F00
	 * 		Name   -> Function ActorOfInterestFramework.ActorOfInterestBlueprintFunctionLibrary.GetActorOfInterestFromId
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      ActorOfInterestId                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	class AActor* UActorOfInterestBlueprintFunctionLibrary::STATIC_GetActorOfInterestFromId(class UObject* WorldContextObject, class UClass* ActorOfInterestId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActorOfInterestFramework.ActorOfInterestBlueprintFunctionLibrary.GetActorOfInterestFromId");
		
		UActorOfInterestBlueprintFunctionLibrary_GetActorOfInterestFromId_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ActorOfInterestId = ActorOfInterestId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActorOfInterestBlueprintFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActorOfInterestBlueprintFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ActorOfInterestFramework.ActorOfInterestBlueprintFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActorOfInterestComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActorOfInterestComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ActorOfInterestFramework.ActorOfInterestComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActorOfInterestId.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActorOfInterestId::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ActorOfInterestFramework.ActorOfInterestId");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActorOfInterestServiceInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActorOfInterestServiceInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ActorOfInterestFramework.ActorOfInterestServiceInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AActorOfInterestService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AActorOfInterestService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ActorOfInterestFramework.ActorOfInterestService");
		return ptr;
	}

}


