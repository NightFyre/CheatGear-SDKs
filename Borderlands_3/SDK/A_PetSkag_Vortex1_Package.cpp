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
	 * 		Name   -> Function A_PetSkag_Vortex1.A_PetSkag_Vortex1_C.Notify_AttackCommand
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UA_PetSkag_Vortex1_C::Notify_AttackCommand()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_PetSkag_Vortex1.A_PetSkag_Vortex1_C.Notify_AttackCommand");
		
		UA_PetSkag_Vortex1_C_Notify_AttackCommand_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function A_PetSkag_Vortex1.A_PetSkag_Vortex1_C.ExecuteUbergraph_A_PetSkag_Vortex1
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UA_PetSkag_Vortex1_C::ExecuteUbergraph_A_PetSkag_Vortex1(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_PetSkag_Vortex1.A_PetSkag_Vortex1_C.ExecuteUbergraph_A_PetSkag_Vortex1");
		
		UA_PetSkag_Vortex1_C_ExecuteUbergraph_A_PetSkag_Vortex1_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UA_PetSkag_Vortex1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UA_PetSkag_Vortex1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass A_PetSkag_Vortex1.A_PetSkag_Vortex1_C");
		return ptr;
	}

}


