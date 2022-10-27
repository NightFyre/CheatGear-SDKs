/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * 		Name   -> Function BP_SphereMotionTriggerComponent.BP_SphereMotionTriggerComponent_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void UBP_SphereMotionTriggerComponent_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SphereMotionTriggerComponent.BP_SphereMotionTriggerComponent_C.ReceiveBeginPlay");
		
		UBP_SphereMotionTriggerComponent_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SphereMotionTriggerComponent.BP_SphereMotionTriggerComponent_C.ExecuteUbergraph_BP_SphereMotionTriggerComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SphereMotionTriggerComponent_C::ExecuteUbergraph_BP_SphereMotionTriggerComponent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SphereMotionTriggerComponent.BP_SphereMotionTriggerComponent_C.ExecuteUbergraph_BP_SphereMotionTriggerComponent");
		
		UBP_SphereMotionTriggerComponent_C_ExecuteUbergraph_BP_SphereMotionTriggerComponent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_SphereMotionTriggerComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_SphereMotionTriggerComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_SphereMotionTriggerComponent.BP_SphereMotionTriggerComponent_C");
		return ptr;
	}

}


