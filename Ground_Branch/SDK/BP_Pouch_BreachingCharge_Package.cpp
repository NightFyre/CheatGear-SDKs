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
	 * 		Name   -> Function BP_Pouch_BreachingCharge.BP_Pouch_BreachingCharge_C.CanAddChild
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGBItem*                                     PotentialChild                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ABP_Pouch_BreachingCharge_C::CanAddChild(class AGBItem* PotentialChild)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Pouch_BreachingCharge.BP_Pouch_BreachingCharge_C.CanAddChild");
		
		ABP_Pouch_BreachingCharge_C_CanAddChild_Params params {};
		params.PotentialChild = PotentialChild;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Pouch_BreachingCharge.BP_Pouch_BreachingCharge_C.OnAddingChild
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGBItem*                                     AddedChild                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Pouch_BreachingCharge_C::OnAddingChild(class AGBItem* AddedChild)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Pouch_BreachingCharge.BP_Pouch_BreachingCharge_C.OnAddingChild");
		
		ABP_Pouch_BreachingCharge_C_OnAddingChild_Params params {};
		params.AddedChild = AddedChild;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Pouch_BreachingCharge.BP_Pouch_BreachingCharge_C.Refill
	 * 		Flags  -> ()
	 */
	void ABP_Pouch_BreachingCharge_C::Refill()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Pouch_BreachingCharge.BP_Pouch_BreachingCharge_C.Refill");
		
		ABP_Pouch_BreachingCharge_C_Refill_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Pouch_BreachingCharge.BP_Pouch_BreachingCharge_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Pouch_BreachingCharge_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Pouch_BreachingCharge.BP_Pouch_BreachingCharge_C.ReceiveBeginPlay");
		
		ABP_Pouch_BreachingCharge_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Pouch_BreachingCharge.BP_Pouch_BreachingCharge_C.ExecuteUbergraph_BP_Pouch_BreachingCharge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Pouch_BreachingCharge_C::ExecuteUbergraph_BP_Pouch_BreachingCharge(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Pouch_BreachingCharge.BP_Pouch_BreachingCharge_C.ExecuteUbergraph_BP_Pouch_BreachingCharge");
		
		ABP_Pouch_BreachingCharge_C_ExecuteUbergraph_BP_Pouch_BreachingCharge_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Pouch_BreachingCharge_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Pouch_BreachingCharge_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Pouch_BreachingCharge.BP_Pouch_BreachingCharge_C");
		return ptr;
	}

}


