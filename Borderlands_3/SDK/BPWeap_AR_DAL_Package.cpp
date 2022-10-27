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
	 * 		Name   -> Function BPWeap_AR_DAL.BPWeap_AR_DAL_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPWeap_AR_DAL_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_AR_DAL.BPWeap_AR_DAL_C.UserConstructionScript");
		
		ABPWeap_AR_DAL_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_AR_DAL.BPWeap_AR_DAL_C.ShowChainFeed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPWeap_AR_DAL_C::ShowChainFeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_AR_DAL.BPWeap_AR_DAL_C.ShowChainFeed");
		
		ABPWeap_AR_DAL_C_ShowChainFeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_AR_DAL.BPWeap_AR_DAL_C.Notify_ReloadEnded
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bCompleted                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPWeap_AR_DAL_C::Notify_ReloadEnded(bool bCompleted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_AR_DAL.BPWeap_AR_DAL_C.Notify_ReloadEnded");
		
		ABPWeap_AR_DAL_C_Notify_ReloadEnded_Params params {};
		params.bCompleted = bCompleted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_AR_DAL.BPWeap_AR_DAL_C.HideChain
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPWeap_AR_DAL_C::HideChain()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_AR_DAL.BPWeap_AR_DAL_C.HideChain");
		
		ABPWeap_AR_DAL_C_HideChain_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_AR_DAL.BPWeap_AR_DAL_C.ExecuteUbergraph_BPWeap_AR_DAL
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPWeap_AR_DAL_C::ExecuteUbergraph_BPWeap_AR_DAL(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_AR_DAL.BPWeap_AR_DAL_C.ExecuteUbergraph_BPWeap_AR_DAL");
		
		ABPWeap_AR_DAL_C_ExecuteUbergraph_BPWeap_AR_DAL_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABPWeap_AR_DAL_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPWeap_AR_DAL_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPWeap_AR_DAL.BPWeap_AR_DAL_C");
		return ptr;
	}

}


