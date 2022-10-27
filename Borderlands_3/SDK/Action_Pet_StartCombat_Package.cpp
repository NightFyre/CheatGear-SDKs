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
	 * 		Name   -> Function Action_Pet_StartCombat.Action_Pet_StartCombat_C.Notify_Dialog
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_Pet_StartCombat_C::Notify_Dialog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Pet_StartCombat.Action_Pet_StartCombat_C.Notify_Dialog");
		
		UAction_Pet_StartCombat_C_Notify_Dialog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Pet_StartCombat.Action_Pet_StartCombat_C.ExecuteUbergraph_Action_Pet_StartCombat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_Pet_StartCombat_C::ExecuteUbergraph_Action_Pet_StartCombat(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Pet_StartCombat.Action_Pet_StartCombat_C.ExecuteUbergraph_Action_Pet_StartCombat");
		
		UAction_Pet_StartCombat_C_ExecuteUbergraph_Action_Pet_StartCombat_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAction_Pet_StartCombat_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAction_Pet_StartCombat_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Action_Pet_StartCombat.Action_Pet_StartCombat_C");
		return ptr;
	}

}


