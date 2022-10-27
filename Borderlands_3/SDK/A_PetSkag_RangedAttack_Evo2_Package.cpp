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
	 * 		Name   -> Function A_PetSkag_RangedAttack_Evo2.A_PetSkag_RangedAttack_Evo2_C.OnBegin
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UA_PetSkag_RangedAttack_Evo2_C::OnBegin(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_PetSkag_RangedAttack_Evo2.A_PetSkag_RangedAttack_Evo2_C.OnBegin");
		
		UA_PetSkag_RangedAttack_Evo2_C_OnBegin_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function A_PetSkag_RangedAttack_Evo2.A_PetSkag_RangedAttack_Evo2_C.ExecuteUbergraph_A_PetSkag_RangedAttack_Evo2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UA_PetSkag_RangedAttack_Evo2_C::ExecuteUbergraph_A_PetSkag_RangedAttack_Evo2(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_PetSkag_RangedAttack_Evo2.A_PetSkag_RangedAttack_Evo2_C.ExecuteUbergraph_A_PetSkag_RangedAttack_Evo2");
		
		UA_PetSkag_RangedAttack_Evo2_C_ExecuteUbergraph_A_PetSkag_RangedAttack_Evo2_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UA_PetSkag_RangedAttack_Evo2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UA_PetSkag_RangedAttack_Evo2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass A_PetSkag_RangedAttack_Evo2.A_PetSkag_RangedAttack_Evo2_C");
		return ptr;
	}

}


