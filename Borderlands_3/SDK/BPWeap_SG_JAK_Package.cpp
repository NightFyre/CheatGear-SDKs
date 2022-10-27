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
	 * 		Name   -> Function BPWeap_SG_JAK.BPWeap_SG_JAK_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPWeap_SG_JAK_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_SG_JAK.BPWeap_SG_JAK_C.UserConstructionScript");
		
		ABPWeap_SG_JAK_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_SG_JAK.BPWeap_SG_JAK_C.Notify_ReloadEnded
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bCompleted                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPWeap_SG_JAK_C::Notify_ReloadEnded(bool bCompleted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_SG_JAK.BPWeap_SG_JAK_C.Notify_ReloadEnded");
		
		ABPWeap_SG_JAK_C_Notify_ReloadEnded_Params params {};
		params.bCompleted = bCompleted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_SG_JAK.BPWeap_SG_JAK_C.ResetVisibleAmmo
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPWeap_SG_JAK_C::ResetVisibleAmmo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_SG_JAK.BPWeap_SG_JAK_C.ResetVisibleAmmo");
		
		ABPWeap_SG_JAK_C_ResetVisibleAmmo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_SG_JAK.BPWeap_SG_JAK_C.ExecuteUbergraph_BPWeap_SG_JAK
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPWeap_SG_JAK_C::ExecuteUbergraph_BPWeap_SG_JAK(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_SG_JAK.BPWeap_SG_JAK_C.ExecuteUbergraph_BPWeap_SG_JAK");
		
		ABPWeap_SG_JAK_C_ExecuteUbergraph_BPWeap_SG_JAK_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABPWeap_SG_JAK_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPWeap_SG_JAK_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPWeap_SG_JAK.BPWeap_SG_JAK_C");
		return ptr;
	}

}


