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
	 * 		Name   -> Function Action_IronCub_BearFist_Right.Action_IronCub_BearFist_Right_C.AN_Melee
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_IronCub_BearFist_Right_C::AN_Melee()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_IronCub_BearFist_Right.Action_IronCub_BearFist_Right_C.AN_Melee");
		
		UAction_IronCub_BearFist_Right_C_AN_Melee_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_IronCub_BearFist_Right.Action_IronCub_BearFist_Right_C.OnServerBegin
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_IronCub_BearFist_Right_C::OnServerBegin(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_IronCub_BearFist_Right.Action_IronCub_BearFist_Right_C.OnServerBegin");
		
		UAction_IronCub_BearFist_Right_C_OnServerBegin_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_IronCub_BearFist_Right.Action_IronCub_BearFist_Right_C.ExecuteUbergraph_Action_IronCub_BearFist_Right
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_IronCub_BearFist_Right_C::ExecuteUbergraph_Action_IronCub_BearFist_Right(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_IronCub_BearFist_Right.Action_IronCub_BearFist_Right_C.ExecuteUbergraph_Action_IronCub_BearFist_Right");
		
		UAction_IronCub_BearFist_Right_C_ExecuteUbergraph_Action_IronCub_BearFist_Right_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAction_IronCub_BearFist_Right_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAction_IronCub_BearFist_Right_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Action_IronCub_BearFist_Right.Action_IronCub_BearFist_Right_C");
		return ptr;
	}

}


