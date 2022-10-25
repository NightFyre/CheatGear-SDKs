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
	 * 		Name   -> Function Action_Siren_DoUntoOthers.Action_Siren_DoUntoOthers_C.AN_FireProjectile
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_Siren_DoUntoOthers_C::AN_FireProjectile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Siren_DoUntoOthers.Action_Siren_DoUntoOthers_C.AN_FireProjectile");
		
		UAction_Siren_DoUntoOthers_C_AN_FireProjectile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Siren_DoUntoOthers.Action_Siren_DoUntoOthers_C.ExecuteUbergraph_Action_Siren_DoUntoOthers
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_Siren_DoUntoOthers_C::ExecuteUbergraph_Action_Siren_DoUntoOthers(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Siren_DoUntoOthers.Action_Siren_DoUntoOthers_C.ExecuteUbergraph_Action_Siren_DoUntoOthers");
		
		UAction_Siren_DoUntoOthers_C_ExecuteUbergraph_Action_Siren_DoUntoOthers_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAction_Siren_DoUntoOthers_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAction_Siren_DoUntoOthers_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Action_Siren_DoUntoOthers.Action_Siren_DoUntoOthers_C");
		return ptr;
	}

}


