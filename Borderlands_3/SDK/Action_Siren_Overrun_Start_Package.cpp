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
	 * 		Name   -> Function Action_Siren_Overrun_Start.Action_Siren_Overrun_Start_C.OnServerBegin
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_Siren_Overrun_Start_C::OnServerBegin(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Siren_Overrun_Start.Action_Siren_Overrun_Start_C.OnServerBegin");
		
		UAction_Siren_Overrun_Start_C_OnServerBegin_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Siren_Overrun_Start.Action_Siren_Overrun_Start_C.AN_PerformBlitzFeedback_Start
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_Siren_Overrun_Start_C::AN_PerformBlitzFeedback_Start()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Siren_Overrun_Start.Action_Siren_Overrun_Start_C.AN_PerformBlitzFeedback_Start");
		
		UAction_Siren_Overrun_Start_C_AN_PerformBlitzFeedback_Start_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Siren_Overrun_Start.Action_Siren_Overrun_Start_C.ExecuteUbergraph_Action_Siren_Overrun_Start
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_Siren_Overrun_Start_C::ExecuteUbergraph_Action_Siren_Overrun_Start(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Siren_Overrun_Start.Action_Siren_Overrun_Start_C.ExecuteUbergraph_Action_Siren_Overrun_Start");
		
		UAction_Siren_Overrun_Start_C_ExecuteUbergraph_Action_Siren_Overrun_Start_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAction_Siren_Overrun_Start_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAction_Siren_Overrun_Start_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Action_Siren_Overrun_Start.Action_Siren_Overrun_Start_C");
		return ptr;
	}

}


