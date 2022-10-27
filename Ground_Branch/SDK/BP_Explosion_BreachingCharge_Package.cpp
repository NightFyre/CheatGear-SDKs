/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * 		Name   -> Function BP_Explosion_BreachingCharge.BP_Explosion_BreachingCharge_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Explosion_BreachingCharge_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Explosion_BreachingCharge.BP_Explosion_BreachingCharge_C.ReceiveBeginPlay");
		
		ABP_Explosion_BreachingCharge_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Explosion_BreachingCharge.BP_Explosion_BreachingCharge_C.Detonate
	 * 		Flags  -> ()
	 */
	void ABP_Explosion_BreachingCharge_C::Detonate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Explosion_BreachingCharge.BP_Explosion_BreachingCharge_C.Detonate");
		
		ABP_Explosion_BreachingCharge_C_Detonate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Explosion_BreachingCharge.BP_Explosion_BreachingCharge_C.ExecuteUbergraph_BP_Explosion_BreachingCharge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Explosion_BreachingCharge_C::ExecuteUbergraph_BP_Explosion_BreachingCharge(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Explosion_BreachingCharge.BP_Explosion_BreachingCharge_C.ExecuteUbergraph_BP_Explosion_BreachingCharge");
		
		ABP_Explosion_BreachingCharge_C_ExecuteUbergraph_BP_Explosion_BreachingCharge_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Explosion_BreachingCharge_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Explosion_BreachingCharge_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Explosion_BreachingCharge.BP_Explosion_BreachingCharge_C");
		return ptr;
	}

}


