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
	 * 		Name   -> Function BP_EchoLogPickup.BP_EchoLogPickup_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_EchoLogPickup_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EchoLogPickup.BP_EchoLogPickup_C.UserConstructionScript");
		
		ABP_EchoLogPickup_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_EchoLogPickup.BP_EchoLogPickup_C.OnPickedUpEvent
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      WasPickedUpBy                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_EchoLogPickup_C::OnPickedUpEvent(class AActor* WasPickedUpBy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EchoLogPickup.BP_EchoLogPickup_C.OnPickedUpEvent");
		
		ABP_EchoLogPickup_C_OnPickedUpEvent_Params params {};
		params.WasPickedUpBy = WasPickedUpBy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_EchoLogPickup.BP_EchoLogPickup_C.ExecuteUbergraph_BP_EchoLogPickup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_EchoLogPickup_C::ExecuteUbergraph_BP_EchoLogPickup(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EchoLogPickup.BP_EchoLogPickup_C.ExecuteUbergraph_BP_EchoLogPickup");
		
		ABP_EchoLogPickup_C_ExecuteUbergraph_BP_EchoLogPickup_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_EchoLogPickup_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_EchoLogPickup_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_EchoLogPickup.BP_EchoLogPickup_C");
		return ptr;
	}

}


