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
	 * 		Name   -> Function Action_Pet_KilledEnemy.Action_Pet_KilledEnemy_C.Notify_Response
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_Pet_KilledEnemy_C::Notify_Response()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Pet_KilledEnemy.Action_Pet_KilledEnemy_C.Notify_Response");
		
		UAction_Pet_KilledEnemy_C_Notify_Response_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Pet_KilledEnemy.Action_Pet_KilledEnemy_C.ExecuteUbergraph_Action_Pet_KilledEnemy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_Pet_KilledEnemy_C::ExecuteUbergraph_Action_Pet_KilledEnemy(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Pet_KilledEnemy.Action_Pet_KilledEnemy_C.ExecuteUbergraph_Action_Pet_KilledEnemy");
		
		UAction_Pet_KilledEnemy_C_ExecuteUbergraph_Action_Pet_KilledEnemy_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAction_Pet_KilledEnemy_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAction_Pet_KilledEnemy_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Action_Pet_KilledEnemy.Action_Pet_KilledEnemy_C");
		return ptr;
	}

}


