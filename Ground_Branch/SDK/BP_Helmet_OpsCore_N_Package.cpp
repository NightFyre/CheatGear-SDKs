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
	 * 		Name   -> Function BP_Helmet_OpsCore_N.BP_Helmet_OpsCore_N_C.OnAddingChild
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGBItem*                                     AddedChild                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Helmet_OpsCore_N_C::OnAddingChild(class AGBItem* AddedChild)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Helmet_OpsCore_N.BP_Helmet_OpsCore_N_C.OnAddingChild");
		
		ABP_Helmet_OpsCore_N_C_OnAddingChild_Params params {};
		params.AddedChild = AddedChild;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Helmet_OpsCore_N.BP_Helmet_OpsCore_N_C.ExecuteUbergraph_BP_Helmet_OpsCore_N
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Helmet_OpsCore_N_C::ExecuteUbergraph_BP_Helmet_OpsCore_N(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Helmet_OpsCore_N.BP_Helmet_OpsCore_N_C.ExecuteUbergraph_BP_Helmet_OpsCore_N");
		
		ABP_Helmet_OpsCore_N_C_ExecuteUbergraph_BP_Helmet_OpsCore_N_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Helmet_OpsCore_N_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Helmet_OpsCore_N_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Helmet_OpsCore_N.BP_Helmet_OpsCore_N_C");
		return ptr;
	}

}


