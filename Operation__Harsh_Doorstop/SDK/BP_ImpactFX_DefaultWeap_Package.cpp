/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_ImpactFX_DefaultWeap.BP_ImpactFX_DefaultWeap_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ImpactFX_DefaultWeap_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ImpactFX_DefaultWeap.BP_ImpactFX_DefaultWeap_C.ReceiveTick");
		
		ABP_ImpactFX_DefaultWeap_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_ImpactFX_DefaultWeap.BP_ImpactFX_DefaultWeap_C.ExecuteUbergraph_BP_ImpactFX_DefaultWeap
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ImpactFX_DefaultWeap_C::ExecuteUbergraph_BP_ImpactFX_DefaultWeap(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ImpactFX_DefaultWeap.BP_ImpactFX_DefaultWeap_C.ExecuteUbergraph_BP_ImpactFX_DefaultWeap");
		
		ABP_ImpactFX_DefaultWeap_C_ExecuteUbergraph_BP_ImpactFX_DefaultWeap_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_ImpactFX_DefaultWeap_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ImpactFX_DefaultWeap_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ImpactFX_DefaultWeap.BP_ImpactFX_DefaultWeap_C");
		return ptr;
	}

}


