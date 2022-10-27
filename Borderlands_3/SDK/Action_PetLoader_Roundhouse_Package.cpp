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
	 * 		Name   -> Function Action_PetLoader_Roundhouse.Action_PetLoader_Roundhouse_C.AN_DealDamage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_PetLoader_Roundhouse_C::AN_DealDamage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_PetLoader_Roundhouse.Action_PetLoader_Roundhouse_C.AN_DealDamage");
		
		UAction_PetLoader_Roundhouse_C_AN_DealDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_PetLoader_Roundhouse.Action_PetLoader_Roundhouse_C.ExecuteUbergraph_Action_PetLoader_Roundhouse
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_PetLoader_Roundhouse_C::ExecuteUbergraph_Action_PetLoader_Roundhouse(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_PetLoader_Roundhouse.Action_PetLoader_Roundhouse_C.ExecuteUbergraph_Action_PetLoader_Roundhouse");
		
		UAction_PetLoader_Roundhouse_C_ExecuteUbergraph_Action_PetLoader_Roundhouse_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAction_PetLoader_Roundhouse_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAction_PetLoader_Roundhouse_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Action_PetLoader_Roundhouse.Action_PetLoader_Roundhouse_C");
		return ptr;
	}

}


