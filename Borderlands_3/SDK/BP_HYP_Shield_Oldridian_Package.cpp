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
	 * 		Name   -> Function BP_HYP_Shield_Oldridian.BP_HYP_Shield_Oldridian_C.StartShieldEffect
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UBP_HYP_Shield_Oldridian_C::StartShieldEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HYP_Shield_Oldridian.BP_HYP_Shield_Oldridian_C.StartShieldEffect");
		
		UBP_HYP_Shield_Oldridian_C_StartShieldEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_HYP_Shield_Oldridian.BP_HYP_Shield_Oldridian_C.StopShieldEffect
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UBP_HYP_Shield_Oldridian_C::StopShieldEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HYP_Shield_Oldridian.BP_HYP_Shield_Oldridian_C.StopShieldEffect");
		
		UBP_HYP_Shield_Oldridian_C_StopShieldEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_HYP_Shield_Oldridian.BP_HYP_Shield_Oldridian_C.ExecuteUbergraph_BP_HYP_Shield_Oldridian
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_HYP_Shield_Oldridian_C::ExecuteUbergraph_BP_HYP_Shield_Oldridian(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HYP_Shield_Oldridian.BP_HYP_Shield_Oldridian_C.ExecuteUbergraph_BP_HYP_Shield_Oldridian");
		
		UBP_HYP_Shield_Oldridian_C_ExecuteUbergraph_BP_HYP_Shield_Oldridian_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_HYP_Shield_Oldridian_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_HYP_Shield_Oldridian_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_HYP_Shield_Oldridian.BP_HYP_Shield_Oldridian_C");
		return ptr;
	}

}


