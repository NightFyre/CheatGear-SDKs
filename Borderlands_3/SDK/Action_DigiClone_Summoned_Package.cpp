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
	 * 		Name   -> Function Action_DigiClone_Summoned.Action_DigiClone_Summoned_C.OnServerBegin
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_DigiClone_Summoned_C::OnServerBegin(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_DigiClone_Summoned.Action_DigiClone_Summoned_C.OnServerBegin");
		
		UAction_DigiClone_Summoned_C_OnServerBegin_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_DigiClone_Summoned.Action_DigiClone_Summoned_C.ExecuteUbergraph_Action_DigiClone_Summoned
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_DigiClone_Summoned_C::ExecuteUbergraph_Action_DigiClone_Summoned(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_DigiClone_Summoned.Action_DigiClone_Summoned_C.ExecuteUbergraph_Action_DigiClone_Summoned");
		
		UAction_DigiClone_Summoned_C_ExecuteUbergraph_Action_DigiClone_Summoned_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAction_DigiClone_Summoned_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAction_DigiClone_Summoned_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Action_DigiClone_Summoned.Action_DigiClone_Summoned_C");
		return ptr;
	}

}


