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
	 * 		Name   -> Function BP_Mk18_MOD1.BP_Mk18_MOD1_C.LockOnEmpty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bShouldLock                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Mk18_MOD1_C::LockOnEmpty(bool* bShouldLock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Mk18_MOD1.BP_Mk18_MOD1_C.LockOnEmpty");
		
		ABP_Mk18_MOD1_C_LockOnEmpty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bShouldLock != nullptr)
			*bShouldLock = params.bShouldLock;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Mk18_MOD1.BP_Mk18_MOD1_C.UpdateSafetyAlpha
	 * 		Flags  -> ()
	 */
	void ABP_Mk18_MOD1_C::UpdateSafetyAlpha()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Mk18_MOD1.BP_Mk18_MOD1_C.UpdateSafetyAlpha");
		
		ABP_Mk18_MOD1_C_UpdateSafetyAlpha_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Mk18_MOD1.BP_Mk18_MOD1_C.ExecuteUbergraph_BP_Mk18_MOD1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Mk18_MOD1_C::ExecuteUbergraph_BP_Mk18_MOD1(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Mk18_MOD1.BP_Mk18_MOD1_C.ExecuteUbergraph_BP_Mk18_MOD1");
		
		ABP_Mk18_MOD1_C_ExecuteUbergraph_BP_Mk18_MOD1_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Mk18_MOD1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Mk18_MOD1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Mk18_MOD1.BP_Mk18_MOD1_C");
		return ptr;
	}

}


