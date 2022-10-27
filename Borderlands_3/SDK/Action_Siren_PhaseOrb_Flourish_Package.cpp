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
	 * 		Name   -> Function Action_Siren_PhaseOrb_Flourish.Action_Siren_PhaseOrb_Flourish_C.OnEnd
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EGbxActionEndState                                 ActionEndState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_Siren_PhaseOrb_Flourish_C::OnEnd(EGbxActionEndState ActionEndState, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Siren_PhaseOrb_Flourish.Action_Siren_PhaseOrb_Flourish_C.OnEnd");
		
		UAction_Siren_PhaseOrb_Flourish_C_OnEnd_Params params {};
		params.ActionEndState = ActionEndState;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Siren_PhaseOrb_Flourish.Action_Siren_PhaseOrb_Flourish_C.ExecuteUbergraph_Action_Siren_PhaseOrb_Flourish
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_Siren_PhaseOrb_Flourish_C::ExecuteUbergraph_Action_Siren_PhaseOrb_Flourish(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Siren_PhaseOrb_Flourish.Action_Siren_PhaseOrb_Flourish_C.ExecuteUbergraph_Action_Siren_PhaseOrb_Flourish");
		
		UAction_Siren_PhaseOrb_Flourish_C_ExecuteUbergraph_Action_Siren_PhaseOrb_Flourish_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAction_Siren_PhaseOrb_Flourish_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAction_Siren_PhaseOrb_Flourish_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Action_Siren_PhaseOrb_Flourish.Action_Siren_PhaseOrb_Flourish_C");
		return ptr;
	}

}


