/**
 * Name: Marauders
 * Version: 642675-attempt2
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
	 * 		Name   -> Function Base_Destructible_Actor.Base_Destructible_Actor_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABase_Destructible_Actor_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Destructible_Actor.Base_Destructible_Actor_C.ReceiveBeginPlay");
		
		ABase_Destructible_Actor_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_Destructible_Actor.Base_Destructible_Actor_C.ExecuteUbergraph_Base_Destructible_Actor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABase_Destructible_Actor_C::ExecuteUbergraph_Base_Destructible_Actor(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Destructible_Actor.Base_Destructible_Actor_C.ExecuteUbergraph_Base_Destructible_Actor");
		
		ABase_Destructible_Actor_C_ExecuteUbergraph_Base_Destructible_Actor_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABase_Destructible_Actor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABase_Destructible_Actor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Base_Destructible_Actor.Base_Destructible_Actor_C");
		return ptr;
	}

}


