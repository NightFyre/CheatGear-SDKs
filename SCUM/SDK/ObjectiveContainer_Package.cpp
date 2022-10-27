/**
 * Name: SCUM
 * Version: 0.7.162
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ObjectiveContainer.ObjectiveContainer_C.Construct
	 * 		Flags  -> ()
	 */
	void UObjectiveContainer_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectiveContainer.ObjectiveContainer_C.Construct");
		
		UObjectiveContainer_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ObjectiveContainer.ObjectiveContainer_C.ExecuteUbergraph_ObjectiveContainer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UObjectiveContainer_C::ExecuteUbergraph_ObjectiveContainer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectiveContainer.ObjectiveContainer_C.ExecuteUbergraph_ObjectiveContainer");
		
		UObjectiveContainer_C_ExecuteUbergraph_ObjectiveContainer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ObjectiveContainer.ObjectiveContainer_C.ObjectiveCompleted__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UObjectiveContainer_C::ObjectiveCompleted__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectiveContainer.ObjectiveContainer_C.ObjectiveCompleted__DelegateSignature");
		
		UObjectiveContainer_C_ObjectiveCompleted__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UObjectiveContainer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UObjectiveContainer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ObjectiveContainer.ObjectiveContainer_C");
		return ptr;
	}

}


