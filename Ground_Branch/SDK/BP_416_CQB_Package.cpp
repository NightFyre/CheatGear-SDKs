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
	 * 		Name   -> Function BP_416_CQB.BP_416_CQB_C.LockOnEmpty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bShouldLock                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_416_CQB_C::LockOnEmpty(bool* bShouldLock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_416_CQB.BP_416_CQB_C.LockOnEmpty");
		
		ABP_416_CQB_C_LockOnEmpty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bShouldLock != nullptr)
			*bShouldLock = params.bShouldLock;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_416_CQB_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_416_CQB_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_416_CQB.BP_416_CQB_C");
		return ptr;
	}

}


