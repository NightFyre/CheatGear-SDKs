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
	 * 		Name   -> Function BP_Suppressor_Master.BP_Suppressor_Master_C.OnBeingUnequipped
	 * 		Flags  -> ()
	 */
	void ABP_Suppressor_Master_C::OnBeingUnequipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Suppressor_Master.BP_Suppressor_Master_C.OnBeingUnequipped");
		
		ABP_Suppressor_Master_C_OnBeingUnequipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Suppressor_Master.BP_Suppressor_Master_C.OnBeingEquipped
	 * 		Flags  -> ()
	 */
	void ABP_Suppressor_Master_C::OnBeingEquipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Suppressor_Master.BP_Suppressor_Master_C.OnBeingEquipped");
		
		ABP_Suppressor_Master_C_OnBeingEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Suppressor_Master.BP_Suppressor_Master_C.ExecuteUbergraph_BP_Suppressor_Master
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Suppressor_Master_C::ExecuteUbergraph_BP_Suppressor_Master(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Suppressor_Master.BP_Suppressor_Master_C.ExecuteUbergraph_BP_Suppressor_Master");
		
		ABP_Suppressor_Master_C_ExecuteUbergraph_BP_Suppressor_Master_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Suppressor_Master_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Suppressor_Master_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Suppressor_Master.BP_Suppressor_Master_C");
		return ptr;
	}

}


