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
	 * 		Name   -> Function BP_PMAG556_Magazine.BP_PMAG556_Magazine_C.OnBeingEquipped
	 * 		Flags  -> ()
	 */
	void ABP_PMAG556_Magazine_C::OnBeingEquipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PMAG556_Magazine.BP_PMAG556_Magazine_C.OnBeingEquipped");
		
		ABP_PMAG556_Magazine_C_OnBeingEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PMAG556_Magazine.BP_PMAG556_Magazine_C.ExecuteUbergraph_BP_PMAG556_Magazine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PMAG556_Magazine_C::ExecuteUbergraph_BP_PMAG556_Magazine(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PMAG556_Magazine.BP_PMAG556_Magazine_C.ExecuteUbergraph_BP_PMAG556_Magazine");
		
		ABP_PMAG556_Magazine_C_ExecuteUbergraph_BP_PMAG556_Magazine_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_PMAG556_Magazine_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_PMAG556_Magazine_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PMAG556_Magazine.BP_PMAG556_Magazine_C");
		return ptr;
	}

}


