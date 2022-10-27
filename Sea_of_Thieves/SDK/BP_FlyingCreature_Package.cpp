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
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function BP_FlyingCreature.BP_FlyingCreature_C.CreateCreature
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_FlyingCreature_C::CreateCreature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FlyingCreature.BP_FlyingCreature_C.CreateCreature");
		
		ABP_FlyingCreature_C_CreateCreature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function BP_FlyingCreature.BP_FlyingCreature_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_FlyingCreature_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FlyingCreature.BP_FlyingCreature_C.UserConstructionScript");
		
		ABP_FlyingCreature_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_FlyingCreature_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_FlyingCreature_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_FlyingCreature.BP_FlyingCreature_C");
		return ptr;
	}

}


