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
	 * 		Name   -> Function ANav_Pet_AttackCommand_Leap.ANav_Pet_AttackCommand_Leap_C.Notify_Landed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UANav_Pet_AttackCommand_Leap_C::Notify_Landed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANav_Pet_AttackCommand_Leap.ANav_Pet_AttackCommand_Leap_C.Notify_Landed");
		
		UANav_Pet_AttackCommand_Leap_C_Notify_Landed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ANav_Pet_AttackCommand_Leap.ANav_Pet_AttackCommand_Leap_C.OnBegin
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UANav_Pet_AttackCommand_Leap_C::OnBegin(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANav_Pet_AttackCommand_Leap.ANav_Pet_AttackCommand_Leap_C.OnBegin");
		
		UANav_Pet_AttackCommand_Leap_C_OnBegin_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ANav_Pet_AttackCommand_Leap.ANav_Pet_AttackCommand_Leap_C.ExecuteUbergraph_ANav_Pet_AttackCommand_Leap
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UANav_Pet_AttackCommand_Leap_C::ExecuteUbergraph_ANav_Pet_AttackCommand_Leap(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANav_Pet_AttackCommand_Leap.ANav_Pet_AttackCommand_Leap_C.ExecuteUbergraph_ANav_Pet_AttackCommand_Leap");
		
		UANav_Pet_AttackCommand_Leap_C_ExecuteUbergraph_ANav_Pet_AttackCommand_Leap_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UANav_Pet_AttackCommand_Leap_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UANav_Pet_AttackCommand_Leap_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ANav_Pet_AttackCommand_Leap.ANav_Pet_AttackCommand_Leap_C");
		return ptr;
	}

}


