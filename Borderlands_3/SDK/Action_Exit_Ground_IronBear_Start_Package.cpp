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
	 * 		Name   -> Function Action_Exit_Ground_IronBear_Start.Action_Exit_Ground_IronBear_Start_C.OnBegin
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_Exit_Ground_IronBear_Start_C::OnBegin(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Exit_Ground_IronBear_Start.Action_Exit_Ground_IronBear_Start_C.OnBegin");
		
		UAction_Exit_Ground_IronBear_Start_C_OnBegin_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Exit_Ground_IronBear_Start.Action_Exit_Ground_IronBear_Start_C.OnAnimEnd
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_Exit_Ground_IronBear_Start_C::OnAnimEnd(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Exit_Ground_IronBear_Start.Action_Exit_Ground_IronBear_Start_C.OnAnimEnd");
		
		UAction_Exit_Ground_IronBear_Start_C_OnAnimEnd_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Exit_Ground_IronBear_Start.Action_Exit_Ground_IronBear_Start_C.ExecuteUbergraph_Action_Exit_Ground_IronBear_Start
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_Exit_Ground_IronBear_Start_C::ExecuteUbergraph_Action_Exit_Ground_IronBear_Start(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Exit_Ground_IronBear_Start.Action_Exit_Ground_IronBear_Start_C.ExecuteUbergraph_Action_Exit_Ground_IronBear_Start");
		
		UAction_Exit_Ground_IronBear_Start_C_ExecuteUbergraph_Action_Exit_Ground_IronBear_Start_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAction_Exit_Ground_IronBear_Start_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAction_Exit_Ground_IronBear_Start_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Action_Exit_Ground_IronBear_Start.Action_Exit_Ground_IronBear_Start_C");
		return ptr;
	}

}


