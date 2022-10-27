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
	 * 		Name   -> Function ANav_PetLoader_DropDown.ANav_PetLoader_DropDown_C.OnEnd
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EGbxActionEndState                                 ActionEndState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UANav_PetLoader_DropDown_C::OnEnd(EGbxActionEndState ActionEndState, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANav_PetLoader_DropDown.ANav_PetLoader_DropDown_C.OnEnd");
		
		UANav_PetLoader_DropDown_C_OnEnd_Params params {};
		params.ActionEndState = ActionEndState;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ANav_PetLoader_DropDown.ANav_PetLoader_DropDown_C.OnBegin
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UANav_PetLoader_DropDown_C::OnBegin(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANav_PetLoader_DropDown.ANav_PetLoader_DropDown_C.OnBegin");
		
		UANav_PetLoader_DropDown_C_OnBegin_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ANav_PetLoader_DropDown.ANav_PetLoader_DropDown_C.Loader_JumpEnd
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UANav_PetLoader_DropDown_C::Loader_JumpEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANav_PetLoader_DropDown.ANav_PetLoader_DropDown_C.Loader_JumpEnd");
		
		UANav_PetLoader_DropDown_C_Loader_JumpEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ANav_PetLoader_DropDown.ANav_PetLoader_DropDown_C.Loader_JumpStart
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UANav_PetLoader_DropDown_C::Loader_JumpStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANav_PetLoader_DropDown.ANav_PetLoader_DropDown_C.Loader_JumpStart");
		
		UANav_PetLoader_DropDown_C_Loader_JumpStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ANav_PetLoader_DropDown.ANav_PetLoader_DropDown_C.ExecuteUbergraph_ANav_PetLoader_DropDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UANav_PetLoader_DropDown_C::ExecuteUbergraph_ANav_PetLoader_DropDown(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANav_PetLoader_DropDown.ANav_PetLoader_DropDown_C.ExecuteUbergraph_ANav_PetLoader_DropDown");
		
		UANav_PetLoader_DropDown_C_ExecuteUbergraph_ANav_PetLoader_DropDown_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UANav_PetLoader_DropDown_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UANav_PetLoader_DropDown_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ANav_PetLoader_DropDown.ANav_PetLoader_DropDown_C");
		return ptr;
	}

}


