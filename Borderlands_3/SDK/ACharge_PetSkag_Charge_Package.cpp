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
	 * 		Name   -> Function ACharge_PetSkag_Charge.ACharge_PetSkag_Charge_C.Notify_Melee
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UACharge_PetSkag_Charge_C::Notify_Melee()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ACharge_PetSkag_Charge.ACharge_PetSkag_Charge_C.Notify_Melee");
		
		UACharge_PetSkag_Charge_C_Notify_Melee_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ACharge_PetSkag_Charge.ACharge_PetSkag_Charge_C.ExecuteUbergraph_ACharge_PetSkag_Charge
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UACharge_PetSkag_Charge_C::ExecuteUbergraph_ACharge_PetSkag_Charge(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ACharge_PetSkag_Charge.ACharge_PetSkag_Charge_C.ExecuteUbergraph_ACharge_PetSkag_Charge");
		
		UACharge_PetSkag_Charge_C_ExecuteUbergraph_ACharge_PetSkag_Charge_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UACharge_PetSkag_Charge_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UACharge_PetSkag_Charge_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ACharge_PetSkag_Charge.ACharge_PetSkag_Charge_C");
		return ptr;
	}

}


