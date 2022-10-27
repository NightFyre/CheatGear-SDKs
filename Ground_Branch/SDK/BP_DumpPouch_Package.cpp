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
	 * 		Name   -> Function BP_DumpPouch.BP_DumpPouch_C.CanAddChild
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGBItem*                                     PotentialChild                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ABP_DumpPouch_C::CanAddChild(class AGBItem* PotentialChild)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DumpPouch.BP_DumpPouch_C.CanAddChild");
		
		ABP_DumpPouch_C_CanAddChild_Params params {};
		params.PotentialChild = PotentialChild;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DumpPouch.BP_DumpPouch_C.OnAddedToInventoryEvent
	 * 		Flags  -> ()
	 */
	void ABP_DumpPouch_C::OnAddedToInventoryEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DumpPouch.BP_DumpPouch_C.OnAddedToInventoryEvent");
		
		ABP_DumpPouch_C_OnAddedToInventoryEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DumpPouch.BP_DumpPouch_C.ExecuteUbergraph_BP_DumpPouch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DumpPouch_C::ExecuteUbergraph_BP_DumpPouch(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DumpPouch.BP_DumpPouch_C.ExecuteUbergraph_BP_DumpPouch");
		
		ABP_DumpPouch_C_ExecuteUbergraph_BP_DumpPouch_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_DumpPouch_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_DumpPouch_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_DumpPouch.BP_DumpPouch_C");
		return ptr;
	}

}


