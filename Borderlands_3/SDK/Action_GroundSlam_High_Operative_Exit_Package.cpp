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
	 * 		Name   -> Function Action_GroundSlam_High_Operative_Exit.Action_GroundSlam_High_Operative_Exit_C.OnBeginBringUpWeapon
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_GroundSlam_High_Operative_Exit_C::OnBeginBringUpWeapon(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_GroundSlam_High_Operative_Exit.Action_GroundSlam_High_Operative_Exit_C.OnBeginBringUpWeapon");
		
		UAction_GroundSlam_High_Operative_Exit_C_OnBeginBringUpWeapon_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_GroundSlam_High_Operative_Exit.Action_GroundSlam_High_Operative_Exit_C.OnEnd
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EGbxActionEndState                                 ActionEndState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_GroundSlam_High_Operative_Exit_C::OnEnd(EGbxActionEndState ActionEndState, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_GroundSlam_High_Operative_Exit.Action_GroundSlam_High_Operative_Exit_C.OnEnd");
		
		UAction_GroundSlam_High_Operative_Exit_C_OnEnd_Params params {};
		params.ActionEndState = ActionEndState;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_GroundSlam_High_Operative_Exit.Action_GroundSlam_High_Operative_Exit_C.PlayVFX
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_GroundSlam_High_Operative_Exit_C::PlayVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_GroundSlam_High_Operative_Exit.Action_GroundSlam_High_Operative_Exit_C.PlayVFX");
		
		UAction_GroundSlam_High_Operative_Exit_C_PlayVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_GroundSlam_High_Operative_Exit.Action_GroundSlam_High_Operative_Exit_C.OnBegin
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_GroundSlam_High_Operative_Exit_C::OnBegin(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_GroundSlam_High_Operative_Exit.Action_GroundSlam_High_Operative_Exit_C.OnBegin");
		
		UAction_GroundSlam_High_Operative_Exit_C_OnBegin_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_GroundSlam_High_Operative_Exit.Action_GroundSlam_High_Operative_Exit_C.ExecuteUbergraph_Action_GroundSlam_High_Operative_Exit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_GroundSlam_High_Operative_Exit_C::ExecuteUbergraph_Action_GroundSlam_High_Operative_Exit(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_GroundSlam_High_Operative_Exit.Action_GroundSlam_High_Operative_Exit_C.ExecuteUbergraph_Action_GroundSlam_High_Operative_Exit");
		
		UAction_GroundSlam_High_Operative_Exit_C_ExecuteUbergraph_Action_GroundSlam_High_Operative_Exit_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAction_GroundSlam_High_Operative_Exit_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAction_GroundSlam_High_Operative_Exit_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Action_GroundSlam_High_Operative_Exit.Action_GroundSlam_High_Operative_Exit_C");
		return ptr;
	}

}


