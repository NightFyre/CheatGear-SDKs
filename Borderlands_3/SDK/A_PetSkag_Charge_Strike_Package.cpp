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
	 * 		Name   -> Function A_PetSkag_Charge_Strike.A_PetSkag_Charge_Strike_C.Notify_Melee
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UA_PetSkag_Charge_Strike_C::Notify_Melee()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_PetSkag_Charge_Strike.A_PetSkag_Charge_Strike_C.Notify_Melee");
		
		UA_PetSkag_Charge_Strike_C_Notify_Melee_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function A_PetSkag_Charge_Strike.A_PetSkag_Charge_Strike_C.ExecuteUbergraph_A_PetSkag_Charge_Strike
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UA_PetSkag_Charge_Strike_C::ExecuteUbergraph_A_PetSkag_Charge_Strike(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_PetSkag_Charge_Strike.A_PetSkag_Charge_Strike_C.ExecuteUbergraph_A_PetSkag_Charge_Strike");
		
		UA_PetSkag_Charge_Strike_C_ExecuteUbergraph_A_PetSkag_Charge_Strike_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UA_PetSkag_Charge_Strike_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UA_PetSkag_Charge_Strike_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass A_PetSkag_Charge_Strike.A_PetSkag_Charge_Strike_C");
		return ptr;
	}

}


