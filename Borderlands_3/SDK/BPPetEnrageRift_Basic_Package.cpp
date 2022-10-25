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
	 * 		Name   -> Function BPPetEnrageRift_Basic.BPPetEnrageRift_Basic_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPPetEnrageRift_Basic_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPPetEnrageRift_Basic.BPPetEnrageRift_Basic_C.UserConstructionScript");
		
		ABPPetEnrageRift_Basic_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPPetEnrageRift_Basic.BPPetEnrageRift_Basic_C.NotifyPetTeleported
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPPetEnrageRift_Basic_C::NotifyPetTeleported()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPPetEnrageRift_Basic.BPPetEnrageRift_Basic_C.NotifyPetTeleported");
		
		ABPPetEnrageRift_Basic_C_NotifyPetTeleported_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPPetEnrageRift_Basic.BPPetEnrageRift_Basic_C.OnPetSummonStarted
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABPPetEnrageRift_Basic_C::OnPetSummonStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPPetEnrageRift_Basic.BPPetEnrageRift_Basic_C.OnPetSummonStarted");
		
		ABPPetEnrageRift_Basic_C_OnPetSummonStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPPetEnrageRift_Basic.BPPetEnrageRift_Basic_C.ExecuteUbergraph_BPPetEnrageRift_Basic
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPPetEnrageRift_Basic_C::ExecuteUbergraph_BPPetEnrageRift_Basic(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPPetEnrageRift_Basic.BPPetEnrageRift_Basic_C.ExecuteUbergraph_BPPetEnrageRift_Basic");
		
		ABPPetEnrageRift_Basic_C_ExecuteUbergraph_BPPetEnrageRift_Basic_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABPPetEnrageRift_Basic_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPPetEnrageRift_Basic_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPPetEnrageRift_Basic.BPPetEnrageRift_Basic_C");
		return ptr;
	}

}


