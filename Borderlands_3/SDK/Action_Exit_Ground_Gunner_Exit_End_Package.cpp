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
	 * 		Name   -> Function Action_Exit_Ground_Gunner_Exit_End.Action_Exit_Ground_Gunner_Exit_End_C.OnBeginBringUpWeapon
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_Exit_Ground_Gunner_Exit_End_C::OnBeginBringUpWeapon(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Exit_Ground_Gunner_Exit_End.Action_Exit_Ground_Gunner_Exit_End_C.OnBeginBringUpWeapon");
		
		UAction_Exit_Ground_Gunner_Exit_End_C_OnBeginBringUpWeapon_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Exit_Ground_Gunner_Exit_End.Action_Exit_Ground_Gunner_Exit_End_C.ExecuteUbergraph_Action_Exit_Ground_Gunner_Exit_End
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_Exit_Ground_Gunner_Exit_End_C::ExecuteUbergraph_Action_Exit_Ground_Gunner_Exit_End(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Exit_Ground_Gunner_Exit_End.Action_Exit_Ground_Gunner_Exit_End_C.ExecuteUbergraph_Action_Exit_Ground_Gunner_Exit_End");
		
		UAction_Exit_Ground_Gunner_Exit_End_C_ExecuteUbergraph_Action_Exit_Ground_Gunner_Exit_End_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAction_Exit_Ground_Gunner_Exit_End_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAction_Exit_Ground_Gunner_Exit_End_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Action_Exit_Ground_Gunner_Exit_End.Action_Exit_Ground_Gunner_Exit_End_C");
		return ptr;
	}

}


