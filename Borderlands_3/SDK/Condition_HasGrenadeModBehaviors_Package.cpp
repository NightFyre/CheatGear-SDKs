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
	 * 		Name   -> Function Condition_HasGrenadeModBehaviors.Condition_HasGrenadeModBehaviors_C.EvaluateCondition
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class UObject*                                     Context                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     OptionalContext                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UCondition_HasGrenadeModBehaviors_C::EvaluateCondition(class UObject* Context, class UObject* OptionalContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Condition_HasGrenadeModBehaviors.Condition_HasGrenadeModBehaviors_C.EvaluateCondition");
		
		UCondition_HasGrenadeModBehaviors_C_EvaluateCondition_Params params {};
		params.Context = Context;
		params.OptionalContext = OptionalContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCondition_HasGrenadeModBehaviors_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCondition_HasGrenadeModBehaviors_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Condition_HasGrenadeModBehaviors.Condition_HasGrenadeModBehaviors_C");
		return ptr;
	}

}


