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
	 * 		Name   -> Function BP_Explosion_Smoke_Master.BP_Explosion_Smoke_Master_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_Explosion_Smoke_Master_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Explosion_Smoke_Master.BP_Explosion_Smoke_Master_C.Timeline_0__FinishedFunc");
		
		ABP_Explosion_Smoke_Master_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Explosion_Smoke_Master.BP_Explosion_Smoke_Master_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_Explosion_Smoke_Master_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Explosion_Smoke_Master.BP_Explosion_Smoke_Master_C.Timeline_0__UpdateFunc");
		
		ABP_Explosion_Smoke_Master_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Explosion_Smoke_Master.BP_Explosion_Smoke_Master_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Explosion_Smoke_Master_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Explosion_Smoke_Master.BP_Explosion_Smoke_Master_C.ReceiveBeginPlay");
		
		ABP_Explosion_Smoke_Master_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Explosion_Smoke_Master.BP_Explosion_Smoke_Master_C.ExecuteUbergraph_BP_Explosion_Smoke_Master
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Explosion_Smoke_Master_C::ExecuteUbergraph_BP_Explosion_Smoke_Master(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Explosion_Smoke_Master.BP_Explosion_Smoke_Master_C.ExecuteUbergraph_BP_Explosion_Smoke_Master");
		
		ABP_Explosion_Smoke_Master_C_ExecuteUbergraph_BP_Explosion_Smoke_Master_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Explosion_Smoke_Master_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Explosion_Smoke_Master_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Explosion_Smoke_Master.BP_Explosion_Smoke_Master_C");
		return ptr;
	}

}


