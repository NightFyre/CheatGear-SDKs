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
	 * 		RVA    -> 0x04212520
	 * 		Name   -> Function RemoteActorDestruction.RemoteActorDestructionInterface.DestroyExistingActors
	 * 		Flags  -> (Native, Public, HasOutParms)
	 * Parameters:
	 * 		TArray<class UClass*>                              ClassesToDestroy                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, UObjectWrapper)
	 */
	void URemoteActorDestructionInterface::DestroyExistingActors(TArray<class UClass*> ClassesToDestroy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteActorDestruction.RemoteActorDestructionInterface.DestroyExistingActors");
		
		URemoteActorDestructionInterface_DestroyExistingActors_Params params {};
		params.ClassesToDestroy = ClassesToDestroy;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04212490
	 * 		Name   -> Function RemoteActorDestruction.RemoteActorDestructionInterface.DestroyActor
	 * 		Flags  -> (Native, Public, HasOutParms)
	 * Parameters:
	 * 		struct FDestroyActorData                           DestroyActorData                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	void URemoteActorDestructionInterface::DestroyActor(const struct FDestroyActorData& DestroyActorData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteActorDestruction.RemoteActorDestructionInterface.DestroyActor");
		
		URemoteActorDestructionInterface_DestroyActor_Params params {};
		params.DestroyActorData = DestroyActorData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URemoteActorDestructionInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URemoteActorDestructionInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RemoteActorDestruction.RemoteActorDestructionInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARemoteActorDestructionService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARemoteActorDestructionService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RemoteActorDestruction.RemoteActorDestructionService");
		return ptr;
	}

}


